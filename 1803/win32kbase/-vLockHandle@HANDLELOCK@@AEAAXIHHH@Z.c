/*
 * XREFs of ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C002AFB0
 * Callers:
 *     GreSetBitmapOwner @ 0x1C001DC00 (GreSetBitmapOwner.c)
 *     HmgSetOwner @ 0x1C001E630 (HmgSetOwner.c)
 *     GreSetBrushOwner @ 0x1C00277C0 (GreSetBrushOwner.c)
 *     EngUnlockSurface @ 0x1C0028470 (EngUnlockSurface.c)
 *     HmgLock @ 0x1C0028790 (HmgLock.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0028A00 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     HmgDecrementExclusiveReferenceCountEx @ 0x1C00290B0 (HmgDecrementExclusiveReferenceCountEx.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0029280 (DEC_SHARE_REF_CNT.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00295B4 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0029780 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C002AF6C (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     HmgShareLock @ 0x1C002B3A0 (HmgShareLock.c)
 *     HmgIncrementShareReferenceCount @ 0x1C002C830 (HmgIncrementShareReferenceCount.c)
 *     HmgShareLockCheck @ 0x1C002CA80 (HmgShareLockCheck.c)
 *     INC_SHARE_REF_CNT @ 0x1C002CD30 (INC_SHARE_REF_CNT.c)
 *     HmgShareLockEx @ 0x1C002CF00 (HmgShareLockEx.c)
 *     EngLockSurface @ 0x1C002D1A0 (EngLockSurface.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C002D3D0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C002D8E0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C002E210 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C002EE90 (HmgShareLockCheckIgnoreStockBit.c)
 *     GreCreateCompatibleDC @ 0x1C002F610 (GreCreateCompatibleDC.c)
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x1C002FCB0 (--1DCMEMOBJ@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C002FF24 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     GreSelectVisRgn @ 0x1C00315A0 (GreSelectVisRgn.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C003EA60 (--1SURFMEM@@QEAA@XZ.c)
 *     HmgLockAllOwners @ 0x1C005E6E0 (HmgLockAllOwners.c)
 *     HmgMarkDeletable @ 0x1C0062D10 (HmgMarkDeletable.c)
 *     HmgMarkUndeletable @ 0x1C00631F0 (HmgMarkUndeletable.c)
 *     HmgShareUnlockRemoveObject @ 0x1C00660D0 (HmgShareUnlockRemoveObject.c)
 *     HmgMarkUnXferable @ 0x1C00674C0 (HmgMarkUnXferable.c)
 *     HmgMarkXferable @ 0x1C0067B20 (HmgMarkXferable.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C0067BCC (HmgShareLockIgnoreStockBit.c)
 *     HmgFree @ 0x1C00715F0 (HmgFree.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00764AC (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgUnlock @ 0x1C00766BC (HmgUnlock.c)
 *     ??$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z @ 0x1C0077AA0 (--$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z @ 0x1C0077B94 (--$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x1C00C2680 (-HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z.c)
 *     HmgSwapLockedHandleContents @ 0x1C00C2FE0 (HmgSwapLockedHandleContents.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C002AD50 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002BDF0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002BEC0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002C040 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0075BD4 (IsThreadCrossSessionAttached.c)
 */

void __fastcall HANDLELOCK::vLockHandle(HANDLELOCK *this, unsigned int a2, int a3, int a4, int a5)
{
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rax
  __int64 v10; // rsi
  GdiHandleManager *v11; // rbx
  unsigned int v12; // eax
  struct _ENTRY *v13; // rax
  int v14; // ecx
  unsigned int v15; // ecx
  struct OBJECT *EntryObject; // rax
  int v17; // [rsp+40h] [rbp+8h] BYREF

  if ( !(unsigned int)IsThreadCrossSessionAttached()
    && (CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v17)) != 0
    && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
  {
    v10 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
  }
  else
  {
    v10 = 0LL;
  }
  *((_DWORD *)this + 2) = 1;
  v11 = gpHandleManager;
  v12 = GdiHandleManager::DecodeIndex(gpHandleManager, a2);
  v13 = GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v11 + 2), v12, 0);
  *(_QWORD *)this = v13;
  if ( !v13 )
  {
    *((_DWORD *)this + 2) = 0;
    KeLeaveCriticalRegion();
    return;
  }
  _m_prefetchw((char *)v13 + 8);
  v14 = *((_DWORD *)v13 + 2);
  *((_DWORD *)this + 3) = v14;
  if ( a3 )
  {
    if ( a4 )
      goto LABEL_17;
    v15 = v14 & 0xFFFFFFFE;
    if ( v15 != (v17 & 0xFFFFFFFC) && v15 && (!v10 || v15 != *(_DWORD *)(v10 + 8)) )
      goto LABEL_21;
  }
  else if ( a4 )
  {
    goto LABEL_17;
  }
  if ( (*((_BYTE *)v13 + 15) & 0x20) != 0 )
  {
LABEL_21:
    HANDLELOCK::vUnlock(this);
    return;
  }
LABEL_17:
  if ( !a5 && (*((_BYTE *)v13 + 15) & 0x40) != 0 )
  {
    EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v13 & 0xFFFFFF);
    if ( !*((_WORD *)EntryObject + 6) || *((struct _KTHREAD **)EntryObject + 2) != KeGetCurrentThread() )
      goto LABEL_21;
  }
}
