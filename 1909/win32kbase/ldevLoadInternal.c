/*
 * XREFs of ldevLoadInternal @ 0x1C006C880
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C003D888 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0012FFC (PALLOCMEM2.c)
 *     EngAcquireSemaphore @ 0x1C002BB10 (EngAcquireSemaphore.c)
 *     ?ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z @ 0x1C006C768 (-ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070850 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0072010 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ldevLoadInternal(unsigned int (__fastcall *a1)(__int64, __int64, _QWORD *), int a2)
{
  _DWORD *v4; // rax
  __int64 v5; // rbx
  struct _LDEV *v6; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
  v4 = PALLOCMEM2(0x388uLL, 0x76646C47u, 1);
  v5 = (__int64)v4;
  if ( v4 )
  {
    v4[15] = 0;
    *((_QWORD *)v4 + 112) = v4 + 16;
    v8[0] = 0LL;
    v8[1] = 0LL;
    if ( a1(196865LL, 16LL, v8) && (unsigned int)ldevFillTable(v5, (int *)v8) )
    {
      *(_DWORD *)(v5 + 24) = a2;
      *(_DWORD *)(v5 + 28) = 1;
      if ( gpldevDrivers )
        *((_QWORD *)gpldevDrivers + 1) = v5;
      v6 = gpldevDrivers;
      *(_QWORD *)(v5 + 8) = 0LL;
      *(_QWORD *)v5 = v6;
      gpldevDrivers = (struct _LDEV *)v5;
      *(_QWORD *)(v5 + 16) = 0LL;
    }
    else
    {
      Win32FreePool(v5);
      v5 = 0LL;
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
    PsLeavePriorityRegion();
  }
  return v5;
}
