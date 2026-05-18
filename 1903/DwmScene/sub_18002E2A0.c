/*
 * XREFs of sub_18002E2A0 @ 0x18002E2A0
 * Callers:
 *     sub_18002E820 @ 0x18002E820 (sub_18002E820.c)
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_18002E2A0(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx

  v2 = a1[7];
  if ( v2 )
    result = j_j__o_free(v2);
  v4 = a1[3];
  if ( v4 )
  {
    v5 = (a1[5] - v4) & 0xFFFFFFFFFFFFFFE0uLL;
    if ( v5 >= 0x1000 )
    {
      v6 = *(_QWORD *)(v4 - 8);
      v7 = v5 + 39;
      v8 = v4 - v6;
      if ( (unsigned __int64)(v8 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v8, v7);
        JUMPOUT(0x18002E30CLL);
      }
      v4 = v6;
    }
    result = j_j__o_free(v4);
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  return result;
}
