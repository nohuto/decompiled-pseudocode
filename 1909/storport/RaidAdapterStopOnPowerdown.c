/*
 * XREFs of RaidAdapterStopOnPowerdown @ 0x1C0018750
 * Callers:
 *     GatewayRegisterForEmptyNotification @ 0x1C00171D0 (GatewayRegisterForEmptyNotification.c)
 * Callees:
 *     RaidPowerPassToMiniPort @ 0x1C001148C (RaidPowerPassToMiniPort.c)
 *     RaidIsAdapterControlSupported @ 0x1C0015AF8 (RaidIsAdapterControlSupported.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C0015CFC (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidAdapterSendPowerToMiniport @ 0x1C0022BC8 (RaidAdapterSendPowerToMiniport.c)
 */

int __fastcall RaidAdapterStopOnPowerdown(__int64 a1, IRP *a2)
{
  __int64 v2; // rbx
  int result; // eax

  v2 = *(_QWORD *)(a1 + 64);
  if ( (unsigned int)RaidIsAdapterControlSupported(v2, 6) )
  {
    RaidAdapterSendPowerToMiniport(v2, a2);
    return RaidAdapterDevicePowerstopAdapter(a2, v2);
  }
  *(_BYTE *)(v2 + 4641) = 1;
  result = RaidPowerPassToMiniPort(a1, (__int64)a2, (__int64)RaidAdapterDevicePowerDownSrbComplete);
  if ( result < 0 )
    return RaidAdapterDevicePowerstopAdapter(a2, v2);
  return result;
}
