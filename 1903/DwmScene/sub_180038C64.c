/*
 * XREFs of sub_180038C64 @ 0x180038C64
 * Callers:
 *     sub_180032454 @ 0x180032454 (sub_180032454.c)
 *     sub_18006F200 @ 0x18006F200 (sub_18006F200.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_180038C64(_QWORD *a1)
{
  _QWORD *result; // rax

  result = operator new(0x38uLL);
  *result = *a1;
  result[1] = *a1;
  result[2] = *a1;
  return result;
}
