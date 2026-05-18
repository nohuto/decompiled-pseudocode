/*
 * XREFs of sub_180032834 @ 0x180032834
 * Callers:
 *     sub_180032B64 @ 0x180032B64 (sub_180032B64.c)
 *     sub_18003ED60 @ 0x18003ED60 (sub_18003ED60.c)
 *     sub_180094F68 @ 0x180094F68 (sub_180094F68.c)
 *     sub_18009CFCC @ 0x18009CFCC (sub_18009CFCC.c)
 *     sub_18009EF2C @ 0x18009EF2C (sub_18009EF2C.c)
 *     sub_1800AB8C4 @ 0x1800AB8C4 (sub_1800AB8C4.c)
 *     sub_1800CBE88 @ 0x1800CBE88 (sub_1800CBE88.c)
 *     sub_1800CD724 @ 0x1800CD724 (sub_1800CD724.c)
 *     sub_1800CEF44 @ 0x1800CEF44 (sub_1800CEF44.c)
 *     sub_1800CFA44 @ 0x1800CFA44 (sub_1800CFA44.c)
 *     sub_1800D13C0 @ 0x1800D13C0 (sub_1800D13C0.c)
 *     sub_1800F4678 @ 0x1800F4678 (sub_1800F4678.c)
 *     sub_1800F6C1C @ 0x1800F6C1C (sub_1800F6C1C.c)
 * Callees:
 *     sub_180020BC0 @ 0x180020BC0 (sub_180020BC0.c)
 *     sub_1800325A8 @ 0x1800325A8 (sub_1800325A8.c)
 *     sub_180032A28 @ 0x180032A28 (sub_180032A28.c)
 */

_QWORD *__fastcall sub_180032834(__int64 **a1, _QWORD *a2, __int64 *a3, unsigned int *a4, _QWORD *a5)
{
  __int64 *v9; // rdi
  _QWORD *result; // rax
  __int64 v11; // r9
  unsigned int v12; // r13d
  bool v13; // cf
  __int64 *v14; // r9
  char v15; // dl
  __int64 *v16; // rax
  __int64 *v17; // rcx
  __int64 *v18; // rcx
  __int64 *v19; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v20; // [rsp+38h] [rbp-50h]
  _QWORD v21[4]; // [rsp+40h] [rbp-48h] BYREF

  v21[2] = -2LL;
  v21[0] = a1;
  v20 = a5;
  if ( a1[1] )
  {
    v9 = *a1;
    if ( a3 == (__int64 *)**a1 )
    {
      if ( *a4 < *((_DWORD *)a3 + 8) )
      {
        sub_1800325A8(a1, a2, 1, a3, (int)a4, a5);
        return a2;
      }
      goto LABEL_30;
    }
    if ( a3 == v9 )
    {
      v11 = v9[2];
      if ( *(_DWORD *)(v11 + 32) < *a4 )
      {
        sub_1800325A8(a1, a2, 0, (_QWORD *)v11, (int)a4, a5);
        return a2;
      }
      goto LABEL_30;
    }
    v12 = *a4;
    v13 = *((_DWORD *)a3 + 8) < *a4;
    if ( *((_DWORD *)a3 + 8) > *a4 )
    {
      v19 = a3;
      sub_180020BC0(&v19);
      if ( *((_DWORD *)v19 + 8) < v12 )
      {
        if ( *(_BYTE *)(v19[2] + 25) )
          sub_1800325A8(a1, a2, 0, v19, (int)a4, a5);
        else
          sub_1800325A8(a1, a2, 1, a3, (int)a4, a5);
        return a2;
      }
      v13 = *((_DWORD *)a3 + 8) < v12;
    }
    if ( !v13 )
      goto LABEL_30;
    v14 = (__int64 *)a3[2];
    v15 = *((_BYTE *)v14 + 25);
    if ( v15 )
    {
      v14 = (__int64 *)a3[1];
      if ( !*((_BYTE *)v14 + 25) )
      {
        v16 = a3;
        do
        {
          v17 = v14;
          if ( v16 != (__int64 *)v14[2] )
            break;
          v14 = (__int64 *)v14[1];
          v16 = v17;
        }
        while ( !*((_BYTE *)v14 + 25) );
      }
    }
    else
    {
      v18 = (__int64 *)*v14;
      if ( !*(_BYTE *)(*v14 + 25) )
      {
        do
        {
          v14 = v18;
          v18 = (__int64 *)*v18;
        }
        while ( !*((_BYTE *)v18 + 25) );
      }
    }
    if ( v14 != v9 && v12 >= *((_DWORD *)v14 + 8) )
    {
LABEL_30:
      *a2 = *(_QWORD *)sub_180032A28((_DWORD)a1, (unsigned int)v21, 0, (_DWORD)a4, (__int64)a5);
      return a2;
    }
    if ( v15 )
      sub_1800325A8(a1, a2, 0, a3, (int)a4, a5);
    else
      sub_1800325A8(a1, a2, 1, v14, (int)a4, a5);
    return a2;
  }
  else
  {
    try
    {
      sub_1800325A8(a1, a2, 1, *a1, (int)a4, a5);
      result = a2;
    }
    catch ( ... )
    {
      sub_180038DB4(v21[0], v20);
      throw;
    }
  }
  return result;
}
