/*
 * XREFs of ?bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C008BD04
 * Callers:
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C008BC0C (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C02B3B90 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 * Callees:
 *     ?bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C008BEF4 (-bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@.c)
 *     ?bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z @ 0x1C008D1F4 (-bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z.c)
 *     ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x1C008F430 (-FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z.c)
 *     ?IsCHSBaseFont@@YAHPEBGI@Z @ 0x1C01674C8 (-IsCHSBaseFont@@YAHPEBGI@Z.c)
 */

__int64 __fastcall PFFMEMOBJ::bAddEntry(
        PFFMEMOBJ *this,
        unsigned int a2,
        struct _FD_GLYPHSET *a3,
        unsigned __int64 a4,
        struct _IFIMETRICS *a5,
        unsigned __int64 a6,
        struct _UNIVERSAL_FONT_ID *a7,
        struct _EUDCLOAD *a8)
{
  __int64 v9; // rdx
  struct _EUDCLOAD *v11; // rbx
  unsigned int v12; // ebp
  _QWORD *v13; // rdi
  unsigned __int8 v14; // r15
  const unsigned __int16 *v15; // rdx
  __int64 v16; // rbx
  unsigned int v17; // esi
  __int16 v18; // si
  __int64 v19; // rax
  __int64 v20; // rax
  const unsigned __int16 *v21; // rdi
  int v22; // r15d
  struct _FLENTRY *BaseFontEntry; // rsi
  __int64 v24; // rax
  __int64 v26; // [rsp+80h] [rbp+8h] BYREF

  v9 = *(_QWORD *)this;
  v26 = *(_QWORD *)(*(_QWORD *)this + 216LL) + (a2 - 1) * *(_DWORD *)(*(_QWORD *)this + 212LL);
  if ( !v26 )
    return 0;
  v11 = a8;
  v12 = 1;
  if ( a8 )
  {
    v13 = *(_QWORD **)a8;
    v14 = 1;
  }
  else
  {
    v14 = 0;
    v13 = 0LL;
  }
  if ( !(unsigned int)PFEMEMOBJ::bInit(
                        (PFEMEMOBJ *)&v26,
                        (struct PFF *)v9,
                        a2,
                        a3,
                        a4,
                        a5,
                        a6,
                        *(_QWORD *)(v9 + 80) == 0LL,
                        a7,
                        v14) )
    return 0;
  if ( v14 )
  {
    v15 = (const unsigned __int16 *)*((_QWORD *)v11 + 1);
    v16 = v26;
    if ( v15 )
    {
      if ( a2 != 1 )
      {
        v18 = *(_WORD *)(*(int *)(*(_QWORD *)(v26 + 32) + 16LL) + *(_QWORD *)(v26 + 32));
        if ( !PFEOBJ::bCheckFamilyName((PFEOBJ *)&v26, v15, 1, 0LL) )
          goto LABEL_19;
        v19 = 0LL;
        if ( v18 == 64 )
          v19 = 1LL;
        v13[v19] = v16;
        if ( v18 == 64 )
          goto LABEL_19;
        goto LABEL_18;
      }
    }
    else
    {
      v17 = a2 - 1;
      if ( v17 )
      {
        if ( v17 != 1 || *(_WORD *)(*(int *)(*(_QWORD *)(v26 + 32) + 16LL) + *(_QWORD *)(v26 + 32)) != 64 )
          goto LABEL_19;
        goto LABEL_18;
      }
    }
    *v13 = v26;
LABEL_18:
    v13[1] = v16;
    goto LABEL_19;
  }
  v16 = v26;
  v20 = *(_QWORD *)(v26 + 32);
  v21 = (const unsigned __int16 *)(v20 + *(int *)(v20 + 8));
  v22 = *(_DWORD *)(v20 + 48) & 0x8000000;
  BaseFontEntry = FindBaseFontEntry(v21);
  if ( BaseFontEntry )
    goto LABEL_33;
  if ( v22 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( v21[v24] );
    BaseFontEntry = FindBaseFontEntry(&v21[v24 + 1]);
    if ( BaseFontEntry )
    {
LABEL_33:
      if ( (unsigned int)IsCHSBaseFont(
                           *(const unsigned __int16 **)(*(_QWORD *)this + 24LL),
                           *(_DWORD *)(*(_QWORD *)this + 32LL)) )
        *(_DWORD *)(*(_QWORD *)this + 52LL) |= 0x8000u;
      *(_QWORD *)(v16 + 120) = BaseFontEntry;
      goto LABEL_28;
    }
  }
LABEL_19:
  *(_QWORD *)(v16 + 120) = 0LL;
LABEL_28:
  *(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 208LL))++ + 216) = v16;
  return v12;
}
