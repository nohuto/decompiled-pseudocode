/*
 * XREFs of PopStatsInitPowerRequestLibrary @ 0x140A1E968
 * Callers:
 *     PopPowerRequestInit @ 0x140A1E760 (PopPowerRequestInit.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x1400025C0 (RtlInitializeGenericTableAvl.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 PopStatsInitPowerRequestLibrary()
{
  qword_140436FD8 = 0LL;
  PowerReqestStatsLock = 0LL;
  memset(&ExecutionRequiredStopWatchCollection, 0, 0x38uLL);
  qword_140436FE8 = (__int64)&ExecutionRequiredStopWatchCollection;
  ExecutionRequiredStopWatchCollection = (__int64)&ExecutionRequiredStopWatchCollection;
  RtlInitializeGenericTableAvl(
    &PowerRequestStatsDatabase,
    (PRTL_AVL_COMPARE_ROUTINE)PopAvlComparePowerRequestKeys,
    (PRTL_AVL_ALLOCATE_ROUTINE)PopAvlAllocatePowerRequestStats,
    (PRTL_AVL_FREE_ROUTINE)PopAvlFreePowerRequestStats,
    0LL);
  return 0LL;
}
