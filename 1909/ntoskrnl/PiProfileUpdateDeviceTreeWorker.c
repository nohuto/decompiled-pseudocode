/*
 * XREFs of PiProfileUpdateDeviceTreeWorker @ 0x14086C670
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PipForDeviceNodeSubtree @ 0x140623BC8 (PipForDeviceNodeSubtree.c)
 *     PpDevNodeUnlockTree @ 0x14066FFEC (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x140670114 (PpDevNodeLockTree.c)
 */

void __fastcall PiProfileUpdateDeviceTreeWorker(PVOID P)
{
  PpDevNodeLockTree(1);
  PipForDeviceNodeSubtree((__int64)IopRootDeviceNode, (__int64)PiProfileUpdateDeviceTreeCallback, 0LL);
  PpDevNodeUnlockTree(1);
  ExFreePoolWithTag(P, 0);
}
