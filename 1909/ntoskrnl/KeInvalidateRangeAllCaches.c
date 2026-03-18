/*
 * XREFs of KeInvalidateRangeAllCaches @ 0x1402ABA60
 * Callers:
 *     KiFlushRangeAllCaches @ 0x1402AA680 (KiFlushRangeAllCaches.c)
 *     MiPersistMemory @ 0x1402CC564 (MiPersistMemory.c)
 * Callees:
 *     KeInvalidateRangeAllCachesNoIpi @ 0x140098990 (KeInvalidateRangeAllCachesNoIpi.c)
 *     KiIpiSendRequestEx @ 0x140098A58 (KiIpiSendRequestEx.c)
 *     KeInvalidateAllCaches @ 0x14013B4F0 (KeInvalidateAllCaches.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

void __stdcall KeInvalidateRangeAllCaches(PVOID BaseAddress, ULONG Length)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx

  if ( Length < KiLargestCacheSize )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    KiIpiSendRequestEx((__int64)KeGetCurrentPrcb(), 1, 0LL, 0, 7LL, 0LL, 0LL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(CurrentIrql);
    KeInvalidateRangeAllCachesNoIpi((__int64)BaseAddress, Length);
  }
  else
  {
    KeInvalidateAllCaches();
  }
}
