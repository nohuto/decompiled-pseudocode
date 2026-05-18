/*
 * XREFs of sub_18006DE4C @ 0x18006DE4C
 * Callers:
 *     sub_18006B340 @ 0x18006B340 (sub_18006B340.c)
 *     sub_18006F134 @ 0x18006F134 (sub_18006F134.c)
 *     sub_1800A02E4 @ 0x1800A02E4 (sub_1800A02E4.c)
 *     sub_1800A0338 @ 0x1800A0338 (sub_1800A0338.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_18006DE4C(_QWORD *a1)
{
  _QWORD *result; // rax

  result = operator new(0x40uLL);
  *result = *a1;
  result[1] = *a1;
  result[2] = *a1;
  return result;
}
