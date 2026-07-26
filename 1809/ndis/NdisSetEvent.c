/*
 * XREFs of NdisSetEvent @ 0x1C0008E00
 * Callers:
 *     ndisPnPStartDevice @ 0x1C00BC164 (ndisPnPStartDevice.c)
 *     ndisDevicePowerOn @ 0x1C010A1E0 (ndisDevicePowerOn.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisSetEvent(PNDIS_EVENT Event)
{
  KeSetEvent(&Event->Event, 0, 0);
}
