/*
 * XREFs of HmgDecrementShareReferenceCountEx @ 0x1C001D340
 * Callers:
 *     ?vRelease@UMPDOBJ@@SAXPEAV1@H@Z @ 0x1C00147C0 (-vRelease@UMPDOBJ@@SAXPEAV1@H@Z.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0017B78 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0017D40 (--1SURFREF@@QEAA@XZ.c)
 *     GreRestoreDC @ 0x1C0018550 (GreRestoreDC.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C0019BF0 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C001BD10 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C001D6E0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C0021110 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreSetBitmapOwnerEx @ 0x1C002CE88 (GreSetBitmapOwnerEx.c)
 *     GreCreateBitmap @ 0x1C002CF20 (GreCreateBitmap.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C005248C (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00524B8 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     GreCreatePatternBrushInternal @ 0x1C0052520 (GreCreatePatternBrushInternal.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C00527BC (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C0053568 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     bDeleteSurface @ 0x1C0054290 (bDeleteSurface.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0054DA0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C0057140 (vDynamicConvertNewSurfaceDCs.c)
 *     bDynamicModeChange @ 0x1C00572B0 (bDynamicModeChange.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C0058520 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     bDeletePalette @ 0x1C0058600 (bDeletePalette.c)
 *     bDfbSurfacesMigrated @ 0x1C00595F0 (bDfbSurfacesMigrated.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C005B2A0 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C007E720 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     GreDCSelectPen @ 0x1C0081CC0 (GreDCSelectPen.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C00836F8 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     EngAssociateSurface @ 0x1C008DBD0 (EngAssociateSurface.c)
 *     EngModifySurface @ 0x1C0092A20 (EngModifySurface.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C009CF60 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C00A67C4 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C00B0DA0 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C00B3478 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     CleanupGDI @ 0x1C00B6D00 (CleanupGDI.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C00BDB10 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C0122D50 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C0124ADC (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C0127D50 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1C0128A6C (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C0128C5C (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1C012AEC0 (-DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z.c)
 *     bInitBMOBJ @ 0x1C0268670 (bInitBMOBJ.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C001CFF0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001D5B0 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C001ECE0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C001ED54 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0020070 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C00BCE08 (IsThreadCrossSessionAttached.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C0125860 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
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
