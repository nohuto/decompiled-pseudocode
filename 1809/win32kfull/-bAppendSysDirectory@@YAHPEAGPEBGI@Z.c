/*
 * XREFs of ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C007D8D0
 * Callers:
 *     bAddFlEntry @ 0x1C0080280 (bAddFlEntry.c)
 *     bAddAllFlEntry @ 0x1C00C6838 (bAddAllFlEntry.c)
 *     vInitFontsDirectoryNameInformation @ 0x1C01340A0 (vInitFontsDirectoryNameInformation.c)
 *     FontAssocDefaultRoutine @ 0x1C027BB40 (FontAssocDefaultRoutine.c)
 *     GreEudcLoadLinkW @ 0x1C027BD1C (GreEudcLoadLinkW.c)
 *     bDeleteFlEntry @ 0x1C027C558 (bDeleteFlEntry.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C007DA74 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     cCapString @ 0x1C007FB68 (cCapString.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C0080080 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00824F8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 */

__int64 __fastcall bAppendSysDirectory(unsigned __int16 *a1, const unsigned __int16 *a2)
{
  unsigned __int16 *v4; // rbx
  __int64 v5; // r9
  __int64 v6; // rsi
  unsigned int v7; // edi
  int v8; // r9d
  char *v9; // r8
  __int64 v10; // rdx
  unsigned __int16 *v11; // rax
  __int64 v12; // rcx
  const unsigned __int16 *NtSystemRoot; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int16 *v16; // rax
  int v17; // r10d
  char *v18; // rdx
  __int64 v19; // rax
  signed __int64 v20; // r9
  __int16 v21; // r8
  __int64 v22; // r9
  wchar_t *v24; // rax
  _WORD *v25; // rdx
  __int64 v26; // r8
  unsigned __int64 v28; // rdx
  unsigned __int16 *v29; // rcx
  unsigned __int16 v30; // ax
  unsigned __int16 *v31; // rax
  unsigned __int16 *v32; // [rsp+58h] [rbp+20h] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v32, 0x208u);
  v4 = v32;
  if ( !v32 )
    goto LABEL_26;
  v6 = 260LL;
  if ( wcschr(a2, 0x5Cu) )
  {
    cCapString(a1, a2, 260LL, v5);
    v24 = wcsstr(a1, L"%SYSTEMROOT%");
    if ( v24 )
    {
      *v24 = 92;
      v25 = v24 + 12;
      v26 = -1LL;
      while ( v25[++v26] != 0 )
        ;
      memmove(v24 + 11, v25, 2 * v26 + 2);
      goto LABEL_22;
    }
    if ( a1[1] != 58 || a1[2] != 92 )
      goto LABEL_22;
    if ( (int)StringCchCopyW(v4, 0x104uLL, a1) >= 0 )
    {
      v29 = a1;
      do
      {
        if ( v6 == -2147483386 )
          break;
        v30 = *(unsigned __int16 *)((char *)v29 + (char *)L"\\??\\" - (char *)a1);
        if ( !v30 )
          break;
        *v29++ = v30;
        --v6;
      }
      while ( v6 );
      v31 = v29 - 1;
      if ( v6 )
        v31 = v29;
      v7 = 0;
      *v31 = 0;
      if ( v6 && (int)StringCchCatW(a1, v28, v4) >= 0 )
        goto LABEL_22;
      goto LABEL_23;
    }
LABEL_26:
    v7 = 0;
    goto LABEL_23;
  }
  v7 = 0;
  v8 = 0;
  v9 = (char *)((char *)L"\\??\\" - (char *)v4);
  v10 = 260LL;
  v11 = v4;
  while ( 1 )
  {
    v12 = v10 + 2147483386;
    if ( v10 == -2147483386 )
      break;
    v12 = *(unsigned __int16 *)((char *)v11 + (_QWORD)v9);
    if ( !(_WORD)v12 )
      break;
    *v11++ = v12;
    if ( !--v10 )
    {
      --v11;
      v8 = -2147024774;
      break;
    }
  }
  *v11 = 0;
  if ( v8 >= 0 )
  {
    NtSystemRoot = (const unsigned __int16 *)RtlGetNtSystemRoot(v12, v10, v9);
    if ( (int)StringCchCatW(v4, v14, NtSystemRoot) >= 0 )
    {
      v15 = 260LL;
      v16 = v4;
      while ( *v16 )
      {
        ++v16;
        if ( !--v15 )
          goto LABEL_23;
      }
      v17 = 0;
      v18 = (char *)&v4[260 - v15];
      v19 = 2147483646LL;
      v20 = (char *)L"\\fonts\\" - v18;
      while ( v19 )
      {
        v21 = *(_WORD *)&v18[v20];
        if ( !v21 )
          break;
        *(_WORD *)v18 = v21;
        --v19;
        v18 += 2;
        if ( !--v15 )
        {
          v18 -= 2;
          v17 = -2147024774;
          break;
        }
      }
      *(_WORD *)v18 = 0;
      if ( v17 >= 0 && (int)StringCchCatW(v4, (unsigned __int64)v18, a2) >= 0 )
      {
        cCapString(a1, v4, 260LL, v22);
LABEL_22:
        v7 = 1;
      }
    }
  }
LABEL_23:
  if ( v4 )
    Win32FreePool(v4);
  return v7;
}
