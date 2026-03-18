/*
 * XREFs of HvlDiscardPagesFromHibernation @ 0x14028AB88
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x14028ABE8 (HvlDiscardSecurePagesFromHibernation.c)
 *     PopSaveHiberContext @ 0x140599640 (PopSaveHiberContext.c)
 * Callees:
 *     PoSetHiberRange @ 0x14015F820 (PoSetHiberRange.c)
 */

void __fastcall HvlDiscardPagesFromHibernation(PVOID MemoryMap)
{
  if ( HvlpHibernateScratchPage )
    PoSetHiberRange(MemoryMap, 0x8000u, HvlpHibernateScratchPage, 0x1000uLL, 0x646C7648u);
  if ( HvlpFallbackScratchPage )
    PoSetHiberRange(MemoryMap, 0x8000u, HvlpFallbackScratchPage, 0x1000uLL, 0x646C7648u);
}
