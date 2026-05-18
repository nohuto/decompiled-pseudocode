/*
 * XREFs of sub_180120F2C @ 0x180120F2C
 * Callers:
 *     sub_180121948 @ 0x180121948 (sub_180121948.c)
 *     sub_1801247B4 @ 0x1801247B4 (sub_1801247B4.c)
 * Callees:
 *     sub_18001E9F0 @ 0x18001E9F0 (sub_18001E9F0.c)
 *     sub_180020AB0 @ 0x180020AB0 (sub_180020AB0.c)
 *     sub_180121360 @ 0x180121360 (sub_180121360.c)
 */

_QWORD *__fastcall sub_180120F2C(__int64 **a1, _QWORD *a2, __int64 *a3, int *a4, _QWORD *a5)
{
  __int64 *v9; // rdi
  _QWORD *result; // rax
  __int64 v11; // r9
  int v12; // r13d
  bool v13; // cc
  __int64 *v14; // r9
  char v15; // dl
  __int64 *v16; // rax
  __int64 *v17; // rcx
  __int64 *v18; // rcx
  __int64 *v19; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v20; // [rsp+38h] [rbp-50h]
  __int64 v21[4]; // [rsp+40h] [rbp-48h] BYREF

  v21[2] = -2LL;
  v21[0] = (__int64)a1;
  v20 = a5;
  if ( a1[1] )
  {
    v9 = *a1;
    if ( a3 == (__int64 *)**a1 )
    {
      if ( *a4 < *((_DWORD *)a3 + 8) )
      {
        sub_18001E9F0(a1, a2, 1, a3, (int)a4, a5);
        return a2;
      }
      goto LABEL_30;
    }
    if ( a3 == v9 )
    {
      v11 = v9[2];
      if ( *(_DWORD *)(v11 + 32) < *a4 )
      {
        sub_18001E9F0(a1, a2, 0, (_QWORD *)v11, (int)a4, a5);
        return a2;
      }
      goto LABEL_30;
    }
    v12 = *a4;
    v13 = *((_DWORD *)a3 + 8) < *a4;
    if ( *((_DWORD *)a3 + 8) > *a4 )
    {
      v19 = a3;
      sub_180020AB0(&v19);
      if ( *((_DWORD *)v19 + 8) < v12 )
      {
        if ( *(_BYTE *)(v19[2] + 25) )
          sub_18001E9F0(a1, a2, 0, v19, (int)a4, a5);
        else
          sub_18001E9F0(a1, a2, 1, a3, (int)a4, a5);
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
      *a2 = *(_QWORD *)sub_180121360((_DWORD)a1, (unsigned int)v21, 0, (_DWORD)a4, (__int64)a5);
      return a2;
    }
    if ( v15 )
      sub_18001E9F0(a1, a2, 0, a3, (int)a4, a5);
    else
      sub_18001E9F0(a1, a2, 1, v14, (int)a4, a5);
    return a2;
  }
  else
  {
    try
    {
      sub_18001E9F0(a1, a2, 1, *a1, (int)a4, a5);
      result = a2;
    }
    catch ( ... )
    {
      sub_18002571C(v21[0], (__int64)v20);
      throw;
    }
  }
  return result;
}
