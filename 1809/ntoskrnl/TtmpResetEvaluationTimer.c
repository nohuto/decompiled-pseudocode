/*
 * XREFs of TtmpResetEvaluationTimer @ 0x140880484
 * Callers:
 *     TtmpSetTerminalPendingCleanup @ 0x14088057C (TtmpSetTerminalPendingCleanup.c)
 *     TtmpUpdateTerminalState @ 0x140880790 (TtmpUpdateTerminalState.c)
 * Callees:
 *     KeCancelTimer @ 0x14001CEB0 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x14001D380 (KiSetTimerEx.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 */

char __fastcall TtmpResetEvaluationTimer(char *Object, __int64 a2)
{
  __int64 v3; // rbx
  char result; // al

  if ( a2 )
  {
    v3 = -a2;
    ObfReferenceObject(Object);
    result = KiSetTimerEx((__int64)(Object + 88), v3, 0, 0, (__int64)(Object + 152));
  }
  else
  {
    result = KeCancelTimer((PKTIMER)(Object + 88));
  }
  if ( result )
    return ObfDereferenceObject(Object);
  return result;
}
