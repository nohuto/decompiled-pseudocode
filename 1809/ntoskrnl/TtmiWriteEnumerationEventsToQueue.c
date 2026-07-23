/*
 * XREFs of TtmiWriteEnumerationEventsToQueue @ 0x140881814
 * Callers:
 *     TtmpDispatchCreateEventQueue @ 0x140882DDC (TtmpDispatchCreateEventQueue.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     TtmiLogError @ 0x1407628CC (TtmiLogError.c)
 *     TtmiPublishDeviceEnumerationEvents @ 0x14087E8E8 (TtmiPublishDeviceEnumerationEvents.c)
 *     TtmpPublishDisplayRequiredPowerRequestEvents @ 0x1408821AC (TtmpPublishDisplayRequiredPowerRequestEvents.c)
 *     TtmiWriteEventToSingleQueue @ 0x1408837F4 (TtmiWriteEventToSingleQueue.c)
 */

__int64 __fastcall TtmiWriteEnumerationEventsToQueue(__int64 a1, __int64 a2)
{
  int v4; // ebx
  int v5; // edx
  _DWORD v7[136]; // [rsp+20h] [rbp-228h] BYREF

  v4 = TtmiPublishDeviceEnumerationEvents(a1, a2);
  if ( v4 < 0 )
  {
    v5 = 2137;
LABEL_3:
    TtmiLogError("TtmiWriteEnumerationEventsToQueue", v5, v4, v4);
    return (unsigned int)v4;
  }
  TtmpPublishDisplayRequiredPowerRequestEvents(a1, a2);
  memset(v7, 0, sizeof(v7));
  v7[0] = 1;
  v4 = TtmiWriteEventToSingleQueue(a2, v7);
  if ( v4 < 0 )
  {
    v5 = 2156;
    goto LABEL_3;
  }
  return 0LL;
}
