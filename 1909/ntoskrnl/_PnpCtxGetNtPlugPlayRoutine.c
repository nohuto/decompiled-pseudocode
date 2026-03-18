/*
 * XREFs of _PnpCtxGetNtPlugPlayRoutine @ 0x1405C26EC
 * Callers:
 *     _NtPlugPlayGetDeviceInterfaceEnabled @ 0x1405C2694 (_NtPlugPlayGetDeviceInterfaceEnabled.c)
 *     _NtPlugPlayGetDeviceStatus @ 0x140629E68 (_NtPlugPlayGetDeviceStatus.c)
 *     _NtPlugPlayGetDeviceProperty @ 0x1406EA6B0 (_NtPlugPlayGetDeviceProperty.c)
 *     _NtPlugPlayGetDeviceRelatedDevice @ 0x1406F32C8 (_NtPlugPlayGetDeviceRelatedDevice.c)
 *     _NtPlugPlayGetDeviceRelationsList @ 0x14093E058 (_NtPlugPlayGetDeviceRelationsList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCtxGetNtPlugPlayRoutine(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( a2 >= 6 )
    return (unsigned int)-1073741811;
  else
    *a3 = *(_QWORD *)(a1 + 8LL * a2 + 248);
  return v3;
}
