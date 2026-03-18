/*
 * XREFs of HmgDecrementShareReferenceCountEx @ 0x1C0022880
 * Callers:
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C0004E38 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C001BB3C (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C001BC74 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C001F994 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0021C14 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00221E0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C003E0E0 (vDynamicConvertNewSurfaceDCs.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C006DFE0 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ?vRelease@UMPDOBJ@@SAXPEAV1@H@Z @ 0x1C00710E0 (-vRelease@UMPDOBJ@@SAXPEAV1@H@Z.c)
 *     GreDCSelectPen @ 0x1C00715E0 (GreDCSelectPen.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x1C00801B8 (-vRemoveRefPalettes@@YAXK@Z.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C0080238 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C008C470 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C009ED90 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00F7D64 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C00FB910 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00FF2A0 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1C01025B8 (-DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0023220 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C00235A0 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0023820 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0023860 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0023880 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C00A8330 (IsThreadCrossSessionAttached.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00F8F28 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
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
