/*
 * XREFs of DisableUserkTraceLogging @ 0x1C0118AF0
 * Callers:
 *     <none>
 * Callees:
 *     TlgUnregisterAggregateProvider @ 0x1C03686C8 (TlgUnregisterAggregateProvider.c)
 */

NTSTATUS DisableUserkTraceLogging()
{
  NTSTATUS result; // eax

  EtwUnregister(qword_1C031F408);
  qword_1C031F408 = 0LL;
  hProvider = 0;
  TlgUnregisterAggregateProvider();
  result = EtwUnregister(qword_1C03202E0);
  qword_1C03202E0 = 0LL;
  dword_1C03202C0 = 0;
  return result;
}
