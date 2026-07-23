/*
 * XREFs of RtlCrc32 @ 0x14030E8C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpComputeCrcInternal @ 0x1401718D0 (RtlpComputeCrcInternal.c)
 */

DWORD __cdecl RtlCrc32(const void *Buffer, size_t Size, DWORD InitialCrc)
{
  return RtlpComputeCrcInternal((unsigned __int64)Buffer, Size, InitialCrc, (__int64)&Crc32Ctrl);
}
