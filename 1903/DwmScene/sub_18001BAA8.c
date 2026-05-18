/*
 * XREFs of sub_18001BAA8 @ 0x18001BAA8
 * Callers:
 *     sub_1800168B0 @ 0x1800168B0 (sub_1800168B0.c)
 *     sub_1800171E8 @ 0x1800171E8 (sub_1800171E8.c)
 *     sub_18003C314 @ 0x18003C314 (sub_18003C314.c)
 *     sub_180091224 @ 0x180091224 (sub_180091224.c)
 *     sub_1800912BC @ 0x1800912BC (sub_1800912BC.c)
 *     sub_1800F164C @ 0x1800F164C (sub_1800F164C.c)
 *     sub_18010352C @ 0x18010352C (sub_18010352C.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_18001BAA8(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx
  void *v4; // rax
  __int64 v5; // rdx
  void *v6; // rcx
  _QWORD *result; // rax

  v2 = 4 * a2;
  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
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
