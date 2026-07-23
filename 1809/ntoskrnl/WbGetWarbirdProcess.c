/*
 * XREFs of WbGetWarbirdProcess @ 0x1406265A4
 * Callers:
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
 *     sub_14069290C @ 0x14069290C (sub_14069290C.c)
 *     WbCreateWarbirdProcess @ 0x1406D0D08 (WbCreateWarbirdProcess.c)
 */

__int64 __fastcall WbGetWarbirdProcess(__int64 a1, int a2, volatile signed __int64 **a3)
{
  volatile signed __int64 *v3; // rbx
  struct _KTHREAD *CurrentThread; // rax
  PRTL_BALANCED_NODE v8; // rdi
  int v9; // edi
  struct _KTHREAD *v11; // rax
  _RTL_BALANCED_NODE *v12; // rax
  int v13; // r8d
  signed __int8 v14; // cf
  _RTL_BALANCED_NODE *v15; // rdi
  volatile signed __int64 *v16; // r14
  char v17; // si
  volatile signed __int64 *v18; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0LL;
  v18 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire((ULONG_PTR)&qword_140440AF8, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140440AF8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_140440AF8, v8, (ULONG_PTR)&qword_140440AF8);
  if ( v8 )
    BYTE2(v8[1].Left) |= 1u;
  v9 = sub_140626254(a1, &v18);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140440AF8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140440AF8);
  KeAbPostRelease((ULONG_PTR)&qword_140440AF8);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v9 == -1073741198 )
  {
    if ( !a2 )
      goto LABEL_24;
    v9 = WbCreateWarbirdProcess(a1, &v18);
    if ( v9 < 0 )
      goto LABEL_24;
    v11 = KeGetCurrentThread();
    --v11->SpecialApcDisable;
    v12 = KeAbPreAcquire((ULONG_PTR)&qword_140440AF8, 0LL, 0);
    v14 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140440AF8, 0LL);
    v15 = v12;
    if ( v14 )
      ExfAcquirePushLockExclusiveEx(&qword_140440AF8, v12, (ULONG_PTR)&qword_140440AF8);
    if ( v15 )
      BYTE2(v15[1].Left) |= 1u;
    v16 = v18;
    v9 = sub_14069290C((unsigned int)&dword_140440AD0, (_DWORD)v18, v13, *v18, 8, -1);
    if ( v9 >= 0 )
      _InterlockedIncrement64(v16 + 29);
    v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140440AF8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v17 & 2) != 0 && (v17 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140440AF8);
    KeAbPostRelease((ULONG_PTR)&qword_140440AF8);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( v9 < 0 || !a3 )
  {
LABEL_24:
    v3 = v18;
    goto LABEL_11;
  }
  *a3 = v18;
LABEL_11:
  sub_14062656C(v3);
  return (unsigned int)v9;
}
