/*
 * XREFs of CmpCloseKeyObject @ 0x140695F40
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwGetKernelTraceTimestamp @ 0x14010E9A0 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405D8310 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpDelayedDerefKeys @ 0x1405DD0C4 (CmpDelayedDerefKeys.c)
 *     CmpPostNotify @ 0x1405DD29C (CmpPostNotify.c)
 *     CmpUnlockKcb @ 0x1405E4580 (CmpUnlockKcb.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpSignalDeferredPosts @ 0x140696154 (CmpSignalDeferredPosts.c)
 */

PVOID __fastcall CmpCloseKeyObject(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rsi
  __int64 v7; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rbx
  char IsKeyDeletedForKeyBody; // al
  ULONG_PTR v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rbx
  void *v17[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v18[2]; // [rsp+50h] [rbp-58h] BYREF
  PVOID v19[2]; // [rsp+60h] [rbp-48h] BYREF
  LARGE_INTEGER v20[4]; // [rsp+70h] [rbp-38h] BYREF

  v4 = 0LL;
  memset(v20, 0, sizeof(v20));
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v20, 0x20000u);
  CmpInitializeThreadInfo(v19);
  if ( CmpTraceRoutine && a2 )
    v4 = *(_QWORD *)(a2 + 8);
  if ( a4 <= 1 && *(_DWORD *)a2 == 1803104306 && *(_QWORD *)(a2 + 16) )
  {
    v18[1] = (__int64)v18;
    v18[0] = (__int64)v18;
    v17[1] = v17;
    v17[0] = v17;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    CmpLockRegistry();
    v9 = *(_QWORD *)(a2 + 8);
    ExAcquirePushLockSharedEx(v9 + 40, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 48));
    IsKeyDeletedForKeyBody = CmpIsKeyDeletedForKeyBody(a2, 0LL);
    v11 = *(_QWORD *)(a2 + 8);
    if ( IsKeyDeletedForKeyBody )
    {
      CmpUnlockKcb(v11);
      CmpUnlockRegistry();
    }
    else
    {
      ExAcquirePushLockExclusiveEx(*(_QWORD *)(v11 + 24) + 1672LL, 0LL);
      v14 = *(_QWORD *)(a2 + 16);
      if ( v14 && *(_QWORD *)(v14 + 16) != v14 + 16 )
        CmpPostNotify(v14, v12, v13, 267LL, 0, v17, v18);
      v15 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 24LL);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 1672), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v15 + 1672));
      KeAbPostRelease(v15 + 1672);
      CmpUnlockKcb(*(_QWORD *)(a2 + 8));
      CmpUnlockRegistry();
      CmpDelayedDerefKeys(v17);
      CmpSignalDeferredPosts(v18);
    }
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( CmpTraceRoutine )
  {
    LOBYTE(v7) = 27;
    CmpTraceRoutine(v7, v20, 0LL, 0LL, v4, 0LL);
  }
  return CmCleanupThreadInfo(v19);
}
