/*
 * XREFs of TtmiPublishDeviceEnumerationEvents @ 0x14087E8E8
 * Callers:
 *     TtmiWriteEnumerationEventsToQueue @ 0x140881814 (TtmiWriteEnumerationEventsToQueue.c)
 * Callees:
 *     TtmiLogError @ 0x1407628CC (TtmiLogError.c)
 *     TtmpPublishDeviceEvent @ 0x14087F4A0 (TtmpPublishDeviceEvent.c)
 */

__int64 __fastcall TtmiPublishDeviceEnumerationEvents(__int64 a1, __int64 a2)
{
  __int64 *v2; // rsi
  __int64 *i; // rbx
  int v6; // eax
  unsigned int v7; // edi

  v2 = (__int64 *)(a1 + 96);
  for ( i = *(__int64 **)(a1 + 96); ; i = (__int64 *)*i )
  {
    if ( i == v2 )
      return 0;
    if ( (i[75] & 0xA) == 2 )
    {
      v6 = TtmpPublishDeviceEvent(a1, a2, i, 0LL);
      v7 = v6;
      if ( v6 < 0 )
        break;
    }
  }
  TtmiLogError("TtmiPublishDeviceEnumerationEvents", 1038, v6, v6);
  return v7;
}
