/*
 * XREFs of TraceLoggingProviderId @ 0x180124D04
 * Callers:
 *     LookUpTableFlushComplete @ 0x18008312C (LookUpTableFlushComplete.c)
 *     ComputeFlushPeriod @ 0x180124D6C (ComputeFlushPeriod.c)
 * Callees:
 *     <none>
 */

GUID *TraceLoggingProviderId(GUID *__return_ptr retstr, TraceLoggingHProvider hProvider)
{
  GUID *result; // rax

  result = retstr;
  *retstr = *(GUID *)(*((_QWORD *)hProvider + 1) - 16LL);
  return result;
}
