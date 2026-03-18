/*
 * XREFs of ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C004279C
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C003D888 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C0041C3C (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C00447C8 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C01274B0 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C002BB10 (EngAcquireSemaphore.c)
 *     GreSuspendDirectDraw @ 0x1C003E4F0 (GreSuspendDirectDraw.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C0041AF0 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0068604 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070850 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0072010 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00A4700 (GreIncrementDisplaySettingsUniqueness.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvDisableDisplay(HSEMAPHORE *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rax
  __int64 (__fastcall *v6)(_QWORD, _QWORD); // rax
  unsigned int v7; // ebx
  struct _ERESOURCE *v8; // rcx
  struct _ERESOURCE *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  PERESOURCE v13; // rcx
  __int64 v14; // rax
  HSEMAPHORE v16; // rax
  int v17; // edx
  int v18; // ecx
  HSEMAPHORE v19; // rdx
  __int64 v20; // r10
  HSEMAPHORE *v21; // [rsp+60h] [rbp-28h] BYREF
  _DWORD v22[4]; // [rsp+68h] [rbp-20h] BYREF

  v3 = (int)a2;
  v21 = a1;
  v5 = WdLogNewEntry5_WdEvent(a1, a2, a3);
  *(_QWORD *)(v5 + 24) = a1;
  *(_QWORD *)(v5 + 32) = v3;
  WdLogEvent5_WdEvent(v5);
  GreSuspendDirectDraw((HDEV)a1, 0);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
  EngAcquireSemaphore((HSEMAPHORE)ghsemGreLock);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDCVisRgn", ghsemDCVisRgn, 3LL);
  EngAcquireSemaphore(a1[8]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemPointer()", a1[8], 4LL);
  EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
  EngAcquireSemaphore(ghsemHT);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemHT", ghsemHT, 6LL);
  EngAcquireSemaphore(a1[6]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", a1[6], 11LL);
  if ( (_DWORD)v3 )
  {
    if ( ((_DWORD)a1[5] & 0x400) == 0 )
    {
      v16 = a1[319];
      v17 = *((_DWORD *)v16 + 15);
      v18 = *((_DWORD *)v16 + 14);
      v22[0] = 0;
      v22[1] = 0;
      v22[2] = v18;
      v22[3] = v17;
      if ( (int)IsEngBitBltSupported() >= 0 )
      {
        v19 = a1[319];
        v20 = (unsigned __int64)(v19 + 6) & -(__int64)(v19 != 0LL);
        if ( ((_DWORD)v19[28] & 1) != 0 )
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(*((_QWORD *)v19 + 6) + 2832LL))(
            v20,
            0LL,
            0LL,
            0LL,
            0LL,
            v22,
            0LL,
            0LL,
            0LL,
            0LL,
            0);
        else
          ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EngBitBlt)(
            v20,
            0LL,
            0LL,
            0LL,
            0LL,
            v22,
            0LL,
            0LL,
            0LL,
            0LL,
            0);
      }
    }
  }
  PDEVOBJ::vSync(
    (PDEVOBJ *)&v21,
    (struct _SURFOBJ *)((unsigned __int64)(a1[319] + 6) & ((unsigned __int128)-(__int128)(unsigned __int64)a1[319] >> 64)),
    0LL,
    0);
  if ( (int)IsDwmDestroyDeviceSpecificResourcesSupported() >= 0 )
    DwmDestroyDeviceSpecificResources(a1);
  if ( gProtocolType == -1 )
    *((_DWORD *)a1 + 654) = 4;
  v6 = (__int64 (__fastcall *)(_QWORD, _QWORD))a1[341];
  if ( v6 )
    v7 = v6(a1[225], 0LL);
  else
    v7 = 0;
  *((_DWORD *)a1 + 654) = 0;
  if ( v7 )
    PDEVOBJ::bDisabled((PDEVOBJ *)&v21, 1);
  EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", a1[6]);
  v8 = (struct _ERESOURCE *)a1[6];
  if ( v8 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v8);
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
  EtwTraceGreLockReleaseSemaphore(L"po.hsemPointer()", a1[8]);
  v9 = (struct _ERESOURCE *)a1[8];
  if ( v9 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v9);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  v13 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion();
  }
  if ( !v7 )
    GreIncrementDisplaySettingsUniqueness(v13, v10, v11, v12);
  v14 = WdLogNewEntry5_WdTrace(v13);
  *(_QWORD *)(v14 + 24) = (int)v7;
  WdLogEvent5_WdTrace(v14);
  return v7;
}
