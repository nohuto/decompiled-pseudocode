/*
 * XREFs of ACPIExtListTestElement @ 0x1C0011DE0
 * Callers:
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C0005C90 (EnableDisableDeviceTreeRegionSpace.c)
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x1C0011490 (ACPIInternalFindDeviceExtensionNoLock.c)
 *     ACPIDetectDockDevices @ 0x1C0011CE0 (ACPIDetectDockDevices.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C002B2CC (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIInitDeleteChildDeviceList @ 0x1C002BDD0 (ACPIInitDeleteChildDeviceList.c)
 *     ACPIDockFindCorrespondingDock @ 0x1C002BE40 (ACPIDockFindCorrespondingDock.c)
 *     ACPIDetectEjectDevices @ 0x1C004F140 (ACPIDetectEjectDevices.c)
 * Callees:
 *     <none>
 */

char __fastcall ACPIExtListTestElement(__int64 a1, char a2)
{
  __int64 v2; // r9

  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 + *(_QWORD *)(a1 + 40) == *(_QWORD *)a1 || !a2 )
  {
    if ( *(_DWORD *)(a1 + 48) )
      KeReleaseSpinLock(*(PKSPIN_LOCK *)(a1 + 16), *(_BYTE *)(a1 + 24));
    return 0;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 48) == 1 )
    {
      if ( *(_DWORD *)(v2 + 684) )
        _InterlockedIncrement((volatile signed __int32 *)(v2 + 684));
      KeReleaseSpinLock(*(PKSPIN_LOCK *)(a1 + 16), *(_BYTE *)(a1 + 24));
    }
    return 1;
  }
}
