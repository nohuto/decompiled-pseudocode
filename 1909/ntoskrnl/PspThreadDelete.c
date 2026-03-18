/*
 * XREFs of PspThreadDelete @ 0x140610F10
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KeCleanupThreadState @ 0x140082D0C (KeCleanupThreadState.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140082D98 (KiQueryUnbiasedInterruptTime.c)
 *     KeFoldProcessStatisticsThread @ 0x140082DC8 (KeFoldProcessStatisticsThread.c)
 *     KeEnumerateKernelStackSegments @ 0x14008F828 (KeEnumerateKernelStackSegments.c)
 *     KeInitializeDpc @ 0x140098B70 (KeInitializeDpc.c)
 *     KeInsertQueueDpc @ 0x14009C950 (KeInsertQueueDpc.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KeBugCheck @ 0x1401C4680 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ExMapHandleToPointer @ 0x140610ED0 (ExMapHandleToPointer.c)
 *     PspDeleteThreadSecurity @ 0x14061131C (PspDeleteThreadSecurity.c)
 *     ExDestroyHandle @ 0x140611370 (ExDestroyHandle.c)
 */

unsigned __int64 __fastcall PspThreadDelete(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v2; // r9
  ULONG_PTR v3; // r9
  struct _KTHREAD *CurrentThread; // r12
  signed __int64 *v5; // rax
  void *v6; // rcx
  unsigned __int64 result; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // r8
  __int64 *v10; // rdx
  __int64 v11; // r9
  __int64 v12; // r10
  int v13; // r9d
  _QWORD *v14; // r8
  const char *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  volatile signed __int64 *v18; // r14
  __int64 *v19; // rsi
  __int64 *v20; // rcx
  __int64 **v21; // rax

  KeCleanupThreadState(BugCheckParameter2);
  if ( *(_DWORD *)(BugCheckParameter2 + 1828) )
    KeBugCheckEx(0x94u, 1uLL, BugCheckParameter2, *(unsigned int *)(BugCheckParameter2 + 1828), 0LL);
  if ( *(_DWORD *)(BugCheckParameter2 + 1816) )
    KeBugCheckEx(0x13Cu, BugCheckParameter2, *(unsigned int *)(BugCheckParameter2 + 1816), 0LL, 0LL);
  if ( *(_DWORD *)(BugCheckParameter2 + 1820) )
    KeBugCheckEx(0x13Cu, BugCheckParameter2, *(unsigned int *)(BugCheckParameter2 + 1820), 1uLL, 0LL);
  if ( *(_DWORD *)(BugCheckParameter2 + 1824) )
    KeBugCheckEx(0x13Cu, BugCheckParameter2, *(unsigned int *)(BugCheckParameter2 + 1824), 2uLL, 0LL);
  v2 = *(_QWORD *)(BugCheckParameter2 + 2040);
  if ( v2 != BugCheckParameter2 + 2040 )
    KeBugCheckEx(0x1C6u, 0x14uLL, BugCheckParameter2, v2, 0LL);
  v3 = *(_QWORD *)(BugCheckParameter2 + 2064);
  if ( v3 != BugCheckParameter2 + 2064 )
    KeBugCheckEx(0x1C6u, 0x15uLL, BugCheckParameter2, v3, 0LL);
  if ( *(_QWORD *)(BugCheckParameter2 + 40) )
    KeEnumerateKernelStackSegments(
      BugCheckParameter2,
      (__int64 (__fastcall *)(__int64, _OWORD *, __int64))PspDeleteKernelStack,
      0LL);
  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)(BugCheckParameter2 + 1616) )
  {
    --CurrentThread->KernelApcDisable;
    v5 = ExMapHandleToPointer((unsigned int *)PspCidTable, *(_QWORD *)(BugCheckParameter2 + 1616));
    if ( !v5 )
      KeBugCheck(0x17u);
    ExDestroyHandle(PspCidTable, *(_QWORD *)(BugCheckParameter2 + 1616), v5);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  PspDeleteThreadSecurity(BugCheckParameter2);
  v6 = *(void **)(BugCheckParameter2 + 2016);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x6D4E6854u);
  result = KiQueryUnbiasedInterruptTime();
  if ( result >= qword_140463F50 )
  {
    v8 = qword_140463F40;
    if ( qword_140463F40 )
    {
      if ( (_DWORD)qword_140463F58 )
      {
        v9 = 0LL;
        v10 = &ObpObjectTypes;
        v11 = (unsigned int)qword_140463F58;
        do
        {
          v12 = *v10;
          if ( ((*(unsigned __int8 *)(*v10 + 66) >> 6) & 1) != _bittest64(&qword_140463F60, v9) && !qword_140463F10 )
          {
            qword_140463F10 = (unsigned int)__ROL4__(1207959560, 133);
            qword_140463F18 = 0LL;
            qword_140463F20 = 0LL;
            qword_140463F28 = 268LL;
            qword_140463F30 = v12;
          }
          ++v9;
          ++v10;
          --v11;
        }
        while ( v11 );
        v8 = qword_140463F40;
      }
      v13 = 64;
      v14 = (_QWORD *)(qword_140463F80 + 112);
      v15 = (const char *)(qword_140463F80 + 112);
      if ( qword_140463F80 + 112 < (unsigned __int64)(qword_140463F80 + 176) )
      {
        do
        {
          _mm_prefetch(v15, 0);
          v15 += 64;
        }
        while ( (unsigned __int64)v15 < qword_140463F80 + 176 );
      }
      v16 = 8LL;
      do
      {
        v8 = __ROR8__(v8 - *v14++, qword_140463F48);
        v13 -= 8;
        --v16;
      }
      while ( v16 );
      for ( ; v13; --v13 )
      {
        v17 = *(unsigned __int8 *)v14;
        v14 = (_QWORD *)((char *)v14 + 1);
        v8 = __ROR8__(v8 - v17, qword_140463F48);
      }
      if ( qword_140463F88 != v8 )
      {
        if ( qword_140463F10 )
          goto LABEL_45;
        qword_140463F10 = (unsigned int)__ROR4__(150994945, 152);
        qword_140463F18 = 0LL;
        qword_140463F20 = 0LL;
        qword_140463F28 = 268LL;
        qword_140463F30 = qword_140463F80;
      }
    }
    if ( !qword_140463F10 )
    {
LABEL_31:
      result = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
      qword_140463F50 = result;
      goto LABEL_32;
    }
LABEL_45:
    if ( (void (__fastcall __noreturn *)(struct _KDPC *, PVOID, PVOID, PVOID))DeferredContext.DeferredRoutine != KiScanQueues )
      KeInitializeDpc(&DeferredContext, (PKDEFERRED_ROUTINE)KiScanQueues, &DeferredContext);
    qword_140463F38 = 1934400LL;
    KeInsertQueueDpc(&DeferredContext, 0LL, 0LL);
    goto LABEL_31;
  }
