/*
 * XREFs of sub_18002B81C @ 0x18002B81C
 * Callers:
 *     sub_1800269A0 @ 0x1800269A0 (sub_1800269A0.c)
 *     sub_18003C3BC @ 0x18003C3BC (sub_18003C3BC.c)
 *     sub_18006F3BC @ 0x18006F3BC (sub_18006F3BC.c)
 *     sub_1800A665C @ 0x1800A665C (sub_1800A665C.c)
 *     sub_1800A6718 @ 0x1800A6718 (sub_1800A6718.c)
 *     sub_1800D7384 @ 0x1800D7384 (sub_1800D7384.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_18002B81C(_QWORD *a1)
{
  _QWORD *result; // rax

  result = operator new(0x30uLL);
  *result = *a1;
  result[1] = *a1;
  result[2] = *a1;
  return result;
}
