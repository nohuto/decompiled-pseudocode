/*
 * XREFs of sub_1800D1048 @ 0x1800D1048
 * Callers:
 *     sub_1800D1A24 @ 0x1800D1A24 (sub_1800D1A24.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5A8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180011714 @ 0x180011714 (sub_180011714.c)
 *     sub_1800675A8 @ 0x1800675A8 (sub_1800675A8.c)
 *     sub_1800B2B6C @ 0x1800B2B6C (sub_1800B2B6C.c)
 *     sub_1800D1354 @ 0x1800D1354 (sub_1800D1354.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800D1048(__int64 **a1, char *a2, char *a3)
{
  __int64 *v6; // rbx
  __int64 *v7; // r15
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r8
  __int64 v10; // rcx
  __int64 result; // rax
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  __int64 *v16; // rax
  __int64 *v17; // r8
  char *v18; // rcx
  char *v19; // r14
  _DWORD *v20; // rsi
  int v21; // eax
  __int64 *v22; // rbp
  _DWORD *v23; // rsi
  int v24; // eax
  __int64 *i; // rbx

  v6 = *a1;
  v7 = a1[1];
  v8 = (a3 - a2) / 48;
  v9 = ((char *)v7 - (char *)*a1) / 48;
  v10 = (char *)a1[2] - (char *)*a1;
  result = (unsigned __int64)((unsigned __int128)(v10 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
  v12 = v10 / 48;
  if ( v8 > v10 / 48 )
  {
    if ( v8 <= 0x555555555555555LL )
    {
      v13 = v12 >> 1;
      if ( v12 <= 0x555555555555555LL - (v12 >> 1) )
      {
        v14 = v13 + v12;
        if ( v13 + v12 < v8 )
          v14 = v8;
        v8 = v14;
      }
      if ( v6 )
      {
        if ( v6 != v7 )
        {
          do
          {
            sub_1800675A8(v6, 0);
            v6 += 6;
          }
          while ( v6 != v7 );
          v6 = *a1;
        }
        if ( 48 * v12 >= 0x1000 )
        {
          v15 = *(v6 - 1);
          if ( (unsigned __int64)v6 - v15 - 8 > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v15, 48 * v12 + 39);
            __debugbreak();
          }
          v6 = (__int64 *)*(v6 - 1);
        }
        j_j__o_free(v6);
      }
      *a1 = 0LL;
      a1[1] = 0LL;
      a1[2] = 0LL;
      if ( !v8 )
        goto LABEL_18;
      if ( v8 <= 0x555555555555555LL )
      {
        v16 = sub_1800B2B6C((__int64)a1, v8);
        *a1 = v16;
        a1[1] = v16;
        a1[2] = &(*a1)[6 * v8];
LABEL_18:
        v17 = *a1;
        v18 = a2;
LABEL_26:
        result = ((__int64 (__fastcall *)(char *, char *, __int64 *, __int64 **, _BYTE))sub_1800D1354)(
                   v18,
                   a3,
                   v17,
                   a1,
                   0);
        a1[1] = (__int64 *)result;
        return result;
      }
    }
    std::vector<void *>::_Xlen();
  }
  if ( v8 > v9 )
  {
    v19 = &a2[48 * v9];
    if ( a2 != v19 )
    {
      v20 = a2 + 36;
      do
      {
        sub_180011714(v6, (__int64 *)(v20 - 9));
        *((_DWORD *)v6 + 8) = *(v20 - 1);
        v21 = *v20;
        v20 += 12;
        *((_DWORD *)v6 + 9) = v21;
        *((_BYTE *)v6 + 40) = *((_BYTE *)v20 - 44);
        *((_DWORD *)v6 + 11) = *(v20 - 10);
        v6 += 6;
      }
      while ( v20 - 9 != (_DWORD *)v19 );
      v7 = a1[1];
    }
    v17 = v7;
    v18 = v19;
    goto LABEL_26;
  }
  v22 = &v6[6 * v8];
  if ( a2 != a3 )
  {
    v23 = a2 + 36;
    do
    {
      sub_180011714(v6, (__int64 *)(v23 - 9));
      *((_DWORD *)v6 + 8) = *(v23 - 1);
      v24 = *v23;
      v23 += 12;
      *((_DWORD *)v6 + 9) = v24;
      *((_BYTE *)v6 + 40) = *((_BYTE *)v23 - 44);
      *((_DWORD *)v6 + 11) = *(v23 - 10);
      result = (__int64)(v23 - 9);
      v6 += 6;
    }
    while ( v23 - 9 != (_DWORD *)a3 );
    v7 = a1[1];
  }
  for ( i = v22; i != v7; i += 6 )
    result = (__int64)sub_1800675A8(i, 0);
  a1[1] = v22;
  return result;
}
