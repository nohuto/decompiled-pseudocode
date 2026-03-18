/*
 * XREFs of ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0017EE4
 * Callers:
 *     imp_WdfRegistryAssignValue @ 0x1C0017CE0 (imp_WdfRegistryAssignValue.c)
 *     imp_WdfRegistryQueryULong @ 0x1C0017DA0 (imp_WdfRegistryQueryULong.c)
 *     imp_WdfControlDeviceInitAllocate @ 0x1C0045DD0 (imp_WdfControlDeviceInitAllocate.c)
 *     imp_WdfDeviceInitAssignName @ 0x1C0045F30 (imp_WdfDeviceInitAssignName.c)
 *     imp_WdfDeviceInitAssignSDDLString @ 0x1C0045FE0 (imp_WdfDeviceInitAssignSDDLString.c)
 *     imp_WdfPdoInitAddCompatibleID @ 0x1C00479C0 (imp_WdfPdoInitAddCompatibleID.c)
 *     imp_WdfPdoInitAddDeviceText @ 0x1C0047B40 (imp_WdfPdoInitAddDeviceText.c)
 *     imp_WdfPdoInitAddHardwareID @ 0x1C0047D20 (imp_WdfPdoInitAddHardwareID.c)
 *     imp_WdfPdoInitAssignContainerID @ 0x1C0048030 (imp_WdfPdoInitAssignContainerID.c)
 *     imp_WdfPdoInitAssignDeviceID @ 0x1C0048160 (imp_WdfPdoInitAssignDeviceID.c)
 *     imp_WdfPdoInitAssignInstanceID @ 0x1C0048290 (imp_WdfPdoInitAssignInstanceID.c)
 *     imp_WdfDeviceCreateSymbolicLink @ 0x1C00497E0 (imp_WdfDeviceCreateSymbolicLink.c)
 *     imp_WdfDeviceOpenDevicemapKey @ 0x1C0049BD0 (imp_WdfDeviceOpenDevicemapKey.c)
 *     imp_WdfDeviceAssignMofResourceName @ 0x1C004AB80 (imp_WdfDeviceAssignMofResourceName.c)
 *     imp_WdfDriverCreate @ 0x1C004D9C0 (imp_WdfDriverCreate.c)
 *     imp_WdfDeviceCreateDeviceInterface @ 0x1C005F570 (imp_WdfDeviceCreateDeviceInterface.c)
 *     imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x1C005F790 (imp_WdfDeviceRetrieveDeviceInterfaceString.c)
 *     imp_WdfDeviceSetDeviceInterfaceState @ 0x1C005F960 (imp_WdfDeviceSetDeviceInterfaceState.c)
 *     imp_WdfRegistryAssignMemory @ 0x1C005FCA0 (imp_WdfRegistryAssignMemory.c)
 *     imp_WdfRegistryAssignMultiString @ 0x1C005FED0 (imp_WdfRegistryAssignMultiString.c)
 *     imp_WdfRegistryAssignString @ 0x1C0060120 (imp_WdfRegistryAssignString.c)
 *     imp_WdfRegistryAssignULong @ 0x1C0060240 (imp_WdfRegistryAssignULong.c)
 *     imp_WdfRegistryAssignUnicodeString @ 0x1C0060320 (imp_WdfRegistryAssignUnicodeString.c)
 *     imp_WdfRegistryCreateKey @ 0x1C00604A0 (imp_WdfRegistryCreateKey.c)
 *     imp_WdfRegistryQueryMemory @ 0x1C00606D0 (imp_WdfRegistryQueryMemory.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C00609A0 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfRegistryQueryString @ 0x1C0060DA0 (imp_WdfRegistryQueryString.c)
 *     imp_WdfRegistryQueryUnicodeString @ 0x1C0061060 (imp_WdfRegistryQueryUnicodeString.c)
 *     imp_WdfRegistryRemoveValue @ 0x1C00612D0 (imp_WdfRegistryRemoveValue.c)
 *     imp_WdfStringCreate @ 0x1C00618E0 (imp_WdfStringCreate.c)
 *     FxIoTargetValidateOpenParams @ 0x1C0064CF0 (FxIoTargetValidateOpenParams.c)
 * Callees:
 *     WPP_IFR_SF_qddd @ 0x1C00315F4 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qdd @ 0x1C003E848 (WPP_IFR_SF_qdd.c)
 */

__int64 __fastcall FxValidateUnicodeString(_FX_DRIVER_GLOBALS *FxDriverGlobals, const _UNICODE_STRING *String)
{
  unsigned __int16 Length; // r8
  unsigned __int16 MaximumLength; // ax

  Length = String->Length;
  if ( (String->Length & 1) != 0 )
  {
    WPP_IFR_SF_qdd(FxDriverGlobals, 2u, 6u, 0xDu, WPP_FxValidateFunctions_hpp_Traceguids_0, String, Length, 0xC000000D);
  }
  else
  {
    MaximumLength = String->MaximumLength;
    if ( (MaximumLength & 1) != 0 )
    {
      WPP_IFR_SF_qdd(
        FxDriverGlobals,
        2u,
        6u,
        0xEu,
        WPP_FxValidateFunctions_hpp_Traceguids_0,
        String,
        MaximumLength,
        0xC000000D);
    }
    else if ( MaximumLength && !String->Buffer )
    {
      WPP_IFR_SF_qdd(
        FxDriverGlobals,
        2u,
        6u,
        0xFu,
        WPP_FxValidateFunctions_hpp_Traceguids_0,
        String,
        MaximumLength,
        0xC000000D);
    }
    else
    {
      if ( Length <= MaximumLength )
        return 0LL;
      WPP_IFR_SF_qddd(
        FxDriverGlobals,
        (unsigned __int8)String,
        6u,
        0x10u,
        WPP_FxValidateFunctions_hpp_Traceguids_0,
        String,
        Length,
        MaximumLength,
        -1073741811);
    }
  }
  return 3221225485LL;
}
