/*
 * XREFs of WbRemoveWarbirdProcess @ 0x140609988
 * Callers:
 *     PspProcessDelete @ 0x140608590 (PspProcessDelete.c)
 *     WbDispatchOperation @ 0x140626384 (WbDispatchOperation.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140005550 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     sub_140626254 @ 0x140626254 (sub_140626254.c)
 *     sub_14062656C @ 0x14062656C (sub_14062656C.c)
 *     sub_1406B20DC @ 0x1406B20DC (sub_1406B20DC.c)
 */

__int64 __fastcall WbRemoveWarbirdProcess(__int64 a1)
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
  v3 = KeAbPreAcquire((ULONG_PTR)&qword_140440AF8, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140440AF8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_140440AF8, v3, (ULONG_PTR)&qword_140440AF8);
  if ( v3 )
    BYTE2(v3[1].Left) |= 1u;
  v4 = sub_140626254(a1, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140440AF8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140440AF8);
  KeAbPostRelease((ULONG_PTR)&qword_140440AF8);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v4 >= 0 )
  {
    v6 = KeGetCurrentThread();
    --v6->SpecialApcDisable;
    v7 = KeAbPreAcquire((ULONG_PTR)&qword_140440AF8, 0LL, 0);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140440AF8, 0LL);
    v9 = v7;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(&qword_140440AF8, v7, (ULONG_PTR)&qword_140440AF8);
    if ( v9 )
      BYTE2(v9[1].Left) |= 1u;
    v4 = sub_1406B20DC((unsigned int)&dword_140440AD0, a1, 8, -1, (__int64)&v11);
    v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140440AF8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140440AF8);
    KeAbPostRelease((ULONG_PTR)&qword_140440AF8);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    sub_14062656C(v11);
  }
  return (unsigned int)v4;
}
