/*
 * XREFs of ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C00676FC
 * Callers:
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C0064720 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z @ 0x1C006600C (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z.c)
 *     ?Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C00667FC (-Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@.c)
 *     ?Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C0066A90 (-Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C00670CC (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z @ 0x1C0067568 (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z.c)
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z @ 0x1C0082374 (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z.c)
 * Callees:
 *     McTemplateK0pqq @ 0x1C0026244 (McTemplateK0pqq.c)
 */

char __fastcall VIDMM_RECYCLE_RANGE::Transition(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  _QWORD *v4; // rax
  __int64 v5; // rcx
  const GUID *v6; // r8
  __int64 v7; // rax
  __int64 v8; // rsi
  _QWORD *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  int v13; // [rsp+20h] [rbp-18h]
  int v14; // [rsp+28h] [rbp-10h]

  v2 = (int)a2;
  v4 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
  v4[3] = a1;
  v4[4] = *(int *)(a1 + 64);
  v4[5] = v2;
  WdLogEvent5_WdEvent(v4);
  LOBYTE(v7) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
  {
    v14 = v2;
    v13 = *(_DWORD *)(a1 + 64);
    LOBYTE(v7) = McTemplateK0pqq(v5, &EventRecycleRangeTransition, v6, a1, v13, v14);
  }
  v8 = *(_QWORD *)(a1 + 72);
  v9 = *(_QWORD **)(v8 + 136);
  if ( v9 )
  {
    v10 = *v9 + 144LL * v9[1];
    *(_DWORD *)v10 = 2;
    *(_QWORD *)(v10 + 8) = a1;
    RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v10 + 16), 0LL);
    ++*(_QWORD *)(*(_QWORD *)(v8 + 136) + 8LL);
    v11 = *(_QWORD *)(v8 + 136);
    v7 = *(_QWORD *)(v11 + 48);
    if ( *(_QWORD *)(v11 + 8) == v7 )
    {
      *(_QWORD *)(v11 + 8) = 0LL;
      v7 = *(_QWORD *)(v8 + 136);
      *(_BYTE *)(v7 + 16) = 1;
    }
  }
  *(_DWORD *)(a1 + 64) = v2;
  return v7;
}
