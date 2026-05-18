/*
 * XREFs of sub_18008D1A4 @ 0x18008D1A4
 * Callers:
 *     sub_180088480 @ 0x180088480 (sub_180088480.c)
 *     sub_180088FBC @ 0x180088FBC (sub_180088FBC.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_18008D1A4(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *result; // rax

  result = operator new(0x28uLL);
  if ( !a2 )
  {
    a2 = result;
    a3 = result;
  }
  *result = a2;
  result[1] = a3;
  return result;
}
