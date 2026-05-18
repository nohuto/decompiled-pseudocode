/*
 * XREFs of sub_18008D16C @ 0x18008D16C
 * Callers:
 *     sub_180089030 @ 0x180089030 (sub_180089030.c)
 *     sub_18008912C @ 0x18008912C (sub_18008912C.c)
 *     sub_1800A26DC @ 0x1800A26DC (sub_1800A26DC.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *sub_18008D16C()
{
  _QWORD *result; // rax

  result = operator new(0x50uLL);
  *result = result;
  result[1] = result;
  result[2] = result;
  *((_WORD *)result + 12) = 257;
  return result;
}
