/*
 * XREFs of IoGetDeviceNumaNode @ 0x1407614B0
 * Callers:
 *     IopGetNumaNodeInformation @ 0x14081F79C (IopGetNumaNodeInformation.c)
 * Callees:
 *     KeQueryHighestNodeNumber @ 0x1400E3CA0 (KeQueryHighestNodeNumber.c)
 */

NTSTATUS __stdcall IoGetDeviceNumaNode(PDEVICE_OBJECT Pdo, PUSHORT NodeNumber)
{
  _DWORD *DeviceNode; // rcx
  unsigned int v4; // eax

  if ( !Pdo )
    return -1073741811;
  DeviceNode = Pdo->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
    return -1073741811;
  v4 = DeviceNode[165];
  if ( v4 <= 0xFFFFFFFD )
  {
    *NodeNumber = v4;
    return 0;
  }
  if ( !KeQueryHighestNodeNumber() )
  {
    *NodeNumber = 0;
    return 0;
  }
  return -1073741275;
}
