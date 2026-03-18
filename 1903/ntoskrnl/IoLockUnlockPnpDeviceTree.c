/*
 * XREFs of IoLockUnlockPnpDeviceTree @ 0x14085EA6C
 * Callers:
 *     PopFxBuildDripsBlockingDeviceList @ 0x1402F22EC (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x1408A5A74 (PopFxDestroyDripsBlockingDeviceList.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x1408B8DC8 (PopDirectedDripsUmMarkTestDevices.c)
 * Callees:
 *     PpDevNodeUnlockTree @ 0x1406A2B0C (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406A2C34 (PpDevNodeLockTree.c)
 */

void __fastcall IoLockUnlockPnpDeviceTree(char a1)
{
  if ( a1 )
    PpDevNodeLockTree(0);
  else
    PpDevNodeUnlockTree(0);
}
