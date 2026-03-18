/*
 * XREFs of bAddFlEntry @ 0x1C0080280
 * Callers:
 *     BuildAndLoadLinkedFontRoutine @ 0x1C007D690 (BuildAndLoadLinkedFontRoutine.c)
 *     GreEudcLoadLinkW @ 0x1C027BD1C (GreEudcLoadLinkW.c)
 * Callees:
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x1C007D340 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z.c)
 *     ?FindLinkedFontEntry@@YAPEAU_PFEDATA@@PEAU_LIST_ENTRY@@PEBG1@Z @ 0x1C007D448 (-FindLinkedFontEntry@@YAPEAU_PFEDATA@@PEAU_LIST_ENTRY@@PEBG1@Z.c)
 *     ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x1C007D5F8 (-FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z.c)
 *     ?ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z @ 0x1C007D760 (-ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z.c)
 *     ??1MALLOCOBJ@@QEAA@XZ @ 0x1C007D8A0 (--1MALLOCOBJ@@QEAA@XZ.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C007D8D0 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C0080080 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00824F8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C00CB1D8 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 */

__int64 __fastcall bAddFlEntry(
        const unsigned __int16 *a1,
        const unsigned __int16 *a2,
        int a3,
        int a4,
        struct _FLENTRY **a5)
{
  wchar_t *v6; // rbx
  unsigned int v7; // edi
  int v8; // r15d
  struct _FLENTRY *v9; // r14
  _DWORD *v10; // rsi
  struct _FLENTRY *BaseFontEntry; // rax
  struct _LIST_ENTRY *v12; // rcx
  unsigned int v13; // r13d
  unsigned __int16 *v14; // rax
  unsigned __int16 *v15; // r12
  PFTOBJ *v16; // rcx
  _DWORD *v17; // rax
  __int64 *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  struct _FLENTRY **v21; // rax
  __int64 i; // rcx
  bool v23; // zf
  _QWORD *v24; // r14
  _QWORD *v25; // rax
  __int64 v26; // rax
  unsigned int v28; // [rsp+48h] [rbp-41h] BYREF
  wchar_t *Str1; // [rsp+50h] [rbp-39h] BYREF
  struct _FONTHASH **v30; // [rsp+58h] [rbp-31h] BYREF
  struct PFF *v31; // [rsp+60h] [rbp-29h] BYREF
  _QWORD v32[2]; // [rsp+68h] [rbp-21h] BYREF
  _QWORD v33[2]; // [rsp+78h] [rbp-11h] BYREF
  char v34[8]; // [rsp+88h] [rbp-1h] BYREF
  wchar_t *v35; // [rsp+90h] [rbp+7h]
  int v36; // [rsp+98h] [rbp+Fh]
  int v37; // [rsp+9Ch] [rbp+13h]

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Str1, 0x450u);
  v6 = Str1;
  v7 = 0;
  if ( !Str1 )
    goto LABEL_42;
  v8 = 1;
  gbAnyLinkedFonts = 1;
  v9 = 0LL;
  v10 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  if ( (int)StringCchCopyW(v6 + 260, 0x124uLL, a2) < 0
    || !ParseFontLinkEntry(v6 + 260, (struct FontLinkData *)v34)
    || !(unsigned int)bAppendSysDirectory(v6, v6 + 260)
    || !_wcsicmp(v6, &Dst) )
  {
LABEL_42:
    v8 = 0;
    goto LABEL_43;
  }
  if ( off_1C030C480 != (_UNKNOWN *)&off_1C030C480 )
  {
    BaseFontEntry = FindBaseFontEntry(a1);
    v9 = BaseFontEntry;
    if ( BaseFontEntry )
    {
      v12 = (struct _LIST_ENTRY *)((char *)BaseFontEntry + 16);
      if ( v12->Flink != v12 )
      {
        if ( FindLinkedFontEntry(v12, v6, v35) )
          goto LABEL_43;
      }
    }
  }
  v30 = gpPFTPublic;
  v33[0] = v32;
  v33[1] = v35;
  v13 = a3 != 0 ? 8 : 10;
  if ( v35 && !_wcsicmp(v35, L"Segoe UI Symbol") )
    v13 |= 0x4000u;
  if ( v9 )
  {
    v15 = 0LL;
  }
  else
  {
    v14 = (unsigned __int16 *)PALLOCMEM2(0x70uLL, 1718382187LL, 0);
    v9 = (struct _FLENTRY *)v14;
    v15 = v14;
    if ( !v14 )
      goto LABEL_44;
    if ( (int)StringCchCopyW(v14 + 16, 0x21uLL, a1) < 0 )
      goto LABEL_18;
  }
  v17 = PALLOCMEM2(0x30uLL, 1718382187LL, 0);
  v10 = v17;
  if ( !v17 )
    goto LABEL_19;
  v17[6] = v36;
  v17[7] = v37;
  if ( !(unsigned int)PUBLIC_PFTOBJ::bLoadAFont((PUBLIC_PFTOBJ *)&v30, v6, &v28, v13, &v31, (struct _EUDCLOAD *)v33, 0) )
    goto LABEL_19;
  if ( v32[0] )
  {
    v18 = v32;
    v19 = 2LL;
    do
    {
      v20 = *v18++;
      *(_DWORD *)(v20 + 12) |= 0x200u;
      --v19;
    }
    while ( v19 );
    if ( v15 )
    {
      *(_QWORD *)((char *)v9 + 100) = 0LL;
      *((_QWORD *)v9 + 3) = (char *)v9 + 16;
      *((_QWORD *)v9 + 2) = (char *)v9 + 16;
      v21 = (struct _FLENTRY **)off_1C030C488;
      if ( *off_1C030C488 != (_UNKNOWN *)&off_1C030C480 )
        goto LABEL_40;
      ++dword_1C03177C8;
      *((_QWORD *)v9 + 1) = off_1C030C488;
      *(_QWORD *)v9 = &off_1C030C480;
      *v21 = v9;
      off_1C030C488 = (_UNKNOWN **)v9;
      if ( a5 )
        *a5 = v9;
      ++dword_1C03177CC;
    }
    for ( i = 0LL; i < 2; ++i )
      *(_QWORD *)&v10[2 * i + 8] = v32[i];
    v23 = v35 == 0LL;
    v10[4] = a3;
    v10[5] = !v23;
    ++*((_DWORD *)v9 + 25);
    ++*((_DWORD *)v9 + 26);
    v24 = (_QWORD *)((char *)v9 + 16);
    if ( a4 >= 0 )
    {
      v26 = *v24;
      if ( *(_QWORD **)(*v24 + 8LL) == v24 )
      {
        *(_QWORD *)v10 = v26;
        *((_QWORD *)v10 + 1) = v24;
        *(_QWORD *)(v26 + 8) = v10;
        *v24 = v10;
        goto LABEL_43;
      }
    }
    else
    {
      v25 = (_QWORD *)v24[1];
      if ( (_QWORD *)*v25 == v24 )
      {
        *(_QWORD *)v10 = v24;
        *((_QWORD *)v10 + 1) = v25;
        *v25 = v10;
        v24[1] = v10;
LABEL_43:
        v7 = v8;
        goto LABEL_44;
      }
    }
LABEL_40:
    __fastfail(3u);
  }
LABEL_18:
  PFTOBJ::bUnloadEUDCFont(v16, v6);
LABEL_19:
  if ( v15 )
    Win32FreePool(v15);
  if ( v10 )
    Win32FreePool(v10);
LABEL_44:
  MALLOCOBJ::~MALLOCOBJ((MALLOCOBJ *)&Str1);
  return v7;
}
