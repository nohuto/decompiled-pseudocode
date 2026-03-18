/*
 * XREFs of ?bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C00C6898
 * Callers:
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C00C6DA4 (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C02898D4 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 * Callees:
 *     ?bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C00C70C0 (-bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@.c)
 *     ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x1C00C9D48 (-FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z.c)
 *     ?bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z @ 0x1C00CCC08 (-bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z.c)
 *     ?IsCHSBaseFont@@YAHPEBGIPEAJ@Z @ 0x1C013CE18 (-IsCHSBaseFont@@YAHPEBGIPEAJ@Z.c)
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
  struct _EUDCLOAD *v8; // rbx
  __int64 v10; // rdx
  _QWORD *v12; // rdi
  unsigned int v13; // ebp
  const unsigned __int16 *v14; // rdx
  __int64 v15; // rbx
  unsigned int v16; // esi
  __int16 v17; // si
  __int64 v18; // rax
  __int64 v19; // rax
  const unsigned __int16 *v20; // rdi
  int v21; // r14d
  struct _FLENTRY *BaseFontEntry; // rsi
  __int64 v23; // rax
  __int64 v25; // [rsp+80h] [rbp+8h] BYREF

  v8 = a8;
  v10 = *(_QWORD *)this;
  v25 = *(_QWORD *)(*(_QWORD *)this + 224LL) + (a2 - 1) * *(_DWORD *)(*(_QWORD *)this + 216LL);
  if ( !v25 )
    return 0;
  v12 = a8 ? *(_QWORD **)a8 : 0LL;
  if ( !(unsigned int)PFEMEMOBJ::bInit(
                        (PFEMEMOBJ *)&v25,
                        (struct PFF *)v10,
                        a2,
                        a3,
                        a4,
                        a5,
                        a6,
                        *(_QWORD *)(v10 + 80) == 0LL,
                        a7,
                        a8 != 0LL) )
    return 0;
  v13 = 1;
  if ( v8 )
  {
    v14 = (const unsigned __int16 *)*((_QWORD *)v8 + 1);
    v15 = v25;
    if ( v14 )
    {
      if ( a2 != 1 )
      {
        v17 = *(_WORD *)(*(int *)(*(_QWORD *)(v25 + 32) + 16LL) + *(_QWORD *)(v25 + 32));
        if ( !PFEOBJ::bCheckFamilyName((PFEOBJ *)&v25, v14, 1, 0LL) )
          goto LABEL_19;
        v18 = 0LL;
        if ( v17 == 64 )
          v18 = 1LL;
        v12[v18] = v15;
        if ( v17 == 64 )
          goto LABEL_19;
        goto LABEL_18;
      }
    }
    else
    {
      v16 = a2 - 1;
      if ( v16 )
      {
        if ( v16 != 1 || *(_WORD *)(*(int *)(*(_QWORD *)(v25 + 32) + 16LL) + *(_QWORD *)(v25 + 32)) != 64 )
          goto LABEL_19;
        goto LABEL_18;
      }
    }
    *v12 = v25;
LABEL_18:
    v12[1] = v15;
    goto LABEL_19;
  }
  v15 = v25;
  v19 = *(_QWORD *)(v25 + 32);
  v20 = (const unsigned __int16 *)(v19 + *(int *)(v19 + 8));
  v21 = *(_DWORD *)(v19 + 48) & 0x8000000;
  BaseFontEntry = FindBaseFontEntry(v20);
  if ( BaseFontEntry )
    goto LABEL_33;
  if ( v21 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( v20[v23] );
    BaseFontEntry = FindBaseFontEntry(&v20[v23 + 1]);
    if ( BaseFontEntry )
    {
LABEL_33:
      if ( (unsigned int)IsCHSBaseFont(
                           *(const unsigned __int16 **)(*(_QWORD *)this + 24LL),
                           *(_DWORD *)(*(_QWORD *)this + 32LL),
                           (int *)(*(_QWORD *)this + 212LL)) )
        *(_DWORD *)(*(_QWORD *)this + 52LL) |= 0x8000u;
      *(_QWORD *)(v15 + 120) = BaseFontEntry;
      goto LABEL_28;
    }
  }
LABEL_19:
  *(_QWORD *)(v15 + 120) = 0LL;
LABEL_28:
  *(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 208LL))++ + 224) = v15;
  return v13;
}
