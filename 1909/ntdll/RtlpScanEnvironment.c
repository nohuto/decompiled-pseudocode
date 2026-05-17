/*
 * XREFs of RtlpScanEnvironment @ 0x18001A0D8
 * Callers:
 *     RtlQueryEnvironmentVariable @ 0x18001A270 (RtlQueryEnvironmentVariable.c)
 * Callees:
 *     NLS_UPCASE @ 0x18001A234 (NLS_UPCASE.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 */

__int64 __fastcall RtlpScanEnvironment(
        char *a1,
        unsigned __int64 a2,
        __int64 a3,
        _WORD *a4,
        unsigned __int64 a5,
        unsigned __int64 *a6,
        int a7)
{
  unsigned int v7; // edi
  unsigned __int64 v8; // rbp
  char *v11; // r10
  char *v12; // rbx
  unsigned __int64 i; // r11
  unsigned __int16 *v14; // r11
  __int16 v15; // ax
  __int16 v16; // r9
  int v17; // r11d
  char *v18; // rdx
  __int64 v19; // rax
  _BYTE *v21; // rdx
  unsigned __int64 v22; // r10
  __int64 v23; // rbx
  __int64 v24; // rcx
  _DWORD *v25; // r8
  char **v26; // rcx
  char **v27; // r9

  v7 = 0;
  v8 = a2 + 2 * a3;
  v11 = a1;
  if ( !*(_WORD *)a1 )
  {
LABEL_18:
    v19 = qword_180165FE0;
    if ( a7 )
      v19 = (__int64)v11;
    qword_180165FE0 = v19;
    return 3221225728LL;
  }
  while ( 1 )
  {
    v12 = v11;
    for ( i = a2; i < v8; i += 2LL )
    {
      if ( !*(_WORD *)v11 )
        break;
      NLS_UPCASE(*(unsigned __int16 *)v11);
      v15 = NLS_UPCASE(*v14);
      if ( v16 != v15 )
        break;
      v11 += 2;
    }
    if ( i != v8 || *(_WORD *)v11 != 61 )
    {
      v17 = 0;
      while ( *(_WORD *)v11 )
      {
        if ( *(_WORD *)v11 == 61 && v11 != v12 )
          goto LABEL_12;
        v11 += 2;
      }
      goto LABEL_17;
    }
    v17 = 1;
LABEL_12:
    v18 = v11;
    while ( *(_WORD *)v11 )
      v11 += 2;
    if ( a7 )
    {
      v24 = (v18 - v12) >> 1;
      if ( (unsigned __int64)(v24 - 1) <= 0x13 )
      {
        v25 = (_DWORD *)((char *)&RtlpEnvironLookupTable + 56 * v24 - 56);
        if ( *v25 < 3u )
        {
          v26 = (char **)(v25 + 2);
          v27 = (char **)&v25[4 * *v25 + 2];
          while ( v26 < v27 && *v26 != v12 )
            v26 += 2;
          if ( v26 == v27 )
          {
            *v26 = v12;
            v26[1] = v11 + 2;
            ++*v25;
            qword_180165FE0 = (__int64)(v11 + 2);
          }
        }
      }
    }
    if ( v17 )
      break;
LABEL_17:
    v11 += 2;
    if ( !*(_WORD *)v11 )
      goto LABEL_18;
  }
  v21 = v18 + 2;
  v22 = (v11 - v21) >> 1;
  if ( a4 )
  {
    if ( v22 < a5 )
    {
      v23 = v22;
      *a6 = v22;
      memmove(a4, v21, 2 * v22);
      a4[v23] = 0;
      return v7;
    }
    if ( a5 )
      *a4 = 0;
  }
  v7 = -1073741789;
  *a6 = v22 + 1;
  return v7;
}
