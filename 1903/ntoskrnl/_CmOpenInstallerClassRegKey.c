/*
 * XREFs of _CmOpenInstallerClassRegKey @ 0x1405BD0C4
 * Callers:
 *     PiCMOpenClassKey @ 0x1406CE0E0 (PiCMOpenClassKey.c)
 *     _CmGetDeviceSoftwareKey @ 0x1406D709C (_CmGetDeviceSoftwareKey.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1406FE794 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _PnpDispatchInstallerClass @ 0x140700900 (_PnpDispatchInstallerClass.c)
 *     _CmGetInstallerClassCompoundFilters @ 0x140700EB8 (_CmGetInstallerClassCompoundFilters.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x140701304 (_CmGetInstallerClassRegPropWorker.c)
 *     PipCallDriverAddDevice @ 0x140702D58 (PipCallDriverAddDevice.c)
 *     PpForEachDeviceInstanceDriver @ 0x140722D58 (PpForEachDeviceInstanceDriver.c)
 *     _CmCreateInstallerClassWorker @ 0x140933EC0 (_CmCreateInstallerClassWorker.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x14093622C (_CmSetInstallerClassRegPropWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x14093AED0 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x14093DC84 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 * Callees:
 *     _CmOpenCommonClassRegKey @ 0x1405BFDEC (_CmOpenCommonClassRegKey.c)
 */

__int64 __fastcall CmOpenInstallerClassRegKey(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  return CmOpenCommonClassRegKey(a1, a2, 32, 0, a5, a6, a7, a8);
}
