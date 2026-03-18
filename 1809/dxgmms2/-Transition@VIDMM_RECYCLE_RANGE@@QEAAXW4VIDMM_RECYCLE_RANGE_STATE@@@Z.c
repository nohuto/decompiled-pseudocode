/*
 * XREFs of ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C005C210
 * Callers:
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C0059684 (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C005A230 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ @ 0x1C005A9F8 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ.c)
 *     ?Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C005B200 (-Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@.c)
 *     ?Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C005B490 (-Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C005BBAC (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z @ 0x1C005C060 (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z.c)
 * Callees:
 *     McTemplateK0pqq @ 0x1C00267A4 (McTemplateK0pqq.c)
 */

char __fastcall VIDMM_RECYCLE_RANGE::Transition(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  _QWORD *v4; // rax
  __int64 v5; // rcx
  const GUID *v6; // r8
  char result; // al
  int v8; // [rsp+20h] [rbp-18h]
  int v9; // [rsp+28h] [rbp-10h]

  v2 = (int)a2;
  v4 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
  v4[3] = a1;
  v4[4] = *(int *)(a1 + 64);
  v4[5] = v2;
  WdLogEvent5_WdEvent(v4);
  result = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
  {
    v9 = v2;
    v8 = *(_DWORD *)(a1 + 64);
    result = McTemplateK0pqq(v5, &EventRecycleRangeTransition, v6, a1, v8, v9);
  }
  *(_DWORD *)(a1 + 64) = v2;
  return result;
}
