/*
 * XREFs of sub_18002B70C @ 0x18002B70C
 * Callers:
 *     sub_180026890 @ 0x180026890 (sub_180026890.c)
 *     sub_18003C2AC @ 0x18003C2AC (sub_18003C2AC.c)
 *     sub_18006F2AC @ 0x18006F2AC (sub_18006F2AC.c)
 *     sub_1800A654C @ 0x1800A654C (sub_1800A654C.c)
 *     sub_1800A6608 @ 0x1800A6608 (sub_1800A6608.c)
 *     sub_1800D7274 @ 0x1800D7274 (sub_1800D7274.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_18002B70C(_QWORD *a1)
{
  _QWORD *result; // rax

  result = operator new(0x30uLL);
  *result = *a1;
  result[1] = *a1;
  result[2] = *a1;
  return result;
}
