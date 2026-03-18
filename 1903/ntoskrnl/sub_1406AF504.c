/*
 * XREFs of sub_1406AF504 @ 0x1406AF504
 * Callers:
 *     WbDecryptWarbirdEncryptionSegmentBlockV0 @ 0x1405B3DE4 (WbDecryptWarbirdEncryptionSegmentBlockV0.c)
 *     sub_1405B4064 @ 0x1405B4064 (sub_1405B4064.c)
 *     WbFreeMemoryBlock @ 0x1406AF0E4 (WbFreeMemoryBlock.c)
 *     sub_140921658 @ 0x140921658 (sub_140921658.c)
 *     sub_140921844 @ 0x140921844 (sub_140921844.c)
 * Callees:
 *     MmUnlockPages @ 0x14006A390 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x1400FCDD0 (IoFreeMdl.c)
 */

void __fastcall sub_1406AF504(PMDL Mdl)
{
  if ( Mdl )
  {
    MmUnlockPages(Mdl);
    IoFreeMdl(Mdl);
  }
}
