/*
 * XREFs of MmGetMaximumNonPagedPoolInBytes @ 0x140108D50
 * Callers:
 *     EtwpGetSystemMaximumBufferCount @ 0x1406B6928 (EtwpGetSystemMaximumBufferCount.c)
 *     ExEnableHandleTracing @ 0x14090B264 (ExEnableHandleTracing.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMaximumNonPagedPoolInBytes()
{
  return qword_1404669B0 << 12;
}
