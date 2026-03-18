/*
 * XREFs of PopStatsInitPowerRequestLibrary @ 0x1409DB758
 * Callers:
 *     PopPowerRequestInit @ 0x1409DB558 (PopPowerRequestInit.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x140006820 (RtlInitializeGenericTableAvl.c)
 *     memset @ 0x1401D1780 (memset.c)
 */

__int64 PopStatsInitPowerRequestLibrary()
{
  PowerReqestStatsLock = 0LL;
  qword_14040E6B8 = 0LL;
  memset(&ExecutionRequiredStopWatchCollection, 0, 0x38uLL);
  qword_14040E6C8 = (__int64)&ExecutionRequiredStopWatchCollection;
  ExecutionRequiredStopWatchCollection = (__int64)&ExecutionRequiredStopWatchCollection;
  RtlInitializeGenericTableAvl(
    &PowerRequestStatsDatabase,
    (PRTL_AVL_COMPARE_ROUTINE)PopAvlComparePowerRequestKeys,
    (PRTL_AVL_ALLOCATE_ROUTINE)PopAvlAllocatePowerRequestStats,
    (PRTL_AVL_FREE_ROUTINE)PopAvlFreePowerRequestStats,
    0LL);
  return 0LL;
}
