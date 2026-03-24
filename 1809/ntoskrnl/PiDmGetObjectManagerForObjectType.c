/*
 * XREFs of PiDmGetObjectManagerForObjectType @ 0x140598CD0
 * Callers:
 *     PiDmEnumObjectsWithCallback @ 0x140596F5C (PiDmEnumObjectsWithCallback.c)
 *     PiDmGetObject @ 0x1405989C8 (PiDmGetObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1406F1AE0 (PiDmAddCacheReferenceForObject.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1406F9730 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmListAddList @ 0x140700890 (PiDmListAddList.c)
 *     PiDmListAddObject @ 0x14070288C (PiDmListAddObject.c)
 *     PiDmGetObjectCount @ 0x14082951C (PiDmGetObjectCount.c)
 *     PiDmListRemoveList @ 0x14082957C (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x1408296DC (PiDmListRemoveObject.c)
 * Callees:
 *     <none>
 */

void *__fastcall PiDmGetObjectManagerForObjectType(int a1)
{
  __int64 v1; // rdx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v6; // ecx
  int v7; // ecx

  v1 = 0LL;
  v2 = a1 - 1;
  if ( !v2 )
    return &PiDmDeviceManager;
  v3 = v2 - 1;
  if ( !v3 )
    return &PiDmDeviceInstallerClassManager;
  v4 = v3 - 1;
  if ( !v4 )
    return &PiDmDeviceInterfaceManager;
  v6 = v4 - 1;
  if ( !v6 )
    return &PiDmDeviceInterfaceClassManager;
  v7 = v6 - 1;
  if ( !v7 )
    return &PiDmDeviceContainerManager;
  if ( v7 == 1 )
    return &PiDmDevicePanelManager;
  return (void *)v1;
}
