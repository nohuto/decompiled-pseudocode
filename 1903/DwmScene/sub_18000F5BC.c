/*
 * XREFs of sub_18000F5BC @ 0x18000F5BC
 * Callers:
 *     sub_18000DD90 @ 0x18000DD90 (sub_18000DD90.c)
 *     sub_18000FBE0 @ 0x18000FBE0 (sub_18000FBE0.c)
 *     sub_1800112D4 @ 0x1800112D4 (sub_1800112D4.c)
 *     sub_180016B24 @ 0x180016B24 (sub_180016B24.c)
 *     sub_18002D8D8 @ 0x18002D8D8 (sub_18002D8D8.c)
 *     sub_180031C20 @ 0x180031C20 (sub_180031C20.c)
 *     sub_180062A78 @ 0x180062A78 (sub_180062A78.c)
 *     sub_18006F588 @ 0x18006F588 (sub_18006F588.c)
 *     sub_180072224 @ 0x180072224 (sub_180072224.c)
 *     sub_1800738A4 @ 0x1800738A4 (sub_1800738A4.c)
 *     sub_1800BC5A0 @ 0x1800BC5A0 (sub_1800BC5A0.c)
 *     sub_1800E9F28 @ 0x1800E9F28 (sub_1800E9F28.c)
 *     sub_1800F69D0 @ 0x1800F69D0 (sub_1800F69D0.c)
 *     sub_180103640 @ 0x180103640 (sub_180103640.c)
 *     sub_180103A28 @ 0x180103A28 (sub_180103A28.c)
 *     sub_180106DA0 @ 0x180106DA0 (sub_180106DA0.c)
 *     sub_18010B418 @ 0x18010B418 (sub_18010B418.c)
 *     sub_18010B648 @ 0x18010B648 (sub_18010B648.c)
 *     sub_18011E310 @ 0x18011E310 (sub_18011E310.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_18000F5BC(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx
  void *v4; // rax
  __int64 v5; // rdx
  void *v6; // rcx
  _QWORD *result; // rax

  v2 = 16 * a2;
  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
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
