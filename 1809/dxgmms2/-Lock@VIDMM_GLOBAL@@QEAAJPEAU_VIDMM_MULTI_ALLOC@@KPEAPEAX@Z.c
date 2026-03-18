/*
 * XREFs of ?Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C0066000
 * Callers:
 *     ?VidMmLock@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C0002450 (-VidMmLock@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0019440 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C00609D8 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0066340 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C0066700 (-LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Lock(VIDMM_GLOBAL *this, __int64 **a2, unsigned int a3, void **a4)
{
  int v4; // r15d
  __int64 v5; // rbx
  void **v6; // r12
  __int64 *v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rcx
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  bool v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  const GUID *v26; // r8
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdi
  int v31; // eax
  int v32; // eax
  __int64 *v33; // rdx
  __int64 v34; // r9
  int v35; // r11d
  __int64 v36; // r8
  int v37; // r10d
  char v38; // al
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rcx
  int v50; // eax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rcx
  int v55; // eax
  __int64 v56; // rax
  int v57; // r9d
  __int64 v58; // rax
  __int64 v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 *v64; // rax
  __int64 v65; // rax
  int v66; // [rsp+40h] [rbp-88h] BYREF
  char v67; // [rsp+44h] [rbp-84h]
  _QWORD v68[15]; // [rsp+50h] [rbp-78h] BYREF

  v4 = 0;
  v5 = a3;
  *a4 = 0LL;
  v6 = a4;
  if ( a3 )
  {
    v40 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v40 + 24) = v5;
    *(_QWORD *)(v40 + 32) = 0LL;
    WdLogEvent5_WdAssertion(v40);
    return 3221225485LL;
  }
  v9 = *a2;
  v10 = **a2;
  v11 = **(unsigned int **)(v10 + 504);
  if ( (v11 & 1) == 0 )
  {
    v41 = WdLogNewEntry5_WdAssertion(v11, a2);
    *(_QWORD *)(v41 + 24) = 21747LL;
    WdLogEvent5_WdAssertion(v41);
    return 3221225485LL;
  }
  v12 = *((unsigned __int16 *)a2[12] + 2);
  if ( (_WORD)v12 )
  {
    v42 = (unsigned __int16)v12;
    if ( DxgkVidMmAllowFailOnOfferReclaimErrors() )
    {
      v46 = WdLogNewEntry5_WdAssertion(v44, v43);
      *(_QWORD *)(v46 + 24) = a2;
      *(_QWORD *)(v46 + 32) = v42;
      WdLogEvent5_WdAssertion(v46);
      return 3221225485LL;
    }
    v47 = WdLogNewEntry5_WdError(v44, v43, v45);
    *(_QWORD *)(v47 + 24) = a2;
    *(_QWORD *)(v47 + 32) = v42;
    WdLogEvent5_WdError(v47);
    v11 = **(unsigned int **)(v10 + 504);
  }
  if ( (v11 & 8) == 0 )
  {
    v13 = *(_QWORD *)v9[1];
    if ( v13 != PsGetCurrentProcess(v11, v12) && (*(_DWORD *)(v10 + 80) & 0x800) == 0 )
    {
      v48 = WdLogNewEntry5_WdAssertion(v14, v12);
      *(_QWORD *)(v48 + 24) = 21782LL;
      WdLogEvent5_WdAssertion(v48);
      return 3221225485LL;
    }
  }
  v15 = **(_DWORD **)(v10 + 504);
  if ( (v15 & 0x20000000) != 0 && (v15 & 0x40000000) == 0 )
  {
    v49 = *((_QWORD *)this + 3);
    v50 = *(_DWORD *)(v49 + 308);
    if ( (v50 & 0x10) == 0 && (v50 & 8) == 0 && (*(_DWORD *)(v49 + 1892) & 0x80u) == 0 && v9 != *(__int64 **)(v10 + 104) )
    {
      v51 = WdLogNewEntry5_WdAssertion(v49, v12);
      *(_QWORD *)(v51 + 24) = 21798LL;
      WdLogEvent5_WdAssertion(v51);
      return 3221225485LL;
    }
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v10 + 480, 0LL);
  if ( *(_DWORD *)(v10 + 344) && (*(_DWORD *)(v10 + 84) & 0x20) == 0 )
  {
    v52 = WdLogNewEntry5_WdAssertion(v17, v16);
    *(_QWORD *)(v52 + 24) = 21809LL;
LABEL_65:
    WdLogEvent5_WdAssertion(v52);
    ExReleasePushLockExclusiveEx(v10 + 480, 0LL);
    KeLeaveCriticalRegion();
    return 3221225485LL;
  }
  if ( !*((_DWORD *)v9 + 19) )
  {
    v18 = *(unsigned int *)(v10 + 76);
    if ( (*(_DWORD *)(v10 + 80) & 0x80u) == 0 )
    {
      if ( (v18 & 0x80u) == 0LL )
      {
        v52 = WdLogNewEntry5_WdAssertion(v18, v16);
        *(_QWORD *)(v52 + 24) = 21860LL;
        goto LABEL_65;
      }
    }
    else
    {
      v19 = (v18 & 0x40) != 0;
      if ( (**(_DWORD **)(v10 + 504) & 4) != 0 )
      {
        if ( (v18 & 0x40) == 0 )
        {
          v53 = *(unsigned int *)(*((_QWORD *)this + 3) + 308LL);
          if ( (v53 & 8) == 0 )
          {
            v52 = WdLogNewEntry5_WdAssertion(v53, v16);
            *(_QWORD *)(v52 + 24) = 21835LL;
            goto LABEL_65;
          }
        }
      }
      else if ( ((*((_BYTE *)a2 + 25) & 1) != 0) | *((_DWORD *)a2 + 38) )
      {
        v20 = *(unsigned int *)(v10 + 76);
        if ( (v20 & 0xD0000) == 0 )
        {
          v54 = *(unsigned __int8 *)(1560 * (v20 & 0x3F) + *((_QWORD *)this + 5023) + 437);
          if ( (v54 & 0x40) != 0 && !v19 && (v20 & 0x100) == 0 )
          {
            v52 = WdLogNewEntry5_WdAssertion(v54, v20);
            *(_QWORD *)(v52 + 24) = 21845LL;
            goto LABEL_65;
          }
        }
      }
    }
  }
  if ( v9[3] )
  {
    v21 = *(_QWORD *)(v10 + 320);
    KeEnterCriticalRegion();
    if ( *(struct _KTHREAD **)(v21 + 8) == KeGetCurrentThread() )
    {
      v55 = *(_DWORD *)(v21 + 24);
      if ( v55 <= 0 )
      {
        v56 = WdLogNewEntry5_WdAssertion(v23, v22);
        *(_QWORD *)(v56 + 24) = 409LL;
        WdLogEvent5_WdAssertion(v56);
        v55 = *(_DWORD *)(v21 + 24);
      }
      v27 = v55 + 1;
    }
    else
    {
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v21 + 16, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v57 = *(_DWORD *)(v21 + 28);
          if ( v57 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v25, &EventBlockThread, v26, v57);
        }
        _InterlockedIncrement64((volatile signed __int64 *)v21);
        ExAcquirePushLockExclusiveEx(v21 + 16, 0LL);
      }
      if ( *(_QWORD *)(v21 + 8) )
      {
        v58 = WdLogNewEntry5_WdAssertion(v25, v24);
        *(_QWORD *)(v58 + 24) = 433LL;
        WdLogEvent5_WdAssertion(v58);
      }
      if ( *(_DWORD *)(v21 + 24) )
      {
        v59 = WdLogNewEntry5_WdAssertion(v25, v24);
        *(_QWORD *)(v59 + 24) = 434LL;
        WdLogEvent5_WdAssertion(v59);
      }
      v6 = a4;
      *(_QWORD *)(v21 + 8) = KeGetCurrentThread();
      v27 = 1;
    }
    *(_DWORD *)(v21 + 24) = v27;
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v9[1] + 24) + 152LL))(*(_QWORD *)(v9[1] + 24), v9[3]);
    v30 = *(_QWORD *)(v10 + 320);
    if ( *(struct _KTHREAD **)(v30 + 8) != KeGetCurrentThread() )
    {
      v60 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29, v28);
      v60[3] = 275LL;
      v60[4] = 4LL;
      v60[5] = v30;
      v60[6] = 0LL;
      v60[7] = 0LL;
      WdLogEvent5_WdCriticalError(v60);
    }
    v31 = *(_DWORD *)(v30 + 24);
    if ( v31 <= 0 )
    {
      v61 = WdLogNewEntry5_WdAssertion(v29, v28);
      *(_QWORD *)(v61 + 24) = 453LL;
      WdLogEvent5_WdAssertion(v61);
      v31 = *(_DWORD *)(v30 + 24);
    }
    v32 = v31 - 1;
    *(_DWORD *)(v30 + 24) = v32;
    if ( !v32 )
    {
      *(_QWORD *)(v30 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v30 + 16, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  v33 = *a2;
  v66 = 0;
  v67 = 0;
  v34 = *v33;
  if ( *((_DWORD *)v33 + 19) )
    goto LABEL_33;
  v35 = *(_DWORD *)(v34 + 80);
  v36 = *(_QWORD *)(v34 + 136);
  v66 = 1;
  if ( (v35 & 0x80u) == 0 )
  {
    v66 = 5;
    goto LABEL_33;
  }
  if ( (*((_DWORD *)this + 1760) & 0x20) != 0 )
  {
    if ( v36 )
      goto LABEL_76;
    goto LABEL_33;
  }
  if ( !v36 || (v37 = *(_DWORD *)(v36 + 80), (v37 & 0x1001) != 0) )
  {
LABEL_33:
    v4 = VIDMM_GLOBAL::LockInternal(this, (struct VIDMM_LOCK2_DATA *)&v66, (struct VIDMM_ALLOC *)a2, v6, 0, 0LL, 0LL);
    v38 = v67;
    goto LABEL_34;
  }
  if ( (**(_DWORD **)(v34 + 504) & 4) != 0 && !*(_BYTE *)(v36 + 474) || (v35 & 0x8000) != 0 )
    goto LABEL_76;
  if ( (v37 & 4) != 0 )
  {
    if ( (v33[4] & 1) != 0 )
      goto LABEL_33;
    v66 = 3;
    if ( !*(_QWORD *)(v34 + 264) )
      goto LABEL_33;
  }
  else if ( (v37 & 0x2000) != 0 )
  {
    v65 = *(_QWORD *)(v34 + 104);
    if ( v65 )
    {
      if ( (*(_BYTE *)(v65 + 32) & 1) != 0 )
      {
        v66 = 0;
        goto LABEL_33;
      }
    }
  }
  v38 = 1;
LABEL_34:
  if ( v38 )
  {
LABEL_76:
    ExReleasePushLockExclusiveEx(v10 + 480, 0LL);
    KeLeaveCriticalRegion();
    memset(v68, 0, 0x50uLL);
    v62 = *(_DWORD *)(v10 + 76) & 0x3F;
    LODWORD(v68[0]) = 208;
    v63 = 176 * v62;
    v64 = a2[1];
    v68[2] = a2;
    v68[4] = v6;
    LODWORD(v68[5]) = 0;
    v4 = VIDMM_GLOBAL::QueueDeferredCommand(
           this,
           (struct VIDMM_PAGING_QUEUE *)(v64[9] + v63),
           (struct _VIDMM_DEFERRED_COMMAND *)v68,
           1,
           0LL);
    goto LABEL_36;
  }
  ExReleasePushLockExclusiveEx(v10 + 480, 0LL);
  KeLeaveCriticalRegion();
LABEL_36:
  if ( v4 >= 0 && (*((_BYTE *)this + 40872) & 0x10) == 0 )
    VIDMM_GLOBAL::xWaitForAllPagingEngines(
      this,
      (struct _VIDSCH_SYNC_OBJECT **)this + (*(_DWORD *)(v10 + 76) & 0x3F) + 746,
      (const unsigned __int64 *)(v10 + 176),
      1u,
      (const unsigned __int64 *)this + (*(_DWORD *)(v10 + 76) & 0x3F) + 682);
  return (unsigned int)v4;
}
