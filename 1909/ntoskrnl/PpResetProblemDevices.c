/*
 * XREFs of PpResetProblemDevices @ 0x140874BA0
 * Callers:
 *     PpSystemHiveLimitCallback @ 0x1408613D0 (PpSystemHiveLimitCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     PipForDeviceNodeSubtree @ 0x140623BC8 (PipForDeviceNodeSubtree.c)
 *     PpDevNodeUnlockTree @ 0x14066FFEC (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x140670114 (PpDevNodeLockTree.c)
 */

void PpResetProblemDevices()
{
  PVOID v0; // rbx
  _DWORD v1[4]; // [rsp+20h] [rbp-28h] BYREF

  v0 = IopRootDeviceNode;
  v1[1] = 0;
  v1[2] = 0;
  v1[0] = 49;
  PpDevNodeLockTree(1);
  PipForDeviceNodeSubtree((__int64)v0, (__int64)PiResetProblemDevicesWorker, (__int64)v1);
  PpDevNodeUnlockTree(1);
}
