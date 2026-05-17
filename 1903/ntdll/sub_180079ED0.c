/*
 * XREFs of sub_180079ED0 @ 0x180079ED0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     sub_1800D5848 @ 0x1800D5848 (sub_1800D5848.c)
 */

__int64 __fastcall sub_180079ED0(__int64 a1, const void *a2, void *a3, size_t a4, size_t *a5)
{
  memmove(a3, a2, a4);
  *a5 = a4;
  return 0LL;
}
