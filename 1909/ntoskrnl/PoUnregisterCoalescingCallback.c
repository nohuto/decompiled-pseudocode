/*
 * XREFs of PoUnregisterCoalescingCallback @ 0x1408A6F60
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     ExDereferenceCallBackBlock @ 0x14001D240 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x14001D290 (ExReferenceCallBackBlock.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExWaitForRundownProtectionRelease @ 0x140082C50 (ExWaitForRundownProtectionRelease.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     ExCompareExchangeCallBack @ 0x14018A28C (ExCompareExchangeCallBack.c)
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
