/*
 * XREFs of KiGetCurrentGroupCount @ 0x14013D788
 * Callers:
 *     KiUpdateProcessorCount @ 0x14059F558 (KiUpdateProcessorCount.c)
 * Callees:
 *     <none>
 */

__int64 KiGetCurrentGroupCount()
{
  return (unsigned __int16)word_14046840C;
}
