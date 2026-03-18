/*
 * XREFs of WmipFreeTraceDeviceList @ 0x14071DD3C
 * Callers:
 *     WmipBuildTraceDeviceList @ 0x14015BBDC (WmipBuildTraceDeviceList.c)
 *     WmiTraceRundownNotify @ 0x14071DCA0 (WmiTraceRundownNotify.c)
 *     WmiSetNetworkNotify @ 0x1408F1184 (WmiSetNetworkNotify.c)
 * Callees:
 *     WmipUnreferenceRegEntry @ 0x1400EDD84 (WmipUnreferenceRegEntry.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
