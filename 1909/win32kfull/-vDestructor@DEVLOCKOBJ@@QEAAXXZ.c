/*
 * XREFs of ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00AD000
 * Callers:
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00155A0 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1C007B77C (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 *     GreGetAppClipBox @ 0x1C00A29F8 (GreGetAppClipBox.c)
 *     GreStretchDIBitsInternal @ 0x1C00A2EB4 (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00A8DA0 (GreSetDIBitsToDeviceInternal.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C00AAFBC (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     NtGdiGetRandomRgn @ 0x1C00AB010 (NtGdiGetRandomRgn.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00B7F30 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreDrawStream @ 0x1C00BA5C0 (GreDrawStream.c)
 *     NtGdiPatBlt @ 0x1C00BB170 (NtGdiPatBlt.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C00BDE20 (GreCreateCompatibleBitmapInternal.c)
 *     ?GreSetICMMode@@YAHPEAUHDC__@@KK@Z @ 0x1C00BF0A4 (-GreSetICMMode@@YAHPEAUHDC__@@KK@Z.c)
 *     NtGdiGetDCObject @ 0x1C00BFC70 (NtGdiGetDCObject.c)
 *     GrePolyTextOutW @ 0x1C00BFF88 (GrePolyTextOutW.c)
 *     GreExtTextOutRect @ 0x1C00C05C0 (GreExtTextOutRect.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00CD910 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     vAccNotifyDeleteSurfaceWrap @ 0x1C00E1E60 (vAccNotifyDeleteSurfaceWrap.c)
 *     ?iSetMapMode@DC@@QEAAHH@Z @ 0x1C00EDED0 (-iSetMapMode@DC@@QEAAHH@Z.c)
 *     GreRealizePalette @ 0x1C00FCEBC (GreRealizePalette.c)
 *     NtGdiOffsetClipRgn @ 0x1C00FEF70 (NtGdiOffsetClipRgn.c)
 *     ?vProfileDriver@PDEVOBJ@@QEAAXXZ @ 0x1C010EEA4 (-vProfileDriver@PDEVOBJ@@QEAAXXZ.c)
 *     GreRealizeDefaultPalette @ 0x1C0110FC8 (GreRealizeDefaultPalette.c)
 *     GreRectVisible @ 0x1C0125534 (GreRectVisible.c)
 *     GreGetDIBColorTable @ 0x1C0125780 (GreGetDIBColorTable.c)
 *     GreExtTextOutWInternal @ 0x1C0125908 (GreExtTextOutWInternal.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C0126B5C (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     GreGetBoundsRect @ 0x1C0127818 (GreGetBoundsRect.c)
 *     NtGdiGetPixel @ 0x1C0128580 (NtGdiGetPixel.c)
 *     GreGetRandomRgn @ 0x1C012E1B0 (GreGetRandomRgn.c)
 *     NtGdiFrameRgn @ 0x1C01467C0 (NtGdiFrameRgn.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C0147B70 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiFillRgn @ 0x1C0148050 (NtGdiFillRgn.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C026D1F0 (GreSpDwmSyncCaptureSurfaceBits.c)
 *     GreWindowResizeComplete @ 0x1C026D404 (GreWindowResizeComplete.c)
 *     DxEngSyncPaletteTableWithDevice @ 0x1C027368C (DxEngSyncPaletteTableWithDevice.c)
 *     ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x1C02783F8 (--1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0278E78 (-iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     GreDrawEscape @ 0x1C0279424 (GreDrawEscape.c)
 *     GreDeleteWnd @ 0x1C0283FC0 (GreDeleteWnd.c)
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C028DC04 (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C028DE10 (-hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 *     ?RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C0295530 (-RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0295790 (-RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRU.c)
 *     ?RedirDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z @ 0x1C0295AA0 (-RedirDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z.c)
 *     ?RedirDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C0295C90 (-RedirDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXP.c)
 *     ?RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0295F10 (-RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?RedirGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C0296130 (-RedirGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_REC.c)
 *     ?RedirLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0296380 (-RedirLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?RedirNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_BLENDOBJ@@PEAX@Z @ 0x1C02965C0 (-RedirNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_B.c)
 *     ?RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C0296840 (-RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINT.c)
 *     ?RedirStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0296B20 (-RedirStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_P.c)
 *     ?RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C0296E00 (-RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEA.c)
 *     ?RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0297110 (-RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHO.c)
 *     ?RedirStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0297370 (-RedirStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEA.c)
 *     ?RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C02975A0 (-RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSH.c)
 *     ?RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C0297800 (-RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     NtGdiPtVisible @ 0x1C0299270 (NtGdiPtVisible.c)
 *     GreCreateBitmapFromDxSurface @ 0x1C029953C (GreCreateBitmapFromDxSurface.c)
 *     ?GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x1C02AE28C (-GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z.c)
 *     GreSetDIBColorTable @ 0x1C02AFFB0 (GreSetDIBColorTable.c)
 *     GreSetSystemPaletteUse @ 0x1C02B020C (GreSetSystemPaletteUse.c)
 *     NtGdiUpdateColors @ 0x1C02B0950 (NtGdiUpdateColors.c)
 *     NtGdiExtFloodFill @ 0x1C02B2100 (NtGdiExtFloodFill.c)
 *     ?ipfdDevMaxGet@XDCOBJ@@QEAAJXZ @ 0x1C02B4A78 (-ipfdDevMaxGet@XDCOBJ@@QEAAJXZ.c)
 *     GreDescribePixelFormat @ 0x1C02B4BA8 (GreDescribePixelFormat.c)
 *     NtGdiSetPixelFormat @ 0x1C02B4D50 (NtGdiSetPixelFormat.c)
 * Callees:
 *     GreDereferenceObject @ 0x1C0089FA4 (GreDereferenceObject.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00AB3B0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00AD53C (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00AD580 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C00AD64C (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C00AEA20 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00AED20 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C00F8610 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C029502C (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C0297AAC (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 */

