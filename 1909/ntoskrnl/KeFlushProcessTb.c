/*
 * XREFs of KeFlushProcessTb @ 0x14008EF60
 * Callers:
 *     MmOutSwapProcess @ 0x1400746E0 (MmOutSwapProcess.c)
 *     MiDeleteFinalPageTables @ 0x14008E9B4 (MiDeleteFinalPageTables.c)
 *     MiDeleteProcessShadow @ 0x14008EB30 (MiDeleteProcessShadow.c)
 *     KeSwapDirectoryTableBase @ 0x14019DBCC (KeSwapDirectoryTableBase.c)
 * Callees:
 *     HvlFlushAddressSpaceTb @ 0x14028D684 (HvlFlushAddressSpaceTb.c)
 */

char __fastcall KeFlushProcessTb(__int64 a1)
{
  char result; // al

  result = HvlEnlightenments & 1;
  if ( (HvlEnlightenments & 1) != 0 )
    return HvlFlushAddressSpaceTb(a1 & 0xFFFFFFFFFFFFF000uLL, 0LL, 0LL);
  return result;
}
