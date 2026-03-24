/*
 * XREFs of KeQueryHighestNodeNumber @ 0x1400E3C20
 * Callers:
 *     ExpQueryNumaProcessorMap @ 0x14066AD38 (ExpQueryNumaProcessorMap.c)
 *     IoGetDeviceNumaNode @ 0x1407602C0 (IoGetDeviceNumaNode.c)
 *     EtwpProcessorRundown @ 0x1408BF5A0 (EtwpProcessorRundown.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryHighestNodeNumber(void)
{
  return KeNumberNodes - 1;
}