LABEL_32:
  v18 = *(volatile signed __int64 **)(BugCheckParameter2 + 544);
  if ( v18 )
  {
    v19 = (__int64 *)(BugCheckParameter2 + 1720);
    if ( *(_QWORD *)(BugCheckParameter2 + 1720) )
    {
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v18 + 92), 0LL);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v18 + 220), 0LL);
      KeFoldProcessStatisticsThread(BugCheckParameter2);
      v20 = (__int64 *)*v19;
      if ( *(__int64 **)(*v19 + 8) != v19 || (v21 = *(__int64 ***)(BugCheckParameter2 + 1728), *v21 != v19) )
        __fastfail(3u);
      *v21 = v20;
      v20[1] = (__int64)v21;
      if ( (_InterlockedExchangeAdd64(v18 + 220, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v18 + 220);
      KeAbPostRelease((ULONG_PTR)(v18 + 220));
      if ( (_InterlockedExchangeAdd64(v18 + 92, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v18 + 92);
      KeAbPostRelease((ULONG_PTR)(v18 + 92));
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 1760) & 0x100000) != 0 )
      ((void (__fastcall *)(ULONG_PTR))xmmword_140436990)(BugCheckParameter2);
    return ObfDereferenceObjectWithTag((PVOID)v18, 0x72437350u);
  }
  return result;
}
