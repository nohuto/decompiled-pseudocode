/*
 * XREFs of ldevUnloadImage @ 0x1C0048B20
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00479C0 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C00489CC (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 *     ldevLoadDriver @ 0x1C0048C60 (ldevLoadDriver.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0054DA0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C00B6B0C (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0014600 (EngAcquireSemaphore.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0077760 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0078C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ldevUnloadImage(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rax
  void (*v7)(void); // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx

  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
  if ( (*(_DWORD *)(a1 + 28))-- == 1 )
  {
    v6 = WdLogNewEntry5_WdTrace(v2);
    WdLogEvent5_WdTrace(v6);
    v7 = *(void (**)(void))(a1 + 128);
    if ( v7 )
      v7();
    v8 = *(_QWORD *)(a1 + 16);
    if ( v8 && (*(_DWORD *)(a1 + 32) & 2) == 0 )
      ZwSetSystemInformation(SystemUnloadGdiDriverInformation, (PVOID)(v8 + 24), 8uLL);
    v9 = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 )
    {
      *(_QWORD *)(v9 + 8) = *(_QWORD *)(a1 + 8);
      v9 = *(_QWORD *)a1;
    }
    v10 = *(_QWORD **)(a1 + 8);
    if ( v10 )
      *v10 = v9;
    else
      gpldevDrivers = (struct _LDEV *)v9;
    v11 = *(_QWORD *)(a1 + 16);
    if ( v11 )
    {
      Win32FreePool(*(_QWORD *)(v11 + 8));
      Win32FreePool(*(_QWORD *)(a1 + 16));
    }
    Win32FreePool(a1);
  }
  else
  {
    v4 = WdLogNewEntry5_WdTrace(v2);
    WdLogEvent5_WdTrace(v4);
  }
  result = EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
    return PsLeavePriorityRegion();
  }
  return result;
}
