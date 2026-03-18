/*
 * XREFs of TtmpSetTerminalPendingCleanup @ 0x1408BC75C
 * Callers:
 *     TtmiCreateTerminal @ 0x1408BBBFC (TtmiCreateTerminal.c)
 *     TtmpCloseTerminalHandle @ 0x1408BC4A0 (TtmpCloseTerminalHandle.c)
 * Callees:
 *     TtmpResetEvaluationTimer @ 0x1408BC664 (TtmpResetEvaluationTimer.c)
 *     TtmiScheduleSessionWorker @ 0x1408BD7AC (TtmiScheduleSessionWorker.c)
 */

char __fastcall TtmpSetTerminalPendingCleanup(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 36) |= 1u;
  TtmiScheduleSessionWorker(a1, 2LL);
  return TtmpResetEvaluationTimer((char *)a2, 0LL);
}
