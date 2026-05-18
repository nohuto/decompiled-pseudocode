/*
 * XREFs of sub_18006DF5C @ 0x18006DF5C
 * Callers:
 *     sub_18006B450 @ 0x18006B450 (sub_18006B450.c)
 *     sub_18006F244 @ 0x18006F244 (sub_18006F244.c)
 *     sub_1800A03F4 @ 0x1800A03F4 (sub_1800A03F4.c)
 *     sub_1800A0448 @ 0x1800A0448 (sub_1800A0448.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_18006DF5C(_QWORD *a1)
{
  _QWORD *result; // rax

  result = operator new(0x40uLL);
  *result = *a1;
  result[1] = *a1;
  result[2] = *a1;
  return result;
}
