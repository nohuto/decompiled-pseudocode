/*
 * XREFs of ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000BA00
 * Callers:
 *     imp_WdfRegistryQueryULong @ 0x1C000B8C0 (imp_WdfRegistryQueryULong.c)
 *     imp_WdfRegistryAssignValue @ 0x1C0018D20 (imp_WdfRegistryAssignValue.c)
 *     imp_WdfControlDeviceInitAllocate @ 0x1C00454B0 (imp_WdfControlDeviceInitAllocate.c)
 *     imp_WdfDeviceInitAssignName @ 0x1C0045610 (imp_WdfDeviceInitAssignName.c)
 *     imp_WdfDeviceInitAssignSDDLString @ 0x1C00456C0 (imp_WdfDeviceInitAssignSDDLString.c)
 *     imp_WdfPdoInitAddCompatibleID @ 0x1C0047090 (imp_WdfPdoInitAddCompatibleID.c)
 *     imp_WdfPdoInitAddDeviceText @ 0x1C0047210 (imp_WdfPdoInitAddDeviceText.c)
 *     imp_WdfPdoInitAddHardwareID @ 0x1C00473F0 (imp_WdfPdoInitAddHardwareID.c)
 *     imp_WdfPdoInitAssignContainerID @ 0x1C0047700 (imp_WdfPdoInitAssignContainerID.c)
 *     imp_WdfPdoInitAssignDeviceID @ 0x1C0047830 (imp_WdfPdoInitAssignDeviceID.c)
 *     imp_WdfPdoInitAssignInstanceID @ 0x1C0047960 (imp_WdfPdoInitAssignInstanceID.c)
 *     imp_WdfDeviceCreateSymbolicLink @ 0x1C0048F70 (imp_WdfDeviceCreateSymbolicLink.c)
 *     imp_WdfDeviceOpenDevicemapKey @ 0x1C0049370 (imp_WdfDeviceOpenDevicemapKey.c)
 *     imp_WdfDeviceAssignMofResourceName @ 0x1C004A330 (imp_WdfDeviceAssignMofResourceName.c)
 *     imp_WdfDriverCreate @ 0x1C004D2A0 (imp_WdfDriverCreate.c)
 *     imp_WdfDeviceCreateDeviceInterface @ 0x1C005F710 (imp_WdfDeviceCreateDeviceInterface.c)
 *     imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x1C005F930 (imp_WdfDeviceRetrieveDeviceInterfaceString.c)
 *     imp_WdfDeviceSetDeviceInterfaceState @ 0x1C005FB00 (imp_WdfDeviceSetDeviceInterfaceState.c)
 *     imp_WdfRegistryAssignMemory @ 0x1C005FE40 (imp_WdfRegistryAssignMemory.c)
 *     imp_WdfRegistryAssignMultiString @ 0x1C0060050 (imp_WdfRegistryAssignMultiString.c)
 *     imp_WdfRegistryAssignString @ 0x1C00602B0 (imp_WdfRegistryAssignString.c)
 *     imp_WdfRegistryAssignULong @ 0x1C00603E0 (imp_WdfRegistryAssignULong.c)
 *     imp_WdfRegistryAssignUnicodeString @ 0x1C00604E0 (imp_WdfRegistryAssignUnicodeString.c)
 *     imp_WdfRegistryCreateKey @ 0x1C0060670 (imp_WdfRegistryCreateKey.c)
 *     imp_WdfRegistryQueryMemory @ 0x1C00608D0 (imp_WdfRegistryQueryMemory.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C0060BA0 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfRegistryQueryString @ 0x1C0060F90 (imp_WdfRegistryQueryString.c)
 *     imp_WdfRegistryQueryUnicodeString @ 0x1C0061250 (imp_WdfRegistryQueryUnicodeString.c)
 *     imp_WdfRegistryRemoveValue @ 0x1C00614D0 (imp_WdfRegistryRemoveValue.c)
 *     imp_WdfStringCreate @ 0x1C0061AF0 (imp_WdfStringCreate.c)
 *     FxIoTargetValidateOpenParams @ 0x1C006536C (FxIoTargetValidateOpenParams.c)
 * Callees:
 *     WPP_IFR_SF_qddd @ 0x1C0030A24 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qdd @ 0x1C003DAD8 (WPP_IFR_SF_qdd.c)
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
