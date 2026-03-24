/*
 * XREFs of WbRemoveWarbirdProcess @ 0x140608988
 * Callers:
 *     PspProcessDelete @ 0x140607590 (PspProcessDelete.c)
 *     WbDispatchOperation @ 0x140625364 (WbDispatchOperation.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140005550 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400914B0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     sub_140625234 @ 0x140625234 (sub_140625234.c)
 *     sub_14062554C @ 0x14062554C (sub_14062554C.c)
 *     sub_1406B0E3C @ 0x1406B0E3C (sub_1406B0E3C.c)
 */

__int64 __fastcall WbRemoveWarbirdProcess(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rbx
  int v4; // ebx
  struct _KTHREAD *v6; // rax
  __int64 v7; // rax
  signed __int8 v8; // cf
  __int64 v9; // rbx
  char v10; // di
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)&qword_14043FA38, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14043FA38, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_14043FA38, v3, (ULONG_PTR)&qword_14043FA38);
  if ( v3 )
    *(_BYTE *)(v3 + 26) |= 1u;
  v4 = sub_140625234(a1, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14043FA38, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_14043FA38);
  KeAbPostRelease((ULONG_PTR)&qword_14043FA38);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v4 >= 0 )
  {
    v6 = KeGetCurrentThread();
    --v6->SpecialApcDisable;
    v7 = KeAbPreAcquire((ULONG_PTR)&qword_14043FA38, 0LL, 0);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&qword_14043FA38, 0LL);
    v9 = v7;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(&qword_14043FA38, v7, (ULONG_PTR)&qword_14043FA38);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    v4 = sub_1406B0E3C((unsigned int)&dword_14043FA10, a1, 8, -1, (__int64)&v11);
    v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14043FA38, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14043FA38);
    KeAbPostRelease((ULONG_PTR)&qword_14043FA38);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    sub_14062554C(v11);
  }
  return (unsigned int)v4;
}
