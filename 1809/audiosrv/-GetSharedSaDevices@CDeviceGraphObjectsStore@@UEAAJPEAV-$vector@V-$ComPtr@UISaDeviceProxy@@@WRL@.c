/*
 * XREFs of ?GetSharedSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800E82B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDeviceGraphObjectsStore::GetSharedSaDevices(__int64 a1, char **a2)
{
  return CDeviceGraphObjectsStore::GetSaDevices(a1, a2, 0);
}
