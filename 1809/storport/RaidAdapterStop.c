/*
 * XREFs of RaidAdapterStop @ 0x1C0016C60
 * Callers:
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C0016B44 (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidAdapterReleaseResources @ 0x1C0073DA0 (RaidAdapterReleaseResources.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C0074084 (RaidAdapterStopDeviceIrp.c)
 * Callees:
 *     RaidAdapterStopAdapter @ 0x1C0016CB0 (RaidAdapterStopAdapter.c)
 *     RaidIsAdapterControlSupported @ 0x1C0016F40 (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterStop(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 544) || !*(_QWORD *)(a1 + 552) )
    return 0LL;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 1LL) )
    return (unsigned int)RaidAdapterStopAdapter(a1);
  return v1;
}
