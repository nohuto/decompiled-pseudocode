/*
 * XREFs of ?bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z @ 0x1C00C81BC
 * Callers:
 *     ?bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C00C70C0 (-bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C00CCD0C (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C00CCDE0 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?cComputeGISET@@YAKPEAGKPEAU_GISET@@K@Z @ 0x1C00E5BC0 (-cComputeGISET@@YAKPEAGKPEAU_GISET@@K@Z.c)
 */

__int64 __fastcall bComputeGISET(struct _IFIMETRICS *a1, struct PFE *a2, struct _GISET **a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rcx
  unsigned int v7; // edi
  struct _FD_GLYPHSET *v8; // rsi
  struct PDEV *v9; // rdx
  char v10; // r14
  PTRDIFF dpwszFamilyName; // ebp
  __int64 v12; // rax
  unsigned __int64 v14; // rax
  size_t v15; // rcx
  __int64 v16; // rax
  void *v17; // rbp
  _WORD *v18; // r11
  unsigned int v19; // r9d
  __int64 v20; // rax
  HGLYPH *phg; // rcx
  USHORT cGlyphs; // r8
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // rdx
  unsigned int v25; // r15d
  struct _GISET *v26; // rax
  struct _GISET *v27; // r14
  struct _FD_GLYPHSET *v28; // rax
  __int16 v29; // dx
  WCHAR wcLow; // ax
  unsigned __int16 v31; // cx
  struct PFE *v32; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  v32 = a2;
  *a3 = 0LL;
  v5 = *(_QWORD *)a2;
  v7 = 1;
  v8 = 0LL;
  v9 = *(struct PDEV **)(*(_QWORD *)a2 + 88LL);
  if ( v9 == gppdevTrueType || v9 == qword_1C032FD38 && !*(_DWORD *)(*(_QWORD *)(v5 + 80) + 8LL) )
  {
    v10 = 1;
  }
  else
  {
    v10 = 0;
    v28 = PFEOBJ::pfdg((PFEOBJ *)&v32);
    v8 = v28;
    if ( !v28 )
      return v3;
    if ( (v28->flAccel & 6) == 0 )
      goto LABEL_30;
  }
  dpwszFamilyName = 0;
  if ( a1->cjIfiExtra > 8 )
    dpwszFamilyName = a1[1].dpwszFamilyName;
  if ( v10 )
  {
    if ( !dpwszFamilyName )
      return v3;
LABEL_9:
    v12 = PALLOCMEM2(0xCuLL);
    if ( v12 )
    {
      *(_DWORD *)v12 = dpwszFamilyName;
      *(_DWORD *)(v12 + 4) = 1;
      *(_WORD *)(v12 + 8) = 0;
      *(_WORD *)(v12 + 10) = dpwszFamilyName;
      *a3 = (struct _GISET *)v12;
      goto LABEL_11;
    }
LABEL_44:
    v7 = 0;
LABEL_11:
    if ( !v10 )
      goto LABEL_30;
    return v7;
  }
  if ( dpwszFamilyName )
    goto LABEL_9;
  v14 = 2LL * v8->cGlyphsSupported;
  v15 = 0xFFFFFFFFLL;
  v7 = 0;
  if ( v14 <= 0xFFFFFFFF )
    v15 = (unsigned int)v14;
  LOBYTE(v7) = v14 <= 0xFFFFFFFF;
  if ( v14 > 0xFFFFFFFF )
    goto LABEL_44;
  v16 = PALLOCMEM2(v15);
  v17 = (void *)v16;
  if ( !v16 )
    goto LABEL_44;
  v18 = (_WORD *)v16;
  v19 = 0;
  if ( !v8->cRuns )
    goto LABEL_26;
  while ( 1 )
  {
    v20 = v19;
    phg = v8->awcrun[v20].phg;
    cGlyphs = v8->awcrun[v20].cGlyphs;
    if ( phg )
    {
      v23 = cGlyphs;
      v24 = 0LL;
      if ( phg > &phg[cGlyphs] )
        v23 = 0LL;
      if ( v23 )
      {
        do
        {
          ++v24;
          *v18++ = *(_WORD *)phg++;
        }
        while ( v24 < v23 );
      }
      goto LABEL_25;
    }
    v29 = cGlyphs ? cGlyphs - 1 : -1;
    if ( !cGlyphs )
      break;
    wcLow = v8->awcrun[v20].wcLow;
    v31 = v29 + wcLow;
    while ( wcLow <= v31 )
      *v18 = wcLow++;
LABEL_25:
    if ( ++v19 >= v8->cRuns )
      goto LABEL_26;
  }
  v7 = 0;
LABEL_26:
  if ( v7 )
  {
    qsort(v17, v8->cGlyphsSupported, 2uLL, CompareRoutine);
    v25 = cComputeGISET((unsigned __int16 *)v17, v8->cGlyphsSupported, 0LL, 0);
    v26 = (struct _GISET *)PALLOCMEM2(4 * v25 + 8);
    v27 = v26;
    if ( v26 )
    {
      cComputeGISET((unsigned __int16 *)v17, v8->cGlyphsSupported, v26, v25);
      *a3 = v27;
    }
    else
    {
      v7 = 0;
    }
  }
  Win32FreePool(v17);
LABEL_30:
  PFEOBJ::vFreepfdg((PFEOBJ *)&v32);
  return v7;
}
