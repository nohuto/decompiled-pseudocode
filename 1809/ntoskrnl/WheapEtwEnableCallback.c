/*
 * XREFs of WheapEtwEnableCallback @ 0x140761480
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeInitializeTimerEx @ 0x140089FF0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400A56F0 (KeInitializeDpc.c)
 *     RtlInitUnicodeString @ 0x1400B9A90 (RtlInitUnicodeString.c)
 *     KeSetEvent @ 0x1400C2B00 (KeSetEvent.c)
 *     ZwClose @ 0x1401B8370 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B83D0 (ZwOpenKey.c)
 *     WheapFreeErrorRecord @ 0x140320420 (WheapFreeErrorRecord.c)
 *     WheapGenerateETWEvents @ 0x140320F88 (WheapGenerateETWEvents.c)
 *     WheapSqmWaitWorkerRoutine @ 0x1408DD4A0 (WheapSqmWaitWorkerRoutine.c)
 */

void __fastcall WheapEtwEnableCallback(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  struct _DEVICE_OBJECT *DeviceContext; // rbx
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
      DeviceContext = (struct _DEVICE_OBJECT *)WheapDispatchPtr.Queue.Wcb.DeviceContext;
      if ( *((struct _DEVICE_OBJECT **)WheapDispatchPtr.Queue.Wcb.DeviceContext + 1) != (struct _DEVICE_OBJECT *)&WheapDispatchPtr.Queue.Wcb.DeviceContext
        || (v5 = *(_QWORD *)WheapDispatchPtr.Queue.Wcb.DeviceContext,
            *(PVOID *)(*(_QWORD *)WheapDispatchPtr.Queue.Wcb.DeviceContext + 8LL) != WheapDispatchPtr.Queue.Wcb.DeviceContext) )
      {
        __fastfail(3u);
      }
      WheapDispatchPtr.Queue.Wcb.DeviceContext = *(PVOID *)WheapDispatchPtr.Queue.Wcb.DeviceContext;
      *(_QWORD *)(v5 + 8) = &WheapDispatchPtr.Queue.Wcb.DeviceContext;
      KeSetEvent((PRKEVENT)&WheapDispatchPtr.Queue.Wcb.DeviceObject, 0, 0);
      if ( DeviceContext == (struct _DEVICE_OBJECT *)&WheapDispatchPtr.Queue.Wcb.DeviceContext )
        break;
      WheapGenerateETWEvents((__int64)&DeviceContext->Timer);
      WheapFreeErrorRecord((__int64)DeviceContext);
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
