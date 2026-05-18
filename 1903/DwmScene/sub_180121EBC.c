/*
 * XREFs of sub_180121EBC @ 0x180121EBC
 * Callers:
 *     sub_180124524 @ 0x180124524 (sub_180124524.c)
 * Callees:
 *     sub_1801232FC @ 0x1801232FC (sub_1801232FC.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_180121EBC(_QWORD *a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = a1[3];
  if ( v2 )
  {
    v3 = (a1[5] - v2) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v3 >= 0x1000 )
    {
      v4 = *(_QWORD *)(v2 - 8);
      v5 = v3 + 39;
      v6 = v2 - v4;
      if ( (unsigned __int64)(v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v5);
        JUMPOUT(0x180121F30LL);
      }
      v2 = v4;
    }
    j_j__o_free(v2);
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  sub_1801232FC(a1 + 1);
  return j_j__o_free(a1[1]);
}
