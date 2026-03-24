/*
 * XREFs of WheapInitializeEventing @ 0x1409AEE24
 * Callers:
 *     WheaInitialize @ 0x1409AFD68 (WheaInitialize.c)
 * Callees:
 *     EtwRegister @ 0x1406BE540 (EtwRegister.c)
 */

NTSTATUS WheapInitializeEventing()
{
  NTSTATUS result; // eax

  LOWORD(WheapDispatchPtr.Queue.Wcb.DeviceObject) = 1;
  *(_QWORD *)&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters = &WheapDispatchPtr.Queue.Wcb.DeviceContext;
  WheapDispatchPtr.Queue.Wcb.DeviceContext = &WheapDispatchPtr.Queue.Wcb.DeviceContext;
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
