/*
 * XREFs of MiGetLeafPfnBuddy @ 0x14015E9D4
 * Callers:
 *     MiPfnsWorthTrying @ 0x14009A6F0 (MiPfnsWorthTrying.c)
 *     MiIdentifyPfn @ 0x1400A7E20 (MiIdentifyPfn.c)
 *     MiSwapStackPage @ 0x14012D250 (MiSwapStackPage.c)
 *     MiCanStealKernelStack @ 0x14012D69C (MiCanStealKernelStack.c)
 *     MiDoStackCopy @ 0x14015E900 (MiDoStackCopy.c)
 *     MiJumpStackTarget @ 0x14015EA10 (MiJumpStackTarget.c)
 *     MiLogMdlRangeEvent @ 0x1402AA388 (MiLogMdlRangeEvent.c)
 *     MiMakeUnusedImageExtentsCold @ 0x1402C3F8C (MiMakeUnusedImageExtentsCold.c)
 *     MiFreeLargePages @ 0x1402C57BC (MiFreeLargePages.c)
 *     MiFreeRelocations @ 0x1406FE4A0 (MiFreeRelocations.c)
 *     MiGetNextDirectFixupProto @ 0x14085D4BC (MiGetNextDirectFixupProto.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetLeafPfnBuddy(_QWORD *a1)
{
  if ( (*a1 & 0xFFFFFFFFFFELL) != 0 )
    return 8 * (*a1 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL);
  else
    return 0LL;
}
