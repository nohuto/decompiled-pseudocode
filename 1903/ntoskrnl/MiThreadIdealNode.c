/*
 * XREFs of MiThreadIdealNode @ 0x1402D1DFC
 * Callers:
 *     MiGetLargePagesForSystemMapping @ 0x14088B9D8 (MiGetLargePagesForSystemMapping.c)
 * Callees:
 *     <none>
 */

__int64 MiThreadIdealNode()
{
  return *(unsigned int *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 23572);
}
