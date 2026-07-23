/*
 * XREFs of sub_140692704 @ 0x140692704
 * Callers:
 *     WbDecryptWarbirdEncryptionSegmentBlockV0 @ 0x1405855DC (WbDecryptWarbirdEncryptionSegmentBlockV0.c)
 *     sub_14058585C @ 0x14058585C (sub_14058585C.c)
 *     WbFreeMemoryBlock @ 0x1406921E4 (WbFreeMemoryBlock.c)
 *     sub_1408E6958 @ 0x1408E6958 (sub_1408E6958.c)
 *     sub_1408E6B44 @ 0x1408E6B44 (sub_1408E6B44.c)
 * Callees:
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x1400E0BE0 (IoFreeMdl.c)
 */

void __fastcall sub_140692704(PMDL Mdl)
{
  if ( Mdl )
  {
    MmUnlockPages(Mdl);
    IoFreeMdl(Mdl);
  }
}
