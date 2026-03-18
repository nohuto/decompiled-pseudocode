/*
 * XREFs of CmpCloseKeyObject @ 0x1406B6B30
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     EtwGetKernelTraceTimestamp @ 0x1401094D0 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F6EE0 (CmpLockRegistry.c)
 *     CmpUnlockKcb @ 0x1405F94F0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x1405FBB40 (CmpLockKcbShared.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405FE500 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpSignalDeferredPosts @ 0x140603EF0 (CmpSignalDeferredPosts.c)
 *     CmUnlockHive @ 0x14062FD8C (CmUnlockHive.c)
 *     CmLockHive @ 0x14062FDC8 (CmLockHive.c)
 *     CmpDelayedDerefKeys @ 0x1406315AC (CmpDelayedDerefKeys.c)
 *     CmpPostNotify @ 0x140631680 (CmpPostNotify.c)
 */

__int64 __fastcall CmpCloseKeyObject(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  char IsKeyDeletedForKeyBody; // al
  ULONG_PTR v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  void *v15; // [rsp+40h] [rbp-58h] BYREF
  void **v16; // [rsp+48h] [rbp-50h]
  _QWORD *v17; // [rsp+50h] [rbp-48h] BYREF
  _QWORD **v18; // [rsp+58h] [rbp-40h]
  LARGE_INTEGER v19[4]; // [rsp+60h] [rbp-38h] BYREF

  v17 = 0LL;
  v18 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  memset(v19, 0, sizeof(v19));
  v7 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    EtwGetKernelTraceTimestamp(v19, 0x20000u);
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    {
      if ( a2 )
        v7 = *(_QWORD *)(a2 + 8);
    }
  }
  if ( a4 <= 1 && *(_DWORD *)a2 == 1803104306 && *(_QWORD *)(a2 + 16) )
  {
    v18 = &v17;
    v17 = &v17;
    v16 = &v15;
    v15 = &v15;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    CmpLockRegistry();
    CmpLockKcbShared(*(_QWORD *)(a2 + 8));
    IsKeyDeletedForKeyBody = CmpIsKeyDeletedForKeyBody(a2, 0LL);
    v11 = *(_QWORD *)(a2 + 8);
    if ( IsKeyDeletedForKeyBody )
    {
      CmpUnlockKcb(v11);
      CmpUnlockRegistry();
    }
    else
    {
      CmLockHive(*(_QWORD *)(v11 + 32));
      v14 = *(_QWORD *)(a2 + 16);
      if ( v14 && *(_QWORD *)(v14 + 16) != v14 + 16 )
        CmpPostNotify(v14, v12, v13, 267LL, 0, &v15, (__int64 *)&v17);
      CmUnlockHive(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 32LL));
      CmpUnlockKcb(*(_QWORD *)(a2 + 8));
      CmpUnlockRegistry();
      CmpDelayedDerefKeys(&v15);
      CmpSignalDeferredPosts(&v17);
    }
    KeLeaveCriticalRegion();
  }
  result = *(__int64 *)((char *)&NlsMbCodePageTag + 7);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v6) = 27;
    return (*(__int64 (__fastcall **)(__int64, LARGE_INTEGER *, _QWORD, _QWORD, __int64, _QWORD))((char *)&NlsMbCodePageTag
                                                                                                + 7))(
             v6,
             v19,
             0LL,
             0LL,
             v7,
             0LL);
  }
  return result;
}
