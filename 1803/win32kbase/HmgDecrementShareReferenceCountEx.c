/*
 * XREFs of HmgDecrementShareReferenceCountEx @ 0x1C002AC00
 * Callers:
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C001C130 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C001DB74 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     NtGdiDeleteObjectApp @ 0x1C001EE60 (NtGdiDeleteObjectApp.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C0027610 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C0028CD0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0029780 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C002A644 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C0032090 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C0032E80 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     GreCreateBitmap @ 0x1C003D960 (GreCreateBitmap.c)
 *     GreSetBitmapOwnerEx @ 0x1C003DB54 (GreSetBitmapOwnerEx.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C003E284 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C003F7FC (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003F968 (--1EPALOBJ@@QEAA@XZ.c)
 *     bDeletePalette @ 0x1C0040B60 (bDeletePalette.c)
 *     GreCreatePatternBrushInternal @ 0x1C0041420 (GreCreatePatternBrushInternal.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C00437D8 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00483C0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C00487A0 (vDynamicConvertNewSurfaceDCs.c)
 *     bDynamicModeChange @ 0x1C0048884 (bDynamicModeChange.c)
 *     bDfbSurfacesMigrated @ 0x1C004A640 (bDfbSurfacesMigrated.c)
 *     GreDCSelectPen @ 0x1C0059C10 (GreDCSelectPen.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C005C564 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C005CC28 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C005CC6C (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ?vRelease@UMPDOBJ@@SAXPEAV1@H@Z @ 0x1C0060850 (-vRelease@UMPDOBJ@@SAXPEAV1@H@Z.c)
 *     bDeleteSurface @ 0x1C0063570 (bDeleteSurface.c)
 *     EngModifySurface @ 0x1C0066600 (EngModifySurface.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x1C0067020 (-vRemoveRefPalettes@@YAXK@Z.c)
 *     EngAssociateSurface @ 0x1C0068400 (EngAssociateSurface.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C0073954 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     CleanupGDI @ 0x1C00A9D70 (CleanupGDI.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C00BFA20 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00C1A54 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C00C7670 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00CB78C (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1C00D0804 (-DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C00D6B94 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     bInitBMOBJ @ 0x1C01F3D5C (bInitBMOBJ.c)
 * Callees:
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0027830 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C002AD50 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C002B0E0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002BDF0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002C040 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0075BD4 (IsThreadCrossSessionAttached.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00C29C4 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

__int64 __fastcall HmgDecrementShareReferenceCountEx(struct OBJECT *a1, int *a2)
{
  unsigned int v2; // edi
  unsigned int v5; // ebp
  GdiHandleManager *v6; // rbx
  unsigned int v7; // eax
  struct _ENTRY *v8; // rax
  struct _ENTRY *v9; // rbx
  bool v10; // zf
  unsigned int v11; // edx
  struct _ENTRY *v13; // [rsp+20h] [rbp-38h] BYREF
  int v14; // [rsp+28h] [rbp-30h]
  int v15; // [rsp+2Ch] [rbp-2Ch]
  char v16; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  if ( a2 )
    *a2 = 0;
  v5 = (unsigned __int16)*(_DWORD *)a1 | (*(_DWORD *)a1 >> 8) & 0xFF0000;
  if ( !(unsigned int)IsThreadCrossSessionAttached() )
    PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v16);
  v6 = gpHandleManager;
  v14 = 1;
  v7 = GdiHandleManager::DecodeIndex(gpHandleManager, v5);
  v8 = GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v6 + 2), v7, 0);
  v13 = v8;
  v9 = v8;
  if ( v8 )
  {
    _m_prefetchw((char *)v8 + 8);
    v10 = (*((_BYTE *)v8 + 15) & 0x20) == 0;
    v15 = *((_DWORD *)v8 + 2);
    if ( !v10 )
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v13);
      if ( !v14 )
        goto LABEL_17;
      v9 = v13;
    }
    if ( *((_BYTE *)v9 + 14) == 5 && gbGdiHmgrAltStacks && gpentHmgrAltStacks )
    {
      v11 = (unsigned __int16)*(_DWORD *)a1 | (*(_DWORD *)a1 >> 8) & 0xFF0000;
      RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v11 | (v11 >> 8) & 0xFF0000);
    }
    if ( a2 )
      *a2 = (*((unsigned __int8 *)v9 + 15) >> 3) & 1;
    v2 = *((_DWORD *)a1 + 2);
    TrackHmgrReferenceDecrement(*((_BYTE *)v9 + 14), a1);
    --*((_DWORD *)a1 + 2);
    HANDLELOCK::vUnlock((HANDLELOCK *)&v13);
  }
  else
  {
    v14 = 0;
    KeLeaveCriticalRegion();
  }
LABEL_17:
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v13);
  return v2;
}
