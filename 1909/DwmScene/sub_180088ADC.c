/*
 * XREFs of sub_180088ADC @ 0x180088ADC
 * Callers:
 *     sub_180088F4C @ 0x180088F4C (sub_180088F4C.c)
 * Callees:
 *     sub_180020BC0 @ 0x180020BC0 (sub_180020BC0.c)
 *     sub_180088850 @ 0x180088850 (sub_180088850.c)
 *     sub_180088D1C @ 0x180088D1C (sub_180088D1C.c)
 *     sub_18008D858 @ 0x18008D858 (sub_18008D858.c)
 */

_QWORD *__fastcall sub_180088ADC(__int64 ***a1, _QWORD *a2, __int64 *a3, __int64 a4, _QWORD *a5)
{
  __int64 **v9; // rsi
  _QWORD *result; // rax
  __int64 *v11; // rbx
  __int64 *v12; // rbx
  __int64 v13; // rbx
  __int64 *v14; // rax
  __int64 *v15; // rcx
  __int64 *v16; // rcx
  char v17; // [rsp+30h] [rbp-68h]
  __int64 *v18; // [rsp+38h] [rbp-60h] BYREF
  _QWORD *v19; // [rsp+40h] [rbp-58h]
  _QWORD v20[10]; // [rsp+48h] [rbp-50h] BYREF

  v20[2] = -2LL;
  v20[0] = a1;
  v19 = a5;
  if ( a1[1] )
  {
    v9 = *a1;
    if ( a3 == **a1 )
    {
      if ( (int)sub_18008D858(a4, a3 + 4) < 0 )
      {
        sub_180088850(a1, a2, 1, a3, a4, a5);
        return a2;
      }
      goto LABEL_29;
    }
    if ( a3 == (__int64 *)v9 )
    {
      v11 = v9[2];
      if ( (int)sub_18008D858(v11 + 4, a4) < 0 )
      {
        sub_180088850(a1, a2, 0, v11, a4, a5);
        return a2;
      }
      goto LABEL_29;
    }
    if ( (int)sub_18008D858(a4, a3 + 4) >= 0
      || (v18 = a3, sub_180020BC0(&v18), v12 = v18, (int)sub_18008D858(v18 + 4, a4) >= 0) )
    {
      if ( (int)sub_18008D858(a3 + 4, a4) >= 0 )
        goto LABEL_29;
      v13 = a3[2];
      v17 = *(_BYTE *)(v13 + 25);
      if ( v17 )
      {
        v13 = a3[1];
        if ( !*(_BYTE *)(v13 + 25) )
        {
          v14 = a3;
          do
          {
            v15 = (__int64 *)v13;
            if ( v14 != *(__int64 **)(v13 + 16) )
              break;
            v13 = *(_QWORD *)(v13 + 8);
            v14 = v15;
          }
          while ( !*(_BYTE *)(v13 + 25) );
        }
      }
      else
      {
        v16 = *(__int64 **)v13;
        if ( !*(_BYTE *)(*(_QWORD *)v13 + 25LL) )
        {
          do
          {
            v13 = (__int64)v16;
            v16 = (__int64 *)*v16;
          }
          while ( !*((_BYTE *)v16 + 25) );
        }
      }
      if ( (__int64 **)v13 != v9 && (int)sub_18008D858(a4, v13 + 32) >= 0 )
      {
LABEL_29:
        *a2 = *(_QWORD *)sub_180088D1C((_DWORD)a1, (unsigned int)v20, 0, a4, (__int64)a5);
        return a2;
      }
      if ( v17 )
        sub_180088850(a1, a2, 0, a3, a4, a5);
      else
        sub_180088850(a1, a2, 1, (_QWORD *)v13, a4, a5);
      return a2;
    }
    else
    {
      if ( *(_BYTE *)(v12[2] + 25) )
        sub_180088850(a1, a2, 0, v12, a4, a5);
      else
        sub_180088850(a1, a2, 1, a3, a4, a5);
      return a2;
    }
  }
  else
  {
    try
    {
      sub_180088850(a1, a2, 1, *a1, a4, a5);
      result = a2;
    }
    catch ( ... )
    {
      sub_18008D448(v20[0], v19);
      throw;
    }
  }
  return result;
}
