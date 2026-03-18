/*
 * XREFs of PoUnregisterCoalescingCallback @ 0x1408A7700
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     ExDereferenceCallBackBlock @ 0x14001CE50 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x14001CEA0 (ExReferenceCallBackBlock.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExWaitForRundownProtectionRelease @ 0x140082850 (ExWaitForRundownProtectionRelease.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 *     ExCompareExchangeCallBack @ 0x14018F34C (ExCompareExchangeCallBack.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall PoUnregisterCoalescingCallback(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  signed __int64 *v3; // rdi
  struct _EX_RUNDOWN_REF *v4; // rbp
  char v5; // bl
  __int64 v6; // r8
  _QWORD *v7; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = a1 + 8;
  v4 = ExReferenceCallBackBlock(a1 + 8);
  v5 = ExCompareExchangeCallBack(v3, 0LL, (__int64)v4);
  ExDereferenceCallBackBlock(v3, v4);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v5 )
  {
    ExWaitForRundownProtectionRelease(v4);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopCoalRegistrationListLock);
    v6 = a1[6];
    if ( *(_QWORD **)(v6 + 8) != a1 + 6 || (v7 = (_QWORD *)a1[7], (_QWORD *)*v7 != a1 + 6) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    PopReleaseRwLock((ULONG_PTR)&PopCoalRegistrationListLock);
    ExFreePoolWithTag(v4, 0);
  }
}
