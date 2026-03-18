/*
 * XREFs of PipForDeviceNodeSubtree @ 0x140623BC8
 * Callers:
 *     PpProcessClearProblem @ 0x14019BA44 (PpProcessClearProblem.c)
 *     PnpGetSystemPdoList @ 0x140623AEC (PnpGetSystemPdoList.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x140721F78 (PiMarkDeviceTreeForReenumeration.c)
 *     PpDevCfgProcessDevices @ 0x140755A2C (PpDevCfgProcessDevices.c)
 *     PnpDiagRundownRegisterCallback @ 0x140860D30 (PnpDiagRundownRegisterCallback.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x14086C670 (PiProfileUpdateDeviceTreeWorker.c)
 *     PpResetProblemDevices @ 0x140874BA0 (PpResetProblemDevices.c)
 * Callees:
 *     PipForAllChildDeviceNodes @ 0x140623C50 (PipForAllChildDeviceNodes.c)
 *     PpDevNodeUnlockTree @ 0x14066FFEC (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x140670114 (PpDevNodeLockTree.c)
 */

__int64 __fastcall PipForDeviceNodeSubtree(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v6[0] = a2;
  v6[1] = a3;
  PpDevNodeLockTree(0LL);
  LODWORD(a1) = PipForAllChildDeviceNodes(a1, v4, v6);
  PpDevNodeUnlockTree(0LL);
  return (unsigned int)a1;
}
