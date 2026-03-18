/*
 * XREFs of PiDmListAddList @ 0x14071DAD0
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1405BDF50 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1405BF1B4 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmListAddObjectWorker @ 0x1407258F0 (PiDmListAddObjectWorker.c)
 */

_QWORD *__fastcall PiDmListAddList(__int64 a1, ULONG_PTR a2, __int64 a3, ULONG_PTR a4)
{
  void *ObjectManagerForObjectType; // rax
  ULONG_PTR v7; // r9
  struct _KTHREAD *CurrentThread; // rcx
  void *v9; // rbp
  _QWORD **v10; // r15
  struct _KTHREAD *v11; // rcx
  _QWORD *i; // r14
  ULONG_PTR v13; // rcx
  struct _KTHREAD *v14; // rcx
  struct _KTHREAD *v16; // rax
  struct _KTHREAD *v17; // rax

  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(*(_DWORD *)(a2 + 28));
  CurrentThread = KeGetCurrentThread();
  v9 = ObjectManagerForObjectType;
  v10 = (_QWORD **)(v7 + 88);
  if ( a2 >= v7 )
  {
    --CurrentThread->KernelApcDisable;
    if ( a2 > v7 )
    {
      ExAcquirePushLockSharedEx(a4, 0LL);
      v16 = KeGetCurrentThread();
      --v16->KernelApcDisable;
    }
    ExAcquirePushLockExclusiveEx(a2, 0LL);
  }
  else
  {
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a2, 0LL);
    v11 = KeGetCurrentThread();
    --v11->KernelApcDisable;
    ExAcquirePushLockSharedEx(a4, 0LL);
  }
  for ( i = *v10; i != v10; i = (_QWORD *)*i )
  {
    v17 = KeGetCurrentThread();
    --v17->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)(i - 8), 0LL);
    PiDmListAddObjectWorker(2LL, v9, a2, i - 8, 0LL);
    ExReleasePushLockEx((ULONG_PTR)(i - 8), 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( a2 >= a4 )
  {
    ExReleasePushLockEx(a2, 0LL);
    v14 = KeGetCurrentThread();
    if ( a2 <= a4 )
      return KeLeaveCriticalRegionThread((__int64)v14);
    KeLeaveCriticalRegionThread((__int64)v14);
    v13 = a4;
  }
  else
  {
    ExReleasePushLockEx(a4, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v13 = a2;
  }
  ExReleasePushLockEx(v13, 0LL);
  v14 = KeGetCurrentThread();
  return KeLeaveCriticalRegionThread((__int64)v14);
}
