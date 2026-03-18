/*
 * XREFs of ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008F380
 * Callers:
 *     GreCreateBitmapFromDxSurface @ 0x1C0005354 (GreCreateBitmapFromDxSurface.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C0057248 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     GreGetRandomRgn @ 0x1C0064180 (GreGetRandomRgn.c)
 *     NtGdiGetRandomRgn @ 0x1C00761B0 (NtGdiGetRandomRgn.c)
 *     GreExtTextOutWInternal @ 0x1C007793C (GreExtTextOutWInternal.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C007BE98 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?iSetMapMode@DC@@QEAAHH@Z @ 0x1C008AD3C (-iSetMapMode@DC@@QEAAHH@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C008F364 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0090DC0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0096D9C (GreCreateCompatibleBitmapInternal.c)
 *     GreGetAppClipBox @ 0x1C009B63C (GreGetAppClipBox.c)
 *     GreExtTextOutRect @ 0x1C009D380 (GreExtTextOutRect.c)
 *     GreRectVisible @ 0x1C009F750 (GreRectVisible.c)
 *     GreStretchDIBitsInternal @ 0x1C00A06E8 (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00A42B0 (GreSetDIBitsToDeviceInternal.c)
 *     GreDrawStream @ 0x1C00A6FB0 (GreDrawStream.c)
 *     GreGetDIBColorTable @ 0x1C00ACDC0 (GreGetDIBColorTable.c)
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1C00B53CC (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 *     ?vProfileDriver@PDEVOBJ@@QEAAXXZ @ 0x1C00CE528 (-vProfileDriver@PDEVOBJ@@QEAAXXZ.c)
 *     NtGdiGetDCObject @ 0x1C00DA180 (NtGdiGetDCObject.c)
 *     GrePolyTextOutW @ 0x1C00DB94C (GrePolyTextOutW.c)
 *     GreGetBoundsRect @ 0x1C00DE048 (GreGetBoundsRect.c)
 *     vAccNotifyDeleteSurfaceWrap @ 0x1C00E61E0 (vAccNotifyDeleteSurfaceWrap.c)
 *     GreRealizePalette @ 0x1C00FD5B8 (GreRealizePalette.c)
 *     GreRealizeDefaultPalette @ 0x1C010A74C (GreRealizeDefaultPalette.c)
 *     NtGdiFrameRgn @ 0x1C01182C0 (NtGdiFrameRgn.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C011B210 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C011B9EC (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     NtGdiFillRgn @ 0x1C011C820 (NtGdiFillRgn.c)
 *     NtGdiExtFloodFill @ 0x1C0122B80 (NtGdiExtFloodFill.c)
 *     ?GreSetICMMode@@YAHPEAUHDC__@@KK@Z @ 0x1C0125354 (-GreSetICMMode@@YAHPEAUHDC__@@KK@Z.c)
 *     NtGdiOffsetClipRgn @ 0x1C012E870 (NtGdiOffsetClipRgn.c)
 *     GreExtSelectClipRgnInternal @ 0x1C013BA84 (GreExtSelectClipRgnInternal.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C023CE98 (GreSpDwmSyncCaptureSurfaceBits.c)
 *     GreWindowResizeComplete @ 0x1C023D070 (GreWindowResizeComplete.c)
 *     DxEngSyncPaletteTableWithDevice @ 0x1C02427B0 (DxEngSyncPaletteTableWithDevice.c)
 *     ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x1C0247588 (--1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0247F88 (-iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     GreDrawEscape @ 0x1C0248434 (GreDrawEscape.c)
 *     GreDeleteWnd @ 0x1C0258760 (GreDeleteWnd.c)
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C02644F4 (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C0264684 (-hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 *     ?RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C026B8E0 (-RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C026BAD0 (-RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRU.c)
 *     ?RedirDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z @ 0x1C026BD80 (-RedirDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z.c)
 *     ?RedirDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C026BF10 (-RedirDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXP.c)
 *     ?RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C026C120 (-RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?RedirGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C026C2E0 (-RedirGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_REC.c)
 *     ?RedirLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C026C4F0 (-RedirLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?RedirNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_BLENDOBJ@@PEAX@Z @ 0x1C026C6E0 (-RedirNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_B.c)
 *     ?RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C026C900 (-RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINT.c)
 *     ?RedirStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C026CB70 (-RedirStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_P.c)
 *     ?RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C026CDE0 (-RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEA.c)
 *     ?RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C026D080 (-RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHO.c)
 *     ?RedirStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C026D2A0 (-RedirStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEA.c)
 *     ?RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C026D480 (-RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSH.c)
 *     ?RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C026D6A0 (-RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     NtGdiPtVisible @ 0x1C026EE10 (NtGdiPtVisible.c)
 *     ?GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x1C0285ECC (-GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z.c)
 *     GreSetDIBColorTable @ 0x1C0287920 (GreSetDIBColorTable.c)
 *     GreSetSystemPaletteUse @ 0x1C0287B94 (GreSetSystemPaletteUse.c)
 *     NtGdiUpdateColors @ 0x1C0288210 (NtGdiUpdateColors.c)
 *     ?ipfdDevMaxGet@XDCOBJ@@QEAAJXZ @ 0x1C028A670 (-ipfdDevMaxGet@XDCOBJ@@QEAAJXZ.c)
 *     GreDescribePixelFormat @ 0x1C028A72C (GreDescribePixelFormat.c)
 *     NtGdiSetPixelFormat @ 0x1C028A850 (NtGdiSetPixelFormat.c)
 * Callees:
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C008A810 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C008B990 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C008BC3C (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C008FCD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     GreDereferenceObject @ 0x1C00C5650 (GreDereferenceObject.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00C611C (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00C615C (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C026B380 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C026D8E0 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 */

