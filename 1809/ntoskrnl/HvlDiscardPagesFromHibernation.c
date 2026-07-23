/*
 * XREFs of HvlDiscardPagesFromHibernation @ 0x140276B2C
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x140276B8C (HvlDiscardSecurePagesFromHibernation.c)
 *     PopSaveHiberContext @ 0x14056B060 (PopSaveHiberContext.c)
 * Callees:
 *     PoSetHiberRange @ 0x1401448D0 (PoSetHiberRange.c)
 */

void __fastcall HvlDiscardPagesFromHibernation(PVOID MemoryMap)
{
  if ( HvlpHibernateScratchPage )
    PoSetHiberRange(MemoryMap, 0x8000u, HvlpHibernateScratchPage, 0x1000uLL, 0x646C7648u);
  if ( HvlpFallbackScratchPage )
    PoSetHiberRange(MemoryMap, 0x8000u, HvlpFallbackScratchPage, 0x1000uLL, 0x646C7648u);
}
