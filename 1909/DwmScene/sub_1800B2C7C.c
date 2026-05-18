/*
 * XREFs of sub_1800B2C7C @ 0x1800B2C7C
 * Callers:
 *     sub_1800AAAA0 @ 0x1800AAAA0 (sub_1800AAAA0.c)
 *     sub_1800AB64C @ 0x1800AB64C (sub_1800AB64C.c)
 *     sub_1800D1158 @ 0x1800D1158 (sub_1800D1158.c)
 *     sub_1800D155C @ 0x1800D155C (sub_1800D155C.c)
 *     sub_1800D7414 @ 0x1800D7414 (sub_1800D7414.c)
 *     sub_1800D884C @ 0x1800D884C (sub_1800D884C.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_1800B2C7C(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx
  void *v4; // rax
  __int64 v5; // rdx
  void *v6; // rcx
  _QWORD *result; // rax

  v2 = 48 * a2;
  if ( a2 > 0x555555555555555LL )
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
