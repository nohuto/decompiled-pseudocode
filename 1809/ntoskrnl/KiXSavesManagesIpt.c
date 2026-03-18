/*
 * XREFs of KiXSavesManagesIpt @ 0x140294954
 * Callers:
 *     KiGetSavedIptState @ 0x140294540 (KiGetSavedIptState.c)
 *     KiQueryIptSupport @ 0x14057B500 (KiQueryIptSupport.c)
 * Callees:
 *     <none>
 */

bool KiXSavesManagesIpt()
{
  return (KeFeatureBits & 0x800000) != 0 && (MEMORY[0xFFFFF780000005F0] & 0x100) != 0;
}
