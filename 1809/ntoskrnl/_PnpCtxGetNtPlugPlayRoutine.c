/*
 * XREFs of _PnpCtxGetNtPlugPlayRoutine @ 0x1405C6884
 * Callers:
 *     _NtPlugPlayGetDeviceStatus @ 0x14059F640 (_NtPlugPlayGetDeviceStatus.c)
 *     _NtPlugPlayGetDeviceInterfaceEnabled @ 0x1405C682C (_NtPlugPlayGetDeviceInterfaceEnabled.c)
 *     _NtPlugPlayGetDeviceProperty @ 0x1406C8EEC (_NtPlugPlayGetDeviceProperty.c)
 *     _NtPlugPlayGetDeviceRelatedDevice @ 0x1406EAA64 (_NtPlugPlayGetDeviceRelatedDevice.c)
 *     _NtPlugPlayGetDeviceRelationsList @ 0x1409014C0 (_NtPlugPlayGetDeviceRelationsList.c)
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
