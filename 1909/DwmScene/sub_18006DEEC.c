/*
 * XREFs of sub_18006DEEC @ 0x18006DEEC
 * Callers:
 *     sub_18006BCC8 @ 0x18006BCC8 (sub_18006BCC8.c)
 *     sub_180073BC4 @ 0x180073BC4 (sub_180073BC4.c)
 *     sub_1800A4440 @ 0x1800A4440 (sub_1800A4440.c)
 *     sub_1800A4C80 @ 0x1800A4C80 (sub_1800A4C80.c)
 *     sub_1800A641C @ 0x1800A641C (sub_1800A641C.c)
 *     sub_1800A7764 @ 0x1800A7764 (sub_1800A7764.c)
 *     sub_1800BCEE0 @ 0x1800BCEE0 (sub_1800BCEE0.c)
 *     sub_1800D45C8 @ 0x1800D45C8 (sub_1800D45C8.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

_QWORD *sub_18006DEEC()
{
  _QWORD *result; // rax

  result = operator new(0x40uLL);
  *result = result;
  result[1] = result;
  result[2] = result;
  *((_WORD *)result + 12) = 257;
  return result;
}
