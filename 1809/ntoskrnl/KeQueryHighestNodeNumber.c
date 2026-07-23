/*
 * XREFs of KeQueryHighestNodeNumber @ 0x1400E3CA0
 * Callers:
 *     ExpQueryNumaProcessorMap @ 0x14066BEF8 (ExpQueryNumaProcessorMap.c)
 *     IoGetDeviceNumaNode @ 0x1407614B0 (IoGetDeviceNumaNode.c)
 *     EtwpProcessorRundown @ 0x1408C0860 (EtwpProcessorRundown.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryHighestNodeNumber(void)
{
  return KeNumberNodes - 1;
}
