/*
 * XREFs of IoLockUnlockPnpDeviceTree @ 0x14082461C
 * Callers:
 *     PopFxBuildDripsBlockingDeviceList @ 0x1402D75D0 (PopFxBuildDripsBlockingDeviceList.c)
 * Callees:
 *     PpDevNodeUnlockTree @ 0x14059BEB4 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14059BF10 (PpDevNodeLockTree.c)
 */

void __fastcall IoLockUnlockPnpDeviceTree(char a1)
{
  if ( a1 )
    PpDevNodeLockTree(0);
  else
    PpDevNodeUnlockTree(0);
}
