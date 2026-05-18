/*
 * XREFs of sub_1800CAD58 @ 0x1800CAD58
 * Callers:
 *     sub_1800BB534 @ 0x1800BB534 (sub_1800BB534.c)
 *     sub_1800BB584 @ 0x1800BB584 (sub_1800BB584.c)
 *     sub_1800BCD5C @ 0x1800BCD5C (sub_1800BCD5C.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_1800CAD58(__int64 a1, _QWORD *a2, _QWORD *a3)
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
