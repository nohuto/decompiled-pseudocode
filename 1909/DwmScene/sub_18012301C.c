/*
 * XREFs of sub_18012301C @ 0x18012301C
 * Callers:
 *     sub_1801208FC @ 0x1801208FC (sub_1801208FC.c)
 *     sub_1801209BC @ 0x1801209BC (sub_1801209BC.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_18012301C(_QWORD *a1)
{
  _QWORD *result; // rax

  result = operator new(0xC0uLL);
  *result = *a1;
  result[1] = *a1;
  result[2] = *a1;
  return result;
}