void __fastcall DEVLOCKOBJ::vDestructor(DEVLOCKOBJ *this)
{
  __int64 v1; // rbx
  int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  DCVISRGNSHARELOCK *v10; // rcx
  __int64 v11; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rax
  __int64 *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rbx
  int v17; // eax
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 *v22; // rax
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rdx
  HDC v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  HSURF *v30; // rdi
  struct SURFACE *v31; // rax
  HSURF v32; // rsi
  struct SURFACE *v33; // rbx
  char v34; // bl
  __int64 v35; // rax
  DCVISRGNSHARELOCK *v36; // rcx
  __int64 v37; // rax
  char v38; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v39[3]; // [rsp+31h] [rbp-37h] BYREF
  int v40; // [rsp+34h] [rbp-34h] BYREF
  DC *v41[3]; // [rsp+38h] [rbp-30h] BYREF

  v1 = *((_QWORD *)this + 4);
  if ( v1 && *((_BYTE *)this + 49) )
  {
    v3 = *((_DWORD *)this + 6);
    v4 = *(_QWORD *)(v1 + 48);
    if ( (v3 & 0x1000) != 0 )
    {
      if ( *((_BYTE *)this + 49) )
      {
        if ( (v3 & 0x400) != 0 )
        {
          bUnHookRedir((DEVLOCKOBJ *)((char *)this + 32));
          *((_DWORD *)this + 6) &= ~0x400u;
          v3 = *((_DWORD *)this + 6);
        }
        if ( (v3 & 0x2000) != 0 )
        {
          bUnHookBmpDrv((DEVLOCKOBJ *)((char *)this + 32));
          *((_DWORD *)this + 6) &= ~0x2000u;
          v3 = *((_DWORD *)this + 6);
        }
        v5 = *((_QWORD *)this + 4);
        if ( v5 && *((_BYTE *)this + 49) && (v3 & 0x1000) != 0 )
        {
          v6 = *((_QWORD *)this + 4);
          if ( (*(_DWORD *)(v5 + 44) & 1) == 0 && *(_QWORD *)(v5 + 496) )
          {
            SURFACE::bUnMap(*(SURFACE **)(v5 + 496), this, (struct DC *)v5);
            v6 = *((_QWORD *)this + 4);
          }
          *(_DWORD *)(v6 + 44) &= ~1u;
          v7 = *((_QWORD *)this + 4);
          if ( (*(_DWORD *)(v7 + 36) & 0x4000) != 0 && *(_QWORD *)(v7 + 472) && *(_DWORD *)(v7 + 488) )
            GreUpdateSpriteDevLockEnd((DEVLOCKOBJ *)((char *)this + 32), *((_DWORD *)this + 6) & 0x400000);
        }
      }
      if ( (*((_DWORD *)this + 6) & 0x10) != 0 )
      {
        *(_DWORD *)(*((_QWORD *)this + 4) + 36LL) &= ~0x4000u;
        DC::pSurface(*((DC **)this + 4), *(struct SURFACE **)(v4 + 2552));
      }
      v8 = *((_QWORD *)this + 4);
      if ( v8 && *((_BYTE *)this + 49) && (*((_DWORD *)this + 6) & 0x1000) != 0 && (*(_DWORD *)(v8 + 36) & 0x200) != 0 )
      {
        DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v38);
        if ( !*((_QWORD *)this + 7) )
          DC::vClearRendering(*((DC **)this + 4));
        if ( (*(_DWORD *)(*((_QWORD *)this + 4) + 36LL) & 0x4000) == 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v11);
          if ( ThreadWin32Thread )
            *(_DWORD *)(ThreadWin32Thread + 328) &= ~1u;
        }
        DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v10);
      }
    }
    v13 = *((_QWORD *)this + 4);
    if ( v13 )
    {
      if ( *((_BYTE *)this + 48) )
      {
        *(_DWORD *)(v13 + 40) &= ~2u;
        v13 = *((_QWORD *)this + 4);
        *((_BYTE *)this + 48) = 0;
      }
      if ( v13 )
      {
        v14 = (__int64 *)v13;
        if ( *((_DWORD *)this + 10) && (*(_DWORD *)(v13 + 44) & 2) != 0 )
        {
          XDCOBJ::RestoreAttributesHelper((DEVLOCKOBJ *)((char *)this + 32));
          *(_DWORD *)(*((_QWORD *)this + 4) + 44LL) &= ~2u;
          v14 = (__int64 *)*((_QWORD *)this + 4);
          *((_DWORD *)this + 10) = 0;
        }
        v15 = *((unsigned int *)this + 11);
        v40 = 0;
        v16 = *v14;
        HmgDecrementExclusiveReferenceCountEx(v14, v15, &v40);
        if ( v40 )
          bDeleteDCInternalEx(v16, 0LL);
      }
    }
    *((_QWORD *)this + 4) = 0LL;
  }
  v17 = *((_DWORD *)this + 6);
  if ( (v17 & 0x1000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 6) &= ~0x1000u;
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v20, v19, v21) )
    {
      v22 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( v22 )
      {
        v23 = *v22;
        if ( v23 )
        {
          *(_QWORD *)(v23 + 320) = 0LL;
          *(_QWORD *)(v23 + 312) = 0LL;
        }
      }
    }
  }
  else if ( (v17 & 0x800000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 6) &= ~0x800000u;
  }
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", *(_QWORD *)this);
    GreReleaseSemaphoreInternal(*(_QWORD *)this);
  }
  v24 = *((_DWORD *)this + 6);
  if ( (v24 & 8) != 0 )
    *((_DWORD *)this + 6) = v24 & 0xFFFFFFF7;
  v25 = *((_QWORD *)this + 1);
  if ( v25 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v25);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
  }
  if ( *((_QWORD *)this + 8) )
  {
    v26 = (HDC)*((_QWORD *)this + 9);
    v41[1] = 0LL;
    XDCOBJ::vLock((XDCOBJ *)v41, v26);
    LOBYTE(v27) = 5;
    v28 = HmgShareLock(*((_QWORD *)this + 7), v27);
    LOBYTE(v29) = 5;
    v30 = (HSURF *)v28;
    v31 = (struct SURFACE *)HmgShareLock(*((_QWORD *)this + 8), v29);
    v32 = *v30;
    v33 = v31;
    DC::pSurface(v41[0], v31);
    DEC_SHARE_REF_CNT(v30);
    DEC_SHARE_REF_CNT(v33);
    GreDereferenceObject(v32, 1u);
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    if ( this != (DEVLOCKOBJ *)-28LL )
      *((_DWORD *)v41[0] + 9) |= *((_DWORD *)this + 7);
    if ( (*((_DWORD *)v41[0] + 9) & 0x200) != 0 )
    {
      v34 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v34 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v39);
      v35 = HmgShareUnlockRemoveObject(*((_QWORD *)this + 8), 0LL, 0LL, 0LL, 5);
      if ( v35 )
        SURFACE::bDeleteSurface(v35, 0LL, 1LL);
      *((_QWORD *)v41[0] + 63) = 0LL;
      DC::vClearRendering(v41[0]);
      *((_QWORD *)this + 8) = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v36);
      if ( v34 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v37 = HmgShareUnlockRemoveObject(*((_QWORD *)this + 8), 0LL, 0LL, 0LL, 5);
      if ( v37 )
        SURFACE::bDeleteSurface(v37, 0LL, 1LL);
      *((_QWORD *)v41[0] + 63) = 0LL;
      *((_QWORD *)this + 8) = 0LL;
    }
    if ( v41[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v41);
    v41[0] = 0LL;
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
}
