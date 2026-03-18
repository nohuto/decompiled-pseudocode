/*
 * XREFs of MiGetLeafPfnBuddy @ 0x14015E8B4
 * Callers:
 *     MiPfnsWorthTrying @ 0x14009A7B0 (MiPfnsWorthTrying.c)
 *     MiIdentifyPfn @ 0x1400A7EC0 (MiIdentifyPfn.c)
 *     MiSwapStackPage @ 0x14012D160 (MiSwapStackPage.c)
 *     MiCanStealKernelStack @ 0x14012D5AC (MiCanStealKernelStack.c)
 *     MiDoStackCopy @ 0x14015E7E0 (MiDoStackCopy.c)
 *     MiJumpStackTarget @ 0x14015E8F0 (MiJumpStackTarget.c)
 *     MiLogMdlRangeEvent @ 0x1402AA098 (MiLogMdlRangeEvent.c)
 *     MiMakeUnusedImageExtentsCold @ 0x1402C3C9C (MiMakeUnusedImageExtentsCold.c)
 *     MiFreeLargePages @ 0x1402C54CC (MiFreeLargePages.c)
 *     MiFreeRelocations @ 0x1406FD220 (MiFreeRelocations.c)
 *     MiGetNextDirectFixupProto @ 0x14085C27C (MiGetNextDirectFixupProto.c)
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
