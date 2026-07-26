/*
 * XREFs of NdisResetEvent @ 0x1C00114E0
 * Callers:
 *     ndisPnPRemoveDevice @ 0x1C013A804 (ndisPnPRemoveDevice.c)
 *     ndisPmHaltMiniport @ 0x1C013B334 (ndisPmHaltMiniport.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisResetEvent(PNDIS_EVENT Event)
{
  KeClearEvent(&Event->Event);
}
