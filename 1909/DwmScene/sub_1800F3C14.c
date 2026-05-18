/*
 * XREFs of sub_1800F3C14 @ 0x1800F3C14
 * Callers:
 *     sub_1800F1C04 @ 0x1800F1C04 (sub_1800F1C04.c)
 * Callees:
 *     sub_1800676B8 @ 0x1800676B8 (sub_1800676B8.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800F3C14(__int64 a1)
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
        sub_1800676B8(v1, 0);
        v1 += 7;
      }
      while ( v1 != v3 );
      v1 = *(__int64 **)a1;
    }
    v4 = 56 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v1) / 56LL);
    if ( v4 >= 0x1000 )
    {
      v5 = *(v1 - 1);
      v6 = v4 + 39;
      if ( (unsigned __int64)v1 - v5 - 8 > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v5, v6);
        JUMPOUT(0x1800F3CC0LL);
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
