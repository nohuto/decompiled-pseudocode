/*
 * XREFs of sub_180031E4C @ 0x180031E4C
 * Callers:
 *     sub_18002DCA8 @ 0x18002DCA8 (sub_18002DCA8.c)
 *     sub_180042480 @ 0x180042480 (sub_180042480.c)
 *     sub_1800433BC @ 0x1800433BC (sub_1800433BC.c)
 *     sub_18009CE24 @ 0x18009CE24 (sub_18009CE24.c)
 *     sub_1800AA6AC @ 0x1800AA6AC (sub_1800AA6AC.c)
 *     sub_1800AAC3C @ 0x1800AAC3C (sub_1800AAC3C.c)
 *     sub_180121734 @ 0x180121734 (sub_180121734.c)
 *     sub_180124854 @ 0x180124854 (sub_180124854.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_180031E4C(__int64 a1, unsigned __int64 a2)
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
