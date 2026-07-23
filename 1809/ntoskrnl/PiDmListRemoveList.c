/*
 * XREFs of PiDmListRemoveList @ 0x14082A77C
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14059A080 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     PiDmGetObjectManagerForObjectType @ 0x140599CD0 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmListRemoveObjectWorker @ 0x14082A9A8 (PiDmListRemoveObjectWorker.c)
 */

_QWORD *__fastcall PiDmListRemoveList(__int64 a1, ULONG_PTR a2, __int64 a3, ULONG_PTR a4)
{
  void *ObjectManagerForObjectType; // rax
  struct _KTHREAD *CurrentThread; // rcx
  ULONG_PTR v8; // r9
  _QWORD **v9; // r15
  void *v10; // rbp
  struct _KTHREAD *v11; // rcx
  struct _KTHREAD *v12; // rax
  _QWORD *i; // r14
  struct _KTHREAD *v14; // rax
  ULONG_PTR v15; // rcx
  struct _KTHREAD *v16; // rcx

  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(*(_DWORD *)(a2 + 28));
  CurrentThread = KeGetCurrentThread();
  v9 = (_QWORD **)(v8 + 88);
  v10 = ObjectManagerForObjectType;
  --CurrentThread->KernelApcDisable;
  if ( a2 >= v8 )
  {
    if ( a2 > a4 )
    {
      ExAcquirePushLockSharedEx(a4, 0LL);
      v12 = KeGetCurrentThread();
      --v12->KernelApcDisable;
    }
    ExAcquirePushLockExclusiveEx(a2, 0LL);
  }
  else
  {
    ExAcquirePushLockExclusiveEx(a2, 0LL);
    v11 = KeGetCurrentThread();
    --v11->KernelApcDisable;
    ExAcquirePushLockSharedEx(a4, 0LL);
  }
  for ( i = *v9; i != v9; i = (_QWORD *)*i )
  {
    v14 = KeGetCurrentThread();
    --v14->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)(i - 8), 0LL);
    PiDmListRemoveObjectWorker(2LL, v10, a2, i - 8, 0LL);
    ExReleasePushLockEx((ULONG_PTR)(i - 8), 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( a2 < a4 )
  {
    ExReleasePushLockEx(a4, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v15 = a2;
LABEL_13:
    ExReleasePushLockEx(v15, 0LL);
    v16 = KeGetCurrentThread();
    return KiLeaveCriticalRegionUnsafe((__int64)v16);
  }
  ExReleasePushLockEx(a2, 0LL);
  v16 = KeGetCurrentThread();
  if ( a2 > a4 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)v16);
    v15 = a4;
    goto LABEL_13;
  }
  return KiLeaveCriticalRegionUnsafe((__int64)v16);
}
