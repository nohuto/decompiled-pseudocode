/*
 * XREFs of KeQueryHighestNodeNumber @ 0x140118A40
 * Callers:
 *     ExpQueryNumaProcessorMap @ 0x1406C06C0 (ExpQueryNumaProcessorMap.c)
 *     IoGetDeviceNumaNode @ 0x140789B70 (IoGetDeviceNumaNode.c)
 *     EtwpProcessorRundown @ 0x1408FBD6C (EtwpProcessorRundown.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryHighestNodeNumber(void)
{
  return KeNumberNodes - 1;
}
