/*
 * XREFs of expf @ 0x1801272F6
 * Callers:
 *     sub_18008E700 @ 0x18008E700 (sub_18008E700.c)
 *     sub_180113690 @ 0x180113690 (sub_180113690.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl expf(float X)
{
  return __imp_expf(X);
}
