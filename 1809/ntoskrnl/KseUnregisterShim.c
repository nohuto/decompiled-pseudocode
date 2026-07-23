/*
 * XREFs of KseUnregisterShim @ 0x140849030
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KsepPoolFreePaged @ 0x1400F4D34 (KsepPoolFreePaged.c)
 *     KsepLogInfo @ 0x1400F4DB8 (KsepLogInfo.c)
 *     KsepDebugPrint @ 0x14029FE34 (KsepDebugPrint.c)
 *     KsepLogError @ 0x1402A00D4 (KsepLogError.c)
 *     KsepIsShimRegistered @ 0x1407297BC (KsepIsShimRegistered.c)
 */

__int64 __fastcall KseUnregisterShim(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v4; // r14d
  __int64 v5; // r8
  unsigned int v6; // ebp
  _QWORD *v7; // rsi
  __int64 v8; // rax
  _QWORD *v9; // rcx
  void **v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( dword_14043D974 != 2 )
    return 3221225473LL;
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14043D9A0, 0LL);
  if ( (unsigned int)KsepIsShimRegistered((__int64)&KseEngine, *(_QWORD **)(a1 + 8), v5, &v13) )
  {
    if ( *((_DWORD *)v13 + 6) )
    {
      v6 = -1073741790;
      v7 = v13;
      v8 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      dword_14041BCA4[2 * v8] = -1073741790;
      KsepHistoryErrors[2 * v8] = 131453;
      if ( (KsepDebugFlag & 2) != 0 )
        KsepDebugPrint(
          3LL,
          "KSE: Ending shim [0x%08X] unregistration. Shim object [0x%08X] ref count is not 0.\n",
          **(_DWORD **)(a1 + 8),
          (_DWORD)v7);
      KsepLogError(
        3,
        "KSE: Ending shim [0x%08X] unregistration. Shim object [0x%08X] ref count is not 0.\n",
        **(_DWORD **)(a1 + 8),
        (_DWORD)v7);
      *((_DWORD *)v7 + 7) |= 4u;
    }
    else
    {
      v9 = (_QWORD *)*v13;
      if ( *(_QWORD **)(*v13 + 8LL) != v13 || (v10 = (void **)v13[1], *v10 != v13) )
        __fastfail(3u);
      *v10 = v9;
      v9[1] = v10;
      v4 = 1;
      v11 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
      HIDWORD(KsepHistoryMessages[v11]) = 0;
      LODWORD(KsepHistoryMessages[v11]) = 131470;
      if ( (KsepDebugFlag & 1) != 0 )
        KsepDebugPrint(3LL, "KSE: Succeeded shim [0x%08X] unregistration.\n", **(_DWORD **)(a1 + 8));
      KsepLogInfo(3LL, (__int64)"KSE: Succeeded shim [0x%08X] unregistration.\n", **(_DWORD **)(a1 + 8));
      v6 = 0;
    }
  }
  else
  {
    v6 = -1073741772;
    v12 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    dword_14041BCA4[2 * v12] = -1073741772;
    KsepHistoryErrors[2 * v12] = 131482;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(3LL, "KSE: Failed shim [0x%08X] unregistration. Shim not found.\n", **(_DWORD **)(a1 + 8));
    KsepLogError(3, "KSE: Failed shim [0x%08X] unregistration. Shim not found.\n", **(_DWORD **)(a1 + 8));
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14043D9A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14043D9A0);
  KeAbPostRelease((ULONG_PTR)&qword_14043D9A0);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v4 )
    KsepPoolFreePaged(v13);
  return v6;
}
