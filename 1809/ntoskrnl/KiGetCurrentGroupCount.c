/*
 * XREFs of KiGetCurrentGroupCount @ 0x14013BB74
 * Callers:
 *     KiUpdateProcessorCount @ 0x1405728EC (KiUpdateProcessorCount.c)
 * Callees:
 *     <none>
 */

__int64 KiGetCurrentGroupCount()
{
  return (unsigned __int16)word_14043C8A4;
}
