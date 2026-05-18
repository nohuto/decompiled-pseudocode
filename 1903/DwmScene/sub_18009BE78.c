/*
 * XREFs of sub_18009BE78 @ 0x18009BE78
 * Callers:
 *     sub_180097D80 @ 0x180097D80 (sub_180097D80.c)
 * Callees:
 *     sub_180098560 @ 0x180098560 (sub_180098560.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_18009BE78(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  _QWORD *v9; // rbp
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 result; // rax

  v4 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v9 = *(_QWORD **)(a1 + 8);
    if ( v4 != v9 )
    {
      do
      {
        sub_180098560(v4);
        v4 += 11;
      }
      while ( v4 != v9 );
      v4 = *(_QWORD **)a1;
    }
    v10 = 88 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v4) / 88LL);
    if ( v10 >= 0x1000 )
    {
      v11 = *(v4 - 1);
      v12 = v10 + 39;
      if ( (unsigned __int64)v4 - v11 - 8 > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v11, v12);
        JUMPOUT(0x18009BF48LL);
      }
      v4 = (_QWORD *)*(v4 - 1);
    }
    j_j__o_free(v4);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 88 * a3;
  result = a2 + 88 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
