/*
 * XREFs of PopCheckSkipTick @ 0x14078CE3C
 * Callers:
 *     PopNewProcessorCallback @ 0x1408A1A10 (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140005340 (KeQueryActiveProcessorCountEx.c)
 */

bool PopCheckSkipTick()
{
  return PopApicMode == 2
      || (HvlEnlightenments & 0x4000) != 0 && (HvlpFlags & 2) == 0
      || PopApicMode == 3 && KeQueryActiveProcessorCountEx(0xFFFFu) <= 0x20;
}
