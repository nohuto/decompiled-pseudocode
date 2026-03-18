/*
 * XREFs of TtmiPublishDeviceEnumerationEvents @ 0x1408BAA68
 * Callers:
 *     TtmiWriteEnumerationEventsToQueue @ 0x1408BDB30 (TtmiWriteEnumerationEventsToQueue.c)
 * Callees:
 *     TtmpPublishDeviceEvent @ 0x1408BB634 (TtmpPublishDeviceEvent.c)
 *     TtmiLogError @ 0x1408C157C (TtmiLogError.c)
 */

__int64 __fastcall TtmiPublishDeviceEnumerationEvents(__int64 a1, __int64 a2)
{
  __int64 *v2; // rsi
  __int64 *i; // rbx
  int v6; // edi

  v2 = (__int64 *)(a1 + 96);
  for ( i = *(__int64 **)(a1 + 96); ; i = (__int64 *)*i )
  {
    if ( i == v2 )
      return 0;
    if ( (i[75] & 0xA) == 2 )
    {
      v6 = TtmpPublishDeviceEvent(a1, a2, i, 0LL);
      if ( v6 < 0 )
        break;
    }
  }
  TtmiLogError("TtmiPublishDeviceEnumerationEvents");
  return (unsigned int)v6;
}
