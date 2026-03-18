/*
 * XREFs of bAddFlEntry @ 0x1C00C9FBC
 * Callers:
 *     BuildAndLoadLinkedFontRoutine @ 0x1C00C9DE0 (BuildAndLoadLinkedFontRoutine.c)
 *     GreEudcLoadLinkW @ 0x1C0267E84 (GreEudcLoadLinkW.c)
 * Callees:
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z @ 0x1C003EBC0 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C00C8894 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ?FindLinkedFontEntry@@YAPEAU_PFEDATA@@PEAU_LIST_ENTRY@@PEBG1@Z @ 0x1C00C924C (-FindLinkedFontEntry@@YAPEAU_PFEDATA@@PEAU_LIST_ENTRY@@PEBG1@Z.c)
 *     ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x1C00C9D48 (-FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z.c)
 *     ?ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z @ 0x1C00C9EA4 (-ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C00CA2F0 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ??1MALLOCOBJ@@QEAA@XZ @ 0x1C00CAFD8 (--1MALLOCOBJ@@QEAA@XZ.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C00CB000 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00D0654 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall bAddFlEntry(const unsigned __int16 *a1, const unsigned __int16 *a2, int a3, int a4, __int64 *a5)
{
  wchar_t *v6; // rbx
  unsigned int v7; // edi
  int v8; // r15d
  __int64 v9; // r14
  __int64 v10; // rsi
  unsigned int v11; // r8d
  struct _FLENTRY *BaseFontEntry; // rax
  struct _LIST_ENTRY *v13; // rcx
  unsigned int v14; // r13d
  __int64 v15; // rax
  __int64 v16; // r12
  struct _FONTHASH **v17; // rcx
  __int64 v18; // rax
  __int64 *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 *v22; // rax
  __int64 i; // rcx
  bool v24; // zf
  __int64 *v25; // r14
  __int64 *v26; // rax
  __int64 v27; // rax
  unsigned int v29; // [rsp+38h] [rbp-41h] BYREF
  wchar_t *Str1; // [rsp+40h] [rbp-39h] BYREF
  struct _FONTHASH **v31; // [rsp+48h] [rbp-31h] BYREF
  struct PFF *v32; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v33[2]; // [rsp+58h] [rbp-21h] BYREF
  _QWORD v34[2]; // [rsp+68h] [rbp-11h] BYREF
  char v35[8]; // [rsp+78h] [rbp-1h] BYREF
  wchar_t *v36; // [rsp+80h] [rbp+7h]
  int v37; // [rsp+88h] [rbp+Fh]
  int v38; // [rsp+8Ch] [rbp+13h]

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Str1, 0x450u);
  v6 = Str1;
  v7 = 0;
  if ( !Str1 )
    goto LABEL_44;
  v8 = 1;
  gbAnyLinkedFonts = 1;
  v9 = 0LL;
  v10 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  if ( (int)StringCchCopyW(v6 + 260, 0x124uLL, a2) < 0
    || !ParseFontLinkEntry(v6 + 260, (struct FontLinkData *)v35)
    || !(unsigned int)bAppendSysDirectory(v6, v6 + 260, v11)
    || !_wcsicmp(v6, &Dst) )
  {
LABEL_44:
    v8 = 0;
LABEL_45:
    v7 = v8;
    goto LABEL_46;
  }
  if ( off_1C031C820 != (_UNKNOWN *)&off_1C031C820 )
  {
    BaseFontEntry = FindBaseFontEntry(a1);
    v9 = (__int64)BaseFontEntry;
    if ( BaseFontEntry )
    {
      v13 = (struct _LIST_ENTRY *)((char *)BaseFontEntry + 16);
      if ( v13->Flink != v13 )
      {
        if ( FindLinkedFontEntry(v13, v6, v36) )
          goto LABEL_45;
      }
    }
  }
  v31 = gpPFTPublic;
  v34[0] = v33;
  v34[1] = v36;
  v14 = a3 != 0 ? 8 : 10;
  if ( v36 && !_wcsicmp(v36, L"Segoe UI Symbol") )
    v14 |= 0x4000u;
  if ( v9 )
  {
    v16 = 0LL;
  }
  else
  {
    v15 = PALLOCMEM2(0x70uLL);
    v9 = v15;
    v16 = v15;
    if ( !v15 )
      goto LABEL_46;
    if ( (int)StringCchCopyW((unsigned __int16 *)(v15 + 32), 0x21uLL, a1) < 0 )
      goto LABEL_18;
  }
  v18 = PALLOCMEM2(0x30uLL);
  v10 = v18;
  if ( !v18 )
    goto LABEL_19;
  *(_DWORD *)(v18 + 24) = v37;
  *(_DWORD *)(v18 + 28) = v38;
  if ( !(unsigned int)PUBLIC_PFTOBJ::bLoadAFont((PUBLIC_PFTOBJ *)&v31, v6, &v29, v14, &v32, (struct _EUDCLOAD *)v34) )
    goto LABEL_19;
  if ( v33[0] )
  {
    v19 = v33;
    v20 = 2LL;
    do
    {
      v21 = *v19++;
      *(_DWORD *)(v21 + 12) |= 0x200u;
      --v20;
    }
    while ( v20 );
    if ( v16 )
    {
      *(_QWORD *)(v9 + 100) = 0LL;
      *(_QWORD *)(v9 + 24) = v9 + 16;
      *(_QWORD *)(v9 + 16) = v9 + 16;
      v22 = (__int64 *)off_1C031C828;
      if ( *off_1C031C828 != (_UNKNOWN *)&off_1C031C820 )
        __fastfail(3u);
      ++dword_1C0327108;
      *(_QWORD *)(v9 + 8) = off_1C031C828;
      *(_QWORD *)v9 = &off_1C031C820;
      *v22 = v9;
      off_1C031C828 = (_UNKNOWN **)v9;
      if ( a5 )
        *a5 = v9;
      ++dword_1C032710C;
    }
    for ( i = 0LL; i < 2; ++i )
      *(_QWORD *)(v10 + 8 * i + 32) = v33[i];
    v24 = v36 == 0LL;
    *(_DWORD *)(v10 + 16) = a3;
    *(_DWORD *)(v10 + 20) = !v24;
    ++*(_DWORD *)(v9 + 100);
    ++*(_DWORD *)(v9 + 104);
    v25 = (__int64 *)(v9 + 16);
    if ( a4 >= 0 )
    {
      v27 = *v25;
      if ( *(__int64 **)(*v25 + 8) != v25 )
        __fastfail(3u);
      *(_QWORD *)v10 = v27;
      *(_QWORD *)(v10 + 8) = v25;
      *(_QWORD *)(v27 + 8) = v10;
      *v25 = v10;
    }
    else
    {
      v26 = (__int64 *)v25[1];
      if ( (__int64 *)*v26 != v25 )
        __fastfail(3u);
      *(_QWORD *)v10 = v25;
      *(_QWORD *)(v10 + 8) = v26;
      *v26 = v10;
      v25[1] = v10;
    }
    goto LABEL_45;
  }
LABEL_18:
  PFTOBJ::bUnloadEUDCFont(v17, v6);
LABEL_19:
  if ( v16 )
    Win32FreePool(v16);
  if ( v10 )
    Win32FreePool(v10);
LABEL_46:
  MALLOCOBJ::~MALLOCOBJ((MALLOCOBJ *)&Str1);
  return v7;
}
