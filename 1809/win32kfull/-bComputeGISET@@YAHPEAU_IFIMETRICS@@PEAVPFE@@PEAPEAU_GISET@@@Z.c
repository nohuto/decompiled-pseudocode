/*
 * XREFs of ?bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z @ 0x1C00CA8F8
 * Callers:
 *     ?bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C00CA4AC (-bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C00867CC (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C00868EC (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?cComputeGISET@@YAKPEBGKPEAU_GISET@@K@Z @ 0x1C00CADD4 (-cComputeGISET@@YAKPEBGKPEAU_GISET@@K@Z.c)
 */

__int64 __fastcall bComputeGISET(struct _IFIMETRICS *a1, struct PFE *a2, struct _GISET **a3)
{
  struct PDEV *v3; // rax
  unsigned int v6; // ebx
  struct _FD_GLYPHSET *v7; // rdi
  char v8; // r14
  PTRDIFF dpwszFamilyName; // esi
  _DWORD *v10; // rax
  unsigned __int64 v12; // rax
  size_t v13; // rcx
  void *v14; // rax
  void *v15; // rsi
  _WORD *v16; // r11
  unsigned int v17; // r9d
  __int64 v18; // rax
  HGLYPH *phg; // rcx
  USHORT cGlyphs; // r8
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // rdx
  unsigned int v23; // r15d
  struct _GISET *v24; // rax
  struct _GISET *v25; // rbp
  struct _FD_GLYPHSET *v26; // rax
  __int16 v27; // dx
  WCHAR wcLow; // ax
  unsigned __int16 v29; // cx
  __int64 *v30; // [rsp+58h] [rbp+10h] BYREF

  v30 = (__int64 *)a2;
  v3 = qword_1C031DE98;
  *a3 = 0LL;
  v6 = 1;
  v7 = 0LL;
  if ( *(struct PDEV **)(*(_QWORD *)a2 + 88LL) != v3 || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 8LL) )
  {
    v8 = 0;
    v26 = PFEOBJ::pfdg(&v30);
    v7 = v26;
    if ( !v26 )
      return 0;
    if ( (v26->flAccel & 6) == 0 )
      goto LABEL_30;
  }
  else
  {
    v8 = 1;
  }
  dpwszFamilyName = 0;
  if ( a1->cjIfiExtra > 8 )
    dpwszFamilyName = a1[1].dpwszFamilyName;
  if ( v8 )
  {
    if ( dpwszFamilyName )
      goto LABEL_8;
    return 0;
  }
  if ( dpwszFamilyName )
  {
LABEL_8:
    v10 = PALLOCMEM2(0xCuLL, 1936484167LL, 1);
    if ( v10 )
    {
      *v10 = dpwszFamilyName;
      v10[1] = 1;
      *((_WORD *)v10 + 4) = 0;
      *((_WORD *)v10 + 5) = dpwszFamilyName;
      *a3 = (struct _GISET *)v10;
      goto LABEL_10;
    }
    goto LABEL_42;
  }
  v12 = 2LL * v7->cGlyphsSupported;
  v13 = 0xFFFFFFFFLL;
  v6 = 0;
  if ( v12 <= 0xFFFFFFFF )
    v13 = (unsigned int)v12;
  LOBYTE(v6) = v12 <= 0xFFFFFFFF;
  if ( v12 > 0xFFFFFFFF || (v14 = PALLOCMEM2(v13, 1936484167LL, 1), (v15 = v14) == 0LL) )
  {
LABEL_42:
    v6 = 0;
    goto LABEL_10;
  }
  v16 = v14;
  v17 = 0;
  if ( !v7->cRuns )
    goto LABEL_24;
  while ( 1 )
  {
    v18 = v17;
    phg = v7->awcrun[v18].phg;
    cGlyphs = v7->awcrun[v18].cGlyphs;
    if ( phg )
    {
      v21 = cGlyphs;
      v22 = 0LL;
      if ( phg > &phg[cGlyphs] )
        v21 = 0LL;
      if ( v21 )
      {
        do
        {
          ++v22;
          *v16++ = *(_WORD *)phg++;
        }
        while ( v22 < v21 );
      }
      goto LABEL_23;
    }
    v27 = cGlyphs ? cGlyphs - 1 : -1;
    if ( !cGlyphs )
      break;
    wcLow = v7->awcrun[v18].wcLow;
    v29 = v27 + wcLow;
    while ( wcLow <= v29 )
      *v16 = wcLow++;
LABEL_23:
    if ( ++v17 >= v7->cRuns )
      goto LABEL_24;
  }
  v6 = 0;
LABEL_24:
  if ( v6 )
  {
    qsort(v15, v7->cGlyphsSupported, 2uLL, CompareRoutine);
    v23 = cComputeGISET((const unsigned __int16 *)v15, v7->cGlyphsSupported, 0LL, 0);
    v24 = (struct _GISET *)PALLOCMEM2(4 * v23 + 8, 1936484167LL, 1);
    v25 = v24;
    if ( v24 )
    {
      cComputeGISET((const unsigned __int16 *)v15, v7->cGlyphsSupported, v24, v23);
      *a3 = v25;
    }
    else
    {
      v6 = 0;
    }
  }
  Win32FreePool(v15);
LABEL_10:
  if ( !v8 )
LABEL_30:
    PFEOBJ::vFreepfdg(&v30);
  return v6;
}
