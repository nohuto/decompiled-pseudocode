/*
 * XREFs of KeFlushProcessTb @ 0x140091B94
 * Callers:
 *     MiDeleteProcessShadow @ 0x1400686D0 (MiDeleteProcessShadow.c)
 *     MiDeleteFinalPageTables @ 0x1400918B8 (MiDeleteFinalPageTables.c)
 *     KiOutSwapProcesses @ 0x14010B450 (KiOutSwapProcesses.c)
 *     KeSwapDirectoryTableBase @ 0x140160EB0 (KeSwapDirectoryTableBase.c)
 * Callees:
 *     HvlFlushAddressSpaceTb @ 0x1402795DC (HvlFlushAddressSpaceTb.c)
 */

char __fastcall KeFlushProcessTb(__int64 a1)
{
  char result; // al

  result = HvlEnlightenments & 1;
  if ( (HvlEnlightenments & 1) != 0 )
    return HvlFlushAddressSpaceTb(a1 & 0xFFFFFFFFFFFFF000uLL, 0LL, 0LL);
  return result;
}
