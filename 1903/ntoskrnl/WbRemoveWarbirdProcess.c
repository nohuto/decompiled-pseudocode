/*
 * XREFs of WbRemoveWarbirdProcess @ 0x140671CFC
 * Callers:
 *     WbDispatchOperation @ 0x1405CA8A0 (WbDispatchOperation.c)
 *     PspProcessDelete @ 0x140670B40 (PspProcessDelete.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x14009C760 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14009C990 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     sub_1405CAC58 @ 0x1405CAC58 (sub_1405CAC58.c)
 *     sub_1405CAC90 @ 0x1405CAC90 (sub_1405CAC90.c)
 *     sub_1406D5FB8 @ 0x1406D5FB8 (sub_1406D5FB8.c)
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
  v3 = KeAbPreAcquire((ULONG_PTR)&qword_14046B878, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14046B878, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_14046B878, v3, (ULONG_PTR)&qword_14046B878);
  if ( v3 )
    BYTE2(v3[1].Left) |= 1u;
  v4 = sub_1405CAC90(a1, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14046B878, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_14046B878);
  KeAbPostRelease((ULONG_PTR)&qword_14046B878);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v4 >= 0 )
  {
    v6 = KeGetCurrentThread();
    --v6->SpecialApcDisable;
    v7 = KeAbPreAcquire((ULONG_PTR)&qword_14046B878, 0LL, 0);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&qword_14046B878, 0LL);
    v9 = v7;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(&qword_14046B878, v7, (ULONG_PTR)&qword_14046B878);
    if ( v9 )
      BYTE2(v9[1].Left) |= 1u;
    v4 = sub_1406D5FB8((unsigned int)&qword_14046B850, a1, 8, -1, (__int64)&v11);
    v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14046B878, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14046B878);
    KeAbPostRelease((ULONG_PTR)&qword_14046B878);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    sub_1405CAC58(v11);
  }
  return (unsigned int)v4;
}
