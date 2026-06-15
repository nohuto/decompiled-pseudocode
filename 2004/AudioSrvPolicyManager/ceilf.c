/*
 * XREFs of ceilf @ 0x18003ADF7
 * Callers:
 *     sub_18000E434 @ 0x18000E434 (sub_18000E434.c)
 *     sub_18002FA90 @ 0x18002FA90 (sub_18002FA90.c)
 *     sub_1800306E8 @ 0x1800306E8 (sub_1800306E8.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl ceilf(float X)
{
  return __imp_ceilf(X);
}
