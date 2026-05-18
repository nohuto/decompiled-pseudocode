/*
 * XREFs of sub_180122EC0 @ 0x180122EC0
 * Callers:
 *     sub_18011EBC4 @ 0x18011EBC4 (sub_18011EBC4.c)
 *     sub_180120710 @ 0x180120710 (sub_180120710.c)
 *     sub_18012077C @ 0x18012077C (sub_18012077C.c)
 *     sub_18012201C @ 0x18012201C (sub_18012201C.c)
 *     sub_1801242EC @ 0x1801242EC (sub_1801242EC.c)
 *     sub_180124458 @ 0x180124458 (sub_180124458.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_180122EC0(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *result; // rax

  result = operator new(0xB0uLL);
  if ( !a2 )
  {
    a2 = result;
    a3 = result;
  }
  *result = a2;
  result[1] = a3;
  return result;
}
