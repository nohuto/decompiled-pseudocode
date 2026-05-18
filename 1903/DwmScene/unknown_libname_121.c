/*
 * XREFs of unknown_libname_121 @ 0x18011D0F0
 * Callers:
 *     sub_18011D69C @ 0x18011D69C (sub_18011D69C.c)
 * Callees:
 *     unknown_libname_113 @ 0x18000F6D4 (unknown_libname_113.c)
 */

// Microsoft VisualC v14 64bit runtime
__int64 *__fastcall unknown_libname_121(__int64 a1, __int64 *a2)
{
  _BYTE *v3; // rdx

  v3 = *(_BYTE **)(a1 + 16);
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  unknown_libname_113(a2, v3);
  return a2;
}
