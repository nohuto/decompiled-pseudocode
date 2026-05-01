/*
 * XREFs of TraceLoggingProviderId @ 0x1800E3650
 * Callers:
 *     ComputeFlushPeriod @ 0x1800E3738 (ComputeFlushPeriod.c)
 *     LookUpTableFlushComplete @ 0x1800E4018 (LookUpTableFlushComplete.c)
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
