/*
 * XREFs of KiSetUserTbFlushPending @ 0x1401C4CD0
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140031530 (PpmIdleExecuteTransition.c)
 *     KeFlushSingleTb @ 0x14009F7D4 (KeFlushSingleTb.c)
 *     KiIpiProcessRequests @ 0x1400FE140 (KiIpiProcessRequests.c)
 *     KiFlushRangeWorker @ 0x1400FE570 (KiFlushRangeWorker.c)
 *     KiFlushCurrentTbWorker @ 0x140115F00 (KiFlushCurrentTbWorker.c)
 *     KiFlushSingleTbWorker @ 0x14012ECB0 (KiFlushSingleTbWorker.c)
 *     KeFlushSingleCurrentTb @ 0x1401670BC (KeFlushSingleCurrentTb.c)
 *     KiFlushCurrentTbOnly @ 0x14017A218 (KiFlushCurrentTbOnly.c)
 *     KiFlushRangeTb @ 0x14017A358 (KiFlushRangeTb.c)
 *     KiInitializeKernel @ 0x1405A1240 (KiInitializeKernel.c)
 *     KeWriteProtectPAT @ 0x1405AB8D0 (KeWriteProtectPAT.c)
 * Callees:
 *     <none>
 */

void KiSetUserTbFlushPending()
{
  __writegsdword(0x7018u, __readgsdword(0x7018u) | 1);
}
