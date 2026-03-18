/*
 * XREFs of Device_IsSecureDevice @ 0x1C001154C
 * Callers:
 *     Controller_Create @ 0x1C0057BD4 (Controller_Create.c)
 *     Controller_CreateWdfDevice @ 0x1C00587E0 (Controller_CreateWdfDevice.c)
 *     Controller_WdfEvtDeviceAdd @ 0x1C005BDD0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     <none>
 */

char __fastcall Device_IsSecureDevice(__int64 a1)
{
  return *(_BYTE *)(a1 + 24);
}
