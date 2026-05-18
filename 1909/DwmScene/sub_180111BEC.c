/*
 * XREFs of sub_180111BEC @ 0x180111BEC
 * Callers:
 *     sub_18010D690 @ 0x18010D690 (sub_18010D690.c)
 *     sub_18010DA8C @ 0x18010DA8C (sub_18010DA8C.c)
 *     sub_180111FA8 @ 0x180111FA8 (sub_180111FA8.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_180111BEC(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *result; // rax

  result = operator new(0x38uLL);
  if ( !a2 )
  {
    a2 = result;
    a3 = result;
  }
  *result = a2;
  result[1] = a3;
  return result;
}
