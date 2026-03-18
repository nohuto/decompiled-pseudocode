/*
 * XREFs of ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C0064720
 * Callers:
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C006515C (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C0068A58 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 * Callees:
 *     McTemplateK0qpxp @ 0x1C0028DCC (McTemplateK0qpxp.c)
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0064D98 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0065EF8 (-CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C00676FC (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0069818 (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 */

void __fastcall VIDMM_RECYCLE_RANGE::DebouncedDecommit(
        VIDMM_RECYCLE_RANGE *this,
        enum VIDMM_RECYCLE_BLOCK_SHRINK_RESULT *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  unsigned int *v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // rax
  const GUID *v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // ecx
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+8h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
  v4 = *((int *)this + 16);
  if ( (_DWORD)v4 == 5 )
  {
    v5 = *((_QWORD *)this + 9);
    RegionSize = *((_QWORD *)this + 5) - *((_QWORD *)this + 4);
    v6 = *(unsigned int **)(v5 + 32);
    v7 = *v6;
    if ( (unsigned int)(v7 - 3) > 3 && (unsigned int)(v7 - 9) > 1 )
    {
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 4, &RegionSize, 0x4000u);
    }
    else
    {
      v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, v7);
      v8[7] = 0LL;
      v8[3] = 270LL;
      v8[4] = 52LL;
      v8[5] = 4LL;
      v8[6] = v4;
      WdLogEvent5_WdCriticalError(v8);
    }
    VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange(
      *(VIDMM_RECYCLE_HEAP **)(*((_QWORD *)this + 9) + 32LL),
      this);
    if ( bTracingEnabled )
    {
      v10 = *((_QWORD *)this + 9);
      v11 = *(_QWORD *)(v10 + 32);
      v12 = (unsigned int)(*(_DWORD *)v11 - 3) <= 3 ? *(_QWORD *)(v10 + 56) : *((_QWORD *)this + 4);
      v13 = *(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL);
      v9 = *(const GUID **)(v13 + 8);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        McTemplateK0qpxp(v13, &EventDestroyProcessAllocationDetails, v9, (int)v9, (char)this, RegionSize, v12);
    }
    VIDMM_RECYCLE_RANGE::Transition(this, 0LL, v9);
    v15 = *((unsigned int *)this + 20);
    if ( (_DWORD)v15 )
    {
      v16 = v15 - 1;
      if ( !v16 || (unsigned int)(v16 - 1) <= 1 )
        *((_DWORD *)this + 20) = 0;
    }
    else if ( dword_1C004E360 && g_IsInternalRelease )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v14);
      v18[5] = 0LL;
      v18[6] = 0LL;
      v18[7] = 0LL;
      v18[3] = 270LL;
      v18[4] = 9LL;
      WdLogEvent5_WdCriticalError(v18);
    }
    VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(*((VIDMM_RECYCLE_BLOCK **)this + 9), this);
    *(_DWORD *)a2 = VIDMM_RECYCLE_BLOCK::ShrinkOnTailRangeFree(*((_QWORD *)this + 9), this);
  }
  else
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v17[7] = 0LL;
    v17[3] = 270LL;
    v17[4] = 52LL;
    v17[5] = 5LL;
    v17[6] = v4;
    WdLogEvent5_WdCriticalError(v17);
  }
}
