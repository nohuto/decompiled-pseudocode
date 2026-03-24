/*
 * XREFs of MmGetMaximumNonPagedPoolInBytes @ 0x14013B814
 * Callers:
 *     EtwpGetSystemMaximumBufferCount @ 0x14065AEB4 (EtwpGetSystemMaximumBufferCount.c)
 *     ExEnableHandleTracing @ 0x1408CDC74 (ExEnableHandleTracing.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMaximumNonPagedPoolInBytes()
{
  return qword_14043AF90 << 12;
}
