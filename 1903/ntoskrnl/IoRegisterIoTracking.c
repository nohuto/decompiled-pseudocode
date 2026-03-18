/*
 * XREFs of IoRegisterIoTracking @ 0x140857EC0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     IopIrpExtensionControl @ 0x140293BB4 (IopIrpExtensionControl.c)
 *     IoPerfInit @ 0x14029A394 (IoPerfInit.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IoRegisterIoTracking(__int64 a1, _QWORD *a2)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rdi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v8; // rax

  *a2 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x72546F49u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *PoolWithTag = 0LL;
  PoolWithTag[1] = 0LL;
  PoolWithTag[2] = 0LL;
  PoolWithTag[2] = *(_QWORD *)(a1 + 8);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&IopPerfIoTrackingLock, 0LL);
  v8 = (_QWORD *)qword_140461828;
  if ( *(__int64 **)qword_140461828 != &IopPerfIoTrackingListHead )
    __fastfail(3u);
  *v5 = &IopPerfIoTrackingListHead;
  v5[1] = v8;
  *v8 = v5;
  qword_140461828 = (__int64)v5;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&IopPerfIoTrackingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&IopPerfIoTrackingLock);
  KeAbPostRelease((ULONG_PTR)&IopPerfIoTrackingLock);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  IopIrpExtensionControl(2, 1);
  IoPerfInit(2);
  result = 0LL;
  *a2 = v5;
  return result;
}
