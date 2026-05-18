/*
 * XREFs of sub_1800693C4 @ 0x1800693C4
 * Callers:
 *     sub_180065CB0 @ 0x180065CB0 (sub_180065CB0.c)
 *     sub_180065F80 @ 0x180065F80 (sub_180065F80.c)
 *     sub_1800D63A4 @ 0x1800D63A4 (sub_1800D63A4.c)
 * Callees:
 *     sub_180069DF4 @ 0x180069DF4 (sub_180069DF4.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800693C4(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v9; // r14
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 result; // rax
  _BYTE v14[56]; // [rsp+20h] [rbp-38h] BYREF

  v4 = *a1;
  if ( *a1 )
  {
    v9 = a1[1];
    if ( v4 != v9 )
    {
      do
      {
        sub_180069DF4(v4 + 136, v14, **(_QWORD **)(v4 + 136));
        j_j__o_free(*(_QWORD *)(v4 + 136));
        v4 += 152LL;
      }
      while ( v4 != v9 );
      v4 = *a1;
    }
    v10 = 152 * ((a1[2] - v4) / 152);
    if ( v10 >= 0x1000 )
    {
      v11 = *(_QWORD *)(v4 - 8);
      v12 = v10 + 39;
      if ( (unsigned __int64)(v4 - v11 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v11, v12);
        JUMPOUT(0x1800694BFLL);
      }
      v4 = *(_QWORD *)(v4 - 8);
    }
    j_j__o_free(v4);
  }
  *a1 = a2;
  a1[1] = a2 + 152 * a3;
  result = a2 + 152 * a4;
  a1[2] = result;
  return result;
}
