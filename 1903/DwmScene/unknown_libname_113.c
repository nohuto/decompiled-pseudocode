/*
 * XREFs of unknown_libname_113 @ 0x18000F6D4
 * Callers:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     ?message@_Generic_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x18002BF30 (-message@_Generic_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 *     sub_18007B430 @ 0x18007B430 (sub_18007B430.c)
 *     sub_18007B920 @ 0x18007B920 (sub_18007B920.c)
 *     sub_1800A73C8 @ 0x1800A73C8 (sub_1800A73C8.c)
 *     sub_1800C00D0 @ 0x1800C00D0 (sub_1800C00D0.c)
 *     sub_1800D0B10 @ 0x1800D0B10 (sub_1800D0B10.c)
 *     sub_1800E1698 @ 0x1800E1698 (sub_1800E1698.c)
 *     sub_1800EC680 @ 0x1800EC680 (sub_1800EC680.c)
 *     sub_18011CDF0 @ 0x18011CDF0 (sub_18011CDF0.c)
 *     unknown_libname_121 @ 0x18011D0F0 (unknown_libname_121.c)
 *     sub_18011D69C @ 0x18011D69C (sub_18011D69C.c)
 *     sub_18012E0C7 @ 0x18012E0C7 (sub_18012E0C7.c)
 * Callees:
 *     sub_18000E118 @ 0x18000E118 (sub_18000E118.c)
 *     memmove @ 0x180125A9C (memmove.c)
 */

// Microsoft VisualC v14 64bit runtime
__int64 *__fastcall unknown_libname_113(__int64 *a1, _BYTE *a2)
{
  __int64 *v2; // rbx
  size_t v3; // rdi
  void *v4; // rsi

  v2 = a1;
  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  if ( v3 > a1[3] )
    return sub_18000E118(a1, v3, 0LL, a2);
  v4 = a1;
  if ( (unsigned __int64)a1[3] >= 0x10 )
    v4 = (void *)*a1;
  a1[2] = v3;
  memmove(v4, a2, v3);
  *((_BYTE *)v4 + v3) = 0;
  return v2;
}
