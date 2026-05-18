/*
 * XREFs of sub_1800B2B6C @ 0x1800B2B6C
 * Callers:
 *     sub_1800AA990 @ 0x1800AA990 (sub_1800AA990.c)
 *     sub_1800AB53C @ 0x1800AB53C (sub_1800AB53C.c)
 *     sub_1800D1048 @ 0x1800D1048 (sub_1800D1048.c)
 *     sub_1800D144C @ 0x1800D144C (sub_1800D144C.c)
 *     sub_1800D7304 @ 0x1800D7304 (sub_1800D7304.c)
 *     sub_1800D873C @ 0x1800D873C (sub_1800D873C.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_1800B2B6C(__int64 a1, unsigned __int64 a2)
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
