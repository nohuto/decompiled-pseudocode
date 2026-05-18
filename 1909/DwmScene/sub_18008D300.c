/*
 * XREFs of sub_18008D300 @ 0x18008D300
 * Callers:
 *     sub_1800884A8 @ 0x1800884A8 (sub_1800884A8.c)
 *     sub_180088528 @ 0x180088528 (sub_180088528.c)
 *     sub_1800A02C4 @ 0x1800A02C4 (sub_1800A02C4.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_18008D300(_QWORD *a1)
{
  _QWORD *result; // rax

  result = operator new(0x50uLL);
  *result = *a1;
  result[1] = *a1;
  result[2] = *a1;
  return result;
}
