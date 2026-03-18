/*
 * XREFs of ?VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1C0061B40
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00637F0 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0066E20 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x1C00AD0E0 (-UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA.c)
 * Callees:
 *     ?VerifySegmentSetAny@VIDMM_GLOBAL@@IEAAEKKK@Z @ 0x1C0061C90 (-VerifySegmentSetAny@VIDMM_GLOBAL@@IEAAEKKK@Z.c)
 */

unsigned __int8 __fastcall VIDMM_GLOBAL::VerifyBudgetGroups(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned int a3,
        struct VIDMM_SEGMENT *a4,
        struct _VIDMM_VERIFY_BUDGET_GROUPS *a5)
{
  __int64 v6; // r14
  unsigned int v7; // ebx
  unsigned __int8 v9; // di
  unsigned __int8 v10; // al
  bool v11; // dl
  bool v12; // cl
  int v13; // r10d
  int v14; // r8d
  __int64 v15; // rdx
  unsigned int v16; // r9d
  __int64 v17; // rcx
  int v18; // r11d
  int v19; // edi
  __int64 v21; // rax

  v6 = a2;
  v7 = a3;
  v9 = VIDMM_GLOBAL::VerifySegmentSetAny(this, a2, a3, 0x80000u);
  v10 = VIDMM_GLOBAL::VerifySegmentSetAny(this, v6, v7, 0x100000u);
  if ( a4 )
  {
    v11 = (*((_DWORD *)a4 + 20) & 0x80000) != 0;
    v12 = (*((_DWORD *)a4 + 20) & 0x100000) != 0;
  }
  else
  {
    if ( v9 )
      goto LABEL_4;
    if ( v10 )
    {
LABEL_17:
      v13 = 1;
      v14 = (v9 != 0) + 1;
      goto LABEL_5;
    }
    v11 = 0;
    v12 = 0;
  }
  if ( !v11 )
  {
    if ( !v12 )
    {
      v13 = 2;
      v14 = 3;
      goto LABEL_5;
    }
    goto LABEL_17;
  }
LABEL_4:
  v13 = 0;
  v14 = v10 != 0 ? 2 : 0;
LABEL_5:
  if ( v14 == 3 )
    goto LABEL_13;
  v15 = *((_QWORD *)this + 5023);
  v16 = 0;
  v17 = 1560 * v6;
  v18 = 0;
  v19 = *(_DWORD *)(1560 * v6 + v15 + 20);
  if ( (~*(_DWORD *)(v15 + 16) & v7) != 0 )
    goto LABEL_22;
  if ( !v7 )
    goto LABEL_13;
  do
  {
    v15 = v7;
    if ( (v7 & 1) != 0 )
    {
      v17 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (v19 + v16));
      if ( (*(_DWORD *)(v17 + 80) & 0x180000) == 0 )
      {
        v17 = v16;
        v18 |= 1 << v16;
      }
    }
    v7 >>= 1;
    ++v16;
  }
  while ( (unsigned int)v15 >= 2 );
  if ( v18 )
  {
LABEL_22:
    v21 = WdLogNewEntry5_WdAssertion(v17, v15);
    *(_QWORD *)(v21 + 24) = 12023LL;
    WdLogEvent5_WdAssertion(v21);
    return 0;
  }
  else
  {
LABEL_13:
    if ( a5 )
      *(_DWORD *)a5 = v13 | (16 * v14) | *(_DWORD *)a5 & 0xFFFFFF00;
    return 1;
  }
}
