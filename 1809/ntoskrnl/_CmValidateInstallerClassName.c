/*
 * XREFs of _CmValidateInstallerClassName @ 0x140596DE4
 * Callers:
 *     _CmGetCommonClassRegKeyPath @ 0x140596C9C (_CmGetCommonClassRegKeyPath.c)
 *     _PnpDispatchInterfaceClass @ 0x14059DFC0 (_PnpDispatchInterfaceClass.c)
 *     _PnpDispatchInstallerClass @ 0x1406F09B0 (_PnpDispatchInstallerClass.c)
 *     _CmGetDeviceInterfaceName @ 0x1406F847C (_CmGetDeviceInterfaceName.c)
 *     _CmClassSubkeyCallback @ 0x1407509C0 (_CmClassSubkeyCallback.c)
 * Callees:
 *     _PnpIsValidGuidString @ 0x14059A534 (_PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateInstallerClassName(__int64 a1, const WCHAR *a2)
{
  return (unsigned __int8)PnpIsValidGuidString(a2) == 0 ? 0xC0000033 : 0;
}
