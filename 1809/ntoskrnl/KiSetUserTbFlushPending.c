/*
 * XREFs of KiSetUserTbFlushPending @ 0x1401BD110
 * Callers:
 *     PpmIdleExecuteTransition @ 0x14005DC80 (PpmIdleExecuteTransition.c)
 *     KeFlushSingleTb @ 0x1400ECDD4 (KeFlushSingleTb.c)
 *     KiIpiProcessRequests @ 0x140103ED0 (KiIpiProcessRequests.c)
 *     KiFlushRangeWorker @ 0x140109AA0 (KiFlushRangeWorker.c)
 *     KiFlushCurrentTbWorker @ 0x140113A10 (KiFlushCurrentTbWorker.c)
 *     KiFlushSingleTbWorker @ 0x140128280 (KiFlushSingleTbWorker.c)
 *     KeFlushSingleCurrentTb @ 0x140156EB8 (KeFlushSingleCurrentTb.c)
 *     KiFlushRangeTb @ 0x140173D44 (KiFlushRangeTb.c)
 *     KiFlushCurrentTbOnly @ 0x140173E34 (KiFlushCurrentTbOnly.c)
 *     KiInitializeKernel @ 0x140571310 (KiInitializeKernel.c)
 *     KeWriteProtectPAT @ 0x14057B9B0 (KeWriteProtectPAT.c)
 * Callees:
 *     <none>
 */

void KiSetUserTbFlushPending()
{
  __writegsdword(0x7018u, __readgsdword(0x7018u) | 1);
}
