/*
 * XREFs of sub_180064698 @ 0x180064698
 * Callers:
 *     sub_180063788 @ 0x180063788 (sub_180063788.c)
 *     sub_18008F408 @ 0x18008F408 (sub_18008F408.c)
 *     sub_1800D4A18 @ 0x1800D4A18 (sub_1800D4A18.c)
 *     sub_1800F4594 @ 0x1800F4594 (sub_1800F4594.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_180064698(_QWORD *a1)
{
  _QWORD *result; // rax

  result = operator new(0x28uLL);
  *result = *a1;
  result[1] = *a1;
  result[2] = *a1;
  return result;
}
