/*
 * XREFs of sub_180111ADC @ 0x180111ADC
 * Callers:
 *     sub_18010D580 @ 0x18010D580 (sub_18010D580.c)
 *     sub_18010D97C @ 0x18010D97C (sub_18010D97C.c)
 *     sub_180111E98 @ 0x180111E98 (sub_180111E98.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_180111ADC(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *result; // rax

  result = operator new(0x38uLL);
  if ( !a2 )
  {
    a2 = result;
    a3 = result;
  }
  *result = a2;
  result[1] = a3;
  return result;
}
