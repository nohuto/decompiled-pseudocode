/*
 * XREFs of _CmOpenInstallerClassRegKey @ 0x1405BD4A4
 * Callers:
 *     PiCMOpenClassKey @ 0x1406CCE80 (PiCMOpenClassKey.c)
 *     _CmGetDeviceSoftwareKey @ 0x1406D6E7C (_CmGetDeviceSoftwareKey.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x140700574 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _PnpDispatchInstallerClass @ 0x1407026E0 (_PnpDispatchInstallerClass.c)
 *     _CmGetInstallerClassCompoundFilters @ 0x140702C98 (_CmGetInstallerClassCompoundFilters.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x1407030E4 (_CmGetInstallerClassRegPropWorker.c)
 *     PipCallDriverAddDevice @ 0x140704B38 (PipCallDriverAddDevice.c)
 *     PpForEachDeviceInstanceDriver @ 0x140724BF8 (PpForEachDeviceInstanceDriver.c)
 *     _CmCreateInstallerClassWorker @ 0x140933934 (_CmCreateInstallerClassWorker.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140935C9C (_CmSetInstallerClassRegPropWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x14093A940 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x14093D6F4 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 * Callees:
 *     _CmOpenCommonClassRegKey @ 0x1405C02BC (_CmOpenCommonClassRegKey.c)
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
