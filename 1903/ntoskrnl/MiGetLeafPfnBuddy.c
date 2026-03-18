/*
 * XREFs of MiGetLeafPfnBuddy @ 0x14013D07C
 * Callers:
 *     MiIdentifyPfn @ 0x1400054D0 (MiIdentifyPfn.c)
 *     MiPfnsWorthTrying @ 0x1400DA610 (MiPfnsWorthTrying.c)
 *     MiSwapStackPage @ 0x1401345A4 (MiSwapStackPage.c)
 *     MiCanStealKernelStack @ 0x1401349EC (MiCanStealKernelStack.c)
 *     MiLogMdlRangeEvent @ 0x1402C2BEC (MiLogMdlRangeEvent.c)
 *     MiDoStackCopy @ 0x1402C43A0 (MiDoStackCopy.c)
 *     MiJumpStackTarget @ 0x1402C44C0 (MiJumpStackTarget.c)
 *     MiMakeUnusedImageExtentsCold @ 0x1402DE044 (MiMakeUnusedImageExtentsCold.c)
 *     MiFreeLargePages @ 0x1402DF914 (MiFreeLargePages.c)
 *     MiFreeLargePagesFinish @ 0x1402DFAC0 (MiFreeLargePagesFinish.c)
 *     MiInitializeLargeLeafPfns @ 0x1402DFDF0 (MiInitializeLargeLeafPfns.c)
 *     MiRemoveDpcGang @ 0x1402E8914 (MiRemoveDpcGang.c)
 *     MiFreeRelocations @ 0x14072A130 (MiFreeRelocations.c)
 *     MiGetNextDirectFixupProto @ 0x140898C70 (MiGetNextDirectFixupProto.c)
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
