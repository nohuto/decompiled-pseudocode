/*
 * XREFs of DrvDisableMDEV @ 0x1C0044C70
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C004537C (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     SafeDisableMDEV @ 0x1C00BAD40 (SafeDisableMDEV.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0014600 (EngAcquireSemaphore.c)
 *     GreSuspendDirectDraw @ 0x1C0043EF0 (GreSuspendDirectDraw.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C0048778 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00571F4 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0077760 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0078C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00A5750 (GreIncrementDisplaySettingsUniqueness.c)
 */

__int64 __fastcall DrvDisableMDEV(HDEV *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  __int64 v4; // rdi
  __int64 v6; // rax
  HDEV v7; // rbx
  int v8; // eax
  __int64 v9; // rsi
  struct _ERESOURCE *v10; // rcx
  struct _ERESOURCE *v11; // rcx
  __int64 v12; // rax
  HDEV v14; // [rsp+30h] [rbp+8h] BYREF

  v3 = a3;
  v4 = (int)a2;
  v6 = WdLogNewEntry5_WdEvent(a1, a2, a3);
  *(_QWORD *)(v6 + 24) = a1;
  *(_QWORD *)(v6 + 32) = v4;
  WdLogEvent5_WdEvent(v6);
  v7 = *a1;
  v14 = *a1;
  if ( (_DWORD)v4 )
    GreSuspendDirectDraw(v7, 0);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
  EngAcquireSemaphore(*((HSEMAPHORE *)v7 + 8));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"poParent.hsemPointer()", *((_QWORD *)v7 + 8), 4LL);
  EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
  EngAcquireSemaphore(ghsemHT);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemHT", ghsemHT, 6LL);
  EngAcquireSemaphore(*((HSEMAPHORE *)v7 + 6));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"poParent.hsemDevLock()", *((_QWORD *)v7 + 6), 11LL);
  v8 = DrvDisableMDEVChildren((struct _MDEV *)a1, v4, v3);
  v9 = v8;
  if ( v8 && (_DWORD)v4 )
    PDEVOBJ::bDisabled((PDEVOBJ *)&v14, 1);
  EtwTraceGreLockReleaseSemaphore(L"poParent.hsemDevLock()", *((_QWORD *)v7 + 6));
  v10 = (struct _ERESOURCE *)*((_QWORD *)v7 + 6);
  if ( v10 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v10);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemHT", ghsemHT);
  if ( ghsemHT )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemHT);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
  if ( ghsemSprite )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"poParent.hsemPointer()", *((_QWORD *)v7 + 8));
  v11 = (struct _ERESOURCE *)*((_QWORD *)v7 + 8);
  if ( v11 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v11);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion();
  }
  if ( !(_DWORD)v9 && (_DWORD)v4 )
    GreIncrementDisplaySettingsUniqueness();
  v12 = WdLogNewEntry5_WdTrace();
  *(_QWORD *)(v12 + 24) = v9;
  WdLogEvent5_WdTrace(v12);
  return (unsigned int)v9;
}
