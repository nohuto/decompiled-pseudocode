/*
 * XREFs of sub_18002554C @ 0x18002554C
 * Callers:
 *     sub_180020104 @ 0x180020104 (sub_180020104.c)
 *     sub_180063E80 @ 0x180063E80 (sub_180063E80.c)
 *     sub_18008F7C8 @ 0x18008F7C8 (sub_18008F7C8.c)
 *     sub_1800D4D90 @ 0x1800D4D90 (sub_1800D4D90.c)
 *     sub_1800F4790 @ 0x1800F4790 (sub_1800F4790.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *sub_18002554C()
{
  _QWORD *result; // rax

  result = operator new(0x28uLL);
  *result = result;
  result[1] = result;
  result[2] = result;
  *((_WORD *)result + 12) = 257;
  return result;
}
