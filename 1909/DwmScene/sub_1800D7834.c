/*
 * XREFs of sub_1800D7834 @ 0x1800D7834
 * Callers:
 *     sub_1800D9D54 @ 0x1800D9D54 (sub_1800D9D54.c)
 * Callees:
 *     sub_180020BC0 @ 0x180020BC0 (sub_180020BC0.c)
 *     sub_180067730 @ 0x180067730 (sub_180067730.c)
 *     sub_1800D75A8 @ 0x1800D75A8 (sub_1800D75A8.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800D7834(__int64 **a1, __int64 a2, char a3, unsigned __int64 *a4, _QWORD *a5)
{
  __int64 *v8; // rdx
  __int64 *v9; // rsi
  __int64 v10; // rax
  char v11; // r14
  unsigned __int64 v12; // rcx
  __int64 *v13; // rbx
  __int64 result; // rax
  __int64 *v15; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v16; // [rsp+38h] [rbp-40h]
  __int64 **v17; // [rsp+40h] [rbp-38h]
  __int64 v18; // [rsp+48h] [rbp-30h]

  v18 = -2LL;
  v17 = a1;
  v16 = a5;
  v8 = *a1;
  v9 = *a1;
  v10 = (*a1)[1];
  v11 = 1;
  if ( !*(_BYTE *)(v10 + 25) )
  {
    v12 = *a4;
    do
    {
      v9 = (__int64 *)v10;
      if ( a3 )
        v11 = *(_QWORD *)(v10 + 32) >= v12;
      else
        v11 = v12 < *(_QWORD *)(v10 + 32);
      if ( v11 )
        v10 = *(_QWORD *)v10;
      else
        v10 = *(_QWORD *)(v10 + 16);
    }
    while ( !*(_BYTE *)(v10 + 25) );
  }
  try
  {
    v13 = v9;
    v15 = v9;
    if ( v11 )
    {
      if ( v9 == (__int64 *)*v8 )
      {
        *(_QWORD *)a2 = *sub_1800D75A8(a1, &v15, 1, v9, (int)a4, a5);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      sub_180020BC0(&v15);
      v13 = v15;
    }
    if ( v13[4] >= *a4 )
    {
      sub_180067730(a5 + 4, 0);
      j_j__o_free(a5);
      *(_QWORD *)a2 = v13;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *sub_1800D75A8(a1, &v15, v11, v9, (int)a4, a5);
      *(_BYTE *)(a2 + 8) = 1;
    }
    result = a2;
  }
  catch ( ... )
  {
    sub_1800DA13C(v17, v16);
    throw;
  }
  return result;
}
