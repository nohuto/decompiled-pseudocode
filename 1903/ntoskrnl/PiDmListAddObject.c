/*
 * XREFs of PiDmListAddObject @ 0x140723984
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1405BDA80 (PiPnpRtlCmActionCallback.c)
 *     IopRegisterDeviceInterface @ 0x1407352C4 (IopRegisterDeviceInterface.c)
 *     PiDmListInitEnumCallback @ 0x140756B40 (PiDmListInitEnumCallback.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1405BECE4 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmListAddObjectWorker @ 0x140723A50 (PiDmListAddObjectWorker.c)
 */

_QWORD *__fastcall PiDmListAddObject(unsigned int a1, ULONG_PTR a2, ULONG_PTR a3, __int64 a4)
{
  void *ObjectManagerForObjectType; // rax
  struct _KTHREAD *CurrentThread; // r10
  void *v10; // rbx
  struct _KTHREAD *v11; // r8

  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(*(_DWORD *)(a2 + 28));
  CurrentThread = KeGetCurrentThread();
  v10 = ObjectManagerForObjectType;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a2, 0LL);
  v11 = KeGetCurrentThread();
  --v11->KernelApcDisable;
  ExAcquirePushLockSharedEx(a3, 0LL);
  PiDmListAddObjectWorker(a1, v10, a2, a3, a4);
  ExReleasePushLockEx(a3, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  ExReleasePushLockEx(a2, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
