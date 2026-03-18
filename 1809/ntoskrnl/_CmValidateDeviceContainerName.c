/*
 * XREFs of _CmValidateDeviceContainerName @ 0x1406EA994
 * Callers:
 *     _PnpDispatchDeviceContainer @ 0x1406EA070 (_PnpDispatchDeviceContainer.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x1406EA5C8 (_CmGetDeviceContainerRegKeyPath.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x1406EA68C (_CmGetDeviceContainerIdFromBase.c)
 *     _CmContainerListGenericObjectCallback @ 0x14075D0A0 (_CmContainerListGenericObjectCallback.c)
 * Callees:
 *     wcscmp @ 0x1401976E0 (wcscmp.c)
 *     _PnpIsValidGuidString @ 0x14059A534 (_PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateDeviceContainerName(__int64 a1, const WCHAR *a2)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !PnpIsValidGuidString(a2) || !wcscmp(L"{00000000-0000-0000-0000-000000000000}", a2) )
    return (unsigned int)-1073741773;
  return v3;
}
