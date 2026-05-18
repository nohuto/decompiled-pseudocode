/*
 * XREFs of cosf @ 0x1801272F0
 * Callers:
 *     sub_18008E700 @ 0x18008E700 (sub_18008E700.c)
 *     sub_1800FEEF0 @ 0x1800FEEF0 (sub_1800FEEF0.c)
 *     sub_180102A40 @ 0x180102A40 (sub_180102A40.c)
 *     sub_18010C798 @ 0x18010C798 (sub_18010C798.c)
 *     sub_180113660 @ 0x180113660 (sub_180113660.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl cosf(float X)
{
  return __imp_cosf(X);
}
