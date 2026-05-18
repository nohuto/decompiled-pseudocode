/*
 * XREFs of sub_180031D3C @ 0x180031D3C
 * Callers:
 *     sub_18002DB98 @ 0x18002DB98 (sub_18002DB98.c)
 *     sub_180042370 @ 0x180042370 (sub_180042370.c)
 *     sub_1800432AC @ 0x1800432AC (sub_1800432AC.c)
 *     sub_18009CD14 @ 0x18009CD14 (sub_18009CD14.c)
 *     sub_1800AA59C @ 0x1800AA59C (sub_1800AA59C.c)
 *     sub_1800AAB2C @ 0x1800AAB2C (sub_1800AAB2C.c)
 *     sub_180121624 @ 0x180121624 (sub_180121624.c)
 *     sub_180124744 @ 0x180124744 (sub_180124744.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_180031D3C(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx
  void *v4; // rax
  __int64 v5; // rdx
  void *v6; // rcx
  _QWORD *result; // rax

  v2 = 32 * a2;
  if ( a2 > 0x7FFFFFFFFFFFFFFLL )
    v2 = -1LL;
  if ( v2 < 0x1000 )
  {
    result = 0LL;
    if ( v2 )
      return operator new(v2);
  }
  else
  {
    v3 = v2 + 39;
    if ( v2 + 39 < v2 )
      v3 = -1LL;
    v4 = operator new(v3);
    v6 = v4;
    if ( !v4 )
    {
      o__invalid_parameter_noinfo_noreturn(0LL, v5);
      __debugbreak();
    }
    result = (_QWORD *)(((unsigned __int64)v4 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(result - 1) = v6;
  }
  return result;
}
