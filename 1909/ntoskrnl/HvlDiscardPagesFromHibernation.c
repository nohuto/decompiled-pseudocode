/*
 * XREFs of HvlDiscardPagesFromHibernation @ 0x14028A8E8
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x14028A948 (HvlDiscardSecurePagesFromHibernation.c)
 *     PopSaveHiberContext @ 0x140599620 (PopSaveHiberContext.c)
 * Callees:
 *     PoSetHiberRange @ 0x14015FEC0 (PoSetHiberRange.c)
 */

void __fastcall HvlDiscardPagesFromHibernation(PVOID MemoryMap)
{
  if ( HvlpHibernateScratchPage )
    PoSetHiberRange(MemoryMap, 0x8000u, HvlpHibernateScratchPage, 0x1000uLL, 0x646C7648u);
  if ( HvlpFallbackScratchPage )
    PoSetHiberRange(MemoryMap, 0x8000u, HvlpFallbackScratchPage, 0x1000uLL, 0x646C7648u);
}
