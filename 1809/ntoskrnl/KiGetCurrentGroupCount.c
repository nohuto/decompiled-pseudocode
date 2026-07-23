/*
 * XREFs of KiGetCurrentGroupCount @ 0x14013BC94
 * Callers:
 *     KiUpdateProcessorCount @ 0x1405738EC (KiUpdateProcessorCount.c)
 * Callees:
 *     <none>
 */

__int64 KiGetCurrentGroupCount()
{
  return (unsigned __int16)word_14043D964;
}
