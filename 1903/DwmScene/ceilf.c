/*
 * XREFs of ceilf @ 0x1801271CE
 * Callers:
 *     sub_180069010 @ 0x180069010 (sub_180069010.c)
 *     sub_1800DD5DC @ 0x1800DD5DC (sub_1800DD5DC.c)
 *     sub_1800DD73C @ 0x1800DD73C (sub_1800DD73C.c)
 *     sub_180114560 @ 0x180114560 (sub_180114560.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl ceilf(float X)
{
  return __imp_ceilf(X);
}
