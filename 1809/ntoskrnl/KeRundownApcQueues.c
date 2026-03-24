/*
 * XREFs of KeRundownApcQueues @ 0x1405F7DE0
 * Callers:
 *     sub_140322570 @ 0x140322570 (sub_140322570.c)
 *     PspExitThread @ 0x1405F75E0 (PspExitThread.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     KiFlushQueueApc @ 0x140089E78 (KiFlushQueueApc.c)
 *     KeForceResumeThread @ 0x1400F1B9C (KeForceResumeThread.c)
 *     KiAcquireReleaseThreadLock @ 0x140121670 (KiAcquireReleaseThreadLock.c)
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall KeRundownApcQueues(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // rsi
  _QWORD *result; // rax
  _QWORD *v10; // rdi
  _QWORD *v11; // rcx
  void (*v12)(void); // rax
  unsigned __int8 CurrentIrql; // cl

  --*(_WORD *)(a1 + 484);
  *(_DWORD *)(a1 + 116) &= ~0x4000u;
  KiAcquireReleaseThreadLock(a1, a2, a3);
  KeForceResumeThread(a1);
  KeLeaveCriticalRegionThread(a1);
  LOBYTE(v4) = 1;
  v6 = KiFlushQueueApc(a1, v4, v5);
  v8 = v6;
  if ( v6 )
  {
    v10 = v6;
    do
    {
      v11 = v10 - 2;
      v10 = (_QWORD *)*v10;
      v12 = (void (*)(void))v11[5];
      if ( v12 )
        v12();
      else
        ExFreePoolWithTag(v11, 0);
    }
    while ( v10 != v8 );
  }
  result = KiFlushQueueApc(a1, 0LL, v7);
  if ( result || *(_DWORD *)(a1 + 484) )
  {
    CurrentIrql = KeGetCurrentIrql();
    KeBugCheckEx(0x20u, (ULONG_PTR)result, *(unsigned int *)(a1 + 484), CurrentIrql, 0LL);
  }
  return result;
}
