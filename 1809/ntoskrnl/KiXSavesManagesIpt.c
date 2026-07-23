/*
 * XREFs of KiXSavesManagesIpt @ 0x140294C44
 * Callers:
 *     KiGetSavedIptState @ 0x140294830 (KiGetSavedIptState.c)
 *     KiQueryIptSupport @ 0x14057C500 (KiQueryIptSupport.c)
 * Callees:
 *     <none>
 */

bool KiXSavesManagesIpt()
{
  return (KeFeatureBits & 0x800000) != 0 && (MEMORY[0xFFFFF780000005F0] & 0x100) != 0;
}
