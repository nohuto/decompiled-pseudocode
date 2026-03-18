/*
 * XREFs of KeQueryHighestNodeNumber @ 0x1400E3C00
 * Callers:
 *     ExpQueryNumaProcessorMap @ 0x14066AD58 (ExpQueryNumaProcessorMap.c)
 *     IoGetDeviceNumaNode @ 0x1407602E0 (IoGetDeviceNumaNode.c)
 *     EtwpProcessorRundown @ 0x1408BF5C0 (EtwpProcessorRundown.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryHighestNodeNumber(void)
{
  return KeNumberNodes - 1;
}
