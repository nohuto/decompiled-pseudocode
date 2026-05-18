/*
 * XREFs of sub_18002B69C @ 0x18002B69C
 * Callers:
 *     sub_180027858 @ 0x180027858 (sub_180027858.c)
 *     sub_18003C848 @ 0x18003C848 (sub_18003C848.c)
 *     sub_180073AB4 @ 0x180073AB4 (sub_180073AB4.c)
 *     sub_1800A635C @ 0x1800A635C (sub_1800A635C.c)
 *     sub_1800A7654 @ 0x1800A7654 (sub_1800A7654.c)
 *     sub_1800D9448 @ 0x1800D9448 (sub_1800D9448.c)
 *     sub_1800E21E8 @ 0x1800E21E8 (sub_1800E21E8.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *sub_18002B69C()
{
  _QWORD *result; // rax

  result = operator new(0x30uLL);
  *result = result;
  result[1] = result;
  result[2] = result;
  *((_WORD *)result + 12) = 257;
  return result;
}
