/*
 * XREFs of sub_140691544 @ 0x140691544
 * Callers:
 *     WbDecryptWarbirdEncryptionSegmentBlockV0 @ 0x1405845DC (WbDecryptWarbirdEncryptionSegmentBlockV0.c)
 *     sub_14058485C @ 0x14058485C (sub_14058485C.c)
 *     WbFreeMemoryBlock @ 0x140691024 (WbFreeMemoryBlock.c)
 *     sub_1408E5698 @ 0x1408E5698 (sub_1408E5698.c)
 *     sub_1408E5884 @ 0x1408E5884 (sub_1408E5884.c)
 * Callees:
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x1400E0B60 (IoFreeMdl.c)
 */

void __fastcall sub_140691544(PMDL Mdl)
{
  if ( Mdl )
  {
    MmUnlockPages(Mdl);
    IoFreeMdl(Mdl);
  }
}
