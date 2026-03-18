/*
 * XREFs of ACPIEcStopRemoveDeviceCommon @ 0x1C00520D0
 * Callers:
 *     ACPIEcRemoveDevice @ 0x1C0051C10 (ACPIEcRemoveDevice.c)
 *     ACPIEcStopDevice @ 0x1C0052080 (ACPIEcStopDevice.c)
 * Callees:
 *     ACPIEcDisconnectInterrupt @ 0x1C00AAC60 (ACPIEcDisconnectInterrupt.c)
 *     ACPIEcRemoveOpRegionHandler @ 0x1C00AAE50 (ACPIEcRemoveOpRegionHandler.c)
 */

__int64 __fastcall ACPIEcStopRemoveDeviceCommon(__int64 a1)
{
  int v1; // ebx
  int v3; // eax
  int v4; // eax

  v1 = 0;
  if ( *(_BYTE *)(a1 + 120) )
  {
    v3 = ACPIEcDisconnectInterrupt();
    if ( v3 < 0 )
      v1 = v3;
    v4 = ACPIEcRemoveOpRegionHandler(a1);
    if ( v4 < 0 && v1 >= 0 )
      v1 = v4;
    *(_BYTE *)(a1 + 120) = 0;
  }
  return (unsigned int)v1;
}
