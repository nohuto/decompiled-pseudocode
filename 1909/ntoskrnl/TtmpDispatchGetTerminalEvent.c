/*
 * XREFs of TtmpDispatchGetTerminalEvent @ 0x1408BF464
 * Callers:
 *     TtmDispatchApi @ 0x1408BED60 (TtmDispatchApi.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     TtmiRetrieveEventFromQueue @ 0x1408BFAA4 (TtmiRetrieveEventFromQueue.c)
 *     TtmiLogError @ 0x1408C157C (TtmiLogError.c)
 */

__int64 __fastcall TtmpDispatchGetTerminalEvent(__int64 a1, __int64 a2)
{
  NTSTATUS EventFromQueue; // ebx
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  EventFromQueue = ObReferenceObjectByHandle(
                     *(HANDLE *)(a1 + 8),
                     0xF0000u,
                     TtmpQueueObjectType,
                     KeGetCurrentThread()->PreviousMode,
                     &Object,
                     0LL);
  if ( EventFromQueue < 0 )
  {
    TtmiLogError("TtmiReferenceQueueByHandle");
LABEL_3:
    TtmiLogError("TtmpDispatchGetTerminalEvent");
    goto LABEL_6;
  }
  EventFromQueue = TtmiRetrieveEventFromQueue(Object, a2);
  if ( EventFromQueue < 0 )
    goto LABEL_3;
  EventFromQueue = 0;
LABEL_6:
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)EventFromQueue;
}
