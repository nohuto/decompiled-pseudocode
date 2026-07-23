/*
 * XREFs of RtlCrc32 @ 0x1402EFF00
 * Callers:
 *     <none>
 * Callees:
 *     RtlpComputeCrcInternal @ 0x14015CA3C (RtlpComputeCrcInternal.c)
 */

DWORD __cdecl RtlCrc32(const void *Buffer, size_t Size, DWORD InitialCrc)
{
  return RtlpComputeCrcInternal((unsigned __int64)Buffer, Size, InitialCrc, &Crc32Ctrl);
}
