/*
 * XREFs of sub_18002B74C @ 0x18002B74C
 * Callers:
 *     sub_1800268D0 @ 0x1800268D0 (sub_1800268D0.c)
 *     sub_180065B14 @ 0x180065B14 (sub_180065B14.c)
 *     sub_18006F00C @ 0x18006F00C (sub_18006F00C.c)
 *     sub_18006F0D8 @ 0x18006F0D8 (sub_18006F0D8.c)
 *     sub_18006F198 @ 0x18006F198 (sub_18006F198.c)
 *     sub_1800A021C @ 0x1800A021C (sub_1800A021C.c)
 *     sub_1800A0280 @ 0x1800A0280 (sub_1800A0280.c)
 *     sub_1800A65A4 @ 0x1800A65A4 (sub_1800A65A4.c)
 *     sub_1800B2EC4 @ 0x1800B2EC4 (sub_1800B2EC4.c)
 *     sub_18011CAD0 @ 0x18011CAD0 (sub_18011CAD0.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_18002B74C(_QWORD *a1)
{
  _QWORD *result; // rax

  result = operator new(0x48uLL);
  *result = *a1;
  result[1] = *a1;
  result[2] = *a1;
  return result;
}
