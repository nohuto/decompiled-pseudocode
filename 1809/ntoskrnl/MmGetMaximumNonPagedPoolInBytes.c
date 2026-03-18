/*
 * XREFs of MmGetMaximumNonPagedPoolInBytes @ 0x14013B7F4
 * Callers:
 *     EtwpGetSystemMaximumBufferCount @ 0x14065AED4 (EtwpGetSystemMaximumBufferCount.c)
 *     ExEnableHandleTracing @ 0x1408CDC94 (ExEnableHandleTracing.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMaximumNonPagedPoolInBytes()
{
  return qword_14043AF90 << 12;
}
