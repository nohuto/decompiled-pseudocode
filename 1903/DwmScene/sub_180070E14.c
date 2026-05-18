/*
 * XREFs of sub_180070E14 @ 0x180070E14
 * Callers:
 *     sub_180072E60 @ 0x180072E60 (sub_180072E60.c)
 * Callees:
 *     sub_180020AB0 @ 0x180020AB0 (sub_180020AB0.c)
 *     sub_18006FC54 @ 0x18006FC54 (sub_18006FC54.c)
 *     sub_180071BAC @ 0x180071BAC (sub_180071BAC.c)
 */

_QWORD *__fastcall sub_180070E14(__int64 ***a1, _QWORD *a2, __int64 *a3, __int64 a4, _QWORD *a5)
{
  __int64 **v9; // rdi
  _QWORD *result; // rax
  __int64 *v11; // r9
  unsigned __int64 v12; // r13
  bool v13; // cf
  __int64 v14; // r9
  char v15; // dl
  __int64 *v16; // rax
  __int64 *v17; // rcx
  __int64 *v18; // rcx
  __int64 *v19; // [rsp+30h] [rbp-68h] BYREF
  _QWORD *v20; // [rsp+38h] [rbp-60h]
  _QWORD v21[11]; // [rsp+40h] [rbp-58h] BYREF

  v21[2] = -2LL;
  v21[0] = a1;
  v20 = a5;
  if ( a1[1] )
  {
    v9 = *a1;
    if ( a3 == **a1 )
    {
      if ( *(_QWORD *)(a4 + 8) < (unsigned __int64)a3[5] )
      {
        sub_18006FC54(a1, a2, 1, a3, a4, a5);
        return a2;
      }
      goto LABEL_30;
    }
    if ( a3 == (__int64 *)v9 )
    {
      v11 = v9[2];
      if ( (unsigned __int64)v11[5] < *(_QWORD *)(a4 + 8) )
      {
        sub_18006FC54(a1, a2, 0, v11, a4, a5);
        return a2;
      }
      goto LABEL_30;
    }
    v12 = *(_QWORD *)(a4 + 8);
    v13 = a3[5] < v12;
    if ( a3[5] > v12 )
    {
      v19 = a3;
      sub_180020AB0(&v19);
      if ( v19[5] < v12 )
      {
        if ( *(_BYTE *)(v19[2] + 25) )
          sub_18006FC54(a1, a2, 0, v19, a4, a5);
        else
          sub_18006FC54(a1, a2, 1, a3, a4, a5);
        return a2;
      }
      v13 = a3[5] < v12;
    }
    if ( !v13 )
      goto LABEL_30;
    v14 = a3[2];
    v15 = *(_BYTE *)(v14 + 25);
    if ( v15 )
    {
      v14 = a3[1];
      if ( !*(_BYTE *)(v14 + 25) )
      {
        v16 = a3;
        do
        {
          v17 = (__int64 *)v14;
          if ( v16 != *(__int64 **)(v14 + 16) )
            break;
          v14 = *(_QWORD *)(v14 + 8);
          v16 = v17;
        }
        while ( !*(_BYTE *)(v14 + 25) );
      }
    }
    else
    {
      v18 = *(__int64 **)v14;
      if ( !*(_BYTE *)(*(_QWORD *)v14 + 25LL) )
      {
        do
        {
          v14 = (__int64)v18;
          v18 = (__int64 *)*v18;
        }
        while ( !*((_BYTE *)v18 + 25) );
      }
    }
    if ( (__int64 **)v14 != v9 && v12 >= *(_QWORD *)(v14 + 40) )
    {
LABEL_30:
      *a2 = *(_QWORD *)sub_180071BAC((_DWORD)a1, (unsigned int)v21, 0, a4, (__int64)a5);
      return a2;
    }
    if ( v15 )
      sub_18006FC54(a1, a2, 0, a3, a4, a5);
    else
      sub_18006FC54(a1, a2, 1, (_QWORD *)v14, a4, a5);
    return a2;
  }
  else
  {
    try
    {
      sub_18006FC54(a1, a2, 1, *a1, a4, a5);
      result = a2;
    }
    catch ( ... )
    {
      sub_18007DFF4(v21[0], v20);
      throw;
    }
  }
  return result;
}
