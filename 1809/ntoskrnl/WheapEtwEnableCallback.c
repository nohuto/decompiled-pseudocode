/*
 * XREFs of WheapEtwEnableCallback @ 0x1407614A0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeInitializeTimerEx @ 0x140089FF0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400A56D0 (KeInitializeDpc.c)
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     KeSetEvent @ 0x1400C2AE0 (KeSetEvent.c)
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B83B0 (ZwOpenKey.c)
 *     WheapFreeErrorRecord @ 0x140320320 (WheapFreeErrorRecord.c)
 *     WheapGenerateETWEvents @ 0x140320E88 (WheapGenerateETWEvents.c)
 *     WheapSqmWaitWorkerRoutine @ 0x1408DD4C0 (WheapSqmWaitWorkerRoutine.c)
 */

void __fastcall WheapEtwEnableCallback(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  struct _DEVICE_OBJECT *v4; // rbx
  __int64 v5; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-50h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-40h] BYREF

  LODWORD(WheapDispatchPtr.Queue.Wcb.DeviceContext) = ControlCode;
  if ( ControlCode == 1 )
  {
    while ( 1 )
    {
      KeWaitForSingleObject(&WheapDispatchPtr.Queue.Wcb.DeviceObject, Executive, 0, 0, 0LL);
      v4 = *(struct _DEVICE_OBJECT **)&WheapDispatchPtr.Queue.Wcb.NumberOfChannels;
      if ( *(struct _DEVICE_OBJECT **)(*(_QWORD *)&WheapDispatchPtr.Queue.Wcb.NumberOfChannels + 8LL) != (struct _DEVICE_OBJECT *)&WheapDispatchPtr.Queue.Wcb.NumberOfChannels
        || (v5 = **(_QWORD **)&WheapDispatchPtr.Queue.Wcb.NumberOfChannels,
            *(_QWORD *)(**(_QWORD **)&WheapDispatchPtr.Queue.Wcb.NumberOfChannels + 8LL) != *(_QWORD *)&WheapDispatchPtr.Queue.Wcb.NumberOfChannels) )
      {
        __fastfail(3u);
      }
      *(_QWORD *)&WheapDispatchPtr.Queue.Wcb.NumberOfChannels = **(_QWORD **)&WheapDispatchPtr.Queue.Wcb.NumberOfChannels;
      *(_QWORD *)(v5 + 8) = &WheapDispatchPtr.Queue.Wcb.NumberOfChannels;
      KeSetEvent((PRKEVENT)&WheapDispatchPtr.Queue.Wcb.DeviceObject, 0, 0);
      if ( v4 == (struct _DEVICE_OBJECT *)&WheapDispatchPtr.Queue.Wcb.NumberOfChannels )
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
