/*
 * XREFs of sub_18001EC7C @ 0x18001EC7C
 * Callers:
 *     sub_18001F450 @ 0x18001F450 (sub_18001F450.c)
 * Callees:
 *     sub_18001E9F0 @ 0x18001E9F0 (sub_18001E9F0.c)
 *     sub_18001EE70 @ 0x18001EE70 (sub_18001EE70.c)
 *     sub_180020AB0 @ 0x180020AB0 (sub_180020AB0.c)
 */

_QWORD *__fastcall sub_18001EC7C(__int64 **a1, _QWORD *a2, __int64 *a3, unsigned __int64 *a4, _QWORD *a5)
{
  __int64 *v9; // rdi
  _QWORD *result; // rax
  _QWORD *v11; // r9
  unsigned __int64 v12; // r13
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
      if ( *a4 < a3[4] )
      {
        sub_18001E9F0(a1, a2, 1, a3, (int)a4, a5);
        return a2;
      }
      goto LABEL_30;
    }
    if ( a3 == v9 )
    {
      v11 = (_QWORD *)v9[2];
      if ( v11[4] < *a4 )
      {
        sub_18001E9F0(a1, a2, 0, v11, (int)a4, a5);
        return a2;
      }
      goto LABEL_30;
    }
    v12 = *a4;
    v13 = a3[4] < *a4;
    if ( a3[4] > *a4 )
    {
      v19 = a3;
      sub_180020AB0(&v19);
      if ( v19[4] < v12 )
      {
        if ( *(_BYTE *)(v19[2] + 25) )
          sub_18001E9F0(a1, a2, 0, v19, (int)a4, a5);
        else
          sub_18001E9F0(a1, a2, 1, a3, (int)a4, a5);
        return a2;
      }
      v13 = a3[4] < v12;
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
    if ( v14 != v9 && v12 >= v14[4] )
    {
LABEL_30:
      *a2 = *(_QWORD *)sub_18001EE70((_DWORD)a1, (unsigned int)v21, 0, (_DWORD)a4, (__int64)a5);
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
      sub_18002571C(v21[0], v20);
      throw;
    }
  }
  return result;
}
