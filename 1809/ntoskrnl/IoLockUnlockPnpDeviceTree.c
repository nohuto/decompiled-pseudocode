/*
 * XREFs of IoLockUnlockPnpDeviceTree @ 0x14082581C
 * Callers:
 *     PopFxBuildDripsBlockingDeviceList @ 0x1402D77C0 (PopFxBuildDripsBlockingDeviceList.c)
 * Callees:
 *     PpDevNodeUnlockTree @ 0x14059CEB4 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14059CF10 (PpDevNodeLockTree.c)
 */

void __fastcall IoLockUnlockPnpDeviceTree(char a1)
{
  if ( a1 )
    PpDevNodeLockTree(0);
  else
    PpDevNodeUnlockTree(0);
}
