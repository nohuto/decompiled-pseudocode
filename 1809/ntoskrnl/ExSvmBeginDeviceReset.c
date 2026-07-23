/*
 * XREFs of ExSvmBeginDeviceReset @ 0x14031DB30
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExSvmBeginDeviceReset(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  _RTL_BALANCED_NODE *v5; // rax
  signed __int8 v6; // cf
  _RTL_BALANCED_NODE *v7; // rdi
  __int64 *v8; // rax
  __int64 *v9; // rcx
  unsigned int v10; // edi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)&ExpSvmDeviceListLock, 0LL, 0);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&ExpSvmDeviceListLock, 0LL);
  v7 = v5;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&ExpSvmDeviceListLock, v5, (ULONG_PTR)&ExpSvmDeviceListLock);
  if ( v7 )
    BYTE2(v7[1].Left) |= 1u;
  v8 = (__int64 *)ExpSvmDevices;
  if ( (__int64 *)ExpSvmDevices == &ExpSvmDevices )
  {
    v10 = -1073741810;
  }
  else
  {
    do
    {
      v9 = v8;
      if ( v8[2] == a1 )
        break;
      v8 = (__int64 *)*v8;
    }
    while ( v8 != &ExpSvmDevices );
    v10 = ((__int64 (__fastcall *)(__int64, __int64))HalIommuDispatch[17])(v9[14], a2);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpSvmDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&ExpSvmDeviceListLock);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v10;
}
