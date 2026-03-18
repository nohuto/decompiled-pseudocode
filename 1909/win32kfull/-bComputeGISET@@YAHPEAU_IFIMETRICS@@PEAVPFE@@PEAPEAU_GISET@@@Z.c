/*
 * XREFs of ?bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z @ 0x1C008C340
 * Callers:
 *     ?bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C008BEF4 (-bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@.c)
 * Callees:
 *     ?cComputeGISET@@YAKPEBGKPEAU_GISET@@K@Z @ 0x1C0088E28 (-cComputeGISET@@YAKPEBGKPEAU_GISET@@K@Z.c)
 *     PALLOCMEM2 @ 0x1C0095D7C (PALLOCMEM2.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C0097390 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C00982E0 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     EngUnmapFontFileFD @ 0x1C0102610 (EngUnmapFontFileFD.c)
 *     ??0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z @ 0x1C011E100 (--0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z.c)
 */

__int64 __fastcall bComputeGISET(struct _IFIMETRICS *a1, struct PFE *a2, struct _GISET **a3)
{
  unsigned int v3; // ebx
  struct _GISET **v4; // r14
  unsigned int v6; // ebp
  struct _FD_GLYPHSET *v7; // rdi
  char v8; // r12
  PTRDIFF dpwszFamilyName; // esi
  __int64 v10; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  void *v14; // rsi
  _WORD *v15; // r8
  ULONG j; // edx
  __int64 v17; // rax
  HGLYPH *phg; // rcx
  USHORT cGlyphs; // r9
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // r9
  int v22; // r15d
  struct _GISET *v23; // rax
  struct _GISET *v24; // r14
  __int64 v25; // r14
  unsigned int v26; // r15d
  unsigned int i; // esi
  WCHAR wcLow; // ax
  WCHAR v29; // cx
  __int64 v30; // [rsp+20h] [rbp-68h] BYREF
  __int64 v31; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v32; // [rsp+40h] [rbp-48h]
  struct PFE *v33; // [rsp+98h] [rbp+10h] BYREF
  struct _GISET **v34; // [rsp+A0h] [rbp+18h]

  v34 = a3;
  v3 = 0;
  v33 = a2;
  *a3 = 0LL;
  v4 = a3;
  v30 = *(_QWORD *)a2;
  v6 = 1;
  v7 = 0LL;
  if ( *(struct PDEV **)(v30 + 88) != qword_1C0330E80 || *(_DWORD *)(*(_QWORD *)(v30 + 80) + 8LL) )
  {
    v8 = 0;
    v7 = PFEOBJ::pfdg((PFEOBJ *)&v33);
    if ( !v7 )
    {
      UmfdClientSideFileViewMapper::UmfdClientSideFileViewMapper(
        (UmfdClientSideFileViewMapper *)&v31,
        (struct PFFOBJ *)&v30);
      v25 = v31;
      v26 = v32;
      if ( v32 == *(_DWORD *)(v31 + 36) )
        v7 = PFEOBJ::pfdg((PFEOBJ *)&v33);
      for ( i = 0; i < v26; EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)(v25 + 200) + 8LL * i++)) )
      {
        if ( i >= *(_DWORD *)(v25 + 36) )
          break;
      }
      if ( !v7 )
        return v3;
      v4 = v34;
    }
    if ( (v7->flAccel & 6) == 0 )
      goto LABEL_28;
  }
  else
  {
    v8 = 1;
  }
  dpwszFamilyName = 0;
  if ( a1->cjIfiExtra > 8 )
    dpwszFamilyName = a1[1].dpwszFamilyName;
  if ( !v8 )
  {
    if ( !dpwszFamilyName )
    {
      v12 = 2LL * v7->cGlyphsSupported;
      if ( v12 <= 0xFFFFFFFF )
      {
        v6 = 1;
        v13 = PALLOCMEM2((unsigned int)v12);
        v14 = (void *)v13;
        if ( v13 )
        {
          v15 = (_WORD *)v13;
          for ( j = 0; j < v7->cRuns; ++j )
          {
            v17 = j;
            phg = v7->awcrun[v17].phg;
            cGlyphs = v7->awcrun[v17].cGlyphs;
            if ( phg )
            {
              v20 = cGlyphs;
              v21 = 0LL;
              if ( phg > &phg[v20] )
                v20 = 0LL;
              if ( v20 )
              {
                do
                {
                  ++v21;
                  *v15++ = *(_WORD *)phg++;
                }
                while ( v21 < v20 );
              }
            }
            else
            {
              if ( !cGlyphs )
                goto LABEL_29;
              wcLow = v7->awcrun[v17].wcLow;
              v29 = cGlyphs + wcLow - 1;
              while ( wcLow <= v29 )
                *v15 = wcLow++;
            }
          }
          qsort(v14, v7->cGlyphsSupported, 2uLL, CompareRoutine);
          v22 = cComputeGISET((const unsigned __int16 *)v14, v7->cGlyphsSupported, 0LL, 0);
          v23 = (struct _GISET *)PALLOCMEM2((unsigned int)(4 * v22 + 8));
          v24 = v23;
          if ( v23 )
          {
            cComputeGISET((const unsigned __int16 *)v14, v7->cGlyphsSupported, v23, v22);
            *v34 = v24;
          }
          else
          {
LABEL_29:
            v6 = 0;
          }
          Win32FreePool(v14);
LABEL_10:
          if ( v8 )
            return v6;
LABEL_28:
          PFEOBJ::vFreepfdg((PFEOBJ *)&v33);
          return v6;
        }
      }
LABEL_42:
      v6 = 0;
      goto LABEL_10;
    }
LABEL_8:
    v10 = PALLOCMEM2(0xCuLL);
    if ( v10 )
    {
      *(_DWORD *)v10 = dpwszFamilyName;
      *(_DWORD *)(v10 + 4) = 1;
      *(_WORD *)(v10 + 8) = 0;
      *(_WORD *)(v10 + 10) = dpwszFamilyName;
      *v4 = (struct _GISET *)v10;
      goto LABEL_10;
    }
    goto LABEL_42;
  }
  if ( dpwszFamilyName )
    goto LABEL_8;
  return v3;
}
