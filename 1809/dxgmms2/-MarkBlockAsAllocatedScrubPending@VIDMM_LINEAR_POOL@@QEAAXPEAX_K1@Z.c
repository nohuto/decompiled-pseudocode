/*
 * XREFs of ?MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z @ 0x1C00C5AF0
 * Callers:
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0070390 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0071660 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ @ 0x1C0077C70 (-AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C007CD64 (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 */

void __fastcall VIDMM_LINEAR_POOL::MarkBlockAsAllocatedScrubPending(
        VIDMM_LINEAR_POOL *this,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  VIDMM_LINEAR_POOL *v4; // rax
  char *v5; // r13
  char *v7; // r15
  char *v8; // r10
  char *v10; // rsi
  char *v13; // rbx
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  unsigned __int64 v23; // rdx
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // rdx
  _QWORD *v31; // rax
  __int64 v32; // rdx
  _QWORD *v33; // rcx
  struct _VIDMM_POOL_BLOCK *Block; // rax
  struct _VIDMM_POOL_BLOCK *v35; // rdx
  _QWORD *v36; // rax
  __int64 v37; // rcx
  char *v38; // r8
  char v39; // r9
  char *v40; // rcx
  _QWORD *v41; // rax
  char *v42; // rcx
  __int64 v43; // rdx
  _QWORD *v44; // rax
  unsigned __int64 v45; // rdx
  unsigned __int64 *v46; // rcx
  _QWORD *v47; // rcx
  __int64 v48; // rdx

  v4 = (VIDMM_LINEAR_POOL *)a2[6];
  v5 = (char *)this + 72;
  v7 = (char *)(a2 + 5);
  v8 = (char *)a2[5];
  v10 = (char *)v4 - 40;
  if ( v4 == (VIDMM_LINEAR_POOL *)((char *)this + 72) )
    v10 = 0LL;
  v13 = v8 - 40;
  if ( v8 == v5 )
    v13 = 0LL;
  if ( *a2 > a3 )
  {
    if ( !v10 && g_IsInternalRelease )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
      v14[3] = 270LL;
      v14[4] = 9LL;
      v14[5] = 0LL;
      v14[6] = 0LL;
      v14[7] = 0LL;
      WdLogEvent5_WdCriticalError(v14);
    }
    if ( *(_QWORD *)v10 > a3 && g_IsInternalRelease )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
      v15[3] = 270LL;
      v15[4] = 9LL;
      v15[5] = 0LL;
      v15[6] = 0LL;
      v15[7] = 0LL;
      WdLogEvent5_WdCriticalError(v15);
    }
    if ( v10[56] != 2 && g_IsInternalRelease )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
      v16[3] = 270LL;
      v16[4] = 9LL;
      v16[5] = 0LL;
      v16[6] = 0LL;
      v16[7] = 0LL;
      WdLogEvent5_WdCriticalError(v16);
    }
    if ( a3 == *(_QWORD *)v10 )
    {
      v17 = v10 + 40;
      v18 = *((_QWORD *)v10 + 5);
      if ( *(char **)(v18 + 8) != v10 + 40 )
        goto LABEL_59;
      v19 = (_QWORD *)*((_QWORD *)v10 + 6);
      if ( (_QWORD *)*v19 != v17 )
        goto LABEL_59;
      *v19 = v18;
      *(_QWORD *)(v18 + 8) = v19;
      *v17 = 0LL;
      v20 = v10 + 24;
      *((_QWORD *)v10 + 6) = 0LL;
      v21 = *((_QWORD *)v10 + 3);
      if ( *(char **)(v21 + 8) != v10 + 24 )
        goto LABEL_59;
      v22 = (_QWORD *)*((_QWORD *)v10 + 4);
      if ( (_QWORD *)*v22 != v20 )
        goto LABEL_59;
      *v22 = v21;
      *(_QWORD *)(v21 + 8) = v22;
      *v20 = 0LL;
      *((_QWORD *)v10 + 4) = 0LL;
      VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)v10);
    }
    else
    {
      *((_QWORD *)v10 + 1) = a3 - *(_QWORD *)v10;
    }
  }
  v23 = a2[1] + *a2;
  if ( v23 >= a4 )
  {
    if ( v23 <= a4 )
      goto LABEL_55;
    if ( v13 && v13[56] == 2 )
    {
      v27 = *(_QWORD *)v13 + *((_QWORD *)v13 + 1) - a4;
LABEL_42:
      *(_QWORD *)v13 = a4;
      *((_QWORD *)v13 + 1) = v27;
      goto LABEL_55;
    }
    Block = VIDMM_LINEAR_POOL::AllocateBlock(this);
    v35 = Block;
    if ( !Block )
      goto LABEL_55;
    *((_BYTE *)Block + 56) = 2;
    *((_QWORD *)Block + 2) = 0LL;
    *(_QWORD *)Block = a4;
    *((_QWORD *)Block + 1) = a2[1] + *a2 - a4;
    v36 = (_QWORD *)((char *)Block + 40);
    v37 = *(_QWORD *)v7;
    if ( *(char **)(*(_QWORD *)v7 + 8LL) == v7 )
    {
      *v36 = v37;
      v38 = 0LL;
      v36[1] = v7;
      v39 = 0;
      *(_QWORD *)(v37 + 8) = v36;
      *(_QWORD *)v7 = v36;
      v40 = (char *)a2[6];
      while ( v40 != v5 && !v39 )
      {
        v38 = v40 - 40;
        if ( ((v40[16] - 2) & 0xFD) != 0 )
          v40 = (char *)*((_QWORD *)v38 + 6);
        else
          v39 = 1;
      }
      v41 = (_QWORD *)((char *)v35 + 24);
      v42 = v38 + 24;
      if ( !v39 )
        v42 = (char *)this + 40;
      v43 = *(_QWORD *)v42;
      if ( *(char **)(*(_QWORD *)v42 + 8LL) == v42 )
      {
        *v41 = v43;
        v41[1] = v42;
        *(_QWORD *)(v43 + 8) = v41;
        *(_QWORD *)v42 = v41;
        goto LABEL_55;
      }
    }
LABEL_59:
    __fastfail(3u);
  }
  if ( !v13 && g_IsInternalRelease )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, v23);
    v24[3] = 270LL;
    v24[4] = 9LL;
    v24[5] = 0LL;
    v24[6] = 0LL;
    v24[7] = 0LL;
    WdLogEvent5_WdCriticalError(v24);
  }
  if ( *(_QWORD *)v13 + *((_QWORD *)v13 + 1) < a4 && g_IsInternalRelease )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, v23);
    v25[3] = 270LL;
    v25[4] = 9LL;
    v25[5] = 0LL;
    v25[6] = 0LL;
    v25[7] = 0LL;
    WdLogEvent5_WdCriticalError(v25);
  }
  if ( v13[56] != 2 && g_IsInternalRelease )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, v23);
    v26[3] = 270LL;
    v26[4] = 9LL;
    v26[5] = 0LL;
    v26[6] = 0LL;
    v26[7] = 0LL;
    WdLogEvent5_WdCriticalError(v26);
  }
  v27 = *(_QWORD *)v13 + *((_QWORD *)v13 + 1) - a4;
  if ( v27 )
    goto LABEL_42;
  v28 = v13 + 40;
  v29 = *((_QWORD *)v13 + 5);
  if ( *(char **)(v29 + 8) != v13 + 40 )
    goto LABEL_59;
  v30 = (_QWORD *)*((_QWORD *)v13 + 6);
  if ( (_QWORD *)*v30 != v28 )
    goto LABEL_59;
  *v30 = v29;
  *(_QWORD *)(v29 + 8) = v30;
  *v28 = 0LL;
  v31 = v13 + 24;
  *((_QWORD *)v13 + 6) = 0LL;
  v32 = *((_QWORD *)v13 + 3);
  if ( *(char **)(v32 + 8) != v13 + 24 )
    goto LABEL_59;
  v33 = (_QWORD *)*((_QWORD *)v13 + 4);
  if ( (_QWORD *)*v33 != v31 )
    goto LABEL_59;
  *v33 = v32;
  *(_QWORD *)(v32 + 8) = v33;
  *v31 = 0LL;
  *((_QWORD *)v13 + 4) = 0LL;
  VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)v13);
LABEL_55:
  a2[2] |= 1uLL;
  v44 = a2 + 3;
  *a2 = a3;
  a2[1] = a4 - a3;
  *((_BYTE *)a2 + 56) = 5;
  v45 = a2[3];
  if ( *(unsigned __int64 **)(v45 + 8) != a2 + 3 )
    goto LABEL_59;
  v46 = (unsigned __int64 *)a2[4];
  if ( (_QWORD *)*v46 != v44 )
    goto LABEL_59;
  *v46 = v45;
  *(_QWORD *)(v45 + 8) = v46;
  v47 = (_QWORD *)((char *)this + 56);
  v48 = *((_QWORD *)this + 7);
  if ( *(VIDMM_LINEAR_POOL **)(v48 + 8) != (VIDMM_LINEAR_POOL *)((char *)this + 56) )
    goto LABEL_59;
  *v44 = v48;
  a2[4] = (unsigned __int64)v47;
  *(_QWORD *)(v48 + 8) = v44;
  *v47 = v44;
}
