/*
 * XREFs of HvlDiscardPagesFromHibernation @ 0x14027693C
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x14027699C (HvlDiscardSecurePagesFromHibernation.c)
 *     PopSaveHiberContext @ 0x14056A060 (PopSaveHiberContext.c)
 * Callees:
 *     PoSetHiberRange @ 0x1401447D0 (PoSetHiberRange.c)
 */

void __fastcall HvlDiscardPagesFromHibernation(PVOID MemoryMap)
{
  if ( HvlpHibernateScratchPage )
    PoSetHiberRange(MemoryMap, 0x8000u, HvlpHibernateScratchPage, 0x1000uLL, 0x646C7648u);
  if ( HvlpFallbackScratchPage )
    PoSetHiberRange(MemoryMap, 0x8000u, HvlpFallbackScratchPage, 0x1000uLL, 0x646C7648u);
}
