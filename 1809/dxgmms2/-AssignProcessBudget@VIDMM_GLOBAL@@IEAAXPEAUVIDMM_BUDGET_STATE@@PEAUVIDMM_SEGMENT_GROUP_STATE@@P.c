/*
 * XREFs of ?AssignProcessBudget@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@_K@Z @ 0x1C00C0B30
 * Callers:
 *     ?AssignBudgetsWithinBand@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@W4VIDMM_BUDGET_PRIORITY_BAND@@_K@Z @ 0x1C00C069C (-AssignBudgetsWithinBand@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STAT.c)
 *     ?AssignMaximumBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z @ 0x1C00C0A1C (-AssignMaximumBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@.c)
 * Callees:
 *     ?IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ @ 0x1C0010BFC (-IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ.c)
 *     McTemplateK0xxpqhuuuuu @ 0x1C0028FD4 (McTemplateK0xxpqhuuuuu.c)
 *     ?CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ @ 0x1C00B1D5C (-CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ.c)
 *     ?AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_PROCESS_BUDGET_STATE@@_N@Z @ 0x1C00C03F0 (-AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_PROCESS_BUDGET_STATE@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::AssignProcessBudget(
        VIDMM_GLOBAL *this,
        struct VIDMM_BUDGET_STATE *a2,
        struct VIDMM_SEGMENT_GROUP_STATE *a3,
        struct VIDMM_PROCESS_ADAPTER_INFO *a4,
        unsigned __int64 a5)
{
  __int64 v5; // rsi
  __int64 v7; // r9
  unsigned __int64 v9; // rax
  struct VIDMM_PROCESS_BUDGET_STATE *v11; // rdi
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rdx
  const GUID *v14; // r8
  char IsHighPriorityProcess; // al

  v5 = *(int *)a3;
  v7 = *(unsigned int *)a2;
  v9 = a5;
  v11 = (struct VIDMM_PROCESS_BUDGET_STATE *)(*((_QWORD *)a4 + 6) + 296 * v7);
  v12 = *((_QWORD *)v11 + v5 + 5);
  if ( v12 && a5 >= v12 )
    v9 = *((_QWORD *)v11 + v5 + 5);
  v13 = *((_QWORD *)a3 + 3);
  v14 = (const GUID *)*((_QWORD *)v11 + v5 + 3);
  if ( v9 < v13 )
    v13 = v9;
  *((_QWORD *)v11 + v5 + 3) = v13;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
    McTemplateK0xxpqhuuuuu(
      *((_QWORD *)a4 + 5),
      v13,
      v14,
      v13,
      v14,
      *((_QWORD *)this + 3),
      *(_DWORD *)(*((_QWORD *)a4 + 5) + 8LL),
      v7,
      *((_BYTE *)a4 + 392),
      *((_BYTE *)a4 + 396),
      *((_BYTE *)a4 + 384),
      *((_BYTE *)a4 + 388),
      v5);
  *((_DWORD *)a4 + 99) = *((_DWORD *)a4 + 98);
  *((_DWORD *)a4 + 97) = *((_DWORD *)a4 + 96);
  if ( !(_DWORD)v5 && VIDMM_PROCESS_BUDGET_STATE::CanBePromoted(v11) )
  {
    IsHighPriorityProcess = DXGPROCESS::IsHighPriorityProcess(*(DXGPROCESS **)(*((_QWORD *)a4 + 5) + 32LL));
    VIDMM_GLOBAL::AddToPromotionCandidateList(this, *(_DWORD *)a2, v11, IsHighPriorityProcess);
  }
}
