/*
 * XREFs of ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C005BD7C
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C005BC40 (-Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0018C04 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0018C28 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q @ 0x1C0019440 (McTemplateK0q.c)
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C0059D84 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C005A33C (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005AFAC (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C005B6B8 (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C005BFB8 (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005C4E0 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005CDA8 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005D13C (-RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@.c)
 *     ?LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C005D294 (-LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005DD70 (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP::Allocate(
        VIDMM_RECYCLE_HEAP_MGR **this,
        unsigned __int64 a2,
        const GUID *a3,
        struct VIDMM_RECYCLE_MULTIRANGE **a4,
        void **a5,
        void **a6,
        unsigned __int8 *a7,
        unsigned __int8 a8)
{
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct VIDMM_RECYCLE_MULTIRANGE *BlockAndRange; // rbx
  __int64 v19; // rdx
  unsigned __int8 *v20; // r8
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbp
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  int v28; // edx
  void *v29; // rcx
  struct VIDMM_RECYCLE_RANGE *NextRange; // rcx
  char v31; // r8
  struct VIDMM_RECYCLE_RANGE *v32; // r9
  unsigned __int8 v33; // r8
  __int64 v34; // rcx
  const GUID *v35; // r8
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rdx
  void *v40; // rcx
  int v41; // [rsp+20h] [rbp-38h] BYREF
  __int64 v42; // [rsp+28h] [rbp-30h]
  char v43; // [rsp+30h] [rbp-28h]

  v41 = -1;
  v42 = 0LL;
  v11 = (unsigned int)a3;
  if ( (qword_1C004D010 & 2) != 0 )
  {
    v43 = 1;
    v41 = 8004;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 8004);
  }
  else
  {
    v43 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  v14 = (_QWORD *)WdLogNewEntry5_WdEvent(v13, v12);
  v15 = v11;
  v14[3] = this;
  v14[4] = a2;
  v14[5] = v11;
  WdLogEvent5_WdEvent(v14);
  BlockAndRange = VIDMM_RECYCLE_HEAP::LookupSufficientRange((VIDMM_RECYCLE_HEAP *)this, a2, v11, a8);
  if ( BlockAndRange
    || (v37 = (_QWORD *)WdLogNewEntry5_WdEvent(v17, v16),
        v37[3] = this,
        v37[4] = a2,
        v37[5] = v15,
        WdLogEvent5_WdEvent(v37),
        (BlockAndRange = VIDMM_RECYCLE_HEAP::CreateBlockAndRange(this)) != 0LL) )
  {
    v19 = *((_QWORD *)BlockAndRange + 6);
    if ( *((_QWORD *)BlockAndRange + 5) - v19 > a2 )
      VIDMM_RECYCLE_MULTIRANGE::SplitAt(BlockAndRange, a2 + v19 - *((_QWORD *)BlockAndRange + 4));
    VIDMM_RECYCLE_HEAP::RemoveOverlappingMultirangesFromSearch((VIDMM_RECYCLE_HEAP *)this, BlockAndRange);
    VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(this, *((unsigned int *)BlockAndRange + 22), BlockAndRange);
    v21 = VIDMM_RECYCLE_MULTIRANGE::Commit(BlockAndRange, a8, v20);
    v24 = v21;
    if ( v21 < 0 )
    {
      v38 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22);
      v38[3] = BlockAndRange;
      v38[4] = a2;
      v38[5] = v15;
      v38[6] = v24;
      v38[7] = **((_QWORD **)this[1] + 1);
      WdLogEvent5_WdWarning(v38);
      if ( !VIDMM_RECYCLE_HEAP::IntegrateMultirangeIntoTrees((VIDMM_RECYCLE_HEAP *)this, BlockAndRange) )
        VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(this[1], (struct _SLIST_ENTRY *)BlockAndRange);
    }
    else
    {
      v25 = *((_QWORD *)BlockAndRange + 9);
      v26 = 0LL;
      v27 = *(_QWORD *)(v25 + 120);
      if ( v27 != *(_QWORD *)(v25 + 72) + 72LL )
        v26 = v27 - 120;
      if ( v26 && !*(_DWORD *)(v26 + 64) )
        VIDMM_RECYCLE_BLOCK::ShrinkOnTailRangeFree(*((_QWORD *)BlockAndRange + 10), v26);
      *a4 = BlockAndRange;
      v28 = **(_DWORD **)(*((_QWORD *)BlockAndRange + 10) + 32LL);
      if ( (unsigned int)(v28 - 3) > 3 || (unsigned int)(v28 - 5) <= 1 )
        v29 = (void *)*((_QWORD *)BlockAndRange + 6);
      else
        v29 = (void *)(*((_QWORD *)BlockAndRange + 20) + *((_QWORD *)BlockAndRange + 21));
      *a5 = v29;
      if ( a6 )
      {
        v39 = *((_QWORD *)BlockAndRange + 10);
        if ( (unsigned int)(**(_DWORD **)(v39 + 32) - 9) > 1 )
          v40 = 0LL;
        else
          v40 = (void *)(*((_QWORD *)BlockAndRange + 6) + *(_QWORD *)(v39 + 120) - *(_QWORD *)(v39 + 40));
        *a6 = v40;
      }
      NextRange = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8);
      v31 = 1;
      v32 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 9);
      while ( 1 )
      {
        v33 = *((_DWORD *)NextRange + 21) <= 1u ? v31 : 0;
        if ( NextRange == v32 )
          break;
        NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
      }
      *a7 = v33;
      *(_QWORD *)(*((_QWORD *)this[1] + 1) + 128LL) += *((_QWORD *)BlockAndRange + 5) - *((_QWORD *)BlockAndRange + 4);
    }
  }
  else
  {
    LODWORD(v24) = -1073741801;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
  if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v34, &EventProfilerExit, v35, v41);
  return (unsigned int)v24;
}
