/*
 * XREFs of sub_140691564 @ 0x140691564
 * Callers:
 *     WbDecryptWarbirdEncryptionSegmentBlockV0 @ 0x1405845DC (WbDecryptWarbirdEncryptionSegmentBlockV0.c)
 *     sub_14058485C @ 0x14058485C (sub_14058485C.c)
 *     WbFreeMemoryBlock @ 0x140691044 (WbFreeMemoryBlock.c)
 *     sub_1408E56B8 @ 0x1408E56B8 (sub_1408E56B8.c)
 *     sub_1408E58A4 @ 0x1408E58A4 (sub_1408E58A4.c)
 * Callees:
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x1400E0B40 (IoFreeMdl.c)
 */

void __fastcall sub_140691564(PMDL Mdl)
{
  if ( Mdl )
  {
    MmUnlockPages(Mdl);
    IoFreeMdl(Mdl);
  }
}
