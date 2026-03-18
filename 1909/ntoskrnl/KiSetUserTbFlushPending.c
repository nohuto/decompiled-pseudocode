/*
 * XREFs of KiSetUserTbFlushPending @ 0x1401C5850
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140031920 (PpmIdleExecuteTransition.c)
 *     KeFlushSingleTb @ 0x1400C5914 (KeFlushSingleTb.c)
 *     KiIpiProcessRequests @ 0x1401002D0 (KiIpiProcessRequests.c)
 *     KiFlushRangeWorker @ 0x140100700 (KiFlushRangeWorker.c)
 *     KiFlushCurrentTbWorker @ 0x140117590 (KiFlushCurrentTbWorker.c)
 *     KiFlushSingleTbWorker @ 0x14012F600 (KiFlushSingleTbWorker.c)
 *     KeFlushSingleCurrentTb @ 0x140166B0C (KeFlushSingleCurrentTb.c)
 *     KiFlushCurrentTbOnly @ 0x14017A908 (KiFlushCurrentTbOnly.c)
 *     KiFlushRangeTb @ 0x14017AA48 (KiFlushRangeTb.c)
 *     KiInitializeKernel @ 0x1405A1220 (KiInitializeKernel.c)
 *     KeWriteProtectPAT @ 0x1405AB8B0 (KeWriteProtectPAT.c)
 * Callees:
 *     <none>
 */

void KiSetUserTbFlushPending()
{
  __writegsdword(0x7018u, __readgsdword(0x7018u) | 1);
}
