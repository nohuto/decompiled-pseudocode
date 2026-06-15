/*
 * XREFs of memmove @ 0x18003AE1B
 * Callers:
 *     sub_180009280 @ 0x180009280 (sub_180009280.c)
 *     sub_18000C9D0 @ 0x18000C9D0 (sub_18000C9D0.c)
 *     sub_18000CD64 @ 0x18000CD64 (sub_18000CD64.c)
 *     sub_18000CDD8 @ 0x18000CDD8 (sub_18000CDD8.c)
 *     sub_18000D4EC @ 0x18000D4EC (sub_18000D4EC.c)
 *     sub_18000D5F4 @ 0x18000D5F4 (sub_18000D5F4.c)
 *     sub_180017930 @ 0x180017930 (sub_180017930.c)
 *     sub_1800183C0 @ 0x1800183C0 (sub_1800183C0.c)
 *     sub_180018520 @ 0x180018520 (sub_180018520.c)
 *     sub_180025140 @ 0x180025140 (sub_180025140.c)
 *     sub_180025BB0 @ 0x180025BB0 (sub_180025BB0.c)
 *     sub_180032FAC @ 0x180032FAC (sub_180032FAC.c)
 *     sub_180033AA0 @ 0x180033AA0 (sub_180033AA0.c)
 *     sub_1800360E0 @ 0x1800360E0 (sub_1800360E0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  return __imp_memmove(a1, Src, Size);
}
