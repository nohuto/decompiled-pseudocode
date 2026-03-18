/*
 * XREFs of ReadCursorSuppressionConfig @ 0x1C011B78C
 * Callers:
 *     TransitionCursorSuppressionState @ 0x1C013ACC0 (TransitionCursorSuppressionState.c)
 * Callees:
 *     <none>
 */

__int64 ReadCursorSuppressionConfig()
{
  if ( gSessionId != gServiceSessionId && !gProtocolType )
    FastGetProfileDword(0LL, 49LL, L"EnableCursorSuppression");
  return 0LL;
}
