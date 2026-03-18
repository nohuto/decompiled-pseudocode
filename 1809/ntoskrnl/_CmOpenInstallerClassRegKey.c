/*
 * XREFs of _CmOpenInstallerClassRegKey @ 0x14059EB8C
 * Callers:
 *     PiCMOpenClassKey @ 0x1406A6D40 (PiCMOpenClassKey.c)
 *     _CmGetDeviceSoftwareKey @ 0x1406B2484 (_CmGetDeviceSoftwareKey.c)
 *     PipCallDriverAddDevice @ 0x1406E6C6C (PipCallDriverAddDevice.c)
 *     PpForEachDeviceInstanceDriver @ 0x1406EE51C (PpForEachDeviceInstanceDriver.c)
 *     _PnpDispatchInstallerClass @ 0x1406F09D0 (_PnpDispatchInstallerClass.c)
 *     _CmGetInstallerClassCompoundFilters @ 0x1406F0F7C (_CmGetInstallerClassCompoundFilters.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x1406F13C8 (_CmGetInstallerClassRegPropWorker.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1406F163C (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmCreateInstallerClassWorker @ 0x1408F6220 (_CmCreateInstallerClassWorker.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x1408F856C (_CmSetInstallerClassRegPropWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x1408FD12C (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x1408FF8A8 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 * Callees:
 *     _CmOpenCommonClassRegKey @ 0x14059EBD4 (_CmOpenCommonClassRegKey.c)
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
