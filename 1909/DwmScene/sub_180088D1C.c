/*
 * XREFs of sub_180088D1C @ 0x180088D1C
 * Callers:
 *     sub_180088ADC @ 0x180088ADC (sub_180088ADC.c)
 *     sub_18008A168 @ 0x18008A168 (sub_18008A168.c)
 * Callees:
 *     sub_180020BC0 @ 0x180020BC0 (sub_180020BC0.c)
 *     sub_180088850 @ 0x180088850 (sub_180088850.c)
 *     sub_1800894B4 @ 0x1800894B4 (sub_1800894B4.c)
 *     sub_18008D858 @ 0x18008D858 (sub_18008D858.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_180088D1C(__int64 **a1, __int64 a2, char a3, __int64 a4, _QWORD *a5)
{
  __int64 *v8; // rax
  __int64 *v9; // rsi
  __int64 v10; // rbx
  char v11; // r14
  __int64 *v12; // rbx
  __int64 result; // rax
  char v14; // [rsp+30h] [rbp-68h]
  __int64 *v15; // [rsp+38h] [rbp-60h] BYREF
  _QWORD *v16; // [rsp+40h] [rbp-58h]
  __int64 **v17; // [rsp+48h] [rbp-50h]
  __int64 v18; // [rsp+50h] [rbp-48h]

  v18 = -2LL;
  v14 = a3;
  v17 = a1;
  v16 = a5;
  v8 = *a1;
  v15 = v8;
  v9 = v8;
  v10 = v8[1];
  v11 = 1;
  if ( !*(_BYTE *)(v10 + 25) )
  {
    do
    {
      v9 = (__int64 *)v10;
      if ( a3 )
        v11 = (int)sub_18008D858(v10 + 32, a4) >= 0;
      else
        v11 = (int)sub_18008D858(a4, v10 + 32) < 0;
      if ( v11 )
        v10 = *(_QWORD *)v10;
      else
        v10 = *(_QWORD *)(v10 + 16);
      a3 = v14;
    }
    while ( !*(_BYTE *)(v10 + 25) );
    v8 = v15;
  }
  try
  {
    v12 = v9;
    v15 = v9;
    if ( v11 )
    {
      if ( v9 == (__int64 *)*v8 )
      {
        *(_QWORD *)a2 = *sub_180088850(a1, &v15, 1, v9, a4, a5);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      sub_180020BC0(&v15);
      v12 = v15;
    }
    if ( (int)sub_18008D858(v12 + 4, a4) >= 0 )
    {
      sub_1800894B4(a5 + 4);
      j_j__o_free(a5);
      *(_QWORD *)a2 = v12;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *sub_180088850(a1, &v15, v11, v9, a4, a5);
      *(_BYTE *)(a2 + 8) = 1;
    }
    result = a2;
  }
  catch ( ... )
  {
    sub_18008D448(v17, v16);
    throw;
  }
  return result;
}
