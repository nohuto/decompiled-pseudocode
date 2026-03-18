/*
 * XREFs of TtmiWriteEventToAllQueues @ 0x140880670
 * Callers:
 *     TtmpPublishDeviceEvent @ 0x14087E260 (TtmpPublishDeviceEvent.c)
 *     TtmpWriteDisplayStateChangedEvent @ 0x14087F6C8 (TtmpWriteDisplayStateChangedEvent.c)
 *     TtmpWriteDisplayRequiredPowerRequestUpdatedEvent @ 0x140881678 (TtmpWriteDisplayRequiredPowerRequestUpdatedEvent.c)
 * Callees:
 *     TtmiLogError @ 0x1407616FC (TtmiLogError.c)
 *     TtmiCloseEventQueue @ 0x140882250 (TtmiCloseEventQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x1408825B4 (TtmiWriteEventToSingleQueue.c)
 */

void __fastcall TtmiWriteEventToAllQueues(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  _QWORD *v4; // rbx
  _QWORD *v5; // rsi
  int v6; // eax

  v2 = (_QWORD *)(a1 + 80);
  v4 = *(_QWORD **)(a1 + 80);
  while ( v4 != v2 )
  {
    v5 = v4;
    v4 = (_QWORD *)*v4;
    v6 = TtmiWriteEventToSingleQueue(v5, a2);
    if ( v6 < 0 )
    {
      TtmiLogError("TtmiWriteEventToAllQueues", 2218, v6, -1);
      TtmiCloseEventQueue(v5);
    }
  }
}
