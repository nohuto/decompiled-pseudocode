/*
 * XREFs of DisableUserkTraceLogging @ 0x1C013E810
 * Callers:
 *     <none>
 * Callees:
 *     TlgUnregisterAggregateProvider @ 0x1C036B6C8 (TlgUnregisterAggregateProvider.c)
 */

NTSTATUS DisableUserkTraceLogging()
{
  NTSTATUS result; // eax

  EtwUnregister(qword_1C0321408);
  qword_1C0321408 = 0LL;
  hProvider = 0;
  TlgUnregisterAggregateProvider();
  result = EtwUnregister(qword_1C03222E0);
  qword_1C03222E0 = 0LL;
  dword_1C03222C0 = 0;
  return result;
}
