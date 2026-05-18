/*
 * XREFs of sub_180121360 @ 0x180121360
 * Callers:
 *     sub_180120F2C @ 0x180120F2C (sub_180120F2C.c)
 * Callees:
 *     sub_18001E9F0 @ 0x18001E9F0 (sub_18001E9F0.c)
 *     sub_180020AB0 @ 0x180020AB0 (sub_180020AB0.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180121360(__int64 **a1, __int64 a2, char a3, int *a4, _QWORD *a5)
{
  __int64 *v8; // rdx
  __int64 *v9; // rsi
  __int64 v10; // rax
  char v11; // r14
  int v12; // ecx
  __int64 *v13; // rbx
  __int64 result; // rax
  _QWORD *v15; // rcx
  __int64 *v16; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v17; // [rsp+38h] [rbp-40h]
  __int64 **v18; // [rsp+40h] [rbp-38h]
  __int64 v19; // [rsp+48h] [rbp-30h]

  v19 = -2LL;
  v18 = a1;
  v17 = a5;
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
        v11 = *(_DWORD *)(v10 + 32) >= v12;
      else
        v11 = v12 < *(_DWORD *)(v10 + 32);
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
    v16 = v9;
    if ( v11 )
    {
      if ( v9 == (__int64 *)*v8 )
      {
        *(_QWORD *)a2 = *sub_18001E9F0(a1, &v16, 1, v9, (int)a4, a5);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      sub_180020AB0(&v16);
      v13 = v16;
    }
    if ( *((_DWORD *)v13 + 8) >= *a4 )
    {
      v15 = (_QWORD *)a5[12];
      if ( v15 )
      {
        LOBYTE(v8) = v15 != a5 + 5;
        (*(void (__fastcall **)(_QWORD *, __int64 *))(*v15 + 32LL))(v15, v8);
        a5[12] = 0LL;
      }
      j_j__o_free(a5);
      *(_QWORD *)a2 = v13;
      *(_BYTE *)(a2 + 8) = 0;
      result = a2;
    }
    else
    {
      *(_QWORD *)a2 = *sub_18001E9F0(a1, &v16, v11, v9, (int)a4, a5);
      *(_BYTE *)(a2 + 8) = 1;
      result = a2;
    }
  }
  catch ( ... )
  {
    sub_18002571C((__int64)v18, (__int64)v17);
    throw;
  }
  return result;
}
