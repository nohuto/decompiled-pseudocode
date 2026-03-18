/*
 * XREFs of DisableUserkTraceLogging @ 0x1C0113A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS DisableUserkTraceLogging()
{
  NTSTATUS result; // eax

  result = EtwUnregister(qword_1C031C620);
  qword_1C031C620 = 0LL;
  hProvider = 0;
  return result;
}
