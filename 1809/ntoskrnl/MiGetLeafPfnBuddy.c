/*
 * XREFs of MiGetLeafPfnBuddy @ 0x14015E8D4
 * Callers:
 *     MiPfnsWorthTrying @ 0x14009A7B0 (MiPfnsWorthTrying.c)
 *     MiIdentifyPfn @ 0x1400A7EE0 (MiIdentifyPfn.c)
 *     MiSwapStackPage @ 0x14012D180 (MiSwapStackPage.c)
 *     MiCanStealKernelStack @ 0x14012D5CC (MiCanStealKernelStack.c)
 *     MiDoStackCopy @ 0x14015E800 (MiDoStackCopy.c)
 *     MiJumpStackTarget @ 0x14015E910 (MiJumpStackTarget.c)
 *     MiLogMdlRangeEvent @ 0x1402AA198 (MiLogMdlRangeEvent.c)
 *     MiMakeUnusedImageExtentsCold @ 0x1402C3D9C (MiMakeUnusedImageExtentsCold.c)
 *     MiFreeLargePages @ 0x1402C55CC (MiFreeLargePages.c)
 *     MiFreeRelocations @ 0x1406FD200 (MiFreeRelocations.c)
 *     MiGetNextDirectFixupProto @ 0x14085C25C (MiGetNextDirectFixupProto.c)
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
