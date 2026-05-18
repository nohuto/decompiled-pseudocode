/*
 * XREFs of sub_18008D1F0 @ 0x18008D1F0
 * Callers:
 *     sub_180088398 @ 0x180088398 (sub_180088398.c)
 *     sub_180088418 @ 0x180088418 (sub_180088418.c)
 *     sub_1800A01B4 @ 0x1800A01B4 (sub_1800A01B4.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_18008D1F0(_QWORD *a1)
{
  _QWORD *result; // rax

  result = operator new(0x50uLL);
  *result = *a1;
  result[1] = *a1;
  result[2] = *a1;
  return result;
}
