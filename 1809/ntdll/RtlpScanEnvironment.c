/*
 * XREFs of RtlpScanEnvironment @ 0x1800572F0
 * Callers:
 *     RtlQueryEnvironmentVariable @ 0x180056D90 (RtlQueryEnvironmentVariable.c)
 * Callees:
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

__int64 __fastcall RtlpScanEnvironment(
        char *a1,
        unsigned __int16 *a2,
        __int64 a3,
        _WORD *a4,
        unsigned __int64 a5,
        unsigned __int64 *a6,
        int a7)
{
  unsigned __int16 *v7; // rdi
  __int64 v10; // r12
  unsigned int v11; // r14d
  char *v12; // rbx
  unsigned __int16 *i; // r10
  unsigned __int16 v14; // r9
  int v15; // r11d
  unsigned __int16 v16; // r9
  int v17; // eax
  unsigned __int16 v18; // ax
  int v19; // r11d
  char *j; // r10
  __int64 v21; // rdx
  _DWORD *v22; // rdx
  __int64 v23; // rax
  char **v25; // r8
  unsigned __int64 v26; // r9
  bool v27; // zf
  _BYTE *v28; // r10
  unsigned __int64 v29; // rcx
  __int64 v30; // rbx

  v7 = &a2[a3];
  if ( !*(_WORD *)a1 )
  {
LABEL_23:
    if ( a7 )
      qword_180165FE0 = (__int64)a1;
    return 3221225728LL;
  }
  v10 = Nls844UnicodeUpcaseTable;
  v11 = 0;
  while ( 1 )
  {
    v12 = a1;
    for ( i = a2; i < v7; ++i )
    {
      v14 = *(_WORD *)a1;
      if ( !*(_WORD *)a1 )
        break;
      if ( v14 >= 0x61u )
        v15 = v14 > 0x7Au
            ? (unsigned __int16)(v14
                               + *(_WORD *)(v10
                                          + 2LL
                                          * ((v14 & 0xF)
                                           + (unsigned int)*(unsigned __int16 *)(v10
                                                                               + 2LL
                                                                               * (((v14 >> 4) & 0xF)
                                                                                + (unsigned int)*(unsigned __int16 *)(v10 + 2 * ((unsigned __int64)v14 >> 8)))))))
            : v14 - 32;
      else
        v15 = v14;
      v16 = *i;
      if ( *i >= 0x61u )
        v17 = v16 > 0x7Au
            ? (unsigned __int16)(v16
                               + *(_WORD *)(v10
                                          + 2LL
                                          * ((v16 & 0xF)
                                           + (unsigned int)*(unsigned __int16 *)(v10
                                                                               + 2LL
                                                                               * (((v16 >> 4) & 0xF)
                                                                                + (unsigned int)*(unsigned __int16 *)(v10 + 2 * ((unsigned __int64)v16 >> 8)))))))
            : v16 - 32;
      else
        v17 = v16;
      if ( v15 != v17 )
        break;
      a1 += 2;
    }
    if ( i == v7 && *(_WORD *)a1 == 61 )
    {
      v19 = 1;
      goto LABEL_16;
    }
    v18 = *(_WORD *)a1;
    v19 = 0;
    if ( *(_WORD *)a1 )
      break;
LABEL_22:
    a1 += 2;
    if ( !*(_WORD *)a1 )
      goto LABEL_23;
  }
  while ( v18 != 61 || a1 == v12 )
  {
    v18 = *((_WORD *)a1 + 1);
    a1 += 2;
    if ( !v18 )
      goto LABEL_22;
  }
LABEL_16:
  for ( j = a1; *(_WORD *)a1; a1 += 2 )
    ;
  if ( a7 )
  {
    v21 = (j - v12) >> 1;
    if ( (unsigned __int64)(v21 - 1) <= 0x13 )
    {
      v22 = (_DWORD *)((char *)&RtlpEnvironLookupTable + 56 * v21 - 56);
      v23 = (unsigned int)*v22;
      if ( (unsigned int)v23 < 3 )
      {
        v25 = (char **)(v22 + 2);
        v26 = (unsigned __int64)&v22[4 * v23 + 2];
        v27 = v22 + 2 == (_DWORD *)v26;
        if ( (unsigned __int64)(v22 + 2) < v26 )
        {
          do
          {
            if ( *v25 == v12 )
              break;
            v25 += 2;
          }
          while ( (unsigned __int64)v25 < v26 );
          v27 = v25 == (char **)v26;
        }
        if ( v27 )
        {
          *v25 = v12;
          v25[1] = a1 + 2;
          ++*v22;
          qword_180165FE0 = (__int64)(a1 + 2);
        }
      }
    }
  }
  if ( !v19 )
    goto LABEL_22;
  v28 = j + 2;
  v29 = (a1 - v28) >> 1;
  if ( a4 )
  {
    if ( v29 < a5 )
    {
      v30 = v29;
      *a6 = v29;
      memmove(a4, v28, 2 * v29);
      a4[v30] = 0;
      return v11;
    }
    if ( a5 )
      *a4 = 0;
  }
  v11 = -1073741789;
  *a6 = v29 + 1;
  return v11;
}
