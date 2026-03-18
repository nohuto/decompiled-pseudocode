/*
 * XREFs of ?Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C0076D70
 * Callers:
 *     ?VidMmLock@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C00033F0 (-VidMmLock@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q @ 0x1C0026600 (McTemplateK0q.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C00645B0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z @ 0x1C00770E0 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z.c)
 *     ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C00774F0 (-LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Lock(VIDMM_GLOBAL *this, __int64 **a2, unsigned int a3, void **a4)
{
  int v4; // ebp
  __int64 v5; // rbx
  __int64 *v9; // r15
  __int64 v10; // rbx
  _DWORD *v11; // rcx
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
  __int64 *v33; // r9
  __int64 v34; // r10
  int v35; // r11d
  __int64 v36; // r8
  int v37; // edx
  char v38; // al
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rcx
  int v56; // eax
  __int64 v57; // rax
  int v58; // r9d
  __int64 v59; // rax
  __int64 v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 *v66; // rax
  struct VIDMM_PAGING_QUEUE *v67; // rdx
  int v68; // [rsp+40h] [rbp-78h] BYREF
  __int64 v69; // [rsp+44h] [rbp-74h]
  int v70; // [rsp+4Ch] [rbp-6Ch]
  struct _VIDMM_MULTI_ALLOC *v71; // [rsp+50h] [rbp-68h]
  __int64 v72; // [rsp+58h] [rbp-60h]
  void **v73; // [rsp+60h] [rbp-58h]
  int v74; // [rsp+68h] [rbp-50h]
  __int64 v75; // [rsp+6Ch] [rbp-4Ch]
  __int64 v76; // [rsp+74h] [rbp-44h]
  __int64 v77; // [rsp+7Ch] [rbp-3Ch]
  __int64 v78; // [rsp+84h] [rbp-34h]
  int v79; // [rsp+8Ch] [rbp-2Ch]
  int v80; // [rsp+D8h] [rbp+20h] BYREF
  char v81; // [rsp+DCh] [rbp+24h]

  v4 = 0;
  v5 = a3;
  *a4 = 0LL;
  if ( a3 )
  {
    v41 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v41 + 24) = v5;
    *(_QWORD *)(v41 + 32) = 0LL;
    WdLogEvent5_WdAssertion(v41);
    return 3221225485LL;
  }
  v9 = *a2;
  v10 = **a2;
  v11 = *(_DWORD **)(v10 + 504);
  if ( (*v11 & 1) == 0 )
  {
    v42 = WdLogNewEntry5_WdAssertion(v11, a2);
    *(_QWORD *)(v42 + 24) = 21955LL;
    WdLogEvent5_WdAssertion(v42);
    return 3221225485LL;
  }
  v12 = *((unsigned __int16 *)a2[12] + 2);
  if ( (_WORD)v12 )
  {
    v43 = (unsigned __int16)v12;
    if ( DxgkVidMmAllowFailOnOfferReclaimErrors() )
    {
      v48 = WdLogNewEntry5_WdAssertion(v45, v44);
      *(_QWORD *)(v48 + 24) = a2;
      *(_QWORD *)(v48 + 32) = v43;
      WdLogEvent5_WdAssertion(v48);
      return 3221225485LL;
    }
    v49 = WdLogNewEntry5_WdError(v45, v44, v46, v47);
    *(_QWORD *)(v49 + 24) = a2;
    *(_QWORD *)(v49 + 32) = v43;
    WdLogEvent5_WdError(v49);
    v11 = *(_DWORD **)(v10 + 504);
  }
  if ( (*v11 & 8) == 0 )
  {
    v13 = *(_QWORD *)v9[1];
    if ( v13 != PsGetCurrentProcess(v11, v12) && (*(_DWORD *)(v10 + 80) & 0x1000) == 0 )
    {
      v50 = WdLogNewEntry5_WdAssertion(v14, v12);
      *(_QWORD *)(v50 + 24) = 21990LL;
      WdLogEvent5_WdAssertion(v50);
      return 3221225485LL;
    }
  }
  v15 = **(_DWORD **)(v10 + 504);
  if ( (v15 & 0x20000000) != 0 && (v15 & 0x40000000) == 0 )
  {
    v51 = *((_QWORD *)this + 3);
    v52 = *(_DWORD *)(v51 + 308);
    if ( (v52 & 0x10) == 0 && (v52 & 8) == 0 && (*(_DWORD *)(v51 + 1916) & 0x80u) == 0 && v9 != *(__int64 **)(v10 + 104) )
    {
      v53 = WdLogNewEntry5_WdAssertion(v51, v12);
      *(_QWORD *)(v53 + 24) = 22006LL;
      WdLogEvent5_WdAssertion(v53);
      return 3221225485LL;
    }
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v10 + 480, 0LL);
  if ( *(_DWORD *)(v10 + 344) && (*(_DWORD *)(v10 + 84) & 0x20) == 0 )
  {
    v54 = WdLogNewEntry5_WdAssertion(v17, v16);
    *(_QWORD *)(v54 + 24) = 22017LL;
LABEL_66:
    WdLogEvent5_WdAssertion(v54);
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
        v54 = WdLogNewEntry5_WdAssertion(v18, v16);
        *(_QWORD *)(v54 + 24) = 22068LL;
        goto LABEL_66;
      }
    }
    else
    {
      v19 = (v18 & 0x40) != 0;
      if ( (**(_DWORD **)(v10 + 504) & 4) != 0 )
      {
        if ( (v18 & 0x40) == 0 )
        {
          v55 = *(unsigned int *)(*((_QWORD *)this + 3) + 308LL);
          if ( (v55 & 8) == 0 )
          {
            v54 = WdLogNewEntry5_WdAssertion(v55, v16);
            *(_QWORD *)(v54 + 24) = 22043LL;
            goto LABEL_66;
          }
        }
      }
      else if ( ((*((_BYTE *)a2 + 25) & 1) != 0) | *((_DWORD *)a2 + 38) )
      {
        v20 = *(unsigned int *)(v10 + 76);
        if ( (v20 & 0xD0000) == 0 )
        {
          v40 = *(unsigned __int8 *)(1560 * (v20 & 0x3F) + *((_QWORD *)this + 5023) + 437);
          if ( (v40 & 0x40) != 0 && !v19 && (v20 & 0x100) == 0 )
          {
            v54 = WdLogNewEntry5_WdAssertion(v40, v20);
            *(_QWORD *)(v54 + 24) = 22053LL;
            goto LABEL_66;
          }
        }
      }
    }
  }
  if ( v9[3] )
  {
    v21 = *(_QWORD *)(v10 + 320);
    KeEnterCriticalRegion();
    if ( *(struct _KTHREAD **)(v21 + 16) == KeGetCurrentThread() )
    {
      v56 = *(_DWORD *)(v21 + 24);
      if ( v56 <= 0 )
      {
        v57 = WdLogNewEntry5_WdAssertion(v23, v22);
        *(_QWORD *)(v57 + 24) = 558LL;
        WdLogEvent5_WdAssertion(v57);
        v56 = *(_DWORD *)(v21 + 24);
      }
      v27 = v56 + 1;
    }
    else
    {
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v21, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v58 = *(_DWORD *)(v21 + 28);
          if ( v58 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v25, (const EVENT_DESCRIPTOR *)"g", v26, v58);
        }
        _InterlockedIncrement64((volatile signed __int64 *)(v21 + 8));
        ExAcquirePushLockExclusiveEx(v21, 0LL);
      }
      if ( *(_QWORD *)(v21 + 16) )
      {
        v59 = WdLogNewEntry5_WdAssertion(v25, v24);
        *(_QWORD *)(v59 + 24) = 582LL;
        WdLogEvent5_WdAssertion(v59);
      }
      if ( *(_DWORD *)(v21 + 24) )
      {
        v60 = WdLogNewEntry5_WdAssertion(v25, v24);
        *(_QWORD *)(v60 + 24) = 583LL;
        WdLogEvent5_WdAssertion(v60);
      }
      *(_QWORD *)(v21 + 16) = KeGetCurrentThread();
      v27 = 1;
    }
    *(_DWORD *)(v21 + 24) = v27;
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v9[1] + 24) + 152LL))(*(_QWORD *)(v9[1] + 24), v9[3]);
    v30 = *(_QWORD *)(v10 + 320);
    if ( *(struct _KTHREAD **)(v30 + 16) != KeGetCurrentThread() )
    {
      v61 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29, v28);
      v61[3] = 275LL;
      v61[4] = 4LL;
      v61[5] = v30;
      v61[6] = 0LL;
      v61[7] = 0LL;
      WdLogEvent5_WdCriticalError(v61);
    }
    v31 = *(_DWORD *)(v30 + 24);
    if ( v31 <= 0 )
    {
      v62 = WdLogNewEntry5_WdAssertion(v29, v28);
      *(_QWORD *)(v62 + 24) = 602LL;
      WdLogEvent5_WdAssertion(v62);
      v31 = *(_DWORD *)(v30 + 24);
    }
    v32 = v31 - 1;
    *(_DWORD *)(v30 + 24) = v32;
    if ( !v32 )
    {
      *(_QWORD *)(v30 + 16) = 0LL;
      ExReleasePushLockExclusiveEx(v30, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  v33 = *a2;
  v80 = 0;
  v81 = 0;
  v34 = *v33;
  if ( *((_DWORD *)v33 + 19) )
    goto LABEL_33;
  v35 = *(_DWORD *)(v34 + 80);
  v36 = *(_QWORD *)(v34 + 136);
  v80 = 1;
  if ( (v35 & 0x80u) == 0 )
  {
    v80 = 5;
    goto LABEL_33;
  }
  if ( !v36 )
    goto LABEL_33;
  if ( (*((_DWORD *)this + 1760) & 0x20) != 0 )
  {
LABEL_87:
    ExReleasePushLockExclusiveEx(v10 + 480, 0LL);
    KeLeaveCriticalRegion();
    v64 = *(_DWORD *)(v10 + 76) & 0x3F;
    v69 = 0LL;
    v65 = 176 * v64;
    v66 = a2[1];
    v70 = 0;
    v72 = 0LL;
    v75 = 0LL;
    v67 = (struct VIDMM_PAGING_QUEUE *)(v66[9] + v65);
    v76 = 0LL;
    v77 = 0LL;
    v78 = 0LL;
    v79 = 0;
    v68 = 208;
    v71 = (struct _VIDMM_MULTI_ALLOC *)a2;
    v73 = a4;
    v74 = 0;
    v4 = VIDMM_GLOBAL::QueueDeferredCommand(this, v67, (struct _VIDMM_DEFERRED_COMMAND *)&v68, 1, 0LL);
    goto LABEL_36;
  }
  v37 = *(_DWORD *)(v36 + 80);
  if ( (v37 & 0x1001) != 0 )
    goto LABEL_33;
  if ( (**(_DWORD **)(v34 + 504) & 4) != 0 && !*(_BYTE *)(v36 + 474) || (v35 & 0x10000) != 0 )
    goto LABEL_87;
  if ( (v37 & 4) == 0 )
  {
    if ( (v37 & 0x2000) == 0 )
      goto LABEL_81;
    v63 = *(_QWORD *)(v34 + 104);
    if ( !v63 || (*(_BYTE *)(v63 + 32) & 1) == 0 )
      goto LABEL_81;
    v80 = 0;
LABEL_33:
    v4 = VIDMM_GLOBAL::LockInternal(this, (struct VIDMM_LOCK2_DATA *)&v80, (struct VIDMM_ALLOC *)a2, a4, 0, 0LL, 0LL);
    v38 = v81;
    goto LABEL_34;
  }
  if ( (v33[4] & 1) != 0 )
    goto LABEL_33;
  v80 = 3;
  if ( !*(_QWORD *)(v34 + 264) )
    goto LABEL_33;
LABEL_81:
  v38 = 1;
LABEL_34:
  if ( v38 )
    goto LABEL_87;
  ExReleasePushLockExclusiveEx(v10 + 480, 0LL);
  KeLeaveCriticalRegion();
LABEL_36:
  if ( v4 >= 0 && (*((_BYTE *)this + 40872) & 0x10) == 0 )
    VIDMM_GLOBAL::xWaitForAllPagingEngines(
      this,
      (struct _VIDSCH_SYNC_OBJECT **)this + (*(_DWORD *)(v10 + 76) & 0x3F) + 746,
      (const unsigned __int64 *)(v10 + 176),
      1u,
      (const unsigned __int64 *)this + (*(_DWORD *)(v10 + 76) & 0x3F) + 682,
      *(_DWORD *)(v10 + 76) & 0x3F);
  return (unsigned int)v4;
}
