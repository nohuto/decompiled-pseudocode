/*
 * XREFs of TtmiWriteEnumerationEventsToQueue @ 0x1408BE260
 * Callers:
 *     TtmpDispatchCreateEventQueue @ 0x1408BF90C (TtmpDispatchCreateEventQueue.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     TtmiPublishDeviceEnumerationEvents @ 0x1408BB198 (TtmiPublishDeviceEnumerationEvents.c)
 *     TtmpPublishDisplayRequiredPowerRequestEvents @ 0x1408BECE4 (TtmpPublishDisplayRequiredPowerRequestEvents.c)
 *     TtmiWriteEventToSingleQueue @ 0x1408C0344 (TtmiWriteEventToSingleQueue.c)
 *     TtmiLogError @ 0x1408C1CAC (TtmiLogError.c)
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
