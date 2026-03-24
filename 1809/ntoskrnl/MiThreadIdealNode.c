/*
 * XREFs of MiThreadIdealNode @ 0x1402BB86C
 * Callers:
 *     MiGetLargePagesForSystemMapping @ 0x140851F70 (MiGetLargePagesForSystemMapping.c)
 * Callees:
 *     <none>
 */

__int64 MiThreadIdealNode()
{
  return (unsigned int)(*(_DWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 23576) >> byte_14043A049);
}
