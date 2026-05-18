/*
 * XREFs of sub_1800CAE68 @ 0x1800CAE68
 * Callers:
 *     sub_1800BB644 @ 0x1800BB644 (sub_1800BB644.c)
 *     sub_1800BB694 @ 0x1800BB694 (sub_1800BB694.c)
 *     sub_1800BCE6C @ 0x1800BCE6C (sub_1800BCE6C.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_1800CAE68(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *result; // rax

  result = operator new(0x30uLL);
  if ( !a2 )
  {
    a2 = result;
    a3 = result;
  }
  *result = a2;
  result[1] = a3;
  return result;
}
