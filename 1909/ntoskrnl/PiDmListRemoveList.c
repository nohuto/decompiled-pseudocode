/*
 * XREFs of PiDmListRemoveList @ 0x1408633CC
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1405BDF50 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1405BF1B4 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmListRemoveObjectWorker @ 0x140863604 (PiDmListRemoveObjectWorker.c)
 */

_QWORD *__fastcall PiDmListRemoveList(__int64 a1, ULONG_PTR a2, __int64 a3, ULONG_PTR a4)
{
  void *ObjectManagerForObjectType; // rax
  ULONG_PTR v7; // r9
  struct _KTHREAD *CurrentThread; // rcx
  void *v9; // rbp
  _QWORD **v10; // r15
  struct _KTHREAD *v11; // rcx
  struct _KTHREAD *v12; // rax
  _QWORD *i; // r14
  struct _KTHREAD *v14; // rax
  ULONG_PTR v15; // rcx
  struct _KTHREAD *v16; // rcx

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
      v12 = KeGetCurrentThread();
      --v12->KernelApcDisable;
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
    v14 = KeGetCurrentThread();
    --v14->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)(i - 8), 0LL);
    PiDmListRemoveObjectWorker(2LL, v9, a2, i - 8, 0LL);
    ExReleasePushLockEx((ULONG_PTR)(i - 8), 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( a2 < a4 )
  {
    ExReleasePushLockEx(a4, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v15 = a2;
LABEL_13:
    ExReleasePushLockEx(v15, 0LL);
    v16 = KeGetCurrentThread();
    return KeLeaveCriticalRegionThread((__int64)v16);
  }
  ExReleasePushLockEx(a2, 0LL);
  v16 = KeGetCurrentThread();
  if ( a2 > a4 )
  {
    KeLeaveCriticalRegionThread((__int64)v16);
    v15 = a4;
    goto LABEL_13;
  }
  return KeLeaveCriticalRegionThread((__int64)v16);
}
