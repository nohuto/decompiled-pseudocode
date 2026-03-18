/*
 * XREFs of ?MxHasEnoughRemainingThreadStack@Mx@@SAEXZ @ 0x1C007BAC0
 * Callers:
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0083C64 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Mx::MxHasEnoughRemainingThreadStack()
{
  unsigned __int64 HighLimit; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 LowLimit; // [rsp+38h] [rbp+10h] BYREF

  IoGetStackLimits(&LowLimit, &HighLimit);
  return (unsigned __int64)&HighLimit - LowLimit >= 0x3000;
}
