/*
 * XREFs of _CmValidateInstallerClassName @ 0x1405BD4EC
 * Callers:
 *     _CmGetCommonClassRegKeyPath @ 0x1405C0664 (_CmGetCommonClassRegKeyPath.c)
 *     _PnpDispatchInterfaceClass @ 0x140627D10 (_PnpDispatchInterfaceClass.c)
 *     _PnpDispatchInstallerClass @ 0x1407026E0 (_PnpDispatchInstallerClass.c)
 *     _CmGetDeviceInterfaceName @ 0x140715260 (_CmGetDeviceInterfaceName.c)
 *     _CmClassSubkeyCallback @ 0x140778840 (_CmClassSubkeyCallback.c)
 * Callees:
 *     _PnpIsValidGuidString @ 0x1405C15A8 (_PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateInstallerClassName(__int64 a1, const WCHAR *a2)
{
  return (unsigned __int8)PnpIsValidGuidString(a2) == 0 ? 0xC0000033 : 0;
}
