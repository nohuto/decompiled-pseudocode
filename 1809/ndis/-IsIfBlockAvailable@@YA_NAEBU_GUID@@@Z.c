/*
 * XREFs of ?IsIfBlockAvailable@@YA_NAEBU_GUID@@@Z @ 0x1C0064A90
 * Callers:
 *     ndisWdfUpdateAddDeviceParameters @ 0x1C00F33CC (ndisWdfUpdateAddDeviceParameters.c)
 * Callees:
 *     ndisIfFindInterfaceByInterfaceGuid @ 0x1C001E404 (ndisIfFindInterfaceByInterfaceGuid.c)
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
    v2 = BYTE3(InterfaceByInterfaceGuid[87].Blink) == 0;
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v3);
  return v2;
}
