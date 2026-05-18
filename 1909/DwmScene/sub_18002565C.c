/*
 * XREFs of sub_18002565C @ 0x18002565C
 * Callers:
 *     sub_180020214 @ 0x180020214 (sub_180020214.c)
 *     sub_180063F90 @ 0x180063F90 (sub_180063F90.c)
 *     sub_18008F8D8 @ 0x18008F8D8 (sub_18008F8D8.c)
 *     sub_1800D4EA0 @ 0x1800D4EA0 (sub_1800D4EA0.c)
 *     sub_1800F48A0 @ 0x1800F48A0 (sub_1800F48A0.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

_QWORD *sub_18002565C()
{
  _QWORD *result; // rax

  result = operator new(0x28uLL);
  *result = result;
  result[1] = result;
  result[2] = result;
  *((_WORD *)result + 12) = 257;
  return result;
}
