/*
 * XREFs of sub_1800D9ED8 @ 0x1800D9ED8
 * Callers:
 *     sub_1800D72AC @ 0x1800D72AC (sub_1800D72AC.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_1800D9ED8(_QWORD *a1)
{
  _QWORD *result; // rax

  result = operator new(0xF8uLL);
  *result = *a1;
  result[1] = *a1;
  result[2] = *a1;
  return result;
}
