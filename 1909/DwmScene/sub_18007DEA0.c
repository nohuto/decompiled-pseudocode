/*
 * XREFs of sub_18007DEA0 @ 0x18007DEA0
 * Callers:
 *     sub_18006F17C @ 0x18006F17C (sub_18006F17C.c)
 *     sub_18006F358 @ 0x18006F358 (sub_18006F358.c)
 *     sub_1800D3200 @ 0x1800D3200 (sub_1800D3200.c)
 *     sub_1800D32D0 @ 0x1800D32D0 (sub_1800D32D0.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_18007DEA0(_QWORD *a1)
{
  _QWORD *result; // rax

  result = operator new(0x60uLL);
  *result = *a1;
  result[1] = *a1;
  result[2] = *a1;
  return result;
}
