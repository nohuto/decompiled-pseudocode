/*
 * XREFs of GreReleaseHmgrSemaphore @ 0x1C0018270
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C0019340 (GreSetDCOwnerEx.c)
 *     GreSetBrushOwner @ 0x1C0019E60 (GreSetBrushOwner.c)
 *     hbmSelectBitmap @ 0x1C001A230 (hbmSelectBitmap.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C0021110 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C0021FCC (HmgDecProcessHandleCount.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0022950 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     HmgAllocateDcAttr @ 0x1C0027304 (HmgAllocateDcAttr.c)
 *     HmgFreeDcAttr @ 0x1C0027468 (HmgFreeDcAttr.c)
 *     HmgAlloc @ 0x1C0027540 (HmgAlloc.c)
 *     GreCreateRectRgnIndirect @ 0x1C00276E0 (GreCreateRectRgnIndirect.c)
 *     HmgSetOwner @ 0x1C002A580 (HmgSetOwner.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C004537C (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C0052358 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     HmgNextOwned @ 0x1C0052850 (HmgNextOwned.c)
 *     HmgAllocateObjectAttr @ 0x1C0053C18 (HmgAllocateObjectAttr.c)
 *     HmgFreeObjectAttr @ 0x1C005400C (HmgFreeObjectAttr.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0054DA0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C0057140 (vDynamicConvertNewSurfaceDCs.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00571F4 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     pProcessDfbSurfacesInternal @ 0x1C0058BB0 (pProcessDfbSurfacesInternal.c)
 *     GreMarkDCUnreadable @ 0x1C00766B8 (GreMarkDCUnreadable.c)
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C0077450 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00784B8 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C007AB1C (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     HMChangeOwnerPheProcessWorker @ 0x1C008AEA8 (HMChangeOwnerPheProcessWorker.c)
 *     GreIncQuotaCount @ 0x1C008B000 (GreIncQuotaCount.c)
 *     GreDecQuotaCount @ 0x1C008EA90 (GreDecQuotaCount.c)
 *     HmgShareUnlockRemoveObject @ 0x1C00919C0 (HmgShareUnlockRemoveObject.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C00AE2E0 (-vCleanupDCs@@YAXK@Z.c)
 *     HmgFree @ 0x1C00B35F0 (HmgFree.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00BE02C (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgIncProcessHandleCountEx @ 0x1C00BE1A0 (HmgIncProcessHandleCountEx.c)
 *     HmgNextGarbageCollectible @ 0x1C00BE29C (HmgNextGarbageCollectible.c)
 *     GreGetBrushColor @ 0x1C0122EC0 (GreGetBrushColor.c)
 *     ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x1C012570C (-HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C0125FCC (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C0129C60 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C012AFA0 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C012B0AC (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     EngDeleteSafeSemaphore @ 0x1C0130AD0 (EngDeleteSafeSemaphore.c)
 *     EngInitializeSafeSemaphore @ 0x1C0130C80 (EngInitializeSafeSemaphore.c)
 * Callees:
 *     McTemplateK0pz @ 0x1C0132610 (McTemplateK0pz.c)
 */

__int64 __fastcall GreReleaseHmgrSemaphore(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    result = McTemplateK0pz(a1, &LockRelease, a3, ghsemHmgr, L"ghsemHmgr");
  if ( ghsemHmgr )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
    return PsLeavePriorityRegion();
  }
  return result;
}
