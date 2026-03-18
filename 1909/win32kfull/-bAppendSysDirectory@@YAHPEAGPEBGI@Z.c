/*
 * XREFs of ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C008F0B4
 * Callers:
 *     bAddFlEntry @ 0x1C008ED30 (bAddFlEntry.c)
 *     vInitFontsDirectoryNameInformation @ 0x1C0118B50 (vInitFontsDirectoryNameInformation.c)
 *     bAddAllFlEntry @ 0x1C011CDF4 (bAddAllFlEntry.c)
 *     FontAssocDefaultRoutine @ 0x1C0291880 (FontAssocDefaultRoutine.c)
 *     GreEudcLoadLinkW @ 0x1C0291A48 (GreEudcLoadLinkW.c)
 *     bDeleteFlEntry @ 0x1C02922CC (bDeleteFlEntry.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C008F250 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     cCapString @ 0x1C0093C18 (cCapString.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C0095D40 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C009AF84 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 */

__int64 __fastcall bAppendSysDirectory(unsigned __int16 *a1, const unsigned __int16 *a2)
{
  unsigned __int16 *v4; // rbx
  __int64 v5; // r9
  unsigned int v6; // ebp
  __int64 v7; // rdi
  __int64 v8; // r8
  char *v9; // rdx
  unsigned __int16 *v10; // rcx
  unsigned __int16 v11; // ax
  unsigned __int16 *v12; // rax
  const unsigned __int16 *NtSystemRoot; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int16 *v16; // rcx
  unsigned __int64 v17; // rdx
  char *v18; // r8
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  signed __int64 v21; // r9
  char *v22; // rax
  __int64 v23; // r9
  wchar_t *v25; // rax
  _WORD *v26; // rdx
  __int64 v27; // r8
  unsigned __int16 *v28; // rcx
  unsigned __int64 v29; // rdx
  unsigned __int16 v30; // ax
  unsigned __int16 *v31; // rax
  unsigned __int16 *v32; // [rsp+68h] [rbp+20h] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v32, 0x208u);
  v4 = v32;
  if ( !v32 )
    goto LABEL_30;
  v6 = 1;
  v7 = 260LL;
  if ( !wcschr(a2, 0x5Cu) )
  {
    v8 = 260LL;
    v9 = (char *)((char *)L"\\??\\" - (char *)v4);
    v10 = v4;
    do
    {
      if ( v8 == -2147483386 )
        break;
      v11 = *(unsigned __int16 *)((char *)v10 + (_QWORD)v9);
      if ( !v11 )
        break;
      *v10++ = v11;
      --v8;
    }
    while ( v8 );
    v12 = v10 - 1;
    if ( v8 )
      v12 = v10;
    *v12 = 0;
    if ( v8 )
    {
      NtSystemRoot = (const unsigned __int16 *)RtlGetNtSystemRoot(v10, v9);
      if ( (int)StringCchCatW(v4, v14, NtSystemRoot) >= 0 )
      {
        v15 = 260LL;
        v16 = v4;
        do
        {
          if ( !*v16 )
            break;
          ++v16;
          --v15;
        }
        while ( v15 );
        v17 = v15 ? 260 - v15 : 0LL;
        if ( v15 )
        {
          v18 = (char *)&v4[v17];
          v19 = 260 - v17;
          if ( v17 != 260 )
          {
            v20 = 2147483646LL;
            v21 = (char *)L"\\fonts\\" - v18;
            do
            {
              if ( !v20 )
                break;
              v17 = *(unsigned __int16 *)&v18[v21];
              if ( !(_WORD)v17 )
                break;
              *(_WORD *)v18 = v17;
              --v20;
              v18 += 2;
              --v19;
            }
            while ( v19 );
          }
          v22 = v18 - 2;
          if ( v19 )
            v22 = v18;
          *(_WORD *)v22 = 0;
          if ( v19 )
          {
            if ( (int)StringCchCatW(v4, v17, a2) >= 0 )
            {
              cCapString(a1, v4, 260LL, v23);
              goto LABEL_27;
            }
          }
        }
      }
    }
    goto LABEL_30;
  }
  cCapString(a1, a2, 260LL, v5);
  v25 = wcsstr(a1, L"%SYSTEMROOT%");
  if ( v25 )
  {
    *v25 = 92;
    v26 = v25 + 12;
    v27 = -1LL;
    do
      ++v27;
    while ( v26[v27] );
    memmove(v25 + 11, v26, 2 * v27 + 2);
    goto LABEL_27;
  }
  if ( *(_DWORD *)(a1 + 1) == 6029370 )
  {
    if ( (int)StringCchCopyW(v4, 0x104uLL, a1) < 0 )
      goto LABEL_30;
    v28 = a1;
    v29 = (char *)L"\\??\\" - (char *)a1;
    do
    {
      if ( v7 == -2147483386 )
        break;
      v30 = *(unsigned __int16 *)((char *)v28 + v29);
      if ( !v30 )
        break;
      *v28++ = v30;
      --v7;
    }
    while ( v7 );
    v31 = v28 - 1;
    if ( v7 )
      v31 = v28;
    *v31 = 0;
    if ( !v7 || (int)StringCchCatW(a1, v29, v4) < 0 )
LABEL_30:
      v6 = 0;
  }
LABEL_27:
  if ( v4 )
    Win32FreePool(v4);
  return v6;
}
