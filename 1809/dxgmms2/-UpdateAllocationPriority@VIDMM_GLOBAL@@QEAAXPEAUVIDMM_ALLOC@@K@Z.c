/*
 * XREFs of ?UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z @ 0x1C00ACF7C
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0066E20 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001BE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001C40 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ @ 0x1C0010BFC (-IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C007A5AC (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?GetPriorityClass@VIDMM_SEGMENT@@SA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C007D9CC (-GetPriorityClass@VIDMM_SEGMENT@@SA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 *     ?CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ @ 0x1C00B1D5C (-CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ.c)
 *     ?AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_PROCESS_BUDGET_STATE@@_N@Z @ 0x1C00C03F0 (-AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_PROCESS_BUDGET_STATE@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::UpdateAllocationPriority(VIDMM_GLOBAL *this, __int64 **a2, int a3)
{
  __int64 v4; // rbx
  bool v5; // zf
  unsigned int v6; // ecx
  __int64 PriorityClass; // rsi
  unsigned int v8; // r8d
  int v9; // eax
  __int64 v10; // rbp
  _QWORD *v11; // r10
  __int64 v12; // r15
  _QWORD *v13; // rsi
  _QWORD **v14; // rsi
  _QWORD *v15; // r11
  _DWORD *v16; // rcx
  VIDMM_PROCESS_BUDGET_STATE *v17; // rcx
  __int64 v18; // r9
  char IsHighPriorityProcess; // al
  struct VIDMM_PROCESS_BUDGET_STATE *v20; // r8

  v4 = **a2;
  v5 = *(_DWORD *)(v4 + 128) == 2;
  v6 = *(_DWORD *)(v4 + 376);
  *(_DWORD *)(v4 + 376) = a3;
  if ( v5 && (*(_DWORD *)(*(_QWORD *)(v4 + 136) + 80LL) & 0x1001) != 0 && (*(_DWORD *)(v4 + 76) & 0x400) == 0 )
  {
    PriorityClass = (int)VIDMM_SEGMENT::GetPriorityClass(v6);
    v9 = VIDMM_SEGMENT::GetPriorityClass(v8);
    v10 = v9;
    if ( (_DWORD)PriorityClass != v9 )
    {
      DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v4 + 320));
      v11 = *(_QWORD **)(v4 + 296);
      if ( v11 != (_QWORD *)(v4 + 296) )
      {
        v12 = PriorityClass;
        do
        {
          v13 = v11;
          v11 = (_QWORD *)*v11;
          v14 = (_QWORD **)(v13 - 2);
          v15 = *v14;
          while ( v15 != v14 )
          {
            v16 = v15 - 5;
            v15 = (_QWORD *)*v15;
            if ( (v16[7] & 3) == 2 )
            {
              v17 = (VIDMM_PROCESS_BUDGET_STATE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v16 + 8LL)
                                                                                     + 16LL)
                                                                         + 8LL
                                                                         * *(unsigned int *)(*((_QWORD *)this + 3)
                                                                                           + 208LL))
                                                             + 48LL)
                                                 + 296LL * (*(_DWORD *)(v4 + 76) & 0x3F));
              *((_QWORD *)v17 + v12 + 32) -= *(_QWORD *)(v4 + 16);
              *((_QWORD *)v17 + v10 + 32) += *(_QWORD *)(v4 + 16);
              if ( VIDMM_PROCESS_BUDGET_STATE::CanBePromoted(v17) )
              {
                IsHighPriorityProcess = DXGPROCESS::IsHighPriorityProcess(*(DXGPROCESS **)(v18 + 32));
                VIDMM_GLOBAL::AddToPromotionCandidateList(this, *(_DWORD *)(v4 + 76) & 0x3F, v20, IsHighPriorityProcess);
              }
            }
          }
        }
        while ( v11 != (_QWORD *)(v4 + 296) );
      }
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v4 + 320));
      VIDMM_GLOBAL::RequestNewBudget(this, 1);
    }
  }
}
