/*
 * XREFs of TtmpSetTerminalPendingCleanup @ 0x14087F31C
 * Callers:
 *     TtmiCreateTerminal @ 0x14087E80C (TtmiCreateTerminal.c)
 *     TtmpCloseTerminalHandle @ 0x14087F060 (TtmpCloseTerminalHandle.c)
 * Callees:
 *     TtmpResetEvaluationTimer @ 0x14087F224 (TtmpResetEvaluationTimer.c)
 *     TtmiScheduleSessionWorker @ 0x140880220 (TtmiScheduleSessionWorker.c)
 */

char __fastcall TtmpSetTerminalPendingCleanup(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 36) |= 1u;
  TtmiScheduleSessionWorker(a1, 2LL);
  return TtmpResetEvaluationTimer((char *)a2, 0LL);
}
