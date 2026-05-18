/*
 * XREFs of sub_1800711E4 @ 0x1800711E4
 * Callers:
 *     sub_180072B98 @ 0x180072B98 (sub_180072B98.c)
 * Callees:
 *     sub_180020AB0 @ 0x180020AB0 (sub_180020AB0.c)
 *     sub_180032498 @ 0x180032498 (sub_180032498.c)
 *     sub_180071E48 @ 0x180071E48 (sub_180071E48.c)
 *     __std_type_info_compare @ 0x180125AA2 (__std_type_info_compare.c)
 */

_QWORD *__fastcall sub_1800711E4(__int64 **a1, _QWORD *a2, __int64 *a3, _QWORD *a4, _QWORD *a5)
{
  __int64 *v9; // rcx
  _QWORD *result; // rax
  __int64 *v11; // rbx
  __int64 v12; // rbx
  __int64 *v13; // rax
  __int64 *v14; // rcx
  __int64 *v15; // rcx
  __int64 *v16; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v17; // [rsp+38h] [rbp-50h]
  __int64 v18[9]; // [rsp+40h] [rbp-48h] BYREF

  v18[2] = -2LL;
  v18[0] = (__int64)a1;
  v17 = a5;
  if ( a1[1] )
  {
    v9 = *a1;
    if ( a3 == (__int64 *)*v9 )
    {
      if ( (int)_std_type_info_compare(*a4 + 8LL, a3[4] + 8) < 0 )
      {
        sub_180032498(a1, a2, 1, a3, (int)a4, a5);
        return a2;
      }
      goto LABEL_29;
    }
    if ( a3 == v9 )
    {
      if ( (int)_std_type_info_compare(*(_QWORD *)(v9[2] + 32) + 8LL, *a4 + 8LL) < 0 )
      {
        sub_180032498(a1, a2, 0, (_QWORD *)(*a1)[2], (int)a4, a5);
        return a2;
      }
      goto LABEL_29;
    }
    if ( (int)_std_type_info_compare(*a4 + 8LL, a3[4] + 8) >= 0
      || (v16 = a3, sub_180020AB0(&v16), v11 = v16, (int)_std_type_info_compare(v16[4] + 8, *a4 + 8LL) >= 0) )
    {
      if ( (int)_std_type_info_compare(a3[4] + 8, *a4 + 8LL) >= 0 )
        goto LABEL_29;
      v12 = a3[2];
      if ( *(_BYTE *)(v12 + 25) )
      {
        v12 = a3[1];
        if ( !*(_BYTE *)(v12 + 25) )
        {
          v13 = a3;
          do
          {
            v14 = (__int64 *)v12;
            if ( v13 != *(__int64 **)(v12 + 16) )
              break;
            v12 = *(_QWORD *)(v12 + 8);
            v13 = v14;
          }
          while ( !*(_BYTE *)(v12 + 25) );
        }
      }
      else
      {
        v15 = *(__int64 **)v12;
        if ( !*(_BYTE *)(*(_QWORD *)v12 + 25LL) )
        {
          do
          {
            v12 = (__int64)v15;
            v15 = (__int64 *)*v15;
          }
          while ( !*((_BYTE *)v15 + 25) );
        }
      }
      if ( (__int64 *)v12 != *a1 && (int)_std_type_info_compare(*a4 + 8LL, *(_QWORD *)(v12 + 32) + 8LL) >= 0 )
      {
LABEL_29:
        *a2 = *(_QWORD *)sub_180071E48((_DWORD)a1, (unsigned int)v18, 0, (_DWORD)a4, (__int64)a5);
        return a2;
      }
      if ( *(_BYTE *)(a3[2] + 25) )
        sub_180032498(a1, a2, 0, a3, (int)a4, a5);
      else
        sub_180032498(a1, a2, 1, (_QWORD *)v12, (int)a4, a5);
      return a2;
    }
    else
    {
      if ( *(_BYTE *)(v11[2] + 25) )
        sub_180032498(a1, a2, 0, v11, (int)a4, a5);
      else
        sub_180032498(a1, a2, 1, a3, (int)a4, a5);
      return a2;
    }
  }
  else
  {
    try
    {
      sub_180032498(a1, a2, 1, *a1, (int)a4, a5);
      result = a2;
    }
    catch ( ... )
    {
      sub_180038CA4(v18[0], (__int64)v17);
      throw;
    }
  }
  return result;
}
