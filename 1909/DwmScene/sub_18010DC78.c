/*
 * XREFs of sub_18010DC78 @ 0x18010DC78
 * Callers:
 *     sub_1801335F0 @ 0x1801335F0 (sub_1801335F0.c)
 *     sub_18013CC80 @ 0x18013CC80 (sub_18013CC80.c)
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_18010DC78(_QWORD *a1)
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
        JUMPOUT(0x18010DCDELL);
      }
      v2 = v4;
    }
    j_j__o_free(v2);
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  return sub_18010DD10(a1 + 1);
}
