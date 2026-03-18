/*
 * XREFs of DpiMiracastTargetDeviceChange @ 0x1C004D7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00194A0 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C004CF90 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C004D1E0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTearDownAssociation @ 0x1C004DCB0 (DpiMiracastTearDownAssociation.c)
 *     DxgkFreeUnicodeString @ 0x1C029D650 (DxgkFreeUnicodeString.c)
 *     DpiMiracastBroadcastDeviceStateChange @ 0x1C02A44E8 (DpiMiracastBroadcastDeviceStateChange.c)
 */

__int64 __fastcall DpiMiracastTargetDeviceChange(char *NotificationStructure, char *Context, __int64 a3)
{
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  void *v8; // rcx
  __int64 v9; // rax
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v16; // rax
  char *v17; // r14
  void *v18; // rbx
  int v19; // r15d
  void *v20; // rcx
  NTSTATUS v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rbx
  __int64 v26; // rax
  int v27; // eax
  _QWORD *v28; // rcx
  PVOID *v29; // rax
  char **v30; // rax
  void *v31; // rcx
  void *v32; // rcx
  void *v33; // rcx
  void *v34; // rcx
  void *v35; // rcx
  void *v36; // rcx
  __int64 v37; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+80h] [rbp+8h] BYREF

  LODWORD(v4) = 0;
  if ( !NotificationStructure )
  {
    v5 = WdLogNewEntry5_WdError(0LL, Context, a3);
    v6 = -1073741585LL;
LABEL_46:
    *(_QWORD *)(v5 + 24) = v6;
    WdLogEvent5_WdError(v5);
    return (unsigned int)v6;
  }
  if ( !Context || *((_DWORD *)Context + 4) != 1953656900 || *((_DWORD *)Context + 5) != 14 )
  {
    v5 = WdLogNewEntry5_WdError(NotificationStructure, Context, a3);
    v6 = -1073741584LL;
    goto LABEL_46;
  }
  v7 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v7 )
    v7 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( v7 )
  {
    v9 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
    if ( !v9 )
      v9 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
    if ( v9 )
    {
      v16 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
      if ( !v16 )
        v16 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
      if ( v16 )
      {
        LODWORD(v4) = -1073741811;
      }
      else
      {
        v17 = Context + 32;
        ExEnterCriticalRegionAndAcquireFastMutexUnsafe(Context + 32);
        v18 = (void *)*((_QWORD *)Context + 50);
        v19 = *((_DWORD *)Context + 102);
        *((_QWORD *)Context + 50) = 0LL;
        *((_QWORD *)Context + 11) = 0LL;
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v17);
        if ( v18 )
        {
          IoUnregisterPlugPlayNotificationEx(v18);
          IoSetDeviceInterfaceState((PUNICODE_STRING)Context + 8, 0);
          if ( v19 )
          {
            Timeout.QuadPart = 0LL;
            DpiMiracastStopMiracastSessionSync(Context, 0, 0LL, 0LL, 0x87u, 0);
            v20 = (void *)*((_QWORD *)Context + 58);
            Timeout.QuadPart = -300000000LL;
            v21 = KeWaitForSingleObject(v20, Executive, 0, 0, &Timeout);
            v25 = v21;
            if ( v21 )
            {
              v26 = WdLogNewEntry5_WdError(v23, v22, v24);
              *(_QWORD *)(v26 + 24) = v25;
              WdLogEvent5_WdError(v26);
              DpiMiracastTearDownAssociation(Context, 0);
            }
          }
          AcquireMiniportListMutex();
          ExEnterCriticalRegionAndAcquireFastMutexUnsafe(v17);
          *((_QWORD *)Context + 11) = KeGetCurrentThread();
          v27 = *((_DWORD *)Context + 102);
          if ( v27 )
          {
            *((_DWORD *)Context + 103) = v27;
            *((_DWORD *)Context + 102) = 0;
            DpiMiracastBroadcastDeviceStateChange(Context);
          }
          KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
          v28 = *(_QWORD **)Context;
          if ( *(char **)(*(_QWORD *)Context + 8LL) != Context
            || (v29 = (PVOID *)*((_QWORD *)Context + 1), *v29 != Context)
            || (*v29 = v28,
                v28[1] = v29,
                v30 = (char **)qword_1C00A2B50,
                *(__int64 **)qword_1C00A2B50 != &qword_1C00A2B48) )
          {
            __fastfail(3u);
          }
          *(_QWORD *)Context = &qword_1C00A2B48;
          *((_QWORD *)Context + 1) = v30;
          *v30 = Context;
          qword_1C00A2B50 = (__int64)Context;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          v31 = (void *)*((_QWORD *)Context + 22);
          if ( v31 )
          {
            ObfDereferenceObject(v31);
            *((_QWORD *)Context + 22) = 0LL;
            *((_QWORD *)Context + 23) = 0LL;
          }
          DxgkFreeUnicodeString(Context + 160);
          v32 = (void *)*((_QWORD *)Context + 42);
          if ( v32 )
          {
            ExFreePoolWithTag(v32, 0);
            *((_QWORD *)Context + 42) = 0LL;
          }
          v33 = (void *)*((_QWORD *)Context + 43);
          if ( v33 )
          {
            ExFreePoolWithTag(v33, 0);
            *((_QWORD *)Context + 43) = 0LL;
          }
          v34 = (void *)*((_QWORD *)Context + 44);
          if ( v34 )
          {
            ExFreePoolWithTag(v34, 0);
            *((_QWORD *)Context + 44) = 0LL;
          }
          v35 = (void *)*((_QWORD *)Context + 45);
          if ( v35 )
          {
            ExFreePoolWithTag(v35, 0);
            *((_QWORD *)Context + 45) = 0LL;
          }
          v36 = (void *)*((_QWORD *)Context + 46);
          if ( v36 )
          {
            ExFreePoolWithTag(v36, 0);
            *((_QWORD *)Context + 46) = 0LL;
          }
          RtlFreeUnicodeString((PUNICODE_STRING)Context + 8);
          *((_QWORD *)Context + 11) = 0LL;
          ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v17);
          _InterlockedExchange64(&qword_1C00A2788, 0LL);
          KeReleaseMutex(Mutex, 0);
          DpiMiracastReleaseMiracastDeviceContext((int *)Context, 0LL, v37);
        }
      }
    }
    else
    {
      ExEnterCriticalRegionAndAcquireFastMutexUnsafe(Context + 32);
      *((_QWORD *)Context + 11) = KeGetCurrentThread();
      DeviceObjectPointer = IoGetDeviceObjectPointer(
                              (PUNICODE_STRING)Context + 9,
                              0x80000000,
                              (PFILE_OBJECT *)Context + 22,
                              (PDEVICE_OBJECT *)Context + 23);
      *((_QWORD *)Context + 11) = 0LL;
      v4 = DeviceObjectPointer;
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(Context + 32);
      if ( (int)v4 < 0 )
      {
        v14 = WdLogNewEntry5_WdError(v12, v11, v13);
        *(_QWORD *)(v14 + 24) = v4;
        WdLogEvent5_WdError(v14);
      }
    }
  }
  else
  {
    DpiMiracastStopMiracastSessionSync(Context, 0, 0LL, 0LL, 0x84u, 0);
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(Context + 32);
    v8 = (void *)*((_QWORD *)Context + 22);
    *((_QWORD *)Context + 11) = KeGetCurrentThread();
    if ( v8 )
    {
      ObfDereferenceObject(v8);
      *((_QWORD *)Context + 22) = 0LL;
      *((_QWORD *)Context + 23) = 0LL;
    }
    *((_QWORD *)Context + 11) = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(Context + 32);
  }
  return (unsigned int)v4;
}
