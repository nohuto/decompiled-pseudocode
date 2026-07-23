/*
 * XREFs of MiLockPageAndSetDirty @ 0x140086018
 * Callers:
 *     NtLockVirtualMemory @ 0x14001A570 (NtLockVirtualMemory.c)
 *     MiIssueHardFault @ 0x14001BCD0 (MiIssueHardFault.c)
 *     MiMakeCombineCandidateClean @ 0x140082B7C (MiMakeCombineCandidateClean.c)
 *     MiCopyToUserVa @ 0x140084400 (MiCopyToUserVa.c)
 *     MiValidFault @ 0x1400B6D30 (MiValidFault.c)
 *     MmSetPageProtection @ 0x140133650 (MmSetPageProtection.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiCaptureDirtyBitToPfn @ 0x140087900 (MiCaptureDirtyBitToPfn.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

int __fastcall MiLockPageAndSetDirty(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KEVENT *v3; // rsi
  unsigned __int8 v5; // di
  unsigned __int64 v6; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  if ( (_DWORD)a2 == 1 )
  {
    v9 = 0;
    v5 = 17;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v9, a2, a3);
      while ( *(__int64 *)(a1 + 24) < 0 );
    }
  }
  else
  {
    v5 = MiLockPageInline(a1);
  }
  v6 = MiCaptureDirtyBitToPfn(a1);
  if ( v6 )
    v3 = *(struct _KEVENT **)(qword_14043B808 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL));
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v6 )
    LODWORD(v6) = MiReleasePageFileInfo(v3, v6, 1);
  if ( v5 != 17 )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    LODWORD(v6) = v5;
    __writecr8(v5);
  }
  return v6;
}
