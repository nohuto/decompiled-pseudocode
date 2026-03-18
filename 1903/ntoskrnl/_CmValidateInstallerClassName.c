/*
 * XREFs of _CmValidateInstallerClassName @ 0x1405BD10C
 * Callers:
 *     _CmGetCommonClassRegKeyPath @ 0x1405C0194 (_CmGetCommonClassRegKeyPath.c)
 *     _PnpDispatchInterfaceClass @ 0x140623E60 (_PnpDispatchInterfaceClass.c)
 *     _PnpDispatchInstallerClass @ 0x140700900 (_PnpDispatchInstallerClass.c)
 *     _CmGetDeviceInterfaceName @ 0x140713480 (_CmGetDeviceInterfaceName.c)
 *     _CmClassSubkeyCallback @ 0x140775260 (_CmClassSubkeyCallback.c)
 * Callees:
 *     _PnpIsValidGuidString @ 0x1405C10D8 (_PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateInstallerClassName(__int64 a1, const WCHAR *a2)
{
  return (unsigned __int8)PnpIsValidGuidString(a2) == 0 ? 0xC0000033 : 0;
}
