/*
 * XREFs of PnpSetDeviceInstancePropertyChangeEvent @ 0x140171E70
 * Callers:
 *     PnpSetDevicePropertyData @ 0x14072FE68 (PnpSetDevicePropertyData.c)
 * Callees:
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x140171E88 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 */

__int64 __fastcall PnpSetDeviceInstancePropertyChangeEvent(__int64 a1)
{
  return PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(a1 + 40);
}
