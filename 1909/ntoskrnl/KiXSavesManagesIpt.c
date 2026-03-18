/*
 * XREFs of KiXSavesManagesIpt @ 0x1402AB094
 * Callers:
 *     KiGetSavedIptState @ 0x1402AAC80 (KiGetSavedIptState.c)
 *     KiQueryIptSupport @ 0x1405AB400 (KiQueryIptSupport.c)
 * Callees:
 *     <none>
 */

bool KiXSavesManagesIpt()
{
  return (KeFeatureBits & 0x800000) != 0 && (MEMORY[0xFFFFF780000005F0] & 0x100) != 0;
}
