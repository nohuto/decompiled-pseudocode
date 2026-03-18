/*
 * XREFs of ?MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C007D510
 * Callers:
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0076850 (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C007ABE0 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C007D3CC (-IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C00B30B0 (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C00B33AC (-MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 * Callees:
 *     ?InsertToPenaltyBox@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C00116FC (-InsertToPenaltyBox@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00117A4 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 */

_QWORD *__fastcall VIDMM_DEVICE::MoveToPenaltyBoxBandNoLock(__int64 a1, int a2)
{
  _QWORD *result; // rax

  if ( (*(_DWORD *)(a1 + 52) & 7) != 0 )
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry((VIDMM_GLOBAL *)a1, (struct _LIST_ENTRY *)(a1 + 176));
  result = VIDMM_GLOBAL::InsertToPenaltyBox(*(_QWORD *)a1, a1, a2);
  *(_DWORD *)(a1 + 52) ^= (*(_DWORD *)(a1 + 52) ^ a2) & 7;
  return result;
}
