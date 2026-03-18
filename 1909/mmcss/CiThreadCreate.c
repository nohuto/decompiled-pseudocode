/*
 * XREFs of CiThreadCreate @ 0x1C000A7F0
 * Callers:
 *     CiDispatchCreateMmThreadClient @ 0x1C000A690 (CiDispatchCreateMmThreadClient.c)
 * Callees:
 *     CiTryIncrementTotalThreadCount @ 0x1C00023E0 (CiTryIncrementTotalThreadCount.c)
 *     CiSchedulerPoke @ 0x1C0002410 (CiSchedulerPoke.c)
 *     CiSchedulerAddThread @ 0x1C0002460 (CiSchedulerAddThread.c)
 *     CiThreadInsertInTree @ 0x1C00025E0 (CiThreadInsertInTree.c)
 *     CiDecrementTotalThreadCount @ 0x1C000270C (CiDecrementTotalThreadCount.c)
 *     CiTaskIndexDereference @ 0x1C0002720 (CiTaskIndexDereference.c)
 *     memset @ 0x1C0003400 (memset.c)
 *     CiLogThreadJoin @ 0x1C00040A8 (CiLogThreadJoin.c)
 *     WPP_SF_ @ 0x1C0004360 (WPP_SF_.c)
 *     WPP_SF_dI @ 0x1C00047AC (WPP_SF_dI.c)
 *     CiThreadIncrementScheduledCount @ 0x1C000AA90 (CiThreadIncrementScheduledCount.c)
 *     CiThreadUpdatePriorities @ 0x1C000AB10 (CiThreadUpdatePriorities.c)
 *     CiProcessLocate @ 0x1C000ABB0 (CiProcessLocate.c)
 *     CiProcessCreate @ 0x1C000B030 (CiProcessCreate.c)
 *     CiThreadDereference @ 0x1C000B420 (CiThreadDereference.c)
 *     CiThreadCleanup @ 0x1C000B4D0 (CiThreadCleanup.c)
 *     CiProcessDereference @ 0x1C000B660 (CiProcessDereference.c)
 */

