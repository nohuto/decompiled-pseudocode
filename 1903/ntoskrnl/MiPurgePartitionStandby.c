/*
 * XREFs of MiPurgePartitionStandby @ 0x14016160C
 * Callers:
 *     MiFinishResume @ 0x1401610F0 (MiFinishResume.c)
 *     MiTrimAllSystemPagableMemory @ 0x1402C8FF0 (MiTrimAllSystemPagableMemory.c)
 *     MmPerformMemoryListCommand @ 0x14059E438 (MmPerformMemoryListCommand.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14002AEF0 (MiInsertPageInFreeOrZeroedList.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiIsFreeZeroPfnCold @ 0x1400A185C (MiIsFreeZeroPfnCold.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140161710 (MiRemoveLowestPriorityStandbyPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiPurgePartitionStandby(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v7; // rax
  ULONG_PTR v8; // rsi
  __int64 v9; // rbx
  int v10; // eax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v13; // rcx
  int v14; // [rsp+50h] [rbp+18h] BYREF

  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v7 = MiRemoveLowestPriorityStandbyPage(a1, a2, 0x2000LL, a4);
    v8 = v7;
    if ( v7 == -1 )
      break;
    v9 = 48 * v7 - 0x58000000000LL;
    v14 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v14);
      while ( *(__int64 *)(v9 + 24) < 0 );
    }
    *(_QWORD *)(v9 + 24) |= 0x4000000000000000uLL;
    LOBYTE(v10) = MiIsFreeZeroPfnCold(v9);
    MiInsertPageInFreeOrZeroedList(v8, v10 != 0 ? 1026 : 2);
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(CurrentIrql);
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v13 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v13->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v13);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
