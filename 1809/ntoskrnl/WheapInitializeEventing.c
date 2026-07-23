/*
 * XREFs of WheapInitializeEventing @ 0x1409AFE24
 * Callers:
 *     WheaInitialize @ 0x1409B0D68 (WheaInitialize.c)
 * Callees:
 *     EtwRegister @ 0x1406BF7E0 (EtwRegister.c)
 */

NTSTATUS WheapInitializeEventing()
{
  NTSTATUS result; // eax

  LOWORD(WheapDispatchPtr.Queue.Wcb.DeviceObject) = 1;
  WheapDispatchPtr.DeviceQueue.DeviceListHead.Flink = (struct _LIST_ENTRY *)&WheapDispatchPtr.DeviceQueue;
  *(_QWORD *)&WheapDispatchPtr.DeviceQueue.Type = &WheapDispatchPtr.DeviceQueue;
  BYTE2(WheapDispatchPtr.Queue.Wcb.DeviceObject) = 6;
  WheapDispatchPtr.Queue.Wcb.BufferChainingDpc = (PKDPC)&WheapDispatchPtr.Queue.Wcb.CurrentIrp;
  WheapDispatchPtr.Queue.Wcb.CurrentIrp = &WheapDispatchPtr.Queue.Wcb.CurrentIrp;
  HIDWORD(WheapDispatchPtr.Queue.Wcb.DeviceObject) = 1;
  result = EtwRegister(
             &WHEA_ETW_PROVIDER,
             (PETWENABLECALLBACK)WheapEtwEnableCallback,
             0LL,
             (PREGHANDLE)&WheapDispatchPtr.Queue.ListEntry.Blink);
  if ( result )
    WheapDispatchPtr.Queue.ListEntry.Blink = 0LL;
  return result;
}
