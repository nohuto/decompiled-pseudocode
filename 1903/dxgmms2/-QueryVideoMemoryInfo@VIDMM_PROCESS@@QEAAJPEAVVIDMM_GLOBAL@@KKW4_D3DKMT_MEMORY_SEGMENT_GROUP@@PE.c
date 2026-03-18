/*
 * XREFs of ?QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K22222@Z @ 0x1C00B59D4
 * Callers:
 *     ?QueryProcessSegmentGroupStatistics@VIDMM_GLOBAL@@QEAAJW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_GROUP_INFORMATION@@@Z @ 0x1C0027024 (-QueryProcessSegmentGroupStatistics@VIDMM_GLOBAL@@QEAAJW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAVVIDMM.c)
 *     ?QueryVideoMemoryInfo@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K222@Z @ 0x1C00AEBA4 (-QueryVideoMemoryInfo@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003790 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00037EC (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C007F0B8 (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 *     ?GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_BUDGET_VISIBILITY_STATE@@@Z @ 0x1C0081720 (-GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY.c)
 */

__int64 __fastcall VIDMM_PROCESS::QueryVideoMemoryInfo(
        VIDMM_PROCESS *this,
        struct VIDMM_GLOBAL *a2,
        unsigned int a3,
        unsigned int a4,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8,
        unsigned __int64 *a9,
        unsigned __int64 *a10,
        unsigned __int64 *a11)
{
  __int64 v11; // rdi
  __int64 v15; // rsi
  struct VIDMM_SEGMENT_GROUP_STATE *v16; // rax
  struct VIDMM_SEGMENT_GROUP_STATE *v17; // rax
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v18; // r8d
  __int64 v19; // rbx
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rax
  unsigned __int64 *v21; // rax
  __int64 v22; // r8
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  int v26; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v27[48]; // [rsp+28h] [rbp-30h] BYREF

  v11 = a5;
  if ( (unsigned int)a5 <= D3DKMT_MEMORY_SEGMENT_GROUP_NON_LOCAL )
  {
    v15 = *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * a3);
    if ( v15 )
    {
      v18 = a5;
      v19 = *(_QWORD *)(v15 + 48) + 296LL * a4;
      *a6 = *(_QWORD *)(v19 + 8LL * (int)a5 + 24);
      SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(
                            *(VIDMM_GLOBAL **)v15,
                            a4,
                            v18,
                            *((struct VIDMM_PARTITION **)this + 33));
      *a8 = *((_QWORD *)SegmentGroupState + 4);
      *a9 = *(_QWORD *)(v19 + 8 * v11 + 56);
      v21 = a10;
      if ( a10 )
      {
        v22 = 5LL;
        v23 = v19 - (_QWORD)a10;
        do
        {
          if ( (_DWORD)v11 )
            v24 = 0LL;
          else
            v24 = *(unsigned __int64 *)((char *)v21 + v23 + 256);
          *v21++ = v24;
          --v22;
        }
        while ( v22 );
        *a11 = *(_QWORD *)(v19 + 8 * v11 + 200);
      }
      DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v27, (struct DXGPUSHLOCK *const)(v15 + 360));
      *a7 = *(_QWORD *)(v19 + 8 * v11 + 136);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v27);
      return 0LL;
    }
    if ( !a10 )
    {
      VIDMM_GLOBAL::GetProcessBudgetBandAndVisibility(
        this,
        *((struct DXGPROCESS **)this + 4),
        (enum VIDMM_BUDGET_PRIORITY_BAND *)&a5,
        (enum VIDMM_BUDGET_VISIBILITY_STATE *)&v26);
      v16 = VIDMM_GLOBAL::GetSegmentGroupState(
              a2,
              a4,
              (enum _D3DKMT_MEMORY_SEGMENT_GROUP)v11,
              *((struct VIDMM_PARTITION **)this + 33));
      *a6 = *((_QWORD *)v16 + 3 * a5 + v26 + 5);
      v17 = VIDMM_GLOBAL::GetSegmentGroupState(
              a2,
              a4,
              (enum _D3DKMT_MEMORY_SEGMENT_GROUP)v11,
              *((struct VIDMM_PARTITION **)this + 33));
      *a8 = *((_QWORD *)v17 + 4);
      *a9 = 0LL;
      *a7 = 0LL;
      return 0LL;
    }
  }
  return 3221225485LL;
}
