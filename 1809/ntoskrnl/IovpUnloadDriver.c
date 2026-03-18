/*
 * XREFs of IovpUnloadDriver @ 0x140924A38
 * Callers:
 *     IovUnloadDrivers @ 0x140924310 (IovUnloadDrivers.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1400B8E50 (KeInitializeEvent.c)
 *     ExQueueWorkItem @ 0x1400D19E0 (ExQueueWorkItem.c)
 *     IopCheckUnloadDriver @ 0x14016AABC (IopCheckUnloadDriver.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     ObMakeTemporaryObject @ 0x1406C73F0 (ObMakeTemporaryObject.c)
 */

__int64 __fastcall IovpUnloadDriver(_QWORD *Object)
{
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+30h] [rbp-58h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-38h] BYREF
  _QWORD *v5; // [rsp+68h] [rbp-20h]
  char v6; // [rsp+90h] [rbp+8h] BYREF

  if ( !Object[13] )
    return 3221225488LL;
  ObfReferenceObject(Object);
  if ( (int)IopCheckUnloadDriver(Object, &v6) >= 0 )
    return 259LL;
  ObfDereferenceObject(Object);
  if ( !v6 )
    return 259LL;
  if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
  {
    ((void (__fastcall *)(_QWORD *))Object[13])(Object);
  }
  else
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    WorkItem.List.Flink = 0LL;
    WorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopLoadUnloadDriver;
    v5 = Object;
    WorkItem.Parameter = &WorkItem;
    ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  ObMakeTemporaryObject(Object);
  ObfDereferenceObject(Object);
  return 0LL;
}
