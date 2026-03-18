/*
 * XREFs of ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C005A230
 * Callers:
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C005B918 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C005E47C (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 * Callees:
 *     McTemplateK0qpxp @ 0x1C0028290 (McTemplateK0qpxp.c)
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005A8B8 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C005C210 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005DD70 (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 */

void __fastcall VIDMM_RECYCLE_RANGE::DebouncedDecommit(
        VIDMM_RECYCLE_RANGE *this,
        enum VIDMM_RECYCLE_BLOCK_SHRINK_RESULT *a2)
{
  __int64 v2; // rsi
  __int64 v5; // rax
  PVOID *v6; // r14
  unsigned int *v7; // rcx
  __int64 v8; // rdx
  const GUID *v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  PVOID v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // ecx
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  ULONG_PTR v19; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((int *)this + 16);
  if ( (_DWORD)v2 == 5 )
  {
    v5 = *((_QWORD *)this + 9);
    v6 = (PVOID *)((char *)this + 32);
    v19 = *((_QWORD *)this + 5) - *((_QWORD *)this + 4);
    v7 = *(unsigned int **)(v5 + 32);
    v8 = *v7;
    if ( (unsigned int)(v8 - 3) <= 3 || (unsigned int)(v8 - 9) <= 1 )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v8);
      v17[7] = 0LL;
      v17[3] = 270LL;
      v17[4] = 52LL;
      v17[5] = 4LL;
      v17[6] = v2;
      WdLogEvent5_WdCriticalError(v17);
    }
    else
    {
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v6, &v19, 0x4000u);
    }
    VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange(
      *(VIDMM_RECYCLE_HEAP **)(*((_QWORD *)this + 9) + 32LL),
      this);
    if ( bTracingEnabled )
    {
      v10 = *((_QWORD *)this + 9);
      v11 = *(_QWORD *)(v10 + 32);
      v12 = (unsigned int)(*(_DWORD *)v11 - 3) <= 3 ? *(PVOID *)(v10 + 56) : *v6;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        McTemplateK0qpxp(
          *(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL),
          &EventDestroyProcessAllocationDetails,
          v9,
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL) + 8LL),
          (char)this,
          v19,
          (char)v12);
    }
    VIDMM_RECYCLE_RANGE::Transition(this, 0LL);
    v14 = *((unsigned int *)this + 21);
    if ( (_DWORD)v14 )
    {
      v15 = v14 - 1;
      if ( !v15 || (unsigned int)(v15 - 1) <= 1 )
        *((_DWORD *)this + 21) = 0;
    }
    else if ( g_IsInternalRelease )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v13);
      v18[5] = 0LL;
      v18[6] = 0LL;
      v18[7] = 0LL;
      v18[3] = 270LL;
      v18[4] = 9LL;
      WdLogEvent5_WdCriticalError(v18);
    }
    *(_DWORD *)a2 = VIDMM_RECYCLE_BLOCK::ShrinkOnTailRangeFree(*((_QWORD *)this + 9), this);
  }
  else
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v16[7] = 0LL;
    v16[3] = 270LL;
    v16[4] = 52LL;
    v16[5] = 5LL;
    v16[6] = v2;
    WdLogEvent5_WdCriticalError(v16);
  }
}
