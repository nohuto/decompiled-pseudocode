/*
 * XREFs of IoRegisterFsRegistrationChangeMountAware @ 0x140782B40
 * Callers:
 *     IoRegisterFsRegistrationChange @ 0x140856870 (IoRegisterFsRegistrationChange.c)
 * Callees:
 *     EtwWrite @ 0x140036280 (EtwWrite.c)
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     KeResetEvent @ 0x1400883E0 (KeResetEvent.c)
 *     IoGetActivityIdThread @ 0x140099FC0 (IoGetActivityIdThread.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     IopGetFsRegistrationInProgress @ 0x140299174 (IopGetFsRegistrationInProgress.c)
 *     IopIsKnownGoodLegacyFsFilter @ 0x14029942C (IopIsKnownGoodLegacyFsFilter.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     FsRtlSetDriverBacking @ 0x140739760 (FsRtlSetDriverBacking.c)
 *     IopNotifyAlreadyRegisteredFileSystems @ 0x140782CE8 (IopNotifyAlreadyRegisteredFileSystems.c)
 */

NTSTATUS __stdcall IoRegisterFsRegistrationChangeMountAware(
        PDRIVER_OBJECT DriverObject,
        PDRIVER_FS_NOTIFICATION DriverNotificationRoutine,
        BOOLEAN SynchronizeWithMounts)
{
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v8; // ebx
  _QWORD *PoolWithTag; // rax
  _QWORD *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8
  REGHANDLE v14; // rdi
  int Length; // ecx
  const GUID *ActivityIdThread; // rax
  __int16 v17; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-40h] BYREF
  wchar_t *Buffer; // [rsp+48h] [rbp-30h]
  int v20; // [rsp+50h] [rbp-28h]
  int v21; // [rsp+54h] [rbp-24h]

  if ( IopBlockLegacyFsFilters && !IopIsKnownGoodLegacyFsFilter((const void **)&DriverObject->DriverName) )
  {
    v14 = IoMgrTraceHandle;
    if ( EtwEventEnabled(IoMgrTraceHandle, &IoMgr_LegacyFsFilterBlockedByPolicy) )
    {
      Length = DriverObject->DriverName.Length;
      UserData.Reserved = 0;
      v21 = 0;
      v17 = (unsigned __int16)Length >> 1;
      UserData.Ptr = (ULONGLONG)&v17;
      Buffer = DriverObject->DriverName.Buffer;
      UserData.Size = 2;
      v20 = Length;
      ActivityIdThread = (const GUID *)IoGetActivityIdThread();
      EtwWrite(v14, &IoMgr_LegacyFsFilterBlockedByPolicy, ActivityIdThread, 2u, &UserData);
    }
    return -1073741637;
  }
  result = FsRtlSetDriverBacking((__int64)DriverObject, 1);
  if ( result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !SynchronizeWithMounts )
  {
LABEL_22:
    ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
    goto LABEL_5;
  }
  if ( !ExAcquireResourceExclusiveLite(&IopDatabaseResource, 0) )
  {
    if ( IopGetFsRegistrationInProgress() )
    {
      v8 = -1073741267;
      goto LABEL_9;
    }
    goto LABEL_22;
  }
LABEL_5:
  if ( (__int64 *)IopFsNotifyChangeQueueHead != &IopFsNotifyChangeQueueHead
    && *(PDRIVER_OBJECT *)(qword_140461818 + 16) == DriverObject
    && *(PDRIVER_FS_NOTIFICATION *)(qword_140461818 + 24) == DriverNotificationRoutine )
  {
    ExReleaseResourceLite(&IopDatabaseResource);
    v8 = -1073741768;
LABEL_9:
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v8;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x73466F49u);
  if ( !PoolWithTag )
  {
    ExReleaseResourceLite(&IopDatabaseResource);
    v8 = -1073741670;
    goto LABEL_9;
  }
  PoolWithTag[2] = DriverObject;
  PoolWithTag[3] = DriverNotificationRoutine;
  v10 = (_QWORD *)qword_140461818;
  if ( *(__int64 **)qword_140461818 != &IopFsNotifyChangeQueueHead )
    __fastfail(3u);
  *PoolWithTag = &IopFsNotifyChangeQueueHead;
  PoolWithTag[1] = v10;
  *v10 = PoolWithTag;
  qword_140461818 = (__int64)PoolWithTag;
  if ( SynchronizeWithMounts == 1 )
  {
    while ( IopMountsInProgress )
    {
      ++IopMountCompletionWaiters;
      ExReleaseResourceLite(&IopDatabaseResource);
      KeWaitForSingleObject(&IopMountCompletionEvent, Executive, 0, 0, 0LL);
      ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
      if ( --IopMountCompletionWaiters )
      {
        if ( !IopMountsInProgress )
          break;
      }
      KeResetEvent(&IopMountCompletionEvent);
    }
  }
  IopNotifyAlreadyRegisteredFileSystems(&IopNetworkFileSystemQueueHead, DriverNotificationRoutine, 0LL);
  LOBYTE(v11) = 1;
  IopNotifyAlreadyRegisteredFileSystems(&IopCdRomFileSystemQueueHead, DriverNotificationRoutine, v11);
  LOBYTE(v12) = 1;
  IopNotifyAlreadyRegisteredFileSystems(&IopDiskFileSystemQueueHead, DriverNotificationRoutine, v12);
  LOBYTE(v13) = 1;
  IopNotifyAlreadyRegisteredFileSystems(&IopTapeFileSystemQueueHead, DriverNotificationRoutine, v13);
  ExReleaseResourceLite(&IopDatabaseResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  ObfReferenceObject(DriverObject);
  return 0;
}
