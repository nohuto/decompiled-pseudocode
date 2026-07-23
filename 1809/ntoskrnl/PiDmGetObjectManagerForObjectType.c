/*
 * XREFs of PiDmGetObjectManagerForObjectType @ 0x140599CD0
 * Callers:
 *     PiDmEnumObjectsWithCallback @ 0x140597F5C (PiDmEnumObjectsWithCallback.c)
 *     PiDmGetObject @ 0x1405999C8 (PiDmGetObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1406F2D80 (PiDmAddCacheReferenceForObject.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1406FA9D0 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmListAddList @ 0x140701B30 (PiDmListAddList.c)
 *     PiDmListAddObject @ 0x140703B2C (PiDmListAddObject.c)
 *     PiDmGetObjectCount @ 0x14082A71C (PiDmGetObjectCount.c)
 *     PiDmListRemoveList @ 0x14082A77C (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x14082A8DC (PiDmListRemoveObject.c)
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
