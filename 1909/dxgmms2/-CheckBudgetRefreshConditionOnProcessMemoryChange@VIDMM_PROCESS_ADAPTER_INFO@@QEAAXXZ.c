/*
 * XREFs of ?CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C00B4FA0
 * Callers:
 *     ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B486C (-SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003750 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00037AC (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ @ 0x1C005C568 (-TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C005D6D4 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 */

void __fastcall VIDMM_PROCESS_ADAPTER_INFO::CheckBudgetRefreshConditionOnProcessMemoryChange(
        VIDMM_PROCESS_ADAPTER_INFO *this)
{
  char v1; // bp
  unsigned int v2; // esi
  VIDMM_PROCESS_BUDGET_STATE *v4; // r14
  _QWORD *v5; // r9
  int v6; // r8d
  unsigned int *v7; // r11
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rax
  __int64 v10; // r10
  __int64 v11; // rbx
  _BYTE v12[32]; // [rsp+20h] [rbp-48h] BYREF

  v1 = 0;
  v2 = 0;
  if ( *(_DWORD *)(*(_QWORD *)this + 6992LL) )
  {
    do
    {
      v4 = (VIDMM_PROCESS_BUDGET_STATE *)(*((_QWORD *)this + 6) + 296LL * v2);
      DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
        (DXGAUTOPUSHLOCKSHARED *)v12,
        (VIDMM_PROCESS_ADAPTER_INFO *)((char *)this + 360));
      v5 = (_QWORD *)((char *)v4 + 184);
      v6 = 0;
      v7 = (unsigned int *)(1560LL * v2 + *(_QWORD *)(*(_QWORD *)this + 40184LL) + 496LL);
      while ( 1 )
      {
        v8 = *(v5 - 6);
        if ( v6 == 1 )
        {
          v9 = VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment(v4);
          v8 = v9 + v10;
        }
        v11 = *v7;
        if ( v8 > *v5 * (v11 + 100) / 0x64uLL || v8 < *v5 * (100 - v11) / 0x64uLL )
          break;
        ++v6;
        v7 += 6;
        ++v5;
        if ( v6 >= 2 )
          goto LABEL_10;
      }
      v1 = 1;
LABEL_10:
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
      ++v2;
    }
    while ( v2 < *(_DWORD *)(*(_QWORD *)this + 6992LL) );
    if ( v1 )
      VIDMM_GLOBAL::RequestNewBudget(*(VIDMM_GLOBAL **)this, 1);
  }
}
