/*
 * XREFs of sub_1406B1434 @ 0x1406B1434
 * Callers:
 *     WbDecryptWarbirdEncryptionSegmentBlockV0 @ 0x1405B41C0 (WbDecryptWarbirdEncryptionSegmentBlockV0.c)
 *     sub_1405B4440 @ 0x1405B4440 (sub_1405B4440.c)
 *     WbFreeMemoryBlock @ 0x1406B1014 (WbFreeMemoryBlock.c)
 *     sub_1409210B8 @ 0x1409210B8 (sub_1409210B8.c)
 *     sub_1409212A4 @ 0x1409212A4 (sub_1409212A4.c)
 * Callees:
 *     MmUnlockPages @ 0x14006A600 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x1400FEF60 (IoFreeMdl.c)
 */

void __fastcall sub_1406B1434(PMDL Mdl)
{
  if ( Mdl )
  {
    MmUnlockPages(Mdl);
    IoFreeMdl(Mdl);
  }
}
