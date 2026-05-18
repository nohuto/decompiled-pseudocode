/*
 * XREFs of sub_180063AC8 @ 0x180063AC8
 * Callers:
 *     sub_180063DF0 @ 0x180063DF0 (sub_180063DF0.c)
 *     sub_1800F45D4 @ 0x1800F45D4 (sub_1800F45D4.c)
 * Callees:
 *     sub_180020BC0 @ 0x180020BC0 (sub_180020BC0.c)
 *     sub_18006383C @ 0x18006383C (sub_18006383C.c)
 *     sub_180063CBC @ 0x180063CBC (sub_180063CBC.c)
 */

_QWORD *__fastcall sub_180063AC8(__int64 **a1, _QWORD *a2, __int64 *a3, unsigned int *a4, _QWORD *a5)
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
      if ( *a4 < *((_DWORD *)a3 + 7) )
      {
        sub_18006383C(a1, a2, 1, a3, (int)a4, a5);
        return a2;
      }
      goto LABEL_30;
    }
    if ( a3 == v9 )
    {
      v11 = v9[2];
      if ( *(_DWORD *)(v11 + 28) < *a4 )
      {
        sub_18006383C(a1, a2, 0, (_QWORD *)v11, (int)a4, a5);
        return a2;
      }
      goto LABEL_30;
    }
    v12 = *a4;
    v13 = *((_DWORD *)a3 + 7) < *a4;
    if ( *((_DWORD *)a3 + 7) > *a4 )
    {
      v19 = a3;
      sub_180020BC0(&v19);
      if ( *((_DWORD *)v19 + 7) < v12 )
      {
        if ( *(_BYTE *)(v19[2] + 25) )
          sub_18006383C(a1, a2, 0, v19, (int)a4, a5);
        else
          sub_18006383C(a1, a2, 1, a3, (int)a4, a5);
        return a2;
      }
      v13 = *((_DWORD *)a3 + 7) < v12;
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
    if ( v14 != v9 && v12 >= *((_DWORD *)v14 + 7) )
    {
LABEL_30:
      *a2 = *(_QWORD *)sub_180063CBC((_DWORD)a1, (unsigned int)v21, 0, (_DWORD)a4, (__int64)a5);
      return a2;
    }
    if ( v15 )
      sub_18006383C(a1, a2, 0, a3, (int)a4, a5);
    else
      sub_18006383C(a1, a2, 1, v14, (int)a4, a5);
    return a2;
  }
  else
  {
    try
    {
      sub_18006383C(a1, a2, 1, *a1, (int)a4, a5);
      result = a2;
    }
    catch ( ... )
    {
      sub_1800646D8(v21[0], v20);
      throw;
    }
  }
  return result;
}
