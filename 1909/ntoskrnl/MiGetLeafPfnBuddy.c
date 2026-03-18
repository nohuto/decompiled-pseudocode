/*
 * XREFs of MiGetLeafPfnBuddy @ 0x14013D5BC
 * Callers:
 *     MiIdentifyPfn @ 0x140005560 (MiIdentifyPfn.c)
 *     MiPfnsWorthTrying @ 0x1400BA490 (MiPfnsWorthTrying.c)
 *     MiSwapStackPage @ 0x140134EA4 (MiSwapStackPage.c)
 *     MiCanStealKernelStack @ 0x1401352EC (MiCanStealKernelStack.c)
 *     MiLogMdlRangeEvent @ 0x1402C294C (MiLogMdlRangeEvent.c)
 *     MiDoStackCopy @ 0x1402C4100 (MiDoStackCopy.c)
 *     MiJumpStackTarget @ 0x1402C4220 (MiJumpStackTarget.c)
 *     MiMakeUnusedImageExtentsCold @ 0x1402DDDA4 (MiMakeUnusedImageExtentsCold.c)
 *     MiFreeLargePages @ 0x1402DF674 (MiFreeLargePages.c)
 *     MiFreeLargePagesFinish @ 0x1402DF820 (MiFreeLargePagesFinish.c)
 *     MiInitializeLargeLeafPfns @ 0x1402DFB50 (MiInitializeLargeLeafPfns.c)
 *     MiRemoveDpcGang @ 0x1402E8674 (MiRemoveDpcGang.c)
 *     MiFreeRelocations @ 0x14072BFC8 (MiFreeRelocations.c)
 *     MiGetNextDirectFixupProto @ 0x140898490 (MiGetNextDirectFixupProto.c)
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
