/*
 * XREFs of TraceLoggingProviderId @ 0x180105CF4
 * Callers:
 *     LookUpTableFlushComplete @ 0x180080A6C (LookUpTableFlushComplete.c)
 *     ComputeFlushPeriod @ 0x180105D5C (ComputeFlushPeriod.c)
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
