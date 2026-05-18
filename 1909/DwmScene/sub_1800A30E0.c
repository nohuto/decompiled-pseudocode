/*
 * XREFs of sub_1800A30E0 @ 0x1800A30E0
 * Callers:
 *     sub_1800A5BB0 @ 0x1800A5BB0 (sub_1800A5BB0.c)
 * Callees:
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 *__fastcall sub_1800A30E0(__int64 *a1, char a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx

  v4 = *a1;
  if ( v4 )
  {
    v5 = a1[2] - v4;
    if ( v5 >= 0x1000 )
    {
      v6 = *(_QWORD *)(v4 - 8);
      v7 = v5 + 39;
      v8 = v4 - v6;
      if ( (unsigned __int64)(v8 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v8, v7);
        JUMPOUT(0x1800A3154LL);
      }
      v4 = v6;
    }
    j_j__o_free(v4);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
