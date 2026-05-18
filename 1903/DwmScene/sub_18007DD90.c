/*
 * XREFs of sub_18007DD90 @ 0x18007DD90
 * Callers:
 *     sub_18006F06C @ 0x18006F06C (sub_18006F06C.c)
 *     sub_18006F248 @ 0x18006F248 (sub_18006F248.c)
 *     sub_1800D30F0 @ 0x1800D30F0 (sub_1800D30F0.c)
 *     sub_1800D31C0 @ 0x1800D31C0 (sub_1800D31C0.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_18007DD90(_QWORD *a1)
{
  _QWORD *result; // rax

  result = operator new(0x60uLL);
  *result = *a1;
  result[1] = *a1;
  result[2] = *a1;
  return result;
}
