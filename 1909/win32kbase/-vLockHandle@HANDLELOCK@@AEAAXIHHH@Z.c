/*
 * XREFs of ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C001F6D0
 * Callers:
 *     HmgSetOwner @ 0x1C0016200 (HmgSetOwner.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0017C6C (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     HmgFree @ 0x1C001A3F0 (HmgFree.c)
 *     GreSetDCOwnerEx @ 0x1C001AF00 (GreSetDCOwnerEx.c)
 *     GreSetBrushOwner @ 0x1C001B890 (GreSetBrushOwner.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C001BDB0 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C001CAA0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     HmgShareLockEx @ 0x1C001CDA0 (HmgShareLockEx.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C001D060 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     HmgShareLockCheck @ 0x1C001D840 (HmgShareLockCheck.c)
 *     HmgLock @ 0x1C001DB10 (HmgLock.c)
 *     HmgDecrementExclusiveReferenceCountEx @ 0x1C001DD10 (HmgDecrementExclusiveReferenceCountEx.c)
 *     DEC_SHARE_REF_CNT @ 0x1C001DF00 (DEC_SHARE_REF_CNT.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C001E190 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     HmgShareLock @ 0x1C001F940 (HmgShareLock.c)
 *     EngUnlockSurface @ 0x1C00205A0 (EngUnlockSurface.c)
 *     INC_SHARE_REF_CNT @ 0x1C00208A0 (INC_SHARE_REF_CNT.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0020EC0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     HmgIncrementShareReferenceCount @ 0x1C0021040 (HmgIncrementShareReferenceCount.c)
 *     EngLockSurface @ 0x1C0021270 (EngLockSurface.c)
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C0021470 (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 *     bDeleteDCInternalEx @ 0x1C0022200 (bDeleteDCInternalEx.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C00229D0 (HmgShareLockCheckIgnoreStockBit.c)
 *     HmgMarkUndeletable @ 0x1C0050BB0 (HmgMarkUndeletable.c)
 *     ?HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z @ 0x1C0076894 (-HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C0076B9C (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     HmgLockAllOwners @ 0x1C0077200 (HmgLockAllOwners.c)
 *     HmgMarkDeletable @ 0x1C007FC00 (HmgMarkDeletable.c)
 *     HmgShareUnlockRemoveObject @ 0x1C008DA30 (HmgShareUnlockRemoveObject.c)
 *     HmgMarkUnXferable @ 0x1C0091D00 (HmgMarkUnXferable.c)
 *     HmgMarkXferable @ 0x1C0092460 (HmgMarkXferable.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C0093578 (HmgShareLockIgnoreStockBit.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00BB020 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgUnlock @ 0x1C00BB334 (HmgUnlock.c)
 *     ??$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00BCCCC (--$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00BCDC0 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x1C0122E9C (-HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z.c)
 *     HmgSwapLockedHandleContents @ 0x1C01231D0 (HmgSwapLockedHandleContents.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C001F380 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001F810 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C001FEF0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0020020 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C00B9DA8 (IsThreadCrossSessionAttached.c)
 */

void __fastcall HANDLELOCK::vLockHandle(HANDLELOCK *this, unsigned int a2, int a3, int a4, int a5)
{
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rax
  __int64 v10; // rdi
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
  if ( v13 )
  {
    _m_prefetchw((char *)v13 + 8);
    v14 = *((_DWORD *)v13 + 2);
    *((_DWORD *)this + 3) = v14;
    if ( !a4
      && (a3 && (v15 = v14 & 0xFFFFFFFE, v15 != (v17 & 0xFFFFFFFC)) && v15 && (!v10 || v15 != *(_DWORD *)(v10 + 8))
       || (*((_BYTE *)v13 + 15) & 0x20) != 0)
      || !a5
      && (*((_BYTE *)v13 + 15) & 0x40) != 0
      && ((EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v13 & 0xFFFFFF),
           !*((_WORD *)EntryObject + 6))
       || *((struct _KTHREAD **)EntryObject + 2) != KeGetCurrentThread()) )
    {
      HANDLELOCK::vUnlock(this);
    }
  }
  else
  {
    *((_DWORD *)this + 2) = 0;
    KeLeaveCriticalRegion();
  }
}
