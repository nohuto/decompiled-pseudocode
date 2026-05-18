/*
 * XREFs of sub_180064588 @ 0x180064588
 * Callers:
 *     sub_180063678 @ 0x180063678 (sub_180063678.c)
 *     sub_18008F2F8 @ 0x18008F2F8 (sub_18008F2F8.c)
 *     sub_1800D4908 @ 0x1800D4908 (sub_1800D4908.c)
 *     sub_1800F4484 @ 0x1800F4484 (sub_1800F4484.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_180064588(_QWORD *a1)
{
  _QWORD *result; // rax

  result = operator new(0x28uLL);
  *result = *a1;
  result[1] = *a1;
  result[2] = *a1;
  return result;
}
