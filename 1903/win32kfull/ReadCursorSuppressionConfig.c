/*
 * XREFs of ReadCursorSuppressionConfig @ 0x1C0140FAC
 * Callers:
 *     TransitionCursorSuppressionState @ 0x1C0081090 (TransitionCursorSuppressionState.c)
 * Callees:
 *     <none>
 */

__int64 ReadCursorSuppressionConfig()
{
  if ( gSessionId != gServiceSessionId && !gProtocolType )
    FastGetProfileDword(0LL, 49LL, L"EnableCursorSuppression");
  return 0LL;
}
