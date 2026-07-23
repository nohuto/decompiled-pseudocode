/*
 * XREFs of SdbpGetProcessHistory @ 0x140923E10
 * Callers:
 *     SdbpInitializeSearchDBContext @ 0x14074D098 (SdbpInitializeSearchDBContext.c)
 * Callees:
 *     NLS_UPCASE @ 0x1400CFCA0 (NLS_UPCASE.c)
 *     _wcsnicmp @ 0x1401A0960 (_wcsnicmp.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     RtlGetNtSystemRoot @ 0x1406E97D0 (RtlGetNtSystemRoot.c)
 *     AslLogCallPrintf @ 0x14070AA34 (AslLogCallPrintf.c)
 *     AslAlloc @ 0x14070EABC (AslAlloc.c)
 */

_WORD *__fastcall SdbpGetProcessHistory(char *a1, _WORD *a2, _WORD *a3)
{
  unsigned __int64 v3; // rsi
  char *v4; // rdi
  __int64 v5; // r12
  __int64 v6; // r13
  char *v7; // rbx
  __int64 v8; // rcx
  PWSTR NtSystemRoot; // rax
  __int64 v10; // rbx
  char *v11; // rbp
  unsigned __int16 *v12; // r10
  unsigned __int16 v13; // r11
  unsigned __int16 v14; // ax
  __int16 v15; // r9
  int v16; // r8d
  char *v17; // rdx
  int v18; // ebp
  __int64 v19; // rbx
  SIZE_T v20; // rbx
  _WORD *v21; // r14
  _WORD *v22; // r15
  _WORD *result; // rax
  SIZE_T v24; // rbx
  PWSTR v25; // rax
  char *v26; // rsi
  unsigned __int16 *v27; // r10
  unsigned __int16 v28; // r11
  unsigned __int16 v29; // ax
  __int16 v30; // r9
  int v31; // r8d
  char *v32; // rdx
  __int64 v33; // rcx
  _WORD *v34; // r14
  _BYTE *v35; // rdx
  _WORD *v36; // rax
  _WORD *v37; // r14

  v3 = -1LL;
  v4 = a1;
  v5 = -1LL;
  do
    ++v5;
  while ( a2[v5] );
  v6 = -1LL;
  do
    ++v6;
  while ( a3[v6] );
  v7 = a1;
  if ( wcsnicmp(L"__PROCESS_HISTORY", L"systemroot", 0xAuLL) )
  {
    if ( v4 && *(_WORD *)v4 )
    {
      do
      {
        v11 = v7;
        v12 = L"__PROCESS_HISTORY";
        do
        {
          if ( !*(_WORD *)v7 )
            break;
          NLS_UPCASE(*v12);
          v14 = NLS_UPCASE(v13);
          if ( v14 != v15 )
            break;
          v7 += 2;
          ++v12;
        }
        while ( v12 < L"" );
        if ( v12 == L"" && *(_WORD *)v7 == 61 )
        {
          v16 = 1;
LABEL_18:
          v17 = v7;
          if ( *(_WORD *)v7 )
          {
            v8 = 0LL;
            do
            {
              if ( (__int64)(v8 & 0xFFFFFFFFFFFFFFFEuLL) >= 65534 )
                break;
              v7 += 2;
              v8 += 2LL;
            }
            while ( *(_WORD *)v7 );
          }
          if ( v16 )
          {
            v10 = (v7 - (v17 + 2)) >> 1;
            goto LABEL_34;
          }
        }
        else
        {
          v16 = 0;
          while ( *(_WORD *)v7 )
          {
            if ( *(_WORD *)v7 == 61 && v7 != v11 )
              goto LABEL_18;
            v7 += 2;
          }
        }
        v7 += 2;
      }
      while ( *(_WORD *)v7 );
    }
    v18 = -1073741568;
    v19 = (unsigned int)(v5 + v6 + 1);
  }
  else
  {
    NtSystemRoot = RtlGetNtSystemRoot();
    v10 = -1LL;
    do
      ++v10;
    while ( NtSystemRoot[v10] );
LABEL_34:
    v8 = (unsigned int)(v5 + v6 + 2);
    v18 = -1073741789;
    v19 = v8 + v10 + 1;
  }
  v20 = 2 * v19;
  v21 = AslAlloc(v8, v20);
  v22 = v21;
  if ( !v21 )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  *v21 = 0;
  if ( v18 != -1073741789 )
    goto LABEL_58;
  v24 = v20 >> 1;
  if ( !wcsnicmp(L"__PROCESS_HISTORY", L"systemroot", 0xAuLL) )
  {
    v25 = RtlGetNtSystemRoot();
    do
      ++v3;
    while ( v25[v3] );
    if ( v3 >= v24 )
    {
      if ( v24 )
        *v21 = 0;
      goto LABEL_58;
    }
    memmove(v21, v25, 2 * v3);
    v21[v3] = 0;
    goto LABEL_69;
  }
  if ( !v4 || !*(_WORD *)v4 )
    goto LABEL_58;
  while ( 1 )
  {
    v26 = v4;
    v27 = L"__PROCESS_HISTORY";
    do
    {
      if ( !*(_WORD *)v4 )
        break;
      NLS_UPCASE(*v27);
      v29 = NLS_UPCASE(v28);
      if ( v29 != v30 )
        break;
      v4 += 2;
      ++v27;
    }
    while ( v27 < L"" );
    v22 = v21;
    if ( v27 != L"" || *(_WORD *)v4 != 61 )
    {
      v31 = 0;
      while ( *(_WORD *)v4 )
      {
        if ( *(_WORD *)v4 == 61 && v4 != v26 )
          goto LABEL_52;
        v4 += 2;
      }
      goto LABEL_57;
    }
    v31 = 1;
LABEL_52:
    v32 = v4;
    if ( *(_WORD *)v4 )
    {
      v33 = 0LL;
      do
      {
        if ( (__int64)(v33 & 0xFFFFFFFFFFFFFFFEuLL) >= 65534 )
          break;
        v4 += 2;
        v33 += 2LL;
      }
      while ( *(_WORD *)v4 );
    }
    if ( v31 )
      break;
LABEL_57:
    v4 += 2;
    if ( !*(_WORD *)v4 )
      goto LABEL_58;
  }
  v35 = v32 + 2;
  v3 = (v4 - v35) >> 1;
  if ( v3 < v24 )
  {
    memmove(v21, v35, 2 * v3);
    v21[v3] = 0;
LABEL_69:
    v36 = &v22[v3];
    v37 = v36 - 1;
    if ( *(v36 - 1) != 59 )
    {
      v37 = &v22[v3];
      *v36 = 59;
    }
    v21 = v37 + 1;
    goto LABEL_58;
  }
  if ( v24 )
    *v21 = 0;
LABEL_58:
  memmove(v21, a2, 2LL * (unsigned int)v5);
  v34 = &v21[(unsigned int)v5];
  memmove(v34, a3, 2LL * (unsigned int)v6);
  result = v22;
  v34[(unsigned int)v6] = 0;
  return result;
}
