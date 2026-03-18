/*
 * XREFs of ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0023460
 * Callers:
 *     HmgSetOwner @ 0x1C001E160 (HmgSetOwner.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C001FCE0 (--1SURFMEM@@QEAA@XZ.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C0020520 (HmgShareLockCheckIgnoreStockBit.c)
 *     EngLockSurface @ 0x1C0021210 (EngLockSurface.c)
 *     INC_SHARE_REF_CNT @ 0x1C00215E0 (INC_SHARE_REF_CNT.c)
 *     HmgShareLockCheck @ 0x1C0021790 (HmgShareLockCheck.c)
 *     HmgShareLockEx @ 0x1C0021C50 (HmgShareLockEx.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0021F00 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     HmgDecrementExclusiveReferenceCountEx @ 0x1C0022330 (HmgDecrementExclusiveReferenceCountEx.c)
 *     HmgLock @ 0x1C0022520 (HmgLock.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0022720 (DEC_SHARE_REF_CNT.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C00229B0 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     HmgShareLock @ 0x1C0022B50 (HmgShareLock.c)
 *     GreSetDCOwnerEx @ 0x1C0027700 (GreSetDCOwnerEx.c)
 *     GreSetBrushOwner @ 0x1C0042FF0 (GreSetBrushOwner.c)
 *     HmgMarkUndeletable @ 0x1C0044AD0 (HmgMarkUndeletable.c)
 *     HmgFree @ 0x1C0062E00 (HmgFree.c)
 *     ?HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z @ 0x1C0068D44 (-HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z.c)
 *     HmgLockAllOwners @ 0x1C0069600 (HmgLockAllOwners.c)
 *     HmgMarkDeletable @ 0x1C0072540 (HmgMarkDeletable.c)
 *     HmgShareUnlockRemoveObject @ 0x1C007E680 (HmgShareUnlockRemoveObject.c)
 *     HmgMarkUnXferable @ 0x1C0080740 (HmgMarkUnXferable.c)
 *     HmgMarkXferable @ 0x1C00811E0 (HmgMarkXferable.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C0081F54 (HmgShareLockIgnoreStockBit.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00AA958 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgUnlock @ 0x1C00AACB0 (HmgUnlock.c)
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00AC538 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00AC624 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00AC740 (--$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00AC84C (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00AC938 (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x1C00F8DD4 (-HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z.c)
 *     HmgSwapLockedHandleContents @ 0x1C00F9430 (HmgSwapLockedHandleContents.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0023220 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C00235A0 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C0023670 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0023820 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C00A8330 (IsThreadCrossSessionAttached.c)
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
