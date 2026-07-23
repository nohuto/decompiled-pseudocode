/*
 * XREFs of KseDriverUnloadImage @ 0x1407102DC
 * Callers:
 *     MiUnloadSystemImage @ 0x140652C64 (MiUnloadSystemImage.c)
 * Callees:
 *     MmIsSessionAddress @ 0x1400245B0 (MmIsSessionAddress.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KsepPoolFreePaged @ 0x1400F4D34 (KsepPoolFreePaged.c)
 *     KsepLogInfo @ 0x1400F4DB8 (KsepLogInfo.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     KsepDebugPrint @ 0x14029FE34 (KsepDebugPrint.c)
 *     RtlAssert @ 0x1402EFA50 (RtlAssert.c)
 *     KsepDbFreeDriverShims @ 0x14067EC3C (KsepDbFreeDriverShims.c)
 *     KsepIsModuleShimmed @ 0x14067F3E8 (KsepIsModuleShimmed.c)
 */

__int64 __fastcall KseDriverUnloadImage(__int64 a1)
{
  unsigned __int64 v2; // rbx
  int v3; // eax
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v6; // rdi
  __int64 v7; // rbp
  unsigned int *v8; // r14
  unsigned int v9; // eax
  __int64 v10; // rdx
  void (__fastcall *v11)(_QWORD); // rax
  __int64 v12; // rbp
  __int64 *v13; // rsi
  __int64 v14; // rax
  int v15; // eax
  int v16; // ecx
  __int64 *v17; // rcx
  __int64 **v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rdx
  unsigned int v21; // edx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rbx
  void *v25; // rcx
  __int64 v26; // rax
  void *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  if ( dword_14043D974 != 2 )
    return 3221225659LL;
  if ( (KseEngine & 1) != 0 )
    return 3221225659LL;
  v2 = *(_QWORD *)(a1 + 48);
  LOBYTE(v3) = MmIsSessionAddress(v2);
  if ( v3 == 1 )
    return 3221225659LL;
  if ( (unsigned int)KsepIsModuleShimmed((__int64)&KseEngine, v2, &v29) && v29 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14043D9A0, 0LL);
    v6 = (_QWORD *)v29;
    v7 = 0LL;
    v8 = (unsigned int *)(v29 + 24);
    v9 = *(_DWORD *)(v29 + 24);
    if ( v9 )
    {
      do
      {
        v10 = *(_QWORD *)(v6[4] + 80 * v7 + 72);
        if ( (*(_DWORD *)(v10 + 28) & 4) == 0 )
        {
          v11 = *(void (__fastcall **)(_QWORD))(*(_QWORD *)(v10 + 16) + 32LL);
          if ( v11 )
            v11(*(_QWORD *)(a1 + 48));
        }
        v9 = *v8;
        v7 = (unsigned int)(v7 + 1);
      }
      while ( (unsigned int)v7 < *v8 );
    }
    v12 = 0LL;
    if ( v9 )
    {
      do
      {
        v13 = *(__int64 **)(v6[4] + 80 * v12 + 72);
        if ( !*((_DWORD *)v13 + 6) )
        {
          v14 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_14041BCA4[2 * v14] = -1073740768;
          KsepHistoryErrors[2 * v14] = 460155;
          if ( (KsepDebugFlag & 4) != 0 )
            RtlAssert("RegisteredShim->RefCount > 0", "minkernel\\ntos\\kshim\\kseloader.c", 0x57Bu, 0LL);
        }
        v15 = *((_DWORD *)v13 + 7);
        v16 = *((_DWORD *)v13 + 6) - 1;
        *((_DWORD *)v13 + 6) = v16;
        if ( (v15 & 4) != 0 && !v16 )
        {
          v17 = (__int64 *)*v13;
          if ( *(__int64 **)(*v13 + 8) != v13 )
            goto LABEL_43;
          v18 = (__int64 **)v13[1];
          if ( *v18 != v13 )
            goto LABEL_43;
          *v18 = v17;
          v17[1] = (__int64)v18;
        }
        v12 = (unsigned int)(v12 + 1);
      }
      while ( (unsigned int)v12 < *v8 );
      v6 = (_QWORD *)v29;
    }
    v19 = *v6;
    if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v20 = (_QWORD *)v6[1], (_QWORD *)*v20 != v6) )
LABEL_43:
      __fastfail(3u);
    *v20 = v19;
    *(_QWORD *)(v19 + 8) = v20;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14043D9A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14043D9A0);
    KeAbPostRelease((ULONG_PTR)&qword_14043D9A0);
    KeLeaveCriticalRegion();
    v21 = *v8;
    v22 = 0LL;
    if ( *v8 )
    {
      v23 = v29;
      do
      {
        v24 = *(_QWORD *)(*(_QWORD *)(v23 + 32) + 80 * v22 + 72);
        v25 = *(void **)(v24 + 32);
        if ( v25 )
          ObfDereferenceObject(v25);
        if ( (*(_DWORD *)(v24 + 28) & 4) != 0 && !*(_DWORD *)(v24 + 24) )
        {
          KsepPoolFreePaged((void *)v24);
          v26 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
          HIDWORD(KsepHistoryMessages[v26]) = 0;
          LODWORD(KsepHistoryMessages[v26]) = 460212;
          if ( (KsepDebugFlag & 1) != 0 )
            KsepDebugPrint(5LL, "KSE: Cleaned up dangling shim object [0x%08X] (unregistered while refcount >0)\n", v24);
          KsepLogInfo(
            5LL,
            (__int64)"KSE: Cleaned up dangling shim object [0x%08X] (unregistered while refcount >0)\n",
            v24);
        }
        v21 = *v8;
        v22 = (unsigned int)(v22 + 1);
      }
      while ( (unsigned int)v22 < *v8 );
    }
    v27 = (void *)v29;
    KsepDbFreeDriverShims(*(_QWORD **)(v29 + 32), v21);
    KsepPoolFreePaged(v27);
    v28 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    HIDWORD(KsepHistoryMessages[v28]) = 0;
    LODWORD(KsepHistoryMessages[v28]) = 460220;
    if ( (KsepDebugFlag & 1) != 0 )
      KsepDebugPrint(5LL, "KSE: Shimmed driver unload notification processed\n");
    KsepLogInfo(5LL, (__int64)"KSE: Shimmed driver unload notification processed\n");
  }
  return 0LL;
}
