/*
 * XREFs of WbGetWarbirdThread @ 0x1405CA698
 * Callers:
 *     sub_1405C9A80 @ 0x1405C9A80 (sub_1405C9A80.c)
 *     WbHeapExecuteCall @ 0x1405CA1C8 (WbHeapExecuteCall.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x140004580 (KeLeaveGuardedRegion.c)
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x14009C760 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14009C990 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     sub_1405CA63C @ 0x1405CA63C (sub_1405CA63C.c)
 *     sub_1405CACF4 @ 0x1405CACF4 (sub_1405CACF4.c)
 *     sub_1406AF340 @ 0x1406AF340 (sub_1406AF340.c)
 *     sub_1406EF65C @ 0x1406EF65C (sub_1406EF65C.c)
 */

__int64 __fastcall WbGetWarbirdThread(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v4; // rdi
  unsigned __int64 *v7; // rsi
  PRTL_BALANCED_NODE v8; // rbp
  int v9; // ebp
  _QWORD *v10; // rcx
  struct _KTHREAD *v12; // rax
  _RTL_BALANCED_NODE *v13; // rax
  int v14; // r8d
  _RTL_BALANCED_NODE *v15; // rbp
  _QWORD *v16; // r14
  __int64 v17; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v18; // [rsp+78h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v18 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v7 = (unsigned __int64 *)(a1 + 128);
  v8 = KeAbPreAcquire(a1 + 128, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v7, v8, (ULONG_PTR)v7);
  if ( v8 )
    BYTE2(v8[1].Left) |= 1u;
  v17 = 0LL;
  v9 = sub_1405CACF4((int)a1 + 88, (_DWORD)CurrentThread, 8, (unsigned int)&v17, 0LL);
  if ( v9 >= 0 )
  {
    v10 = (_QWORD *)v17;
    if ( v17 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v17 + 8));
      v10 = (_QWORD *)v17;
    }
    v18 = v10;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KeLeaveGuardedRegion();
  if ( v9 == -1073741198 )
  {
    v9 = sub_1406EF65C(a1, CurrentThread, &v18);
    if ( v9 < 0 )
    {
LABEL_26:
      v4 = (__int64)v18;
      goto LABEL_15;
    }
    v12 = KeGetCurrentThread();
    --v12->SpecialApcDisable;
    v13 = KeAbPreAcquire((ULONG_PTR)v7, 0LL, 0);
    v15 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      ExfAcquirePushLockExclusiveEx(v7, v13, (ULONG_PTR)v7);
    if ( v15 )
      BYTE2(v15[1].Left) |= 1u;
    v16 = v18;
    v9 = sub_1406AF340((int)a1 + 88, (_DWORD)v18, v14, *v18, 8, -1);
    if ( v9 >= 0 )
      _InterlockedIncrement64(v16 + 1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v7);
    KeAbPostRelease((ULONG_PTR)v7);
    KeLeaveGuardedRegion();
  }
  if ( v9 < 0 || !a3 )
    goto LABEL_26;
  *a3 = v18;
LABEL_15:
  sub_1405CA63C(a1, v4);
  return (unsigned int)v9;
}
