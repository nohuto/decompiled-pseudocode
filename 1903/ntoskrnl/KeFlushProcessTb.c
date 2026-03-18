/*
 * XREFs of KeFlushProcessTb @ 0x1400AD650
 * Callers:
 *     MmOutSwapProcess @ 0x140074470 (MmOutSwapProcess.c)
 *     MiDeleteFinalPageTables @ 0x1400AD0A0 (MiDeleteFinalPageTables.c)
 *     MiDeleteProcessShadow @ 0x1400AD220 (MiDeleteProcessShadow.c)
 *     KeSwapDirectoryTableBase @ 0x14019D44C (KeSwapDirectoryTableBase.c)
 * Callees:
 *     HvlFlushAddressSpaceTb @ 0x14028D924 (HvlFlushAddressSpaceTb.c)
 */

char __fastcall KeFlushProcessTb(__int64 a1)
{
  char result; // al

  result = HvlEnlightenments & 1;
  if ( (HvlEnlightenments & 1) != 0 )
    return HvlFlushAddressSpaceTb(a1 & 0xFFFFFFFFFFFFF000uLL, 0LL, 0LL);
  return result;
}
