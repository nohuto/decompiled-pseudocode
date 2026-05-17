/*
 * XREFs of RtlpCopyMappedMemoryEx @ 0x1800848A0
 * Callers:
 *     RtlCopyMappedMemory @ 0x180084880 (RtlCopyMappedMemory.c)
 * Callees:
 *     memmove @ 0x1800A3A80 (memmove.c)
 *     RtlpCopyMappedMemoryEx_ExceptionFilter @ 0x1800F2980 (RtlpCopyMappedMemoryEx_ExceptionFilter.c)
 */

__int64 __fastcall RtlpCopyMappedMemoryEx(__int64 a1, void *a2, const void *a3, size_t a4)
{
  memmove(a2, a3, a4);
  return 0LL;
}
