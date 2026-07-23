/*
 * XREFs of WmipFreeTraceDeviceList @ 0x140754E8C
 * Callers:
 *     WmipBuildTraceDeviceList @ 0x14018C64C (WmipBuildTraceDeviceList.c)
 *     WmiTraceRundownNotify @ 0x140754DEC (WmiTraceRundownNotify.c)
 *     WmiSetNetworkNotify @ 0x1408B5650 (WmiSetNetworkNotify.c)
 * Callees:
 *     WmipUnreferenceRegEntry @ 0x14008DA70 (WmipUnreferenceRegEntry.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall WmipFreeTraceDeviceList(__int64 *P, unsigned int a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rsi

  if ( a2 )
  {
    v3 = P;
    v4 = a2;
    do
    {
      WmipUnreferenceRegEntry(*v3);
      v3 += 2;
      --v4;
    }
    while ( v4 );
  }
  ExFreePoolWithTag(P, 0x70696D57u);
}
