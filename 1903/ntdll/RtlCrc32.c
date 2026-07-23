/*
 * XREFs of RtlCrc32 @ 0x180085190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

DWORD __cdecl RtlCrc32(const void *Buffer, size_t Size, DWORD InitialCrc)
{
  return sub_1800851B0(Buffer, Size, InitialCrc, &off_1801188D0);
}
