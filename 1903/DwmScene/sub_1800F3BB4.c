/*
 * XREFs of sub_1800F3BB4 @ 0x1800F3BB4
 * Callers:
 *     sub_1800F1AEC @ 0x1800F1AEC (sub_1800F1AEC.c)
 *     sub_1800F1AF4 @ 0x1800F1AF4 (sub_1800F1AF4.c)
 *     sub_1800F48F4 @ 0x1800F48F4 (sub_1800F48F4.c)
 * Callees:
 *     sub_1800DB274 @ 0x1800DB274 (sub_1800DB274.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800F3BB4(__int64 *a1)
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
        sub_1800DB274(v1);
        v1 += 40LL;
      }
      while ( v1 != v3 );
      v1 = *a1;
    }
    v4 = 40 * ((a1[2] - v1) / 40);
    if ( v4 >= 0x1000 )
    {
      v5 = *(_QWORD *)(v1 - 8);
      v6 = v4 + 39;
      if ( (unsigned __int64)(v1 - v5 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v5, v6);
        JUMPOUT(0x1800F3C62LL);
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
