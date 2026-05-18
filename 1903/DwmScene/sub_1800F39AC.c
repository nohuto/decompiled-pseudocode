/*
 * XREFs of sub_1800F39AC @ 0x1800F39AC
 * Callers:
 *     sub_1800F1298 @ 0x1800F1298 (sub_1800F1298.c)
 * Callees:
 *     sub_1800DB274 @ 0x1800DB274 (sub_1800DB274.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800F39AC(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 result; // rax

  v4 = *a1;
  if ( *a1 )
  {
    v9 = a1[1];
    if ( v4 != v9 )
    {
      do
      {
        sub_1800DB274(v4);
        v4 += 40LL;
      }
      while ( v4 != v9 );
      v4 = *a1;
    }
    v10 = 40 * ((a1[2] - v4) / 40);
    if ( v10 >= 0x1000 )
    {
      v11 = *(_QWORD *)(v4 - 8);
      v12 = v10 + 39;
      if ( (unsigned __int64)(v4 - v11 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v11, v12);
        JUMPOUT(0x1800F3A84LL);
      }
      v4 = *(_QWORD *)(v4 - 8);
    }
    j_j__o_free(v4);
  }
  *a1 = a2;
  result = 5 * a4;
  a1[1] = a2 + 40 * a3;
  a1[2] = a2 + 40 * a4;
  return result;
}
