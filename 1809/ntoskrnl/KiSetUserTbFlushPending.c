/*
 * XREFs of KiSetUserTbFlushPending @ 0x1401BD130
 * Callers:
 *     PpmIdleExecuteTransition @ 0x14005DC80 (PpmIdleExecuteTransition.c)
 *     KeFlushSingleTb @ 0x1400ECDF4 (KeFlushSingleTb.c)
 *     KiIpiProcessRequests @ 0x140103EF0 (KiIpiProcessRequests.c)
 *     KiFlushRangeWorker @ 0x140109AC0 (KiFlushRangeWorker.c)
 *     KiFlushCurrentTbWorker @ 0x140113A30 (KiFlushCurrentTbWorker.c)
 *     KiFlushSingleTbWorker @ 0x1401282A0 (KiFlushSingleTbWorker.c)
 *     KeFlushSingleCurrentTb @ 0x140156ED8 (KeFlushSingleCurrentTb.c)
 *     KiFlushRangeTb @ 0x140173D64 (KiFlushRangeTb.c)
 *     KiFlushCurrentTbOnly @ 0x140173E54 (KiFlushCurrentTbOnly.c)
 *     KiInitializeKernel @ 0x140571310 (KiInitializeKernel.c)
 *     KeWriteProtectPAT @ 0x14057B9B0 (KeWriteProtectPAT.c)
 * Callees:
 *     <none>
 */

void KiSetUserTbFlushPending()
{
  __writegsdword(0x7018u, __readgsdword(0x7018u) | 1);
}
