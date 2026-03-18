/*
 * XREFs of ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C006E810
 * Callers:
 *     GrePlgBlt @ 0x1C0008764 (GrePlgBlt.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C002B9F4 (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C00346F0 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     EngCopyBits @ 0x1C00356D0 (EngCopyBits.c)
 *     EngHTBlt @ 0x1C0036378 (EngHTBlt.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C003D9E4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     NtGdiAlphaBlend @ 0x1C0069D70 (NtGdiAlphaBlend.c)
 *     GreDrawStream @ 0x1C0070630 (GreDrawStream.c)
 *     GreStretchBltInternal @ 0x1C0071658 (GreStretchBltInternal.c)
 *     GreGradientFill @ 0x1C0079484 (GreGradientFill.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C007A4F0 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     GreMaskBlt @ 0x1C007EAC4 (GreMaskBlt.c)
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C00AD034 (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00F50C4 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1C00F9EA4 (-vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@.c)
 *     ?vProfileDriver@PDEVOBJ@@QEAAXXZ @ 0x1C0134354 (-vProfileDriver@PDEVOBJ@@QEAAXXZ.c)
 *     NtGdiTransparentBlt @ 0x1C0147950 (NtGdiTransparentBlt.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0161660 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C0161E34 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x1C026C190 (-bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEA.c)
 *     ?EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z @ 0x1C027B1E4 (-EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z.c)
 *     ?bSpTransferShape@@YAHPEAVSPRITE@@0@Z @ 0x1C027E370 (-bSpTransferShape@@YAHPEAVSPRITE@@0@Z.c)
 *     ?vSpDrawCursor@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@1@Z @ 0x1C0280460 (-vSpDrawCursor@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@1@Z.c)
 *     ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02808F0 (-vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C029A4C0 (-MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C029AB30 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C029BED0 (-MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEA.c)
 *     ?MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C029C990 (-MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL.c)
 *     ?MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C029D2F0 (-MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 *     ?MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C029E590 (-MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C029EC60 (-bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PE.c)
 *     ?bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C029F16C (-bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 * Callees:
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C006B1C0 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C00EF544 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C00EF6D0 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0107FBC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall EXLATEOBJ::bInitXlateObj(
        __int64 *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  __int64 v11; // r14
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v16; // rax
  int v17; // edx
  __int64 v18; // rax
  int v19; // ecx
  __int64 v20; // rbp
  int v21; // esi
  unsigned int v22; // r15d
  unsigned int i; // r8d
  __int64 v24; // rax
  int v25; // ecx
  __int64 result; // rax
  unsigned int v27; // eax
  __int64 v28; // r9
  unsigned int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // r9
  _DWORD *v32; // r10
  int v33; // r9d
  int v34; // r11d
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned int v37; // eax
  __int64 v38; // [rsp+50h] [rbp-58h] BYREF
  __int64 v39; // [rsp+58h] [rbp-50h] BYREF
  __int64 v40; // [rsp+60h] [rbp-48h] BYREF
  __int64 v43; // [rsp+C8h] [rbp+20h] BYREF

  v11 = a7;
  v13 = a5;
  v14 = a2;
  if ( !a4 )
  {
    if ( !a5 )
      goto LABEL_30;
    if ( (*(_DWORD *)(a5 + 24) & 0x800) != 0 )
    {
      v35 = *(_QWORD *)(a7 + 80);
      if ( !v35 || v35 == *(_QWORD *)(a7 + 72) )
        goto LABEL_30;
    }
    v14 = a2;
  }
  if ( !a5 )
  {
    if ( (*(_DWORD *)(a4 + 24) & 0x800) != 0 )
    {
      v36 = *(_QWORD *)(a7 + 80);
      if ( !v36 || v36 == *(_QWORD *)(a7 + 72) )
        goto LABEL_30;
    }
    v14 = a2;
  }
  if ( !a4 || !a5 )
    goto LABEL_11;
  v16 = *(_QWORD *)(a4 + 120);
  if ( v16 == a4 )
    v17 = *(_DWORD *)(a4 + 32);
  else
    v17 = *(_DWORD *)(v16 + 32);
  v18 = *(_QWORD *)(a5 + 120);
  if ( v18 == a5 )
    v19 = *(_DWORD *)(a5 + 32);
  else
    v19 = *(_DWORD *)(v18 + 32);
  if ( v17 == v19 )
  {
LABEL_30:
    *a1 = (__int64)xloIdent;
    return 1LL;
  }
  v14 = a2;
LABEL_11:
  v20 = a6;
  v21 = 1;
  if ( (a3 & 7) != 0 && v14 )
  {
    v21 = 0;
  }
  else if ( a4 && a5 )
  {
    v22 = *(_DWORD *)(a4 + 56);
    v38 = a7;
    v39 = a6;
    v43 = a5;
    v40 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    for ( i = 0; i < 8; ++i )
    {
      v24 = *(_QWORD *)(a4 + 120);
      if ( v24 == a4 )
        v25 = *(_DWORD *)(a4 + 32);
      else
        v25 = *(_DWORD *)(v24 + 32);
      if ( *((_DWORD *)&xlateTable + 8 * v22 + 4) == v25 )
      {
        v27 = XEPALOBJ::ulTime((XEPALOBJ *)&v43);
        if ( *(_DWORD *)(v28 + 20) == v27 )
        {
          v29 = XEPALOBJ::ulTime((XEPALOBJ *)&v38);
          if ( *(_DWORD *)(v31 + 28) == v29 )
          {
            v32 = *(_DWORD **)(v31 + 8);
            *a1 = (__int64)v32;
            v33 = v32[19];
            if ( (v33 & 0x6000) == a11 )
            {
              if ( (v34 = v32[1], (v33 & 0x100) == 0 && (v34 & 4) == 0)
                || (v34 & 4) != 0
                && a10 == v32[6]
                && (v37 = XEPALOBJ::ulTime((XEPALOBJ *)&v39), *(_DWORD *)((char *)xlateTable + v30 + 24) == v37)
                || (v33 & 0x100) != 0 && a8 == v32[7] && a9 == v32[8] )
              {
                _InterlockedIncrement((volatile signed __int32 *)((char *)xlateTable + v30));
                *(_DWORD *)(a4 + 56) = v22;
                SEMOBJ::vUnlock((SEMOBJ *)&v40);
                return 1LL;
              }
            }
          }
        }
      }
      v22 = ((_BYTE)v22 + 1) & 7;
    }
    *a1 = 0LL;
    if ( ghsemPalette )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
      GreReleaseSemaphoreInternal(ghsemPalette);
    }
    v21 = 1;
  }
  result = (__int64)CreateXlateObject(a2, a3, a4, v13, v20, v11, a8, a9, a10, a11, v38, v39, v40);
  *a1 = result;
  if ( result )
  {
    if ( v21 && a4 && v13 && (*(_DWORD *)(result + 76) & 0x200) == 0 )
      EXLATEOBJ::vAddToCache(a1, a4, v13, v20, v11);
    return 1LL;
  }
  return result;
}
