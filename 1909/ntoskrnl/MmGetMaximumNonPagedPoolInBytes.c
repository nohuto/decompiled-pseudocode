/*
 * XREFs of MmGetMaximumNonPagedPoolInBytes @ 0x1400FD2CC
 * Callers:
 *     EtwpGetSystemMaximumBufferCount @ 0x1406AA128 (EtwpGetSystemMaximumBufferCount.c)
 *     ExEnableHandleTracing @ 0x14090ACC4 (ExEnableHandleTracing.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMaximumNonPagedPoolInBytes()
{
  return qword_1404666B0 << 12;
}
