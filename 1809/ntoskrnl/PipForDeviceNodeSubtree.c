/*
 * XREFs of PipForDeviceNodeSubtree @ 0x140585750
 * Callers:
 *     PpProcessClearProblem @ 0x14016CF9C (PpProcessClearProblem.c)
 *     PnpGetSystemPdoList @ 0x140585678 (PnpGetSystemPdoList.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x1406FC480 (PiMarkDeviceTreeForReenumeration.c)
 *     PpDevCfgProcessDevices @ 0x14073A4AC (PpDevCfgProcessDevices.c)
 *     PnpDiagRundownRegisterCallback @ 0x1408271D0 (PnpDiagRundownRegisterCallback.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x140832580 (PiProfileUpdateDeviceTreeWorker.c)
 *     PpResetProblemDevices @ 0x14083A72C (PpResetProblemDevices.c)
 * Callees:
 *     PipForAllChildDeviceNodes @ 0x1405857D8 (PipForAllChildDeviceNodes.c)
 *     PpDevNodeUnlockTree @ 0x14059BEB4 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14059BF10 (PpDevNodeLockTree.c)
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
