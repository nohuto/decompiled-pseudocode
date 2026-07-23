/*
 * XREFs of WheapEtwEnableCallback @ 0x140762670
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeInitializeTimerEx @ 0x140089FE0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400A5630 (KeInitializeDpc.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     WheapFreeErrorRecord @ 0x140320610 (WheapFreeErrorRecord.c)
 *     WheapGenerateETWEvents @ 0x140321178 (WheapGenerateETWEvents.c)
 *     WheapSqmWaitWorkerRoutine @ 0x1408DE760 (WheapSqmWaitWorkerRoutine.c)
 */

void __fastcall WheapEtwEnableCallback(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  struct _DEVICE_OBJECT *v4; // rbx
  __int64 v5; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-50h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-40h] BYREF

  WheapDispatchPtr.Queue.Wcb.WaitQueueEntry.SortKey = ControlCode;
  if ( ControlCode == 1 )
  {
    while ( 1 )
    {
      KeWaitForSingleObject(&WheapDispatchPtr.Queue.Wcb.DeviceObject, Executive, 0, 0, 0LL);
      v4 = *(struct _DEVICE_OBJECT **)&WheapDispatchPtr.DeviceQueue.Type;
      if ( *(struct _DEVICE_OBJECT **)(*(_QWORD *)&WheapDispatchPtr.DeviceQueue.Type + 8LL) != (struct _DEVICE_OBJECT *)&WheapDispatchPtr.DeviceQueue
        || (v5 = **(_QWORD **)&WheapDispatchPtr.DeviceQueue.Type,
            *(_QWORD *)(**(_QWORD **)&WheapDispatchPtr.DeviceQueue.Type + 8LL) != *(_QWORD *)&WheapDispatchPtr.DeviceQueue.Type) )
      {
        __fastfail(3u);
      }
      *(_QWORD *)&WheapDispatchPtr.DeviceQueue.Type = **(_QWORD **)&WheapDispatchPtr.DeviceQueue.Type;
      *(_QWORD *)(v5 + 8) = &WheapDispatchPtr.DeviceQueue;
      KeSetEvent((PRKEVENT)&WheapDispatchPtr.Queue.Wcb.DeviceObject, 0, 0);
      if ( v4 == (struct _DEVICE_OBJECT *)&WheapDispatchPtr.DeviceQueue )
        break;
      WheapGenerateETWEvents((__int64)&v4->Timer);
      WheapFreeErrorRecord((__int64)v4);
    }
    if ( !_InterlockedCompareExchange(&WheapSqmWaitQueued, 1, 0) )
    {
      RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\SQMClient\\Windows");
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
      {
        ZwClose(KeyHandle);
        KeInitializeTimerEx(&WheapSqmWaitTimer, NotificationTimer);
        KeInitializeDpc(&WheapSqmWaitTimerDpc, (PKDEFERRED_ROUTINE)WheapSqmWaitDpcRoutine, 0LL);
        WheapSqmWaitWorkQueueItem.Parameter = 0LL;
        WheapSqmWaitWorkQueueItem.List.Flink = 0LL;
        WheapSqmWaitWorkQueueItem.WorkerRoutine = (void (__fastcall *)(void *))WheapSqmWaitWorkerRoutine;
        WheapSqmWaitWorkerRoutine(0LL);
      }
    }
  }
}
