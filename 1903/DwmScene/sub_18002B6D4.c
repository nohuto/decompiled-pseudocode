/*
 * XREFs of sub_18002B6D4 @ 0x18002B6D4
 * Callers:
 *     sub_180027858 @ 0x180027858 (sub_180027858.c)
 *     sub_1800681A4 @ 0x1800681A4 (sub_1800681A4.c)
 *     sub_180073794 @ 0x180073794 (sub_180073794.c)
 *     sub_180073AB4 @ 0x180073AB4 (sub_180073AB4.c)
 *     sub_18007B430 @ 0x18007B430 (sub_18007B430.c)
 *     sub_1800A26DC @ 0x1800A26DC (sub_1800A26DC.c)
 *     sub_1800A7654 @ 0x1800A7654 (sub_1800A7654.c)
 *     sub_1800B3698 @ 0x1800B3698 (sub_1800B3698.c)
 *     sub_18011CFF4 @ 0x18011CFF4 (sub_18011CFF4.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *sub_18002B6D4()
{
  _QWORD *result; // rax

  result = operator new(0x48uLL);
  *result = result;
  result[1] = result;
  result[2] = result;
  *((_WORD *)result + 12) = 257;
  return result;
}
