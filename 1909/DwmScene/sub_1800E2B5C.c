/*
 * XREFs of sub_1800E2B5C @ 0x1800E2B5C
 * Callers:
 *     sub_1800E23F0 @ 0x1800E23F0 (sub_1800E23F0.c)
 *     sub_1800E23F8 @ 0x1800E23F8 (sub_1800E23F8.c)
 *     sub_1801311AD @ 0x1801311AD (sub_1801311AD.c)
 * Callees:
 *     sub_18010BB94 @ 0x18010BB94 (sub_18010BB94.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800E2B5C(__int64 *a1)
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
        sub_18010BB94(v1);
        v1 += 128LL;
      }
      while ( v1 != v3 );
      v1 = *a1;
    }
    v4 = (a1[2] - v1) & 0xFFFFFFFFFFFFFF80uLL;
    if ( v4 >= 0x1000 )
    {
      v5 = *(_QWORD *)(v1 - 8);
      v6 = v4 + 39;
      if ( (unsigned __int64)(v1 - v5 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v5, v6);
        JUMPOUT(0x1800E2BEBLL);
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
