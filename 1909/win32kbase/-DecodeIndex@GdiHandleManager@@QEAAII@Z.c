/*
 * XREFs of ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0020020
 * Callers:
 *     bDeleteBrush @ 0x1C000DDC0 (bDeleteBrush.c)
 *     ?ShareCount@HANDLELOCK@@QEAAKXZ @ 0x1C000E0FC (-ShareCount@HANDLELOCK@@QEAAKXZ.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0017C6C (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0018750 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0018B70 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     HmgMarkLazyDelete @ 0x1C0019020 (HmgMarkLazyDelete.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C001B5E0 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     GreSetBrushOwner @ 0x1C001B890 (GreSetBrushOwner.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C001BC60 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     _GetDCEx @ 0x1C001BDF0 (_GetDCEx.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C001CAA0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C001D060 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C001D460 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     GreGetBounds @ 0x1C001D5B0 (GreGetBounds.c)
 *     HmgLock @ 0x1C001DB10 (HmgLock.c)
 *     DEC_SHARE_REF_CNT @ 0x1C001DF00 (DEC_SHARE_REF_CNT.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C001E060 (HmgDecrementShareReferenceCountEx.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C001E190 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     HmgPentryFromPobj @ 0x1C001F0B0 (HmgPentryFromPobj.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C001F380 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C001F6D0 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     HmgShareLock @ 0x1C001F940 (HmgShareLock.c)
 *     ?GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ @ 0x1C001FB30 (-GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ.c)
 *     HmgLockEx @ 0x1C001FCA0 (HmgLockEx.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C001FEF0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ReleaseCacheDC @ 0x1C00200C0 (ReleaseCacheDC.c)
 *     EngUnlockSurface @ 0x1C00205A0 (EngUnlockSurface.c)
 *     INC_SHARE_REF_CNT @ 0x1C00208A0 (INC_SHARE_REF_CNT.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0020A50 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0020EC0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     EngLockSurface @ 0x1C0021270 (EngLockSurface.c)
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C0021470 (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z @ 0x1C0021BE8 (-ReleaseLockAndEntry@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C0021CD0 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C0021E60 (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     GreGetObjectOwner @ 0x1C00220F0 (GreGetObjectOwner.c)
 *     ?SetEntryObject@GdiHandleManager@@QEAAXIPEAVOBJECT@@@Z @ 0x1C0022178 (-SetEntryObject@GdiHandleManager@@QEAAXIPEAVOBJECT@@@Z.c)
 *     bDeleteDCInternalEx @ 0x1C0022200 (bDeleteDCInternalEx.c)
 *     NtGdiDeleteObjectApp @ 0x1C00225E0 (NtGdiDeleteObjectApp.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00258B0 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C002915C (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     ?_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z @ 0x1C00502F8 (-_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z.c)
 *     HmgModifyHandleType @ 0x1C00503D0 (HmgModifyHandleType.c)
 *     HmgQueryAltLock @ 0x1C006C2E0 (HmgQueryAltLock.c)
 *     HmgPrefetchAllObjt @ 0x1C0072030 (HmgPrefetchAllObjt.c)
 *     HmgSafeNextObjtByIndex @ 0x1C0075F4C (HmgSafeNextObjtByIndex.c)
 *     ?HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z @ 0x1C0076894 (-HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z.c)
 *     HmgLockAllOwners @ 0x1C0077200 (HmgLockAllOwners.c)
 *     HmgValidHandle @ 0x1C0087330 (HmgValidHandle.c)
 *     HmgShareUnlockRemoveObject @ 0x1C008DA30 (HmgShareUnlockRemoveObject.c)
 *     HmgReferenceCheckLock @ 0x1C0093150 (HmgReferenceCheckLock.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C0093578 (HmgShareLockIgnoreStockBit.c)
 *     HmgSetLock @ 0x1C0093FCC (HmgSetLock.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C0099D5C (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     NtGdiGetEntry @ 0x1C009E550 (NtGdiGetEntry.c)
 *     ?vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z @ 0x1C00A6730 (-vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C00AB720 (-vCleanupDCs@@YAXK@Z.c)
 *     MultiUserCleanupDCs @ 0x1C00B49D8 (MultiUserCleanupDCs.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001FE60 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

__int64 __fastcall GdiHandleManager::DecodeIndex(GdiHandleEntryDirectory **this, unsigned int a2)
{
  if ( a2 >= 0x10000
    && (*(_DWORD *)this <= 0x10000u
     || *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(this[2], (unsigned __int16)a2, 1) + 13) == HIWORD(a2)) )
  {
    return (unsigned __int16)a2;
  }
  else
  {
    return a2;
  }
}
