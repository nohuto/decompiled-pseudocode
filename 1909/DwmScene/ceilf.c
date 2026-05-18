/*
 * XREFs of ceilf @ 0x1801272DE
 * Callers:
 *     sub_180069120 @ 0x180069120 (sub_180069120.c)
 *     sub_1800DD6EC @ 0x1800DD6EC (sub_1800DD6EC.c)
 *     sub_1800DD84C @ 0x1800DD84C (sub_1800DD84C.c)
 *     sub_180114670 @ 0x180114670 (sub_180114670.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl ceilf(float X)
{
  return __imp_ceilf(X);
}
