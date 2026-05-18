/*
 * XREFs of sub_18007155C @ 0x18007155C
 * Callers:
 *     sub_180072D50 @ 0x180072D50 (sub_180072D50.c)
 * Callees:
 *     sub_180020BC0 @ 0x180020BC0 (sub_180020BC0.c)
 *     sub_18007027C @ 0x18007027C (sub_18007027C.c)
 *     sub_1800720C0 @ 0x1800720C0 (sub_1800720C0.c)
 */

_QWORD *__fastcall sub_18007155C(__int64 ***a1, _QWORD *a2, __int64 *a3, unsigned __int64 *a4, _QWORD *a5)
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
  __int64 *v19; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v20; // [rsp+38h] [rbp-50h]
  _QWORD v21[4]; // [rsp+40h] [rbp-48h] BYREF

  v21[2] = -2LL;
  v21[0] = a1;
  v20 = a5;
  if ( a1[1] )
  {
    v9 = *a1;
    if ( a3 == **a1 )
    {
      if ( *a4 < a3[4] )
      {
        sub_18007027C(a1, a2, 1, a3, (int)a4, a5);
        return a2;
      }
      goto LABEL_30;
    }
    if ( a3 == (__int64 *)v9 )
    {
      v11 = v9[2];
      if ( v11[4] < *a4 )
      {
        sub_18007027C(a1, a2, 0, v11, (int)a4, a5);
        return a2;
      }
      goto LABEL_30;
    }
    v12 = *a4;
    v13 = a3[4] < *a4;
    if ( a3[4] > *a4 )
    {
      v19 = a3;
      sub_180020BC0(&v19);
      if ( v19[4] < v12 )
      {
        if ( *(_BYTE *)(v19[2] + 25) )
          sub_18007027C(a1, a2, 0, v19, (int)a4, a5);
        else
          sub_18007027C(a1, a2, 1, a3, (int)a4, a5);
        return a2;
      }
      v13 = a3[4] < v12;
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
    if ( (__int64 **)v14 != v9 && v12 >= *(_QWORD *)(v14 + 32) )
    {
LABEL_30:
      *a2 = *(_QWORD *)sub_1800720C0((_DWORD)a1, (unsigned int)v21, 0, (_DWORD)a4, (__int64)a5);
      return a2;
    }
    if ( v15 )
      sub_18007027C(a1, a2, 0, a3, (int)a4, a5);
    else
      sub_18007027C(a1, a2, 1, (_QWORD *)v14, (int)a4, a5);
    return a2;
  }
  else
  {
    try
    {
      sub_18007027C(a1, a2, 1, *a1, (int)a4, a5);
      result = a2;
    }
    catch ( ... )
    {
      sub_18007E170(v21[0], v20);
      throw;
    }
  }
  return result;
}
