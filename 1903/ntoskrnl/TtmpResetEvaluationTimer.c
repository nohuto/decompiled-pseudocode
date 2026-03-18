/*
 * XREFs of TtmpResetEvaluationTimer @ 0x1408BCD94
 * Callers:
 *     TtmpSetTerminalPendingCleanup @ 0x1408BCE8C (TtmpSetTerminalPendingCleanup.c)
 *     TtmpUpdateTerminalState @ 0x1408BD0A4 (TtmpUpdateTerminalState.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     KiSetTimerEx @ 0x1400B2A00 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1400B2CA0 (KeCancelTimer.c)
 */

char __fastcall TtmpResetEvaluationTimer(char *Object, __int64 a2)
{
  char result; // al

  if ( a2 )
  {
    ObfReferenceObject(Object);
    result = KiSetTimerEx((__int64)(Object + 88), -a2, 0, 0, (__int64)(Object + 152));
  }
  else
  {
    result = KeCancelTimer((PKTIMER)(Object + 88));
  }
  if ( result )
    return ObfDereferenceObject(Object);
  return result;
}
