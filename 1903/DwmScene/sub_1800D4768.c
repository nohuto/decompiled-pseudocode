/*
 * XREFs of sub_1800D4768 @ 0x1800D4768
 * Callers:
 *     sub_1800D315C @ 0x1800D315C (sub_1800D315C.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_1800D4768(_QWORD *a1)
{
  _QWORD *result; // rax

  result = operator new(0x38uLL);
  *result = *a1;
  result[1] = *a1;
  result[2] = *a1;
  return result;
}
