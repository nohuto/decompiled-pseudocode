/*
 * XREFs of sub_180071CEC @ 0x180071CEC
 * Callers:
 *     sub_180070FFC @ 0x180070FFC (sub_180070FFC.c)
 * Callees:
 *     sub_180011388 @ 0x180011388 (sub_180011388.c)
 *     sub_180020AB0 @ 0x180020AB0 (sub_180020AB0.c)
 *     sub_18006FEE0 @ 0x18006FEE0 (sub_18006FEE0.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180071CEC(__int64 **a1, __int64 a2, char a3, __int64 a4, _QWORD *a5)
{
  __int64 *v8; // rdx
  __int64 *v9; // rsi
  __int64 v10; // rax
  char v11; // r14
  unsigned __int64 v12; // rcx
  __int64 result; // rax
  volatile signed __int32 *v14; // rcx
  __int64 *v15; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v16; // [rsp+38h] [rbp-50h]
  __int64 **v17; // [rsp+40h] [rbp-48h]
  __int64 v18; // [rsp+48h] [rbp-40h]
  __int64 v19; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v20[6]; // [rsp+58h] [rbp-30h] BYREF

  v18 = -2LL;
  v17 = a1;
  v16 = a5;
  v8 = *a1;
  v9 = *a1;
  v10 = (*a1)[1];
  v11 = 1;
  if ( !*(_BYTE *)(v10 + 25) )
  {
    v12 = *(_QWORD *)(a4 + 8);
    do
    {
      v9 = (__int64 *)v10;
      if ( a3 )
        v11 = *(_QWORD *)(v10 + 40) >= v12;
      else
        v11 = v12 < *(_QWORD *)(v10 + 40);
      if ( v11 )
        v10 = *(_QWORD *)v10;
      else
        v10 = *(_QWORD *)(v10 + 16);
    }
    while ( !*(_BYTE *)(v10 + 25) );
  }
  try
  {
    v15 = v9;
    if ( v11 )
    {
      if ( v9 == (__int64 *)*v8 )
      {
        *(_QWORD *)a2 = *sub_18006FEE0(a1, &v19, 1, v9, a4, a5);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      sub_180020AB0(&v15);
    }
    if ( (unsigned __int64)v15[5] >= *(_QWORD *)(a4 + 8) )
    {
      sub_180011388(a5 + 6);
      v14 = (volatile signed __int32 *)a5[5];
      if ( v14 && _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
      j_j__o_free(a5);
      *(_QWORD *)a2 = v15;
      *(_BYTE *)(a2 + 8) = 0;
      result = a2;
    }
    else
    {
      *(_QWORD *)a2 = *sub_18006FEE0(a1, v20, v11, v9, a4, a5);
      *(_BYTE *)(a2 + 8) = 1;
      result = a2;
    }
  }
  catch ( ... )
  {
    sub_18007E018(v17, v16);
    throw;
  }
  return result;
}
