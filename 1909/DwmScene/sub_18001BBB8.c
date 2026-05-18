/*
 * XREFs of sub_18001BBB8 @ 0x18001BBB8
 * Callers:
 *     sub_180016920 @ 0x180016920 (sub_180016920.c)
 *     sub_180017258 @ 0x180017258 (sub_180017258.c)
 *     sub_18003C424 @ 0x18003C424 (sub_18003C424.c)
 *     sub_180091334 @ 0x180091334 (sub_180091334.c)
 *     sub_1800913CC @ 0x1800913CC (sub_1800913CC.c)
 *     sub_1800F175C @ 0x1800F175C (sub_1800F175C.c)
 *     sub_18010363C @ 0x18010363C (sub_18010363C.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_18001BBB8(__int64 a1, unsigned __int64 a2)
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
