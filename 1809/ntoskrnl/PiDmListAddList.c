/*
 * XREFs of PiDmListAddList @ 0x140701B30
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14059A080 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     PiDmGetObjectManagerForObjectType @ 0x140599CD0 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmListAddObjectWorker @ 0x140703BF8 (PiDmListAddObjectWorker.c)
 */

_QWORD *__fastcall PiDmListAddList(__int64 a1, ULONG_PTR a2, __int64 a3, ULONG_PTR a4)
{
  void *ObjectManagerForObjectType; // rax
  struct _KTHREAD *CurrentThread; // rcx
  ULONG_PTR v8; // r9
  _QWORD **v9; // r15
  void *v10; // rbp
  struct _KTHREAD *v11; // rcx
  _QWORD *i; // r14
  ULONG_PTR v13; // rcx
  struct _KTHREAD *v14; // rcx
  struct _KTHREAD *v16; // rax
  struct _KTHREAD *v17; // rax

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
      v16 = KeGetCurrentThread();
      --v16->KernelApcDisable;
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
    v17 = KeGetCurrentThread();
    --v17->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)(i - 8), 0LL);
    PiDmListAddObjectWorker(2LL, v10, a2, i - 8, 0LL);
    ExReleasePushLockEx((ULONG_PTR)(i - 8), 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( a2 >= a4 )
  {
    ExReleasePushLockEx(a2, 0LL);
    v14 = KeGetCurrentThread();
    if ( a2 <= a4 )
      return KiLeaveCriticalRegionUnsafe((__int64)v14);
    KiLeaveCriticalRegionUnsafe((__int64)v14);
    v13 = a4;
  }
  else
  {
    ExReleasePushLockEx(a4, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v13 = a2;
  }
  ExReleasePushLockEx(v13, 0LL);
  v14 = KeGetCurrentThread();
  return KiLeaveCriticalRegionUnsafe((__int64)v14);
}
