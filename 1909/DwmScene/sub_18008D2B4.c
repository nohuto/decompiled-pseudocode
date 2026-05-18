/*
 * XREFs of sub_18008D2B4 @ 0x18008D2B4
 * Callers:
 *     sub_180088590 @ 0x180088590 (sub_180088590.c)
 *     sub_1800890CC @ 0x1800890CC (sub_1800890CC.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_18008D2B4(__int64 a1, _QWORD *a2, _QWORD *a3)
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
