/*
 * XREFs of sub_180121230 @ 0x180121230
 * Callers:
 *     sub_180121AFC @ 0x180121AFC (sub_180121AFC.c)
 *     sub_180121BBC @ 0x180121BBC (sub_180121BBC.c)
 * Callees:
 *     sub_180020BC0 @ 0x180020BC0 (sub_180020BC0.c)
 *     sub_18008D858 @ 0x18008D858 (sub_18008D858.c)
 *     sub_180120DB0 @ 0x180120DB0 (sub_180120DB0.c)
 *     sub_1801215CC @ 0x1801215CC (sub_1801215CC.c)
 */

_QWORD *__fastcall sub_180121230(__int64 **a1, _QWORD *a2, __int64 *a3, char *a4, _QWORD *a5)
{
  __int64 *v9; // rsi
  _QWORD *result; // rax
  __int64 v11; // rbx
  char *v12; // rbx
  __int64 *v13; // rbx
  __int64 *v14; // rax
  __int64 *v15; // rcx
  __int64 *v16; // rcx
  char v17; // [rsp+30h] [rbp-68h]
  char *v18; // [rsp+38h] [rbp-60h] BYREF
  _QWORD *v19; // [rsp+40h] [rbp-58h]
  _QWORD v20[10]; // [rsp+48h] [rbp-50h] BYREF

  v20[2] = -2LL;
  v20[0] = a1;
  v19 = a5;
  if ( a1[1] )
  {
    v9 = *a1;
    if ( a3 == (__int64 *)**a1 )
    {
      if ( (int)sub_18008D858(a4, (__int64)(a3 + 4)) < 0 )
      {
        sub_180120DB0(a1, a2, 1, a3, (int)a4, a5);
        return a2;
      }
      goto LABEL_29;
    }
    if ( a3 == v9 )
    {
      v11 = v9[2];
      if ( (int)sub_18008D858((char *)(v11 + 32), (__int64)a4) < 0 )
      {
        sub_180120DB0(a1, a2, 0, (_QWORD *)v11, (int)a4, a5);
        return a2;
      }
      goto LABEL_29;
    }
    if ( (int)sub_18008D858(a4, (__int64)(a3 + 4)) >= 0
      || (v18 = (char *)a3, sub_180020BC0((__int64 **)&v18), v12 = v18, (int)sub_18008D858(v18 + 32, (__int64)a4) >= 0) )
    {
      if ( (int)sub_18008D858((char *)a3 + 32, (__int64)a4) >= 0 )
        goto LABEL_29;
      v13 = (__int64 *)a3[2];
      v17 = *((_BYTE *)v13 + 25);
      if ( v17 )
      {
        v13 = (__int64 *)a3[1];
        if ( !*((_BYTE *)v13 + 25) )
        {
          v14 = a3;
          do
          {
            v15 = v13;
            if ( v14 != (__int64 *)v13[2] )
              break;
            v13 = (__int64 *)v13[1];
            v14 = v15;
          }
          while ( !*((_BYTE *)v13 + 25) );
        }
      }
      else
      {
        v16 = (__int64 *)*v13;
        if ( !*(_BYTE *)(*v13 + 25) )
        {
          do
          {
            v13 = v16;
            v16 = (__int64 *)*v16;
          }
          while ( !*((_BYTE *)v16 + 25) );
        }
      }
      if ( v13 != v9 && (int)sub_18008D858(a4, (__int64)(v13 + 4)) >= 0 )
      {
LABEL_29:
        *a2 = *(_QWORD *)sub_1801215CC((_DWORD)a1, (unsigned int)v20, 0, (_DWORD)a4, (__int64)a5);
        return a2;
      }
      if ( v17 )
        sub_180120DB0(a1, a2, 0, a3, (int)a4, a5);
      else
        sub_180120DB0(a1, a2, 1, v13, (int)a4, a5);
      return a2;
    }
    else
    {
      if ( *(_BYTE *)(*((_QWORD *)v12 + 2) + 25LL) )
        sub_180120DB0(a1, a2, 0, v12, (int)a4, a5);
      else
        sub_180120DB0(a1, a2, 1, a3, (int)a4, a5);
      return a2;
    }
  }
  else
  {
    try
    {
      sub_180120DB0(a1, a2, 1, *a1, (int)a4, a5);
      result = a2;
    }
    catch ( ... )
    {
      sub_1801231E4(v20[0], v19);
      throw;
    }
  }
  return result;
}
