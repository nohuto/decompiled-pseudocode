/*
 * XREFs of sub_180041C80 @ 0x180041C80
 * Callers:
 *     sub_18003EDC0 @ 0x18003EDC0 (sub_18003EDC0.c)
 *     sub_1800646C8 @ 0x1800646C8 (sub_1800646C8.c)
 *     sub_180073AB4 @ 0x180073AB4 (sub_180073AB4.c)
 *     sub_180089030 @ 0x180089030 (sub_180089030.c)
 *     sub_18008912C @ 0x18008912C (sub_18008912C.c)
 *     sub_180095108 @ 0x180095108 (sub_180095108.c)
 *     sub_18009D118 @ 0x18009D118 (sub_18009D118.c)
 *     sub_18009EF0C @ 0x18009EF0C (sub_18009EF0C.c)
 *     sub_1800A26DC @ 0x1800A26DC (sub_1800A26DC.c)
 *     sub_1800A63AC @ 0x1800A63AC (sub_1800A63AC.c)
 *     sub_1800ABA10 @ 0x1800ABA10 (sub_1800ABA10.c)
 *     sub_1800BD120 @ 0x1800BD120 (sub_1800BD120.c)
 *     sub_1800CBE88 @ 0x1800CBE88 (sub_1800CBE88.c)
 *     sub_1800CDA78 @ 0x1800CDA78 (sub_1800CDA78.c)
 *     sub_1800CF9D8 @ 0x1800CF9D8 (sub_1800CF9D8.c)
 *     sub_1800D155C @ 0x1800D155C (sub_1800D155C.c)
 *     sub_1800D2220 @ 0x1800D2220 (sub_1800D2220.c)
 *     sub_1800D2EDC @ 0x1800D2EDC (sub_1800D2EDC.c)
 *     sub_1800F6EA8 @ 0x1800F6EA8 (sub_1800F6EA8.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *sub_180041C80()
{
  _QWORD *result; // rax

  result = operator new(0x38uLL);
  *result = result;
  result[1] = result;
  result[2] = result;
  *((_WORD *)result + 12) = 257;
  return result;
}
