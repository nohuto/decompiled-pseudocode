/*
 * XREFs of ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C002AD50
 * Callers:
 *     GreIntersectClipRect @ 0x1C0019B10 (GreIntersectClipRect.c)
 *     GreSetBitmapOwner @ 0x1C001DC00 (GreSetBitmapOwner.c)
 *     HmgSetOwner @ 0x1C001E630 (HmgSetOwner.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0024090 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     HmgReplaceObject @ 0x1C00247E0 (HmgReplaceObject.c)
 *     GreSetBrushOwner @ 0x1C00277C0 (GreSetBrushOwner.c)
 *     _GetDCEx @ 0x1C0027880 (_GetDCEx.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0028A00 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C0028CD0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     GreGetBounds @ 0x1C0028E20 (GreGetBounds.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0029780 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002A7E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C002AC00 (HmgDecrementShareReferenceCountEx.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C002AFB0 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C002B0E0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C002B100 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     HmgLockEx @ 0x1C002B600 (HmgLockEx.c)
 *     ReleaseCacheDC @ 0x1C002C3A0 (ReleaseCacheDC.c)
 *     GreSetDCOwnerEx @ 0x1C002E880 (GreSetDCOwnerEx.c)
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C002F350 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 *     bDeleteBrush @ 0x1C003CFE0 (bDeleteBrush.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C0043810 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     GreSetSolidBrushLight @ 0x1C0059F50 (GreSetSolidBrushLight.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C005CAF4 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     HmgLockAllOwners @ 0x1C005E6E0 (HmgLockAllOwners.c)
 *     HmgMarkDeletable @ 0x1C0062D10 (HmgMarkDeletable.c)
 *     HmgMarkUndeletable @ 0x1C00631F0 (HmgMarkUndeletable.c)
 *     HmgShareUnlockRemoveObject @ 0x1C00660D0 (HmgShareUnlockRemoveObject.c)
 *     HmgMarkUnXferable @ 0x1C00674C0 (HmgMarkUnXferable.c)
 *     HmgMarkXferable @ 0x1C0067B20 (HmgMarkXferable.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C0067BCC (HmgShareLockIgnoreStockBit.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00764AC (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgUnlock @ 0x1C00766BC (HmgUnlock.c)
 *     ??$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z @ 0x1C0077AA0 (--$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z @ 0x1C0077B94 (--$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x1C00C2680 (-HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z.c)
 *     HmgLockAndModifyHandleType @ 0x1C00C2F70 (HmgLockAndModifyHandleType.c)
 *     HmgSwapLockedHandleContents @ 0x1C00C2FE0 (HmgSwapLockedHandleContents.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002BDF0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C002C230 (-GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z.c)
 */

void __fastcall HANDLELOCK::vUnlock(HANDLELOCK *this)
{
  GdiHandleManager *v2; // rbx
  unsigned int v3; // r8d
  __int64 v4; // rax
  unsigned int v5; // r9d
  __int64 v6; // rdx
  struct OBJECT *EntryObject; // rax
  unsigned int v8; // eax
  __int64 v9; // r10
  unsigned int v10; // edx
  unsigned int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // r10

  v2 = gpHandleManager;
  v3 = GdiHandleManager::DecodeIndex(gpHandleManager, **(_DWORD **)this & 0xFFFFFF);
  v4 = *((_QWORD *)v2 + 2);
  v5 = *(_DWORD *)(v4 + 2056);
  if ( v3 >= v5 + ((*(unsigned __int16 *)(v4 + 2) + 0xFFFF) << 16) )
  {
    EntryObject = 0LL;
  }
  else
  {
    v6 = ((v3 - v5) >> 16) + 1;
    if ( v3 < v5 )
      v6 = 0LL;
    if ( (_DWORD)v6 )
      v3 += ((1 - (_DWORD)v6) << 16) - v5;
    EntryObject = GdiHandleEntryTable::GetEntryObject(*(GdiHandleEntryTable **)(v4 + 8 * v6 + 8), v3);
  }
  v8 = GdiHandleManager::DecodeIndex(
         v2,
         (unsigned __int16)*(_DWORD *)EntryObject | (*(_DWORD *)EntryObject >> 8) & 0xFF0000);
  v9 = *((_QWORD *)v2 + 2);
  v10 = v8;
  v11 = *(_DWORD *)(v9 + 2056);
  if ( v8 < v11 + ((*(unsigned __int16 *)(v9 + 2) + 0xFFFF) << 16) )
  {
    v12 = ((v8 - v11) >> 16) + 1;
    if ( v8 < v11 )
      v12 = 0LL;
    v13 = *(_QWORD *)(v9 + 8 * v12 + 8);
    if ( (_DWORD)v12 )
      v10 = ((1 - (_DWORD)v12) << 16) - v11 + v8;
    *(_DWORD *)(*(_QWORD *)v13 + 24LL * v10 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v13 + 24) + 8 * ((unsigned __int64)v10 >> 8)) + 16LL * (unsigned __int8)v10,
      0LL);
    KeLeaveCriticalRegion();
  }
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = 0LL;
  KeLeaveCriticalRegion();
}
