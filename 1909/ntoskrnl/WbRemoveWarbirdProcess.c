/*
 * XREFs of WbRemoveWarbirdProcess @ 0x140652B2C
 * Callers:
 *     WbDispatchOperation @ 0x1405CADA0 (WbDispatchOperation.c)
 *     PspProcessDelete @ 0x140651970 (PspProcessDelete.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400EF6F0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400EF920 (ExfAcquirePushLockExclusiveEx.c)
 *     sub_1405CB158 @ 0x1405CB158 (sub_1405CB158.c)
 *     sub_1405CB190 @ 0x1405CB190 (sub_1405CB190.c)
 *     sub_1406D57EC @ 0x1406D57EC (sub_1406D57EC.c)
 */

__int64 __fastcall WbRemoveWarbirdProcess(int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  PRTL_BALANCED_NODE v3; // rbx
  int v4; // ebx
  struct _KTHREAD *v6; // rax
  _RTL_BALANCED_NODE *v7; // rax
  signed __int8 v8; // cf
  _RTL_BALANCED_NODE *v9; // rbx
  char v10; // di
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)&qword_14046B5B8, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14046B5B8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_14046B5B8, v3, (ULONG_PTR)&qword_14046B5B8);
  if ( v3 )
    BYTE2(v3[1].Left) |= 1u;
  v4 = sub_1405CB190(a1, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14046B5B8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_14046B5B8);
  KeAbPostRelease((ULONG_PTR)&qword_14046B5B8);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v4 >= 0 )
  {
    v6 = KeGetCurrentThread();
    --v6->SpecialApcDisable;
    v7 = KeAbPreAcquire((ULONG_PTR)&qword_14046B5B8, 0LL, 0);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&qword_14046B5B8, 0LL);
    v9 = v7;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(&qword_14046B5B8, v7, (ULONG_PTR)&qword_14046B5B8);
    if ( v9 )
      BYTE2(v9[1].Left) |= 1u;
    v4 = sub_1406D57EC((unsigned int)&qword_14046B590, a1, 8, -1, (__int64)&v11);
    v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14046B5B8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14046B5B8);
    KeAbPostRelease((ULONG_PTR)&qword_14046B5B8);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    sub_1405CB158(v11);
  }
  return (unsigned int)v4;
}
