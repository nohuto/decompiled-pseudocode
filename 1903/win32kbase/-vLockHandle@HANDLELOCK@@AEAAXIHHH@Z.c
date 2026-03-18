/*
 * XREFs of ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C001D470
 * Callers:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C001631C (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0016D80 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C0016FD0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     GreRestoreDC @ 0x1C0018550 (GreRestoreDC.c)
 *     GreSetDCOwnerEx @ 0x1C0019340 (GreSetDCOwnerEx.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C0019BA4 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     GreSetBrushOwner @ 0x1C0019E60 (GreSetBrushOwner.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C001B750 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     HmgShareLockEx @ 0x1C001BA50 (HmgShareLockEx.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C001C0F0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     HmgShareLockCheck @ 0x1C001C500 (HmgShareLockCheck.c)
 *     HmgLock @ 0x1C001C7D0 (HmgLock.c)
 *     HmgDecrementExclusiveReferenceCountEx @ 0x1C001C9D0 (HmgDecrementExclusiveReferenceCountEx.c)
 *     DEC_SHARE_REF_CNT @ 0x1C001CBC0 (DEC_SHARE_REF_CNT.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C001D6E0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     HmgShareLock @ 0x1C001E600 (HmgShareLock.c)
 *     EngUnlockSurface @ 0x1C001F250 (EngUnlockSurface.c)
 *     INC_SHARE_REF_CNT @ 0x1C001F550 (INC_SHARE_REF_CNT.c)
 *     HmgIncrementShareReferenceCount @ 0x1C001F700 (HmgIncrementShareReferenceCount.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00200C0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     EngLockSurface @ 0x1C0020240 (EngLockSurface.c)
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C0020440 (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C0020A10 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 *     bDeleteDCInternalEx @ 0x1C0021720 (bDeleteDCInternalEx.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C0022480 (HmgShareLockCheckIgnoreStockBit.c)
 *     HmgSetOwner @ 0x1C002A580 (HmgSetOwner.c)
 *     HmgMarkUndeletable @ 0x1C0051F40 (HmgMarkUndeletable.c)
 *     HmgLockAllOwners @ 0x1C00785A0 (HmgLockAllOwners.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C007AB1C (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C0081998 (HmgShareLockIgnoreStockBit.c)
 *     HmgMarkDeletable @ 0x1C0083A30 (HmgMarkDeletable.c)
 *     HmgShareUnlockRemoveObject @ 0x1C00919C0 (HmgShareUnlockRemoveObject.c)
 *     HmgMarkUnXferable @ 0x1C00933F0 (HmgMarkUnXferable.c)
 *     HmgMarkXferable @ 0x1C0093B50 (HmgMarkXferable.c)
 *     HmgFree @ 0x1C00B35F0 (HmgFree.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00BE02C (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgUnlock @ 0x1C00BE340 (HmgUnlock.c)
 *     ??$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00BF1E8 (--$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00BF2DC (--$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x1C012570C (-HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z.c)
 *     HmgSwapLockedHandleContents @ 0x1C0125A40 (HmgSwapLockedHandleContents.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C001CFF0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001D5B0 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C001EBB0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C001ECE0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C00BCE08 (IsThreadCrossSessionAttached.c)
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
