/*
 * XREFs of ?DrvReleaseChangeDisplaySettingLocks@@YAXXZ @ 0x1C008FAC8
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C003F640 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall DrvReleaseChangeDisplaySettingLocks(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r8
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // r8
  struct _ERESOURCE *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx

  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDCVisRgn", (__int64)ghsemDCVisRgn, a3);
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
    PsLeavePriorityRegion(v8);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemGreLock", (__int64)ghsemGreLock, v3);
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
    PsLeavePriorityRegion(v9);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (__int64)ghsemDynamicModeChange, v4);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v10);
  }
  v5 = GetghsemEnableEUDC();
  EtwTraceGreLockReleaseSemaphore((__int64)L"GetghsemEnableEUDC()", v5, v6);
  v7 = (struct _ERESOURCE *)GetghsemEnableEUDC();
  if ( v7 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v7);
    PsLeavePriorityRegion(v11);
  }
}
