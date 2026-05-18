/*
 * XREFs of sub_18007DE54 @ 0x18007DE54
 * Callers:
 *     sub_18006F400 @ 0x18006F400 (sub_18006F400.c)
 *     sub_180073BC4 @ 0x180073BC4 (sub_180073BC4.c)
 *     sub_1800A64BC @ 0x1800A64BC (sub_1800A64BC.c)
 *     sub_180123A6C @ 0x180123A6C (sub_180123A6C.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_18007DE54(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *result; // rax

  result = operator new(0x20uLL);
  if ( !a2 )
  {
    a2 = result;
    a3 = result;
  }
  *result = a2;
  result[1] = a3;
  return result;
}
