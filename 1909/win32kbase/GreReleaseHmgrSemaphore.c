/*
 * XREFs of GreReleaseHmgrSemaphore @ 0x1C002A070
 * Callers:
 *     HmgAllocateObjectAttr @ 0x1C000F318 (HmgAllocateObjectAttr.c)
 *     HmgSetOwner @ 0x1C0016200 (HmgSetOwner.c)
 *     HmgFree @ 0x1C001A3F0 (HmgFree.c)
 *     GreSetDCOwnerEx @ 0x1C001AF00 (GreSetDCOwnerEx.c)
 *     GreSetBrushOwner @ 0x1C001B890 (GreSetBrushOwner.c)
 *     HmgDecProcessHandleCount @ 0x1C0022034 (HmgDecProcessHandleCount.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0022E70 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     HmgAllocateDcAttr @ 0x1C0027C58 (HmgAllocateDcAttr.c)
 *     HmgFreeDcAttr @ 0x1C0027DBC (HmgFreeDcAttr.c)
 *     HmgAlloc @ 0x1C0027E90 (HmgAlloc.c)
 *     GreCreateRectRgnIndirect @ 0x1C0028030 (GreCreateRectRgnIndirect.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C0041C3C (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C00509E4 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     GreMarkDCUnreadable @ 0x1C0062AF8 (GreMarkDCUnreadable.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0068160 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C0068550 (vDynamicConvertNewSurfaceDCs.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0068604 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     pProcessDfbSurfacesInternal @ 0x1C0069D50 (pProcessDfbSurfacesInternal.c)
 *     HmgNextOwned @ 0x1C006C600 (HmgNextOwned.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00717D8 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z @ 0x1C0076894 (-HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C0076B9C (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     HMChangeOwnerPheProcessWorker @ 0x1C0086AC8 (HMChangeOwnerPheProcessWorker.c)
 *     GreIncQuotaCount @ 0x1C0086C20 (GreIncQuotaCount.c)
 *     GreDecQuotaCount @ 0x1C008A5E0 (GreDecQuotaCount.c)
 *     HmgShareUnlockRemoveObject @ 0x1C008DA30 (HmgShareUnlockRemoveObject.c)
 *     HmgFreeObjectAttr @ 0x1C0090E70 (HmgFreeObjectAttr.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C00AB720 (-vCleanupDCs@@YAXK@Z.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00BB020 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgIncProcessHandleCountEx @ 0x1C00BB194 (HmgIncProcessHandleCountEx.c)
 *     HmgNextGarbageCollectible @ 0x1C00BB290 (HmgNextGarbageCollectible.c)
 *     hbmSelectBitmapInternal @ 0x1C00BB910 (hbmSelectBitmapInternal.c)
 *     GreGetBrushColor @ 0x1C0120550 (GreGetBrushColor.c)
 *     ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x1C0122E9C (-HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C012375C (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C01274B0 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C01287F0 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01288FC (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     EngDeleteSafeSemaphore @ 0x1C012E320 (EngDeleteSafeSemaphore.c)
 *     EngInitializeSafeSemaphore @ 0x1C012E4D0 (EngInitializeSafeSemaphore.c)
 * Callees:
 *     McTemplateK0pz @ 0x1C012FF70 (McTemplateK0pz.c)
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
