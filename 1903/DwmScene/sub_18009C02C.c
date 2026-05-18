/*
 * XREFs of sub_18009C02C @ 0x18009C02C
 * Callers:
 *     sub_180097AF4 @ 0x180097AF4 (sub_180097AF4.c)
 *     sub_180097D80 @ 0x180097D80 (sub_180097D80.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_18009C02C(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx
  void *v4; // rax
  __int64 v5; // rdx
  void *v6; // rcx
  _QWORD *result; // rax

  v2 = 88 * a2;
  if ( a2 > 0x2E8BA2E8BA2E8BALL )
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
