/*
 * XREFs of IoGetDeviceNumaNode @ 0x140787710
 * Callers:
 *     IopGetNumaNodeInformation @ 0x140858538 (IopGetNumaNodeInformation.c)
 * Callees:
 *     KeQueryHighestNodeNumber @ 0x140108980 (KeQueryHighestNodeNumber.c)
 */

NTSTATUS __stdcall IoGetDeviceNumaNode(PDEVICE_OBJECT Pdo, PUSHORT NodeNumber)
{
  PVOID DeviceNode; // rcx

  if ( !Pdo )
    return -1073741811;
  DeviceNode = Pdo->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (*((_DWORD *)DeviceNode + 99) & 0x20000) != 0 )
    return -1073741811;
  if ( *((_DWORD *)DeviceNode + 165) <= 0xFFFFFFFD )
  {
    *NodeNumber = *((_WORD *)DeviceNode + 330);
    return 0;
  }
  if ( !KeQueryHighestNodeNumber() )
  {
    *NodeNumber = 0;
    return 0;
  }
  return -1073741275;
}
