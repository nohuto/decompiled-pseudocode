/*
 * XREFs of ldevUnloadImage @ 0x1C0052F40
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0047950 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00483C0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C0052E1C (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 *     ldevLoadDriver @ 0x1C0052FC0 (ldevLoadDriver.c)
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C00C3D60 (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     EngAcquireSemaphore @ 0x1C0033690 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005AB30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005B3A0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ldevUnloadImage(__int64 a1)
{
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // rax
  void (*v6)(void); // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rcx

  EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
  if ( (*(_DWORD *)(a1 + 28))-- == 1 )
  {
    v5 = WdLogNewEntry5_WdTrace();
    WdLogEvent5_WdTrace(v5);
    v6 = *(void (**)(void))(a1 + 128);
    if ( v6 )
      v6();
    v7 = *(_QWORD *)(a1 + 16);
    if ( v7 && (*(_DWORD *)(a1 + 32) & 2) == 0 )
      ZwSetSystemInformation(SystemUnloadGdiDriverInformation, (PVOID)(v7 + 24), 8uLL);
    v8 = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 )
    {
      *(_QWORD *)(v8 + 8) = *(_QWORD *)(a1 + 8);
      v8 = *(_QWORD *)a1;
    }
    v9 = *(_QWORD **)(a1 + 8);
    if ( v9 )
      *v9 = v8;
    else
      gpldevDrivers = (struct _LDEV *)v8;
    v10 = *(_QWORD *)(a1 + 16);
    if ( v10 )
    {
      Win32FreePool(*(_QWORD *)(v10 + 8));
      Win32FreePool(*(_QWORD *)(a1 + 16));
    }
    Win32FreePool(a1);
  }
  else
  {
    v3 = WdLogNewEntry5_WdTrace();
    WdLogEvent5_WdTrace(v3);
  }
  result = EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
    return PsLeavePriorityRegion();
  }
  return result;
}
