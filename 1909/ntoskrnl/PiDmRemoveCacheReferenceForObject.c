/*
 * XREFs of PiDmRemoveCacheReferenceForObject @ 0x1407171D8
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1405BDF50 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406FBDA0 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x140717174 (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     IopProcessSetInterfaceState @ 0x140733D08 (IopProcessSetInterfaceState.c)
 *     IopRegisterDeviceInterface @ 0x140737524 (IopRegisterDeviceInterface.c)
 *     PiDmListInitEnumCallback @ 0x1407575D0 (PiDmListInitEnumCallback.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140001CA0 (RtlDeleteElementGenericTableAvl.c)
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     PiDmLookupObject @ 0x1405BEFB0 (PiDmLookupObject.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1405BF1B4 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmObjectRelease @ 0x1405BF214 (PiDmObjectRelease.c)
 */

__int64 __fastcall PiDmRemoveCacheReferenceForObject(int a1, __int64 a2, unsigned int *a3)
{
  unsigned int v4; // edi
  void *ObjectManagerForObjectType; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v7; // rax
  unsigned int *Buffer; // [rsp+40h] [rbp+18h] BYREF

  Buffer = a3;
  v4 = 0;
  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)ObjectManagerForObjectType, 1u);
  v7 = (unsigned int *)PiDmLookupObject((__int64)ObjectManagerForObjectType, a2);
  Buffer = v7;
  if ( v7 )
  {
    --v7[3];
    if ( !Buffer[3] )
    {
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)ObjectManagerForObjectType + 1, &Buffer);
      PiDmObjectRelease(Buffer);
    }
  }
  else
  {
    v4 = -1073741772;
  }
  ExReleaseResourceLite((PERESOURCE)ObjectManagerForObjectType);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v4;
}
