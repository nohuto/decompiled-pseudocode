/*
 * XREFs of KeQueryHighestNodeNumber @ 0x140108980
 * Callers:
 *     ExpQueryNumaProcessorMap @ 0x1406B4EC4 (ExpQueryNumaProcessorMap.c)
 *     IoGetDeviceNumaNode @ 0x140787710 (IoGetDeviceNumaNode.c)
 *     EtwpProcessorRundown @ 0x1408FC38C (EtwpProcessorRundown.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryHighestNodeNumber(void)
{
  return KeNumberNodes - 1;
}
