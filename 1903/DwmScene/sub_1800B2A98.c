/*
 * XREFs of sub_1800B2A98 @ 0x1800B2A98
 * Callers:
 *     sub_1800ABDC0 @ 0x1800ABDC0 (sub_1800ABDC0.c)
 *     sub_1800ABDC8 @ 0x1800ABDC8 (sub_1800ABDC8.c)
 * Callees:
 *     sub_1800AC420 @ 0x1800AC420 (sub_1800AC420.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800B2A98(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    if ( v1 != v3 )
    {
      do
      {
        sub_1800AC420(v1, 0);
        v1 += 48LL;
      }
      while ( v1 != v3 );
      v1 = *a1;
    }
    v4 = 48 * ((a1[2] - v1) / 48);
    if ( v4 >= 0x1000 )
    {
      v5 = *(_QWORD *)(v1 - 8);
      v6 = v4 + 39;
      if ( (unsigned __int64)(v1 - v5 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v5, v6);
        JUMPOUT(0x1800B2B4CLL);
      }
      v1 = *(_QWORD *)(v1 - 8);
    }
    result = j_j__o_free(v1);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
