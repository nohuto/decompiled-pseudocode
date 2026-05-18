/*
 * XREFs of sub_18000F60C @ 0x18000F60C
 * Callers:
 *     sub_18000DDE0 @ 0x18000DDE0 (sub_18000DDE0.c)
 *     sub_18000FC30 @ 0x18000FC30 (sub_18000FC30.c)
 *     sub_180011324 @ 0x180011324 (sub_180011324.c)
 *     sub_180016B94 @ 0x180016B94 (sub_180016B94.c)
 *     sub_18002D9E8 @ 0x18002D9E8 (sub_18002D9E8.c)
 *     sub_180031D30 @ 0x180031D30 (sub_180031D30.c)
 *     sub_180062B88 @ 0x180062B88 (sub_180062B88.c)
 *     sub_18006F698 @ 0x18006F698 (sub_18006F698.c)
 *     sub_180072334 @ 0x180072334 (sub_180072334.c)
 *     sub_1800739B4 @ 0x1800739B4 (sub_1800739B4.c)
 *     sub_1800BC6B0 @ 0x1800BC6B0 (sub_1800BC6B0.c)
 *     sub_1800EA038 @ 0x1800EA038 (sub_1800EA038.c)
 *     sub_1800F6AE0 @ 0x1800F6AE0 (sub_1800F6AE0.c)
 *     sub_180103750 @ 0x180103750 (sub_180103750.c)
 *     sub_180103B38 @ 0x180103B38 (sub_180103B38.c)
 *     sub_180106EB0 @ 0x180106EB0 (sub_180106EB0.c)
 *     sub_18010B528 @ 0x18010B528 (sub_18010B528.c)
 *     sub_18010B758 @ 0x18010B758 (sub_18010B758.c)
 *     sub_18011E420 @ 0x18011E420 (sub_18011E420.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_18000F60C(__int64 a1, unsigned __int64 a2)
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
