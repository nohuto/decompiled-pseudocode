/*
 * XREFs of PiDmGetObjectManagerForObjectType @ 0x1405BF1B4
 * Callers:
 *     PiDmEnumObjectsWithCallback @ 0x1405BD510 (PiDmEnumObjectsWithCallback.c)
 *     PiDmGetObject @ 0x1405BEF20 (PiDmGetObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1406FB944 (PiDmAddCacheReferenceForObject.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1407171D8 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmListAddList @ 0x14071DAD0 (PiDmListAddList.c)
 *     PiDmListAddObject @ 0x140725824 (PiDmListAddObject.c)
 *     PiDmGetObjectCount @ 0x14086336C (PiDmGetObjectCount.c)
 *     PiDmListRemoveList @ 0x1408633CC (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x140863538 (PiDmListRemoveObject.c)
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
