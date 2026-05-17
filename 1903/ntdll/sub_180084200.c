/*
 * XREFs of sub_180084200 @ 0x180084200
 * Callers:
 *     RtlCopyMappedMemory @ 0x1800841E0 (RtlCopyMappedMemory.c)
 * Callees:
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     sub_1800F28A0 @ 0x1800F28A0 (sub_1800F28A0.c)
 */

__int64 __fastcall sub_180084200(__int64 a1, void *a2, const void *a3, size_t a4)
{
  memmove(a2, a3, a4);
  return 0LL;
}