void __fastcall DEVLOCKOBJ::vDestructor(DEVLOCKOBJ *this)
{
  __int64 v1; // rbx
  int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  DC *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v14; // rax
  __int64 *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rbx
  int v18; // eax
  struct _KTHREAD *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 *v22; // rax
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rdx
  HDC v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  HSURF *v30; // rdi
  __int64 v31; // rax
  DC *v32; // rbp
  __int64 v33; // rbx
  HSURF v34; // rsi
  DC *v35; // rcx
  char v36; // bl
  __int64 v37; // rax
  DCVISRGNSHARELOCK *v38; // rcx
  __int64 v39; // rax
  _BYTE v40[4]; // [rsp+30h] [rbp-48h] BYREF
  int v41; // [rsp+34h] [rbp-44h] BYREF
  DC *v42[8]; // [rsp+38h] [rbp-40h] BYREF

  v1 = *((_QWORD *)this + 4);
  if ( v1 )
  {
    v3 = *((_DWORD *)this + 6);
    v4 = *(_QWORD *)(v1 + 48);
    if ( (v3 & 0x1000) != 0 )
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
      v6 = v5;
      if ( v5 && (v3 & 0x1000) != 0 )
      {
        if ( (*(_DWORD *)(v5 + 44) & 1) == 0 )
        {
          SURFACE::bUnMap(*(SURFACE **)(v5 + 504), this, *((struct DC **)this + 4));
          v5 = *((_QWORD *)this + 4);
        }
        *(_DWORD *)(v5 + 44) &= ~1u;
        v7 = *((_QWORD *)this + 4);
        v6 = v7;
        if ( (*(_DWORD *)(v7 + 36) & 0x4000) != 0 && *(_QWORD *)(v7 + 480) && *(_DWORD *)(v7 + 496) )
        {
          GreUpdateSpriteDevLockEnd((DEVLOCKOBJ *)((char *)this + 32), *((_DWORD *)this + 6) & 0x400000);
          v6 = *((_QWORD *)this + 4);
        }
      }
      v8 = *((_DWORD *)this + 6);
      if ( (v8 & 0x10) != 0 )
      {
        *(_DWORD *)(v6 + 36) &= ~0x4000u;
        v9 = (DC *)*((_QWORD *)this + 4);
        *((_QWORD *)v9 + 63) = *(_QWORD *)(v4 + 2544);
        DC::vInheritSurfaceDpiScale(v9);
        v6 = *((_QWORD *)this + 4);
        v8 = *((_DWORD *)this + 6);
      }
      if ( v6 )
      {
        if ( (v8 & 0x801000) != 0 )
        {
          *(_DWORD *)(v6 + 40) &= ~2u;
          v8 = *((_DWORD *)this + 6);
          v6 = *((_QWORD *)this + 4);
        }
        if ( (v8 & 0x1000) != 0 && (*(_DWORD *)(v6 + 36) & 0x200) != 0 )
        {
          GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
          EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
          if ( !*((_QWORD *)this + 6) )
            DC::vClearRendering(*((DC **)this + 4));
          if ( (*(_DWORD *)(*((_QWORD *)this + 4) + 36LL) & 0x4000) == 0 )
          {
            CurrentThread = KeGetCurrentThread();
            if ( !(unsigned int)IsThreadCrossSessionAttached(v11, v10) )
            {
              ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
              if ( ThreadWin32Thread )
              {
                v14 = *ThreadWin32Thread;
                if ( v14 )
                  *(_BYTE *)(v14 + 328) = 0;
              }
            }
          }
          EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
          GreReleaseSemaphoreInternal(ghsemDCVisRgn);
        }
      }
    }
    if ( *((_QWORD *)this + 4) )
    {
      XDCOBJ::RestoreAttributes((DEVLOCKOBJ *)((char *)this + 32));
      v15 = (__int64 *)*((_QWORD *)this + 4);
      v16 = *((unsigned int *)this + 11);
      v41 = 0;
      v17 = *v15;
      HmgDecrementExclusiveReferenceCountEx(v15, v16, &v41);
      if ( v41 )
        bDeleteDCInternalEx(v17, 0LL);
    }
    *((_QWORD *)this + 4) = 0LL;
  }
  v18 = *((_DWORD *)this + 6);
  if ( (v18 & 0x1000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 6) &= ~0x1000u;
    v19 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v21, v20) )
    {
      v22 = (__int64 *)PsGetThreadWin32Thread(v19);
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
  else if ( (v18 & 0x800000) != 0 )
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
  if ( *((_QWORD *)this + 7) )
  {
    v26 = (HDC)*((_QWORD *)this + 8);
    v42[1] = 0LL;
    XDCOBJ::vLock((XDCOBJ *)v42, v26);
    LOBYTE(v27) = 5;
    v28 = HmgShareLock(*((_QWORD *)this + 6), v27);
    LOBYTE(v29) = 5;
    v30 = (HSURF *)v28;
    v31 = HmgShareLock(*((_QWORD *)this + 7), v29);
    v32 = v42[0];
    v33 = v31;
    v34 = *v30;
    v35 = v42[0];
    *((_QWORD *)v42[0] + 63) = v31;
    DC::vInheritSurfaceDpiScale(v35);
    DEC_SHARE_REF_CNT(v30);
    DEC_SHARE_REF_CNT(v33);
    GreDereferenceObject(v34);
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    if ( this != (DEVLOCKOBJ *)-28LL )
      *((_DWORD *)v32 + 9) |= *((_DWORD *)this + 7);
    if ( (*((_DWORD *)v32 + 9) & 0x200) != 0 )
    {
      v36 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v36 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v40);
      v37 = HmgShareUnlockRemoveObject(*((_QWORD *)this + 7), 0LL, 0LL, 0LL, 5);
      if ( v37 )
        SURFACE::bDeleteSurface(v37, 0LL, 1LL);
      *((_QWORD *)v32 + 64) = 0LL;
      DC::vClearRendering(v32);
      *((_QWORD *)this + 7) = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v38);
      if ( v36 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v39 = HmgShareUnlockRemoveObject(*((_QWORD *)this + 7), 0LL, 0LL, 0LL, 5);
      if ( v39 )
        SURFACE::bDeleteSurface(v39, 0LL, 1LL);
      *((_QWORD *)v32 + 64) = 0LL;
      *((_QWORD *)this + 7) = 0LL;
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)v42);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
}
