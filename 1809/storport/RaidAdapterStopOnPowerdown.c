/*
 * XREFs of RaidAdapterStopOnPowerdown @ 0x1C0016AD0
 * Callers:
 *     RaidAdapterPowerDownDevice @ 0x1C001420C (RaidAdapterPowerDownDevice.c)
 * Callees:
 *     RaidPowerPassToMiniPort @ 0x1C0013118 (RaidPowerPassToMiniPort.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C0016B44 (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidIsAdapterControlSupported @ 0x1C0016F40 (RaidIsAdapterControlSupported.c)
 *     RaidAdapterSendPowerToMiniport @ 0x1C0025D8C (RaidAdapterSendPowerToMiniport.c)
 */

__int64 __fastcall RaidAdapterStopOnPowerdown(__int64 a1, IRP *a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 64);
  if ( (unsigned int)RaidIsAdapterControlSupported(v2, 6LL) )
  {
    RaidAdapterSendPowerToMiniport(v2, a2);
    return RaidAdapterDevicePowerstopAdapter(a2);
  }
  *(_BYTE *)(v2 + 4705) = 1;
  result = RaidPowerPassToMiniPort(a1, (__int64)a2, (__int64)RaidAdapterDevicePowerDownSrbComplete);
  if ( (int)result < 0 )
    return RaidAdapterDevicePowerstopAdapter(a2);
  return result;
}
