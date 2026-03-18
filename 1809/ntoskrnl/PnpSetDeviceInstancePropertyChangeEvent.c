/*
 * XREFs of PnpSetDeviceInstancePropertyChangeEvent @ 0x14016A1D0
 * Callers:
 *     PnpSetDevicePropertyData @ 0x1407071F8 (PnpSetDevicePropertyData.c)
 * Callees:
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x14016A1E8 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 */

__int64 __fastcall PnpSetDeviceInstancePropertyChangeEvent(__int64 a1)
{
  return PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(a1 + 40);
}
