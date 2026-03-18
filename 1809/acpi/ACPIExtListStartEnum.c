/*
 * XREFs of ACPIExtListStartEnum @ 0x1C001A96C
 * Callers:
 *     ACPIDockFindCorrespondingDock @ 0x1C00170BC (ACPIDockFindCorrespondingDock.c)
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C0017EA8 (EnableDisableDeviceTreeRegionSpace.c)
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x1C001A318 (ACPIInternalFindDeviceExtensionNoLock.c)
 *     ACPIDetectDockDevices @ 0x1C001A3C0 (ACPIDetectDockDevices.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C001A524 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C001A6A0 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPIDetectDuplicateHID @ 0x1C001A9C8 (ACPIDetectDuplicateHID.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C002D8F4 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIInitDeleteChildDeviceList @ 0x1C002E01C (ACPIInitDeleteChildDeviceList.c)
 *     ACPIDetectEjectDevices @ 0x1C004D880 (ACPIDetectEjectDevices.c)
 * Callees:
 *     <none>
 */

char *__fastcall ACPIExtListStartEnum(__int64 a1)
{
  _QWORD **v2; // r9
  _QWORD **v3; // r8
  char *result; // rax

  if ( *(_DWORD *)(a1 + 48) )
    *(_BYTE *)(a1 + 24) = KeAcquireSpinLockRaiseToDpc(*(PKSPIN_LOCK *)(a1 + 16));
  v2 = *(_QWORD ***)a1;
  v3 = **(_QWORD ****)a1;
  result = (char *)v3 - *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 32) = result;
  if ( v3 == v2 )
    result = 0LL;
  *(_QWORD *)(a1 + 8) = **v2;
  return result;
}
