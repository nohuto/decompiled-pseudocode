/*
 * XREFs of HmgDecrementShareReferenceCountEx @ 0x1C001E060
 * Callers:
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C000EC68 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ?vRelease@UMPDOBJ@@SAXPEAV1@H@Z @ 0x1C0012270 (-vRelease@UMPDOBJ@@SAXPEAV1@H@Z.c)
 *     bDeleteSurface @ 0x1C0015C30 (bDeleteSurface.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0015C80 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     GreSetBitmapOwnerEx @ 0x1C0015FC0 (GreSetBitmapOwnerEx.c)
 *     GreCreateBitmap @ 0x1C0016C90 (GreCreateBitmap.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C001AAB8 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C001AD40 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C001ADA8 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C001D460 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C001E190 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002B778 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C0050B18 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C0050B44 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0068160 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C0068550 (vDynamicConvertNewSurfaceDCs.c)
 *     bDynamicModeChange @ 0x1C00686C0 (bDynamicModeChange.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C0069900 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     bDeletePalette @ 0x1C00699E0 (bDeletePalette.c)
 *     bDfbSurfacesMigrated @ 0x1C006A790 (bDfbSurfacesMigrated.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C006C574 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C006C6BC (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C00780DC (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     GreDCSelectPen @ 0x1C007E2F0 (GreDCSelectPen.c)
 *     EngAssociateSurface @ 0x1C0089720 (EngAssociateSurface.c)
 *     GreCreatePatternBrushInternal @ 0x1C008CCA0 (GreCreatePatternBrushInternal.c)
 *     EngModifySurface @ 0x1C0091450 (EngModifySurface.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C009C6A0 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C00AD6B0 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C00B0548 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     CleanupGDI @ 0x1C00B4220 (CleanupGDI.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C01203E0 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C012226C (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C0125480 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1C01262BC (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C01264AC (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1C0128710 (-DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z.c)
 *     bInitBMOBJ @ 0x1C0265474 (bInitBMOBJ.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C001F380 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001F810 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0020020 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C00200A0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0020E70 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C00B9DA8 (IsThreadCrossSessionAttached.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C0122FF0 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

__int64 __fastcall HmgDecrementShareReferenceCountEx(struct OBJECT *a1, int *a2)
{
  unsigned int v2; // esi
  unsigned int v5; // ebp
  GdiHandleManager *v6; // rbx
  unsigned int v7; // eax
  struct _ENTRY *v8; // rax
  struct _ENTRY *v9; // rbx
  bool v10; // zf
  struct _ENTRY *v12; // [rsp+20h] [rbp-38h] BYREF
  int v13; // [rsp+28h] [rbp-30h]
  int v14; // [rsp+2Ch] [rbp-2Ch]
  char v15; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  if ( a2 )
    *a2 = 0;
  v5 = (unsigned __int16)*(_DWORD *)a1 | (*(_DWORD *)a1 >> 8) & 0xFF0000;
  if ( !(unsigned int)IsThreadCrossSessionAttached() )
    PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v15);
  v6 = gpHandleManager;
  v13 = 1;
  v7 = GdiHandleManager::DecodeIndex(gpHandleManager, v5);
  v8 = GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v6 + 2), v7, 0);
  v12 = v8;
  v9 = v8;
  if ( v8 )
  {
    _m_prefetchw((char *)v8 + 8);
    v10 = (*((_BYTE *)v8 + 15) & 0x20) == 0;
    v14 = *((_DWORD *)v8 + 2);
    if ( !v10 )
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v12);
      if ( !v13 )
        goto LABEL_17;
      v9 = v12;
    }
    if ( *((_BYTE *)v9 + 14) == 5 && gbGdiHmgrAltStacks && gpentHmgrAltStacks )
      RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)*(_DWORD *)a1);
    if ( a2 )
      *a2 = (*((unsigned __int8 *)v9 + 15) >> 3) & 1;
    v2 = *((_DWORD *)a1 + 2);
    TrackHmgrReferenceDecrement(*((_BYTE *)v9 + 14), a1);
    --*((_DWORD *)a1 + 2);
    HANDLELOCK::vUnlock((HANDLELOCK *)&v12);
  }
  else
  {
    v13 = 0;
    KeLeaveCriticalRegion();
  }
LABEL_17:
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v12);
  return v2;
}
