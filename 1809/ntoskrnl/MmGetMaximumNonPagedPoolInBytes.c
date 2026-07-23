/*
 * XREFs of MmGetMaximumNonPagedPoolInBytes @ 0x14013B914
 * Callers:
 *     EtwpGetSystemMaximumBufferCount @ 0x14065C074 (EtwpGetSystemMaximumBufferCount.c)
 *     ExEnableHandleTracing @ 0x1408CEF34 (ExEnableHandleTracing.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMaximumNonPagedPoolInBytes()
{
  return qword_14043C050 << 12;
}
