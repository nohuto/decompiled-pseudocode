/*
 * XREFs of sqrtf @ 0x1801271FE
 * Callers:
 *     sub_1800C6AE0 @ 0x1800C6AE0 (sub_1800C6AE0.c)
 *     sub_1800FD554 @ 0x1800FD554 (sub_1800FD554.c)
 *     sub_180113580 @ 0x180113580 (sub_180113580.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl sqrtf(float X)
{
  return __imp_sqrtf(X);
}
