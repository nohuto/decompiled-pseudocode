/*
 * XREFs of sub_1801215CC @ 0x1801215CC
 * Callers:
 *     sub_180121230 @ 0x180121230 (sub_180121230.c)
 * Callees:
 *     unknown_libname_116 @ 0x18001146C (unknown_libname_116.c)
 *     sub_180020BC0 @ 0x180020BC0 (sub_180020BC0.c)
 *     sub_18008D858 @ 0x18008D858 (sub_18008D858.c)
 *     sub_180120DB0 @ 0x180120DB0 (sub_180120DB0.c)
 *     sub_180124634 @ 0x180124634 (sub_180124634.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_1801215CC(__int64 **a1, __int64 a2, char a3, char *a4, _QWORD *a5)
{
  __int64 *v8; // rax
  __int64 *v9; // rdi
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
        v11 = (int)sub_18008D858((char *)(v10 + 32), (__int64)a4) >= 0;
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
        *(_QWORD *)a2 = *sub_180120DB0(a1, &v15, 1, v9, (int)a4, a5);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      sub_180020BC0(&v15);
      v12 = v15;
    }
    if ( (int)sub_18008D858((char *)v12 + 32, (__int64)a4) >= 0 )
    {
      sub_180124634(a5 + 8);
      unknown_libname_116(a5 + 4);
      j_j__o_free(a5);
      *(_QWORD *)a2 = v12;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *sub_180120DB0(a1, &v15, v11, v9, (int)a4, a5);
      *(_BYTE *)(a2 + 8) = 1;
    }
    result = a2;
  }
  catch ( ... )
  {
    sub_1801231E4(v17, v16);
    throw;
  }
  return result;
}
