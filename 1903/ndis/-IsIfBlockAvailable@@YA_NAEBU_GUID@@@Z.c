/*
 * XREFs of ?IsIfBlockAvailable@@YA_NAEBU_GUID@@@Z @ 0x1C009CBE4
 * Callers:
 *     ?ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z @ 0x1C011840C (-ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z.c)
 * Callees:
 *     ndisIfFindInterfaceByInterfaceGuid @ 0x1C003EABC (ndisIfFindInterfaceByInterfaceGuid.c)
 */

bool __fastcall IsIfBlockAvailable(struct _GUID *a1)
{
  bool v2; // di
  KIRQL v3; // si
  struct _LIST_ENTRY *InterfaceByInterfaceGuid; // rdx

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
  InterfaceByInterfaceGuid = ndisIfFindInterfaceByInterfaceGuid(a1);
  if ( InterfaceByInterfaceGuid )
    v2 = BYTE3(InterfaceByInterfaceGuid[87].Flink) == 0;
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v3);
  return v2;
}
