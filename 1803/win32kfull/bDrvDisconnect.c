/*
 * XREFs of bDrvDisconnect @ 0x1C028E588
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00B9ECC (-InitiateWin32kCleanup@@YAHXZ.c)
 *     xxxRemoteConsoleShadowStop @ 0x1C01D75B0 (xxxRemoteConsoleShadowStop.c)
 *     xxxRemotePassthruEnable @ 0x1C01D77E0 (xxxRemotePassthruEnable.c)
 * Callees:
 *     ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C01383B0 (--0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 *     ??1SEMOBJEX@@QEAA@XZ @ 0x1C01384A8 (--1SEMOBJEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 bDrvDisconnect()
{
  PVOID v0; // rdi
  HANDLE v1; // rsi
  unsigned int v2; // ebx
  __int64 (__fastcall *v3)(HANDLE, PVOID); // rax
  _BYTE v5[96]; // [rsp+90h] [rbp-68h] BYREF
  _QWORD *v6; // [rsp+110h] [rbp+18h] BYREF

  v0 = gConsoleShadowThinwireFileObject;
  v1 = ghConsoleShadowThinwireChannel;
  v6 = (_QWORD *)gConsoleShadowhDev;
  if ( gConsoleShadowhDev && (v2 = 1, (*(_DWORD *)(gConsoleShadowhDev + 40) & 1) != 0) )
  {
    SEMOBJEX::SEMOBJEX(
      (SEMOBJEX *)v5,
      ghsemDynamicModeChange,
      1,
      ghsemGreLock,
      2u,
      ghsemDCVisRgn,
      3u,
      *(HSEMAPHORE *)(gConsoleShadowhDev + 56),
      4u,
      ghsemSprite,
      5u,
      ghsemHT,
      6u);
    GreAcquireSemaphore(v6[6]);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", v6[6], 11LL);
    PDEVOBJ::vSync((PDEVOBJ *)&v6, (struct _SURFOBJ *)((v6[318] + 24LL) & -(__int64)(v6[318] != 0LL)), 0LL, 0);
    v3 = (__int64 (__fastcall *)(HANDLE, PVOID))v6[413];
    if ( v3 )
    {
      v2 = v3(v1, v0);
      if ( v2 )
        *(_DWORD *)(v6[223] + 60LL) = 3;
    }
    EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", v6[6]);
    GreReleaseSemaphoreInternal(v6[6]);
    SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v5);
  }
  else
  {
    return 0;
  }
  return v2;
}
