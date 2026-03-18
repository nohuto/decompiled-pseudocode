/*
 * XREFs of KsepGetShimsForDriver @ 0x14070C628
 * Callers:
 *     KseDriverLoadImage @ 0x14070EE94 (KseDriverLoadImage.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KsepPoolAllocatePaged @ 0x140154760 (KsepPoolAllocatePaged.c)
 *     KsepLogInfo @ 0x1401547BC (KsepLogInfo.c)
 *     KsepDebugPrint @ 0x1402B6DB4 (KsepDebugPrint.c)
 *     KsepDbGetDriverShims @ 0x14070C710 (KsepDbGetDriverShims.c)
 *     KsepDbFreeDriverShims @ 0x14070C8DC (KsepDbFreeDriverShims.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14070EFF8 (KsepEngineGetShimsFromRegistry.c)
 *     KsepIsModuleShimmed @ 0x14070F180 (KsepIsModuleShimmed.c)
 *     KsepResolveApplicableShimsForDriver @ 0x140883124 (KsepResolveApplicableShimsForDriver.c)
 */

__int64 __fastcall KsepGetShimsForDriver(__int64 a1, int a2, __int64 a3, int a4, _QWORD *a5, unsigned int *a6)
{
  int v6; // ebx
  int ShimsFromRegistry; // edi
  __int64 v12; // rcx
  __int64 v13; // r14
  unsigned int v14; // ebx
  _QWORD *Paged; // rax
  _QWORD *v16; // rsi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v18; // rax
  __int64 v19; // rax
  unsigned int v20; // [rsp+30h] [rbp-20h] BYREF
  __int64 v21; // [rsp+38h] [rbp-18h] BYREF
  __int64 v22; // [rsp+40h] [rbp-10h] BYREF

  v6 = a3;
  v21 = 0LL;
  v20 = 0;
  *a5 = 0LL;
  *a6 = 0;
  v22 = 0LL;
  if ( (unsigned int)KsepIsModuleShimmed(&KseEngine, a3, &v22) )
  {
    v12 = v22;
    *a5 = *(_QWORD *)(v22 + 32);
    *a6 = *(_DWORD *)(v12 + 24);
    return 0LL;
  }
  ShimsFromRegistry = KsepEngineGetShimsFromRegistry(&KseEngine, a1, &v21, &v20);
  if ( ShimsFromRegistry == -1073741275 )
    ShimsFromRegistry = KsepDbGetDriverShims(a2, v6, a4, (unsigned int)&v21, (__int64)&v20);
  if ( ShimsFromRegistry < 0 )
    goto LABEL_5;
  v13 = v21;
  v14 = v20;
  ShimsFromRegistry = KsepResolveApplicableShimsForDriver(v21, v20);
  if ( ShimsFromRegistry < 0 )
  {
LABEL_12:
    if ( v13 && v14 )
      KsepDbFreeDriverShims(v13, v14);
    goto LABEL_6;
  }
  Paged = KsepPoolAllocatePaged(0x28uLL);
  v16 = Paged;
  if ( !Paged )
  {
    ShimsFromRegistry = -1073741670;
    goto LABEL_12;
  }
  Paged[4] = v13;
  *((_DWORD *)Paged + 6) = v14;
  Paged[2] = a3;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140468190, 0LL);
  v18 = (_QWORD *)qword_140468188;
  if ( *(_UNKNOWN **)qword_140468188 != &unk_140468180 )
    __fastfail(3u);
  *v16 = &unk_140468180;
  v16[1] = v18;
  *v18 = v16;
  qword_140468188 = (__int64)v16;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140468190, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140468190);
  KeAbPostRelease((ULONG_PTR)&qword_140468190);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_5:
  *a5 = v21;
  *a6 = v20;
LABEL_6:
  if ( ShimsFromRegistry >= 0 )
  {
    v19 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    HIDWORD(KsepHistoryMessages[v19]) = 0;
    LODWORD(KsepHistoryMessages[v19]) = 459108;
    if ( (KsepDebugFlag & 1) != 0 )
      KsepDebugPrint(7LL, "KSE: got shim(s) for driver [%ws]\n", *(_QWORD *)(a1 + 8));
    KsepLogInfo(7LL, (__int64)"KSE: got shim(s) for driver [%ws]\n", *(_QWORD *)(a1 + 8));
  }
  return (unsigned int)ShimsFromRegistry;
}
