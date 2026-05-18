/*
 * XREFs of unknown_libname_113 @ 0x18000F724
 * Callers:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     ?message@_Generic_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x18002C040 (-message@_Generic_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 *     sub_18007B540 @ 0x18007B540 (sub_18007B540.c)
 *     sub_18007BA30 @ 0x18007BA30 (sub_18007BA30.c)
 *     sub_1800A74D8 @ 0x1800A74D8 (sub_1800A74D8.c)
 *     sub_1800C01E0 @ 0x1800C01E0 (sub_1800C01E0.c)
 *     sub_1800D0C20 @ 0x1800D0C20 (sub_1800D0C20.c)
 *     sub_1800E17A8 @ 0x1800E17A8 (sub_1800E17A8.c)
 *     sub_1800EC790 @ 0x1800EC790 (sub_1800EC790.c)
 *     sub_18011CF00 @ 0x18011CF00 (sub_18011CF00.c)
 *     unknown_libname_121 @ 0x18011D200 (unknown_libname_121.c)
 *     sub_18011D7AC @ 0x18011D7AC (sub_18011D7AC.c)
 *     sub_18012E1D7 @ 0x18012E1D7 (sub_18012E1D7.c)
 * Callees:
 *     sub_18000E168 @ 0x18000E168 (sub_18000E168.c)
 *     memmove @ 0x180125BAC (memmove.c)
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
    return sub_18000E168(a1, v3, 0LL, a2);
  v4 = a1;
  if ( (unsigned __int64)a1[3] >= 0x10 )
    v4 = (void *)*a1;
  a1[2] = v3;
  memmove(v4, a2, v3);
  *((_BYTE *)v4 + v3) = 0;
  return v2;
}
