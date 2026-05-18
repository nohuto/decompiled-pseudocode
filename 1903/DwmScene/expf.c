/*
 * XREFs of expf @ 0x1801271E6
 * Callers:
 *     sub_18008E5F0 @ 0x18008E5F0 (sub_18008E5F0.c)
 *     sub_180113580 @ 0x180113580 (sub_180113580.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl expf(float X)
{
  return __imp_expf(X);
}