__int64 __fastcall CiThreadCreate(struct _KTHREAD *Object, volatile signed __int64 *P, __int64 *a3)
{
  __int64 v6; // rdi
  PEPROCESS ThreadProcess; // rax
  __int64 v8; // rsi
  int v9; // ebx
  PVOID PoolWithQuotaTag; // rax
  __int64 v11; // rbx
  NTSTATUS InformationThread; // ebp
  char v13; // al
  _QWORD *v14; // rax
  __int64 v15; // r8
  _QWORD *v16; // rdx
  char v17; // cl
  volatile signed __int32 *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  _QWORD ThreadInformation[13]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v24; // [rsp+B8h] [rbp+20h] BYREF

  memset(ThreadInformation, 0, 0x30uLL);
  v6 = *((_QWORD *)P + 17);
  ThreadProcess = PsGetThreadProcess(Object);
  v24 = CiProcessLocate(ThreadProcess);
  v8 = v24;
  if ( !v24 )
  {
    v9 = CiProcessCreate(&v24);
    if ( v9 < 0 )
    {
LABEL_23:
      CiTaskIndexDereference(P);
      return (unsigned int)v9;
    }
    v8 = v24;
  }
  v9 = CiTryIncrementTotalThreadCount(&CiTotalThreads, 256);
  if ( v9 < 0 )
  {
LABEL_22:
    CiProcessDereference((PVOID)v8);
    goto LABEL_23;
  }
  v9 = CiTryIncrementTotalThreadCount((volatile signed __int32 *)(v8 + 92), CiMaxThreadsPerProcess);
  if ( v9 < 0 )
  {
    v19 = &CiTotalThreads;
LABEL_21:
    CiDecrementTotalThreadCount(v19);
    goto LABEL_22;
  }
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x98uLL, 0x4873634Du);
  v11 = (__int64)PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
  {
    v9 = -1073741801;
    CiDecrementTotalThreadCount(&CiTotalThreads);
    v19 = (volatile signed __int32 *)(v8 + 92);
    goto LABEL_21;
  }
  memset(PoolWithQuotaTag, 0, 0x98uLL);
  *(_QWORD *)(v11 + 32) = 1LL;
  *(_QWORD *)(v11 + 72) = P;
  *(_QWORD *)(v11 + 64) = *((_QWORD *)P + 17);
  *(_QWORD *)(v11 + 128) = v8;
  InformationThread = ZwQueryInformationThread(
                        (HANDLE)0xFFFFFFFFFFFFFFFELL,
                        ThreadBasicInformation,
                        ThreadInformation,
                        0x30u,
                        0LL);
  if ( InformationThread < 0 )
    goto LABEL_31;
  *(_DWORD *)(v11 + 108) = ThreadInformation[5];
  *(_DWORD *)(v11 + 144) = HIDWORD(ThreadInformation[5]);
  *(_QWORD *)(v11 + 136) = ThreadInformation[4];
  v13 = *(_BYTE *)(v6 + 1);
  if ( !v13 )
    v13 = 1;
  *(_BYTE *)(v11 + 106) = v13;
  *(_BYTE *)(v11 + 105) = 8;
  *(_BYTE *)(v11 + 104) = *(_BYTE *)v6;
  v23 = *(_QWORD *)(v6 + 32);
  if ( v23 != ThreadInformation[4] )
  {
    v23 = *(_QWORD *)(v6 + 32);
    InformationThread = ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAffinityMask, &v23, 8u);
    if ( InformationThread < 0 )
    {
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_dI((__int64)WPP_GLOBAL_Control->AttachedDevice, v20, v21, InformationThread, v23);
      if ( InformationThread != -1073741811 || (~qword_1C0007210 & v23) != 0 )
        goto LABEL_31;
    }
  }
  *(_QWORD *)(v11 + 96) = Object;
  if ( !CiThreadInsertInTree(v11) )
  {
    *(_QWORD *)(v11 + 96) = 0LL;
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xCu,
        (__int64)&WPP_f6806cb8b818300a6165f8fb8ae15b34_Traceguids);
    InformationThread = -1073740542;
LABEL_31:
    CiThreadCleanup(v11);
    CiThreadDereference(v11);
    return (unsigned int)InformationThread;
  }
  CiThreadUpdatePriorities(v11, v6, 0LL);
  if ( byte_1C00072D8 )
    CiLogThreadJoin(v11);
  ObfReferenceObject(Object);
  ExAcquirePushLockExclusiveEx(v8 + 16, 0LL);
  *(_QWORD *)(v8 + 24) = KeGetCurrentThread();
  v14 = (_QWORD *)(v11 + 112);
  v15 = *(_QWORD *)(v11 + 128);
  v16 = *(_QWORD **)(v15 + 72);
  if ( *v16 != v15 + 64 )
    __fastfail(3u);
  *v14 = v15 + 64;
  *(_QWORD *)(v11 + 120) = v16;
  *v16 = v14;
  *(_QWORD *)(v15 + 72) = v14;
  *(_BYTE *)(v11 + 148) ^= (*(_BYTE *)(v11 + 148) ^ *(_BYTE *)(v15 + 88)) & 1;
  v17 = *(_BYTE *)(v11 + 148);
  if ( (*(_BYTE *)(v6 + 3) & 1) != 0 )
  {
    CiSchedulerAddThread((__int64)P, v11);
    v17 = *(_BYTE *)(v11 + 148);
  }
  if ( (v17 & 1) == 0 )
    CiThreadIncrementScheduledCount(v11);
  *(_QWORD *)(v8 + 24) = 0LL;
  ExReleasePushLockExclusiveEx(v8 + 16, 0LL);
  *a3 = v11;
  CiSchedulerPoke(1u);
  return 0LL;
}
