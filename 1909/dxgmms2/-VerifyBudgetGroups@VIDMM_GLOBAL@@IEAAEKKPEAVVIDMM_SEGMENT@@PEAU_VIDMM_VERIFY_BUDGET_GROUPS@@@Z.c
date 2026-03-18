/*
 * XREFs of ?VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1C0070960
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0071580 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0077A60 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x1C00B01D0 (-UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall VIDMM_GLOBAL::VerifyBudgetGroups(
        unsigned __int64 this,
        unsigned int a2,
        unsigned int a3,
        struct VIDMM_SEGMENT *a4,
        struct _VIDMM_VERIFY_BUDGET_GROUPS *a5)
{
  __int64 v5; // rsi
  unsigned __int64 v7; // rbp
  __int64 v8; // r14
  unsigned int v9; // r10d
  unsigned int v10; // ebx
  unsigned int v11; // edx
  unsigned int v12; // r9d
  unsigned __int8 v13; // r9
  unsigned int v14; // edx
  unsigned int v15; // r10d
  bool v16; // dl
  bool v17; // al
  int v18; // r11d
  __int64 v19; // rdx
  unsigned int v20; // r9d
  int v21; // r10d
  unsigned int v22; // ebx
  __int64 v24; // rax

  v5 = *(_QWORD *)(this + 40184);
  v7 = this;
  v8 = 1560LL * a2;
  v9 = a3;
  v10 = *(_DWORD *)(v8 + v5 + 20);
  v11 = v10;
  if ( (a3 & ~*(_DWORD *)(v8 + v5 + 16)) != 0 || !a3 )
  {
LABEL_27:
    v13 = 0;
  }
  else
  {
    while ( 1 )
    {
      v12 = v9;
      if ( (v9 & 1) != 0 )
      {
        this = *(_QWORD *)(*(_QWORD *)(v7 + 3712) + 8LL * v11);
        if ( (*(_DWORD *)(this + 80) & 0x80000) != 0 )
          break;
      }
      v9 >>= 1;
      ++v11;
      if ( v12 < 2 )
        goto LABEL_27;
    }
    v13 = 1;
  }
  v14 = a3;
  if ( (a3 & ~*(_DWORD *)(v8 + v5 + 16)) != 0 || !a3 )
  {
LABEL_29:
    LOBYTE(this) = 0;
  }
  else
  {
    while ( 1 )
    {
      v15 = v14;
      if ( (v14 & 1) != 0 )
      {
        this = *(_QWORD *)(*(_QWORD *)(v7 + 3712) + 8LL * v10);
        if ( (*(_DWORD *)(this + 80) & 0x100000) != 0 )
          break;
      }
      v14 >>= 1;
      ++v10;
      if ( v15 < 2 )
        goto LABEL_29;
    }
    LOBYTE(this) = 1;
  }
  if ( a4 )
  {
    v16 = (*((_DWORD *)a4 + 20) & 0x80000) != 0;
    v17 = (*((_DWORD *)a4 + 20) & 0x100000) != 0;
  }
  else
  {
    if ( v13 )
      goto LABEL_14;
    if ( (_BYTE)this )
    {
LABEL_31:
      v18 = 1;
      v19 = (unsigned int)v13 + 1;
      goto LABEL_15;
    }
    v16 = 0;
    v17 = 0;
  }
  if ( !v16 )
  {
    if ( !v17 )
    {
      v19 = 3LL;
      v18 = 2;
      goto LABEL_15;
    }
    goto LABEL_31;
  }
LABEL_14:
  v18 = 0;
  v19 = 2 * (unsigned int)(unsigned __int8)this;
LABEL_15:
  if ( (_DWORD)v19 == 3 )
    goto LABEL_23;
  v20 = 0;
  v21 = 0;
  if ( (~*(_DWORD *)(v5 + 16) & a3) != 0 )
    goto LABEL_36;
  if ( !a3 )
    goto LABEL_23;
  do
  {
    v22 = a3;
    if ( (a3 & 1) != 0 )
    {
      this = *(_QWORD *)(*(_QWORD *)(v7 + 3712) + 8LL * (*(_DWORD *)(v8 + v5 + 20) + v20));
      if ( (*(_DWORD *)(this + 80) & 0x180000) == 0 )
      {
        this = v20;
        v21 |= 1 << v20;
      }
    }
    a3 >>= 1;
    ++v20;
  }
  while ( v22 >= 2 );
  if ( v21 )
  {
LABEL_36:
    v24 = WdLogNewEntry5_WdAssertion(this, v19);
    *(_QWORD *)(v24 + 24) = 12207LL;
    WdLogEvent5_WdAssertion(v24);
    return 0;
  }
  else
  {
LABEL_23:
    if ( a5 )
      *(_DWORD *)a5 = v18 | *(_DWORD *)a5 & 0xFFFFFF00 | (16 * v19);
    return 1;
  }
}
