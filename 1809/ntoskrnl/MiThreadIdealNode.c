/*
 * XREFs of MiThreadIdealNode @ 0x1402BBA5C
 * Callers:
 *     MiGetLargePagesForSystemMapping @ 0x1408531D0 (MiGetLargePagesForSystemMapping.c)
 * Callees:
 *     <none>
 */

__int64 MiThreadIdealNode()
{
  return (unsigned int)(*(_DWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 23576) >> byte_14043B109);
}
