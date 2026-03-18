/*
 * XREFs of PsSetVmProcessorHostProcess @ 0x1408C8A18
 * Callers:
 *     VmSetVpHostProcess @ 0x1408ED6B0 (VmSetVpHostProcess.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 */

NTSTATUS __fastcall PsSetVmProcessorHostProcess(__int64 a1)
{
  signed __int64 v2; // rax
  NTSTATUS result; // eax
  struct _KEVENT Event; // [rsp+30h] [rbp-48h] BYREF
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+48h] [rbp-30h] BYREF

  WorkItem.List.Blink = 0LL;
  memset(&Event, 0, sizeof(Event));
  _InterlockedOr((volatile signed __int32 *)(a1 + 1788), 0x1800000u);
  if ( !*(_QWORD *)(a1 + 2144) )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1788), 0x200000u);
    v2 = _InterlockedIncrement64(&PsNextSecurityDomain);
    *(_QWORD *)(a1 + 2144) = v2;
    *(_QWORD *)(a1 + 2152) = v2;
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  WorkItem.List.Flink = 0LL;
  WorkItem.WorkerRoutine = (void (__fastcall *)(void *))PspSetVmProcessorHostProcessWorkerRoutine;
  WorkItem.Parameter = &Event;
  ExQueueWorkItem(&WorkItem, CriticalWorkQueue);
  result = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1788), 0xFEFFFFFF);
  return result;
}
