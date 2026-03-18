/*
 * XREFs of MiReleaseArbitraryPage @ 0x140140020
 * Callers:
 *     MiSharePages @ 0x14013EF30 (MiSharePages.c)
 *     MiCombinePte @ 0x1402E5F10 (MiCombinePte.c)
 *     MiCombineAllPhysicalMemory @ 0x1406F4120 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReleaseArbitraryPage(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v4; // rcx
  __int64 v5; // rdx
  _QWORD *v6; // r8
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v9 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v9);
    while ( *(__int64 *)(v1 + 24) < 0 );
  }
  v4 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( !MiPteInShadowRange(v4) )
    goto LABEL_4;
  if ( !(unsigned int)MiPteHasShadow() )
  {
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 && (v5 & 1) != 0 )
      v5 |= 0x8000000000000000uLL;
LABEL_4:
    *v6 = v5;
    goto LABEL_5;
  }
  if ( !HIBYTE(word_140465BEC) && (v5 & 1) != 0 )
    v5 |= 0x8000000000000000uLL;
  *v6 = v5;
  MiWritePteShadow((__int64)v6);
LABEL_5:
  *(_QWORD *)(a1 + 56) = 0LL;
  _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
