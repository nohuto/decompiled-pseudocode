/*
 * XREFs of _CmValidateInstallerClassName @ 0x140597DE4
 * Callers:
 *     _CmGetCommonClassRegKeyPath @ 0x140597C9C (_CmGetCommonClassRegKeyPath.c)
 *     _PnpDispatchInterfaceClass @ 0x14059EFC0 (_PnpDispatchInterfaceClass.c)
 *     _PnpDispatchInstallerClass @ 0x1406F1C50 (_PnpDispatchInstallerClass.c)
 *     _CmGetDeviceInterfaceName @ 0x1406F971C (_CmGetDeviceInterfaceName.c)
 *     _CmClassSubkeyCallback @ 0x140751BB0 (_CmClassSubkeyCallback.c)
 * Callees:
 *     _PnpIsValidGuidString @ 0x14059B534 (_PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateInstallerClassName(__int64 a1, const WCHAR *a2)
{
  return (unsigned __int8)PnpIsValidGuidString(a2) == 0 ? 0xC0000033 : 0;
}
