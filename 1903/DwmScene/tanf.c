/*
 * XREFs of tanf @ 0x1801271F2
 * Callers:
 *     sub_18008E5F0 @ 0x18008E5F0 (sub_18008E5F0.c)
 *     sub_1800C6AE0 @ 0x1800C6AE0 (sub_1800C6AE0.c)
 *     sub_1800FD554 @ 0x1800FD554 (sub_1800FD554.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl tanf(float X)
{
  return __imp_tanf(X);
}
