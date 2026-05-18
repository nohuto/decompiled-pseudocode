/*
 * XREFs of sub_180031B90 @ 0x180031B90
 * Callers:
 *     sub_18002D8D8 @ 0x18002D8D8 (sub_18002D8D8.c)
 *     sub_180031C20 @ 0x180031C20 (sub_180031C20.c)
 *     sub_180062A78 @ 0x180062A78 (sub_180062A78.c)
 *     sub_1800F69D0 @ 0x1800F69D0 (sub_1800F69D0.c)
 *     sub_180103640 @ 0x180103640 (sub_180103640.c)
 *     sub_180106DA0 @ 0x180106DA0 (sub_180106DA0.c)
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_180031B90(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
  {
    v9 = (a1[2] - v6) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v9 >= 0x1000 )
    {
      v10 = *(_QWORD *)(v6 - 8);
      v11 = v9 + 39;
      v12 = v6 - v10;
      if ( (unsigned __int64)(v12 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v12, v11);
        JUMPOUT(0x180031C1DLL);
      }
      v6 = v10;
    }
    result = j_j__o_free(v6);
  }
  *a1 = a2;
  a1[1] = a2 + 16 * a3;
  a1[2] = a2 + 16 * a4;
  return result;
}
