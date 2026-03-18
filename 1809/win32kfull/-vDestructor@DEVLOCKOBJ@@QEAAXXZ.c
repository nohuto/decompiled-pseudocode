/*
 * XREFs of ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0057450
 * Callers:
 *     GreCreateBitmapFromDxSurface @ 0x1C0003F84 (GreCreateBitmapFromDxSurface.c)
 *     GreDrawStream @ 0x1C0047970 (GreDrawStream.c)
 *     GreStretchDIBitsInternal @ 0x1C004DABC (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00524A0 (GreSetDIBitsToDeviceInternal.c)
 *     NtGdiPatBlt @ 0x1C0056440 (NtGdiPatBlt.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0057424 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C005F050 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreRealizeDefaultPalette @ 0x1C0095C74 (GreRealizeDefaultPalette.c)
 *     ?iSetMapMode@DC@@QEAAHH@Z @ 0x1C0097C2C (-iSetMapMode@DC@@QEAAHH@Z.c)
 *     GreRealizePalette @ 0x1C00983DC (GreRealizePalette.c)
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1C009951C (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 *     GreExtTextOutRect @ 0x1C0099CF4 (GreExtTextOutRect.c)
 *     ?GreSetICMMode@@YAHPEAUHDC__@@KK@Z @ 0x1C0099FE4 (-GreSetICMMode@@YAHPEAUHDC__@@KK@Z.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C009A270 (GreCreateCompatibleBitmapInternal.c)
 *     GrePolyTextOutW @ 0x1C009B4AC (GrePolyTextOutW.c)
 *     GreExtTextOutWInternal @ 0x1C009B694 (GreExtTextOutWInternal.c)
 *     GreGetDIBColorTable @ 0x1C009B840 (GreGetDIBColorTable.c)
 *     GreGetBoundsRect @ 0x1C00A3168 (GreGetBoundsRect.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00B9734 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     vAccNotifyDeleteSurfaceWrap @ 0x1C00FEAD0 (vAccNotifyDeleteSurfaceWrap.c)
 *     ?vProfileDriver@PDEVOBJ@@QEAAXXZ @ 0x1C0129194 (-vProfileDriver@PDEVOBJ@@QEAAXXZ.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C013CB98 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiFillRgn @ 0x1C013DCE0 (NtGdiFillRgn.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C013E3DC (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     NtGdiExtFloodFill @ 0x1C0141900 (NtGdiExtFloodFill.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C02542F8 (GreSpDwmSyncCaptureSurfaceBits.c)
 *     GreWindowResizeComplete @ 0x1C025450C (GreWindowResizeComplete.c)
 *     DxEngSyncPaletteTableWithDevice @ 0x1C025A4C8 (DxEngSyncPaletteTableWithDevice.c)
 *     ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x1C025F3FC (--1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C025FEA8 (-iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     GreDrawEscape @ 0x1C0260448 (GreDrawEscape.c)
 *     GreDeleteWnd @ 0x1C026B980 (GreDeleteWnd.c)
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C027818C (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C0278340 (-hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 *     ?RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C027F820 (-RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C027FA20 (-RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRU.c)
 *     ?RedirDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z @ 0x1C027FCE0 (-RedirDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z.c)
 *     ?RedirDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C027FE80 (-RedirDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXP.c)
 *     ?RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02800B0 (-RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?RedirGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C0280290 (-RedirGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_REC.c)
 *     ?RedirLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0280480 (-RedirLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?RedirNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_BLENDOBJ@@PEAX@Z @ 0x1C0280690 (-RedirNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_B.c)
 *     ?RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C02808C0 (-RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINT.c)
 *     ?RedirStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0280B50 (-RedirStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_P.c)
 *     ?RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C0280DE0 (-RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEA.c)
 *     ?RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C02810A0 (-RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHO.c)
 *     ?RedirStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C02812A0 (-RedirStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEA.c)
 *     ?RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C02814A0 (-RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSH.c)
 *     ?RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C02816A0 (-RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     NtGdiFrameRgn @ 0x1C0282B60 (NtGdiFrameRgn.c)
 *     ?GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x1C02998A0 (-GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z.c)
 *     GreSetDIBColorTable @ 0x1C029B5C0 (GreSetDIBColorTable.c)
 *     GreSetSystemPaletteUse @ 0x1C029B814 (GreSetSystemPaletteUse.c)
 *     NtGdiUpdateColors @ 0x1C029BF50 (NtGdiUpdateColors.c)
 *     ?ipfdDevMaxGet@XDCOBJ@@QEAAJXZ @ 0x1C029E3B8 (-ipfdDevMaxGet@XDCOBJ@@QEAAJXZ.c)
 *     GreDescribePixelFormat @ 0x1C029E480 (GreDescribePixelFormat.c)
 *     NtGdiSetPixelFormat @ 0x1C029E5D0 (NtGdiSetPixelFormat.c)
 * Callees:
 *     GreDereferenceObject @ 0x1C000E55C (GreDereferenceObject.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C0058EF0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00591F0 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C00E340C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C0137E24 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C0137E68 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlock@XDCOBJ@@IEAAXXZ @ 0x1C015F778 (-vUnlock@XDCOBJ@@IEAAXXZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0251304 (--0SURFREF@@QEAA@XZ.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C027F300 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C02818F4 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
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
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rax
  int v14; // eax
  struct _KTHREAD *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 *v18; // rax
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  HSURF v26; // rbx
  char v27; // bl
  __int64 v28; // rax
  DCVISRGNSHARELOCK *v29; // rcx
  __int64 v30; // rax
  _BYTE v31[8]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v32[32]; // [rsp+38h] [rbp-90h] BYREF
  HSURF *v33; // [rsp+58h] [rbp-70h]
  DC *v34[6]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE v35[32]; // [rsp+90h] [rbp-38h] BYREF
  struct SURFACE *v36; // [rsp+B0h] [rbp-18h]

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
          SURFACE::bUnMap(*(SURFACE **)(v5 + 496), this, *((struct DC **)this + 4));
          v5 = *((_QWORD *)this + 4);
        }
        *(_DWORD *)(v5 + 44) &= ~1u;
        v7 = *((_QWORD *)this + 4);
        v6 = v7;
        if ( (*(_DWORD *)(v7 + 36) & 0x4000) != 0 && *(_QWORD *)(v7 + 472) && *(_DWORD *)(v7 + 488) )
        {
          GreUpdateSpriteDevLockEnd((DEVLOCKOBJ *)((char *)this + 32), *((_DWORD *)this + 6) & 0x400000);
          v6 = *((_QWORD *)this + 4);
        }
      }
      v8 = *((_DWORD *)this + 6);
      if ( (v8 & 0x10) != 0 )
      {
        *(_DWORD *)(v6 + 36) &= ~0x4000u;
        DC::pSurface(*((DC **)this + 4), *(struct SURFACE **)(v4 + 2552));
        v6 = *((_QWORD *)this + 4);
        v8 = *((_DWORD *)this + 6);
      }
      if ( v6 )
      {
        if ( (v8 & 0x801000) != 0 )
        {
          *(_DWORD *)(v6 + 40) &= ~2u;
          v8 = *((_DWORD *)this + 6);
        }
        if ( (v8 & 0x1000) != 0 && (*(_DWORD *)(*((_QWORD *)this + 4) + 36LL) & 0x200) != 0 )
        {
          GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
          EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
          if ( !*((_QWORD *)this + 10) )
            DC::vClearRendering(*((DC **)this + 4));
          if ( (*(_DWORD *)(*((_QWORD *)this + 4) + 36LL) & 0x4000) == 0 )
          {
            CurrentThread = KeGetCurrentThread();
            if ( !(unsigned int)IsThreadCrossSessionAttached(v10, v9) )
            {
              ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
              if ( ThreadWin32Thread )
              {
                v13 = *ThreadWin32Thread;
                if ( v13 )
                  *(_BYTE *)(v13 + 328) = 0;
              }
            }
          }
          EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
          GreReleaseSemaphoreInternal(ghsemDCVisRgn);
        }
      }
    }
    XDCOBJ::vUnlock((DEVLOCKOBJ *)((char *)this + 32));
    *((_QWORD *)this + 4) = 0LL;
  }
  v14 = *((_DWORD *)this + 6);
  if ( (v14 & 0x1000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 6) &= ~0x1000u;
    v15 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v17, v16) )
    {
      v18 = (__int64 *)PsGetThreadWin32Thread(v15);
      if ( v18 )
      {
        v19 = *v18;
        if ( v19 )
        {
          *(_QWORD *)(v19 + 320) = 0LL;
          *(_QWORD *)(v19 + 312) = 0LL;
        }
      }
    }
  }
  else if ( (v14 & 0x800000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 6) &= ~0x800000u;
  }
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", *(_QWORD *)this);
    GreReleaseSemaphoreInternal(*(_QWORD *)this);
  }
  v20 = *((_DWORD *)this + 6);
  if ( (v20 & 8) != 0 )
    *((_DWORD *)this + 6) = v20 & 0xFFFFFFF7;
  v21 = *((_QWORD *)this + 1);
  if ( v21 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v21);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
  }
  if ( *((_QWORD *)this + 11) )
  {
    DCOBJ::DCOBJ((DCOBJ *)v34, *((HDC *)this + 12));
    SURFREF::SURFREF((SURFREF *)v32);
    SURFREF::SURFREF((SURFREF *)v35);
    LOBYTE(v22) = 5;
    v23 = HmgShareLock(*((_QWORD *)this + 10), v22);
    v24 = *((_QWORD *)this + 11);
    LOBYTE(v25) = 5;
    v33 = (HSURF *)v23;
    v36 = (struct SURFACE *)HmgShareLock(v24, v25);
    v26 = *v33;
    DC::pSurface(v34[0], v36);
    DEC_SHARE_REF_CNT(v33);
    v33 = 0LL;
    DEC_SHARE_REF_CNT(v36);
    v36 = 0LL;
    GreDereferenceObject(v26, 1u);
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
    if ( this != (DEVLOCKOBJ *)-28LL )
      *((_DWORD *)v34[0] + 9) |= *((_DWORD *)this + 7);
    if ( (*((_DWORD *)v34[0] + 9) & 0x200) != 0 )
    {
      v27 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v27 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v31);
      v28 = HmgShareUnlockRemoveObject(*((_QWORD *)this + 11), 0LL, 0LL, 0LL, 5);
      if ( v28 )
        SURFACE::bDeleteSurface(v28, 0LL, 1LL);
      *((_QWORD *)v34[0] + 63) = 0LL;
      DC::vClearRendering(v34[0]);
      *((_QWORD *)this + 11) = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v29);
      if ( v27 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v30 = HmgShareUnlockRemoveObject(*((_QWORD *)this + 11), 0LL, 0LL, 0LL, 5);
      if ( v30 )
        SURFACE::bDeleteSurface(v30, 0LL, 1LL);
      *((_QWORD *)v34[0] + 63) = 0LL;
      *((_QWORD *)this + 11) = 0LL;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    if ( v36 )
      DEC_SHARE_REF_CNT(v36);
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v35);
    if ( v33 )
      DEC_SHARE_REF_CNT(v33);
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v32);
    DCOBJ::~DCOBJ((DCOBJ *)v34);
  }
}
