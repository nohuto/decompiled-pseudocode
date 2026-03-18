/*
 * XREFs of PpResetProblemDevices @ 0x1408754A0
 * Callers:
 *     PpSystemHiveLimitCallback @ 0x140861CD0 (PpSystemHiveLimitCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     PpDevNodeUnlockTree @ 0x1406A2B0C (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406A2C34 (PpDevNodeLockTree.c)
 *     PipForDeviceNodeSubtree @ 0x1406A38F8 (PipForDeviceNodeSubtree.c)
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
