/*
 * XREFs of RaidAdapterStop @ 0x1C0015CAC
 * Callers:
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C0015CFC (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidAdapterReleaseResources @ 0x1C0074128 (RaidAdapterReleaseResources.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C00743F8 (RaidAdapterStopDeviceIrp.c)
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C0015AF8 (RaidIsAdapterControlSupported.c)
 *     RaidAdapterStopAdapter @ 0x1C0015BA4 (RaidAdapterStopAdapter.c)
 */

__int64 __fastcall RaidAdapterStop(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 528) || !*(_QWORD *)(a1 + 536) )
    return 0LL;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 1) )
    return (unsigned int)RaidAdapterStopAdapter(a1);
  return v1;
}
