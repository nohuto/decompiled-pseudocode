/*
 * XREFs of sub_18006DDDC @ 0x18006DDDC
 * Callers:
 *     sub_18006BBB8 @ 0x18006BBB8 (sub_18006BBB8.c)
 *     sub_180073AB4 @ 0x180073AB4 (sub_180073AB4.c)
 *     sub_1800A4330 @ 0x1800A4330 (sub_1800A4330.c)
 *     sub_1800A4B70 @ 0x1800A4B70 (sub_1800A4B70.c)
 *     sub_1800A630C @ 0x1800A630C (sub_1800A630C.c)
 *     sub_1800A7654 @ 0x1800A7654 (sub_1800A7654.c)
 *     sub_1800BCDD0 @ 0x1800BCDD0 (sub_1800BCDD0.c)
 *     sub_1800D44B8 @ 0x1800D44B8 (sub_1800D44B8.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *sub_18006DDDC()
{
  _QWORD *result; // rax

  result = operator new(0x40uLL);
  *result = result;
  result[1] = result;
  result[2] = result;
  *((_WORD *)result + 12) = 257;
  return result;
}
