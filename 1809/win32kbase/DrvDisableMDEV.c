/*
 * XREFs of DrvDisableMDEV @ 0x1C00A26D0
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C003F640 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     SafeDisableMDEV @ 0x1C00A62F0 (SafeDisableMDEV.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0029E50 (EngAcquireSemaphore.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C003E228 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     GreSuspendDirectDraw @ 0x1C003EDC0 (GreSuspendDirectDraw.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005FBC0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00913D0 (GreIncrementDisplaySettingsUniqueness.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C00A2988 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 */

__int64 __fastcall DrvDisableMDEV(HDEV *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  __int64 v4; // rdi
  __int64 v6; // rax
  HDEV v7; // rbx
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // rsi
  __int64 v11; // r8
  struct _ERESOURCE *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // r8
  struct _ERESOURCE *v16; // rcx
  PERESOURCE v17; // rcx
  __int64 v18; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  HDEV v25; // [rsp+30h] [rbp+8h] BYREF

  v3 = a3;
  v4 = (int)a2;
  v6 = WdLogNewEntry5_WdEvent(a1, a2, a3);
  *(_QWORD *)(v6 + 24) = a1;
  *(_QWORD *)(v6 + 32) = v4;
  WdLogEvent5_WdEvent(v6);
  v7 = *a1;
  v25 = *a1;
  if ( (_DWORD)v4 )
    GreSuspendDirectDraw(v7, 0);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
  EngAcquireSemaphore(*((HSEMAPHORE *)v7 + 8));
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"poParent.hsemPointer()", *((_QWORD *)v7 + 8), 4);
  EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemSprite", (int)ghsemSprite, 5);
  EngAcquireSemaphore(ghsemHT);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemHT", (int)ghsemHT, 6);
  EngAcquireSemaphore(*((HSEMAPHORE *)v7 + 6));
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"poParent.hsemDevLock()", *((_QWORD *)v7 + 6), 11);
  v8 = DrvDisableMDEVChildren((struct _MDEV *)a1, v4, v3);
  v10 = v8;
  if ( v8 && (_DWORD)v4 )
    PDEVOBJ::bDisabled((PDEVOBJ *)&v25, 1);
  EtwTraceGreLockReleaseSemaphore((__int64)L"poParent.hsemDevLock()", *((_QWORD *)v7 + 6), v9);
  v12 = (struct _ERESOURCE *)*((_QWORD *)v7 + 6);
  if ( v12 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v12);
    PsLeavePriorityRegion(v20);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemHT", (__int64)ghsemHT, v11);
  if ( ghsemHT )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemHT);
    PsLeavePriorityRegion(v21);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemSprite", (__int64)ghsemSprite, v13);
  if ( ghsemSprite )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
    PsLeavePriorityRegion(v22);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"poParent.hsemPointer()", *((_QWORD *)v7 + 8), v14);
  v16 = (struct _ERESOURCE *)*((_QWORD *)v7 + 8);
  if ( v16 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v16);
    PsLeavePriorityRegion(v23);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (__int64)ghsemDynamicModeChange, v15);
  v17 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v24);
  }
  if ( !(_DWORD)v10 && (_DWORD)v4 )
    GreIncrementDisplaySettingsUniqueness();
  v18 = WdLogNewEntry5_WdTrace(v17);
  *(_QWORD *)(v18 + 24) = v10;
  WdLogEvent5_WdTrace(v18);
  return (unsigned int)v10;
}
