/*
 * XREFs of imp_WdfPdoMarkMissing @ 0x1C003B140
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@@PEAPEAU1@PEAPEAVFxDevice@@@Z @ 0x1C003ADA0 (-GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@.c)
 *     ?UpdateDeviceAsMissing@FxChildList@@QEAAJPEAVFxDevice@@@Z @ 0x1C003E494 (-UpdateDeviceAsMissing@FxChildList@@QEAAJPEAVFxDevice@@@Z.c)
 */

int __fastcall imp_WdfPdoMarkMissing(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  int result; // eax
  FxDevice *pDevice; // [rsp+40h] [rbp+8h] BYREF
  FxPkgPdo *pPkgPdo; // [rsp+50h] [rbp+18h] BYREF
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+58h] [rbp+20h] BYREF

  result = GetPdoPackageFromDeviceHandle(
             (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
             Device,
             "imp_WdfPdoMarkMissing",
             &pPkgPdo,
             &pFxDriverGlobals,
             &pDevice);
  if ( result >= 0 )
    return FxChildList::UpdateDeviceAsMissing(pPkgPdo->m_OwningChildList, pDevice);
  return result;
}
