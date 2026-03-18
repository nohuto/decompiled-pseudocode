/*
 * XREFs of IoUnregisterFsRegistrationChange @ 0x140856260
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __stdcall IoUnregisterFsRegistrationChange(
        PDRIVER_OBJECT DriverObject,
        PDRIVER_FS_NOTIFICATION DriverNotificationRoutine)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *i; // rcx
  __int64 *v6; // rax
  __int64 **v7; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
  for ( i = (__int64 *)IopFsNotifyChangeQueueHead; i != &IopFsNotifyChangeQueueHead; i = (__int64 *)*i )
  {
    if ( (PDRIVER_OBJECT)i[2] == DriverObject && (PDRIVER_FS_NOTIFICATION)i[3] == DriverNotificationRoutine )
    {
      v6 = (__int64 *)*i;
      if ( *(__int64 **)(*i + 8) != i || (v7 = (__int64 **)i[1], *v7 != i) )
        __fastfail(3u);
      *v7 = v6;
      v6[1] = (__int64)v7;
      ExFreePoolWithTag(i, 0);
      break;
    }
  }
  ExReleaseResourceLite(&IopDatabaseResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  ObfDereferenceObject(DriverObject);
}
