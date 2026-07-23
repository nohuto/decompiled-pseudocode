/*
 * XREFs of IoGetDeviceInterfacePropertyData @ 0x1408257C0
 * Callers:
 *     <none>
 * Callees:
 *     PnpGetDeviceInterfacePropertyData @ 0x14082982C (PnpGetDeviceInterfacePropertyData.c)
 */

__int64 __fastcall IoGetDeviceInterfacePropertyData(__int64 a1, __int64 a2, __int64 a3)
{
  return PnpGetDeviceInterfacePropertyData(a1, a2, a3);
}
