/*
 * XREFs of sub_1800B2844 @ 0x1800B2844
 * Callers:
 *     sub_1800AA990 @ 0x1800AA990 (sub_1800AA990.c)
 *     sub_1800AB53C @ 0x1800AB53C (sub_1800AB53C.c)
 * Callees:
 *     sub_1800AC420 @ 0x1800AC420 (sub_1800AC420.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800B2844(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
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
        sub_1800AC420(v4, 0);
        v4 += 48LL;
      }
      while ( v4 != v9 );
      v4 = *a1;
    }
    v10 = 48 * ((a1[2] - v4) / 48);
    if ( v10 >= 0x1000 )
    {
      v11 = *(_QWORD *)(v4 - 8);
      v12 = v10 + 39;
      if ( (unsigned __int64)(v4 - v11 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v11, v12);
        JUMPOUT(0x1800B2922LL);
      }
      v4 = *(_QWORD *)(v4 - 8);
    }
    j_j__o_free(v4);
  }
  *a1 = a2;
  a1[1] = a2 + 48 * a3;
  result = a2 + 48 * a4;
  a1[2] = result;
  return result;
}
