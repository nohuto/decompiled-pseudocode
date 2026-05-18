/*
 * XREFs of sub_1800177A0 @ 0x1800177A0
 * Callers:
 *     sub_1801283A1 @ 0x1801283A1 (sub_1801283A1.c)
 *     sub_18012944B @ 0x18012944B (sub_18012944B.c)
 *     sub_18012E543 @ 0x18012E543 (sub_18012E543.c)
 *     sub_18012EBA0 @ 0x18012EBA0 (sub_18012EBA0.c)
 *     sub_18012EBC0 @ 0x18012EBC0 (sub_18012EBC0.c)
 *     sub_18012EBF8 @ 0x18012EBF8 (sub_18012EBF8.c)
 *     sub_18012F8B9 @ 0x18012F8B9 (sub_18012F8B9.c)
 *     sub_1801328B3 @ 0x1801328B3 (sub_1801328B3.c)
 *     sub_1801328D9 @ 0x1801328D9 (sub_1801328D9.c)
 *     sub_1801328FF @ 0x1801328FF (sub_1801328FF.c)
 *     sub_18013293F @ 0x18013293F (sub_18013293F.c)
 *     sub_180132FD7 @ 0x180132FD7 (sub_180132FD7.c)
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_1800177A0(__int64 *a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = *a1;
  if ( v2 )
  {
    v3 = (a1[2] - v2) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v3 >= 0x1000 )
    {
      v4 = *(_QWORD *)(v2 - 8);
      v5 = v3 + 39;
      v6 = v2 - v4;
      if ( (unsigned __int64)(v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v5);
        JUMPOUT(0x1800177FCLL);
      }
      v2 = v4;
    }
    j_j__o_free(v2);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
