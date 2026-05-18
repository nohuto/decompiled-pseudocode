/*
 * XREFs of cosf @ 0x1801271E0
 * Callers:
 *     sub_18008E5F0 @ 0x18008E5F0 (sub_18008E5F0.c)
 *     sub_1800FEDE0 @ 0x1800FEDE0 (sub_1800FEDE0.c)
 *     sub_180102930 @ 0x180102930 (sub_180102930.c)
 *     sub_18010C688 @ 0x18010C688 (sub_18010C688.c)
 *     sub_180113550 @ 0x180113550 (sub_180113550.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl cosf(float X)
{
  return __imp_cosf(X);
}
