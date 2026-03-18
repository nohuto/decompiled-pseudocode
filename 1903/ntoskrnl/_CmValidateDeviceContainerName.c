/*
 * XREFs of _CmValidateDeviceContainerName @ 0x1406F14F4
 * Callers:
 *     _PnpDispatchDeviceContainer @ 0x1406F0EF0 (_PnpDispatchDeviceContainer.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x1406F1444 (_CmGetDeviceContainerRegKeyPath.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x14070B530 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmContainerListGenericObjectCallback @ 0x140784320 (_CmContainerListGenericObjectCallback.c)
 * Callees:
 *     wcscmp @ 0x1401A1F50 (wcscmp.c)
 *     _PnpIsValidGuidString @ 0x1405C10D8 (_PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateDeviceContainerName(__int64 a1, const WCHAR *a2)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !PnpIsValidGuidString(a2) || !wcscmp(L"{00000000-0000-0000-0000-000000000000}", a2) )
    return (unsigned int)-1073741773;
  return v3;
}
