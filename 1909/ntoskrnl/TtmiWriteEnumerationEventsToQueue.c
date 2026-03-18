/*
 * XREFs of TtmiWriteEnumerationEventsToQueue @ 0x1408BDB30
 * Callers:
 *     TtmpDispatchCreateEventQueue @ 0x1408BF1DC (TtmpDispatchCreateEventQueue.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     TtmiPublishDeviceEnumerationEvents @ 0x1408BAA68 (TtmiPublishDeviceEnumerationEvents.c)
 *     TtmpPublishDisplayRequiredPowerRequestEvents @ 0x1408BE5B4 (TtmpPublishDisplayRequiredPowerRequestEvents.c)
 *     TtmiWriteEventToSingleQueue @ 0x1408BFC14 (TtmiWriteEventToSingleQueue.c)
 *     TtmiLogError @ 0x1408C157C (TtmiLogError.c)
 */

__int64 __fastcall TtmiWriteEnumerationEventsToQueue(__int64 a1, __int64 a2)
{
  int v4; // ebx
  _DWORD v6[136]; // [rsp+20h] [rbp-228h] BYREF

  v4 = TtmiPublishDeviceEnumerationEvents(a1, a2);
  if ( v4 >= 0 )
  {
    TtmpPublishDisplayRequiredPowerRequestEvents(a1, a2);
    memset(&v6[1], 0, 0x21CuLL);
    v6[0] = 1;
    v4 = TtmiWriteEventToSingleQueue(a2, v6);
    if ( v4 >= 0 )
      return 0LL;
  }
  TtmiLogError("TtmiWriteEnumerationEventsToQueue");
  return (unsigned int)v4;
}
