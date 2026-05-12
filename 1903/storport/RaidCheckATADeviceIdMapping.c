/*
 * XREFs of RaidCheckATADeviceIdMapping @ 0x1C0039024
 * Callers:
 *     ATAShimGetMsftId @ 0x1C00505F0 (ATAShimGetMsftId.c)
 * Callees:
 *     <none>
 */

_LIST_ENTRY *__fastcall RaidCheckATADeviceIdMapping(_LIST_ENTRY *a1, const STRING *a2)
{
  _LIST_ENTRY *Blink; // rbx

  Blink = WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink;
  a1->Flink = 0LL;
  a1->Blink = 0LL;
  while ( Blink != (_LIST_ENTRY *)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink )
  {
    if ( !RtlCompareString(a2, (const STRING *)&Blink[1], 0) )
    {
      *a1 = Blink[2];
      return a1;
    }
    Blink = Blink->Flink;
  }
  return a1;
}
