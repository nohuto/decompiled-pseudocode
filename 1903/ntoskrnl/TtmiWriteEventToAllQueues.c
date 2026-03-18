/*
 * XREFs of TtmiWriteEventToAllQueues @ 0x1408BE2FC
 * Callers:
 *     TtmpPublishDeviceEvent @ 0x1408BBD64 (TtmpPublishDeviceEvent.c)
 *     TtmpWriteDisplayStateChangedEvent @ 0x1408BD244 (TtmpWriteDisplayStateChangedEvent.c)
 *     TtmpWriteDisplayRequiredPowerRequestUpdatedEvent @ 0x1408BF3E8 (TtmpWriteDisplayRequiredPowerRequestUpdatedEvent.c)
 * Callees:
 *     TtmiCloseEventQueue @ 0x1408BFF98 (TtmiCloseEventQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x1408C0344 (TtmiWriteEventToSingleQueue.c)
 *     TtmiLogError @ 0x1408C1CAC (TtmiLogError.c)
 */

void __fastcall TtmiWriteEventToAllQueues(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  _QWORD *v4; // rbx
  _QWORD *v5; // rsi

  v2 = (_QWORD *)(a1 + 80);
  v4 = *(_QWORD **)(a1 + 80);
  while ( v4 != v2 )
  {
    v5 = v4;
    v4 = (_QWORD *)*v4;
    if ( (int)TtmiWriteEventToSingleQueue(v5, a2) < 0 )
    {
      TtmiLogError("TtmiWriteEventToAllQueues");
      TtmiCloseEventQueue(v5);
    }
  }
}
