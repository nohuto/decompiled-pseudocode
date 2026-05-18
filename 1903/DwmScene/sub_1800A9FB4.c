/*
 * XREFs of sub_1800A9FB4 @ 0x1800A9FB4
 * Callers:
 *     sub_1800A7AE0 @ 0x1800A7AE0 (sub_1800A7AE0.c)
 *     sub_1801334A4 @ 0x1801334A4 (sub_1801334A4.c)
 * Callees:
 *     sub_180091930 @ 0x180091930 (sub_180091930.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800A9FB4(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 *v3; // rsi
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 result; // rax

  v1 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(__int64 **)(a1 + 8);
    if ( v1 != v3 )
    {
      do
      {
        sub_180091930(v1);
        v1 += 8;
      }
      while ( v1 != v3 );
      v1 = *(__int64 **)a1;
    }
    v4 = (*(_QWORD *)(a1 + 16) - (_QWORD)v1) & 0xFFFFFFFFFFFFFFC0uLL;
    if ( v4 >= 0x1000 )
    {
      v5 = *(v1 - 1);
      v6 = v4 + 39;
      if ( (unsigned __int64)v1 - v5 - 8 > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v5, v6);
        JUMPOUT(0x1800AA043LL);
      }
      v1 = (__int64 *)*(v1 - 1);
    }
    result = j_j__o_free(v1);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
