/*
 * XREFs of sub_18007DE1C @ 0x18007DE1C
 * Callers:
 *     sub_18007392C @ 0x18007392C (sub_18007392C.c)
 *     sub_180073BC4 @ 0x180073BC4 (sub_180073BC4.c)
 *     sub_18007BA30 @ 0x18007BA30 (sub_18007BA30.c)
 *     sub_180081594 @ 0x180081594 (sub_180081594.c)
 *     sub_1800D31B0 @ 0x1800D31B0 (sub_1800D31B0.c)
 *     sub_1800D43B0 @ 0x1800D43B0 (sub_1800D43B0.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

_QWORD *sub_18007DE1C()
{
  _QWORD *result; // rax

  result = operator new(0x60uLL);
  *result = result;
  result[1] = result;
  result[2] = result;
  *((_WORD *)result + 12) = 257;
  return result;
}
