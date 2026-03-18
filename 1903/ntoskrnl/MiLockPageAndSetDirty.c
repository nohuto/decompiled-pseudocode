/*
 * XREFs of MiLockPageAndSetDirty @ 0x14005D264
 * Callers:
 *     MiIssueHardFault @ 0x140007100 (MiIssueHardFault.c)
 *     MiCopyToUserVa @ 0x140020860 (MiCopyToUserVa.c)
 *     NtLockVirtualMemory @ 0x14008DF10 (NtLockVirtualMemory.c)
 *     MiValidFault @ 0x1400C7190 (MiValidFault.c)
 *     MmSetPageProtection @ 0x14012E5D0 (MmSetPageProtection.c)
 *     MiMakeCombineCandidateClean @ 0x14013E608 (MiMakeCombineCandidateClean.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiCaptureDirtyBitToPfn @ 0x14005C184 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x140088F50 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiLockPageAndSetDirty(__int64 a1, int a2)
{
  __int64 v2; // rsi
  unsigned __int8 v4; // di
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  if ( a2 == 1 )
  {
    v7 = 0;
    v4 = 17;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v7);
      while ( *(__int64 *)(a1 + 24) < 0 );
    }
  }
  else
  {
    v4 = MiLockPageInline(a1);
  }
  result = MiCaptureDirtyBitToPfn(a1);
  if ( result )
    v2 = *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL));
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( result )
    result = MiReleasePageFileInfo(v2, result, 1LL);
  if ( v4 != 17 )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    result = v4;
    __writecr8(v4);
  }
  return result;
}
