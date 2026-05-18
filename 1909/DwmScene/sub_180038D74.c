/*
 * XREFs of sub_180038D74 @ 0x180038D74
 * Callers:
 *     sub_180032564 @ 0x180032564 (sub_180032564.c)
 *     sub_18006F310 @ 0x18006F310 (sub_18006F310.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_180038D74(_QWORD *a1)
{
  _QWORD *result; // rax

  result = operator new(0x38uLL);
  *result = *a1;
  result[1] = *a1;
  result[2] = *a1;
  return result;
}
