/*
 * XREFs of KiSetUserTbFlushPending @ 0x1401BD290
 * Callers:
 *     PpmIdleExecuteTransition @ 0x14005DC80 (PpmIdleExecuteTransition.c)
 *     KeFlushSingleTb @ 0x1400ECE74 (KeFlushSingleTb.c)
 *     KiIpiProcessRequests @ 0x140103F70 (KiIpiProcessRequests.c)
 *     KiFlushRangeWorker @ 0x140109B40 (KiFlushRangeWorker.c)
 *     KiFlushCurrentTbWorker @ 0x140113AA0 (KiFlushCurrentTbWorker.c)
 *     KiFlushSingleTbWorker @ 0x140128370 (KiFlushSingleTbWorker.c)
 *     KeFlushSingleCurrentTb @ 0x140156FD8 (KeFlushSingleCurrentTb.c)
 *     KiFlushRangeTb @ 0x140173E64 (KiFlushRangeTb.c)
 *     KiFlushCurrentTbOnly @ 0x140173F54 (KiFlushCurrentTbOnly.c)
 *     KiInitializeKernel @ 0x140572310 (KiInitializeKernel.c)
 *     KeWriteProtectPAT @ 0x14057C9B0 (KeWriteProtectPAT.c)
 * Callees:
 *     <none>
 */

void KiSetUserTbFlushPending()
{
  __writegsdword(0x7018u, __readgsdword(0x7018u) | 1);
}
