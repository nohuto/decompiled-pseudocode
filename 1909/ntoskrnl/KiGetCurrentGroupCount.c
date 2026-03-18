/*
 * XREFs of KiGetCurrentGroupCount @ 0x14013DCC8
 * Callers:
 *     KiUpdateProcessorCount @ 0x14059F538 (KiUpdateProcessorCount.c)
 * Callees:
 *     <none>
 */

__int64 KiGetCurrentGroupCount()
{
  return (unsigned __int16)word_14046814C;
}
