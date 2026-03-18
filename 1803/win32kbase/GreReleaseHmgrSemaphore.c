/*
 * XREFs of GreReleaseHmgrSemaphore @ 0x1C00335D0
 * Callers:
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C001CEC4 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     HmgSetOwner @ 0x1C001E630 (HmgSetOwner.c)
 *     HmgAlloc @ 0x1C00248F0 (HmgAlloc.c)
 *     GreSetBrushOwner @ 0x1C00277C0 (GreSetBrushOwner.c)
 *     HmgNextOwned @ 0x1C002B7B0 (HmgNextOwned.c)
 *     HmgDecProcessHandleCount @ 0x1C002E1C4 (HmgDecProcessHandleCount.c)
 *     GreSetDCOwnerEx @ 0x1C002E880 (GreSetDCOwnerEx.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C002F158 (-vCleanupDCs@@YAXK@Z.c)
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C002F350 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 *     HmgAllocateDcAttr @ 0x1C0030F9C (HmgAllocateDcAttr.c)
 *     HmgFreeDcAttr @ 0x1C0031308 (HmgFreeDcAttr.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0031E14 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C003F7FC (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     HmgAllocateObjectAttr @ 0x1C004551C (HmgAllocateObjectAttr.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00483C0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     pProcessDfbSurfacesInternal @ 0x1C0049C10 (pProcessDfbSurfacesInternal.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C004EAA8 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C005CAF4 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     GreIncQuotaCount @ 0x1C0064A20 (GreIncQuotaCount.c)
 *     GreDecQuotaCount @ 0x1C00657A0 (GreDecQuotaCount.c)
 *     HmgShareUnlockRemoveObject @ 0x1C00660D0 (HmgShareUnlockRemoveObject.c)
 *     HmgFreeObjectAttr @ 0x1C00670CC (HmgFreeObjectAttr.c)
 *     HmgFree @ 0x1C00715F0 (HmgFree.c)
 *     HMChangeOwnerPheProcess @ 0x1C00730F0 (HMChangeOwnerPheProcess.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00764AC (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgNextGarbageCollectible @ 0x1C0076618 (HmgNextGarbageCollectible.c)
 *     hbmSelectBitmapInternal @ 0x1C0076C90 (hbmSelectBitmapInternal.c)
 *     GreGetBrushColor @ 0x1C00BFBE0 (GreGetBrushColor.c)
 *     ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x1C00C2680 (-HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C00C3F64 (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C00D09A8 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00D0AA8 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     EngDeleteSafeSemaphore @ 0x1C00D8870 (EngDeleteSafeSemaphore.c)
 *     EngInitializeSafeSemaphore @ 0x1C00D8A20 (EngInitializeSafeSemaphore.c)
 *     GreMarkDCUnreadable @ 0x1C00DADB8 (GreMarkDCUnreadable.c)
 * Callees:
 *     McTemplateK0pz @ 0x1C00DA6C0 (McTemplateK0pz.c)
 */

__int64 __fastcall GreReleaseHmgrSemaphore(int a1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      result = McTemplateK0pz(a1, (unsigned int)&LockRelease, a3, (_DWORD)ghsemHmgr, (__int64)L"ghsemHmgr");
  }
  if ( ghsemHmgr )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
    return PsLeavePriorityRegion();
  }
  return result;
}
