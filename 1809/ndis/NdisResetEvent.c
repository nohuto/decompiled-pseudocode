/*
 * XREFs of NdisResetEvent @ 0x1C0008E20
 * Callers:
 *     ndisSetSystemPower @ 0x1C00B8930 (ndisSetSystemPower.c)
 *     ndisWdfNotifySystemPower @ 0x1C00F58A0 (ndisWdfNotifySystemPower.c)
 *     ndisPnPRemoveDevice @ 0x1C0118F00 (ndisPnPRemoveDevice.c)
 *     ndisPmHaltMiniport @ 0x1C0119C48 (ndisPmHaltMiniport.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisResetEvent(PNDIS_EVENT Event)
{
  KeClearEvent(&Event->Event);
}
