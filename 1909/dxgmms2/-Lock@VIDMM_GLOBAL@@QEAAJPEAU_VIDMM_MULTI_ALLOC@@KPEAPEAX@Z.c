/*
 * XREFs of ?Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C0076A80
 * Callers:
 *     ?VidMmLock@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C00033B0 (-VidMmLock@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q @ 0x1C0026600 (McTemplateK0q.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C00641C0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z @ 0x1C00771E0 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z.c)
 *     ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C00775F0 (-LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Lock(VIDMM_GLOBAL *this, __int64 **a2, unsigned int a3, void **a4)
{
  __int64 v4; // rbx
  int v8; // r12d
  __int64 v9; // rax
  __int64 *v11; // r15
  __int64 v12; // rdi
  _DWORD *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // ecx
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // r8d
  __int64 v37; // rcx
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rax
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  const GUID *v46; // r8
  int v47; // r9d
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rbx
  _QWORD *v53; // rax
  int v54; // eax
  __int64 v55; // rax
  int v56; // eax
  __int64 *v57; // r9
  __int64 v58; // rdx
  int v59; // r11d
  __int64 v60; // r10
  int v61; // r8d
  char v62; // al
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
  __int64 v80; // [rsp+D8h] [rbp+20h] BYREF

  v4 = a3;
  *a4 = 0LL;
  v8 = 0;
  if ( a3 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v9 + 24) = v4;
    *(_QWORD *)(v9 + 32) = 0LL;
    WdLogEvent5_WdAssertion(v9);
    return 3221225485LL;
  }
  v11 = *a2;
  v12 = **a2;
  v13 = *(_DWORD **)(v12 + 504);
  if ( (*v13 & 1) == 0 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13, a2);
    *(_QWORD *)(v14 + 24) = 21984LL;
    WdLogEvent5_WdAssertion(v14);
    return 3221225485LL;
  }
  v15 = *((unsigned __int16 *)a2[12] + 2);
  if ( (_WORD)v15 )
  {
    v16 = (unsigned __int16)v15;
    if ( DxgkVidMmAllowFailOnOfferReclaimErrors() )
    {
      v21 = WdLogNewEntry5_WdAssertion(v18, v17);
      *(_QWORD *)(v21 + 24) = a2;
      *(_QWORD *)(v21 + 32) = v16;
      WdLogEvent5_WdAssertion(v21);
      return 3221225485LL;
    }
    v22 = WdLogNewEntry5_WdError(v18, v17, v19, v20);
    *(_QWORD *)(v22 + 24) = a2;
    *(_QWORD *)(v22 + 32) = v16;
    WdLogEvent5_WdError(v22);
    v13 = *(_DWORD **)(v12 + 504);
  }
  if ( (*v13 & 8) == 0 )
  {
    v23 = *(_QWORD *)v11[1];
    if ( v23 != PsGetCurrentProcess(v13, v15) && (*(_DWORD *)(v12 + 80) & 0x1000) == 0 )
    {
      v25 = WdLogNewEntry5_WdAssertion(v24, v15);
      *(_QWORD *)(v25 + 24) = 22019LL;
      WdLogEvent5_WdAssertion(v25);
      return 3221225485LL;
    }
  }
  v26 = **(_DWORD **)(v12 + 504);
  if ( (v26 & 0x20000000) != 0 && (v26 & 0x40000000) == 0 )
  {
    v27 = *((_QWORD *)this + 3);
    v28 = *(_DWORD *)(v27 + 308);
    if ( (v28 & 0x10) == 0
      && (v28 & 8) == 0
      && (*(_DWORD *)(v27 + 1916) & 0x80u) == 0
      && v11 != *(__int64 **)(v12 + 104) )
    {
      v29 = WdLogNewEntry5_WdAssertion(v27, v15);
      *(_QWORD *)(v29 + 24) = 22035LL;
      WdLogEvent5_WdAssertion(v29);
      return 3221225485LL;
    }
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v12 + 480, 0LL);
  if ( *(_DWORD *)(v12 + 344) && (*(_DWORD *)(v12 + 84) & 0x20) == 0 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v31, v30);
    *(_QWORD *)(v32 + 24) = 22046LL;
LABEL_37:
    WdLogEvent5_WdAssertion(v32);
    ExReleasePushLockExclusiveEx(v12 + 480, 0LL);
    KeLeaveCriticalRegion();
    return 3221225485LL;
  }
  if ( !*((_DWORD *)v11 + 19) )
  {
    v33 = *(unsigned int *)(v12 + 76);
    if ( (*(_DWORD *)(v12 + 80) & 0x80u) == 0 )
    {
      if ( (v33 & 0x80u) == 0LL )
      {
        v32 = WdLogNewEntry5_WdAssertion(v31, v33);
        *(_QWORD *)(v32 + 24) = 22097LL;
        goto LABEL_37;
      }
    }
    else
    {
      v34 = v33 & 0x40;
      if ( (**(_DWORD **)(v12 + 504) & 4) != 0 )
      {
        if ( !(_DWORD)v34 )
        {
          v35 = *(unsigned int *)(*((_QWORD *)this + 3) + 308LL);
          if ( (v35 & 8) == 0 )
          {
            v32 = WdLogNewEntry5_WdAssertion(v35, v34);
            *(_QWORD *)(v32 + 24) = 22072LL;
            goto LABEL_37;
          }
        }
      }
      else if ( *((_BYTE *)a2 + 25) & 1 | *((_DWORD *)a2 + 38) )
      {
        v36 = *(_DWORD *)(v12 + 76);
        if ( (v36 & 0xD0000) == 0 )
        {
          v37 = *(unsigned __int8 *)(1560LL * (v36 & 0x3F) + *((_QWORD *)this + 5023) + 437);
          if ( (v37 & 0x40) != 0 && !(_DWORD)v34 && (v36 & 0x100) == 0 )
          {
            v32 = WdLogNewEntry5_WdAssertion(v37, v34);
            *(_QWORD *)(v32 + 24) = 22082LL;
            goto LABEL_37;
          }
        }
      }
    }
  }
  if ( v11[3] )
  {
    v38 = *(_QWORD *)(v12 + 320);
    KeEnterCriticalRegion();
    if ( *(struct _KTHREAD **)(v38 + 16) == KeGetCurrentThread() )
    {
      v41 = *(_DWORD *)(v38 + 24);
      if ( v41 <= 0 )
      {
        v42 = WdLogNewEntry5_WdAssertion(v40, v39);
        *(_QWORD *)(v42 + 24) = 559LL;
        WdLogEvent5_WdAssertion(v42);
        v41 = *(_DWORD *)(v38 + 24);
      }
      v43 = v41 + 1;
    }
    else
    {
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v38, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v47 = *(_DWORD *)(v38 + 28);
          if ( v47 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v45, (const EVENT_DESCRIPTOR *)"g", v46, v47);
        }
        _InterlockedIncrement64((volatile signed __int64 *)(v38 + 8));
        ExAcquirePushLockExclusiveEx(v38, 0LL);
      }
      if ( *(_QWORD *)(v38 + 16) )
      {
        v48 = WdLogNewEntry5_WdAssertion(v45, v44);
        *(_QWORD *)(v48 + 24) = 583LL;
        WdLogEvent5_WdAssertion(v48);
      }
      if ( *(_DWORD *)(v38 + 24) )
      {
        v49 = WdLogNewEntry5_WdAssertion(v45, v44);
        *(_QWORD *)(v49 + 24) = 584LL;
        WdLogEvent5_WdAssertion(v49);
      }
      *(_QWORD *)(v38 + 16) = KeGetCurrentThread();
      v43 = 1;
    }
    *(_DWORD *)(v38 + 24) = v43;
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v11[1] + 24) + 152LL))(*(_QWORD *)(v11[1] + 24), v11[3]);
    v52 = *(_QWORD *)(v12 + 320);
    if ( *(struct _KTHREAD **)(v52 + 16) != KeGetCurrentThread() )
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v51, v50);
      v53[3] = 275LL;
      v53[4] = 4LL;
      v53[5] = v52;
      v53[6] = 0LL;
      v53[7] = 0LL;
      WdLogEvent5_WdCriticalError(v53);
    }
    v54 = *(_DWORD *)(v52 + 24);
    if ( v54 <= 0 )
    {
      v55 = WdLogNewEntry5_WdAssertion(v51, v50);
      *(_QWORD *)(v55 + 24) = 603LL;
      WdLogEvent5_WdAssertion(v55);
      v54 = *(_DWORD *)(v52 + 24);
    }
    v56 = v54 - 1;
    *(_DWORD *)(v52 + 24) = v56;
    if ( !v56 )
    {
      *(_QWORD *)(v52 + 16) = 0LL;
      ExReleasePushLockExclusiveEx(v52, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  v57 = *a2;
  v80 = 0LL;
  v58 = *v57;
  if ( !*((_DWORD *)v57 + 19) )
  {
    v59 = *(_DWORD *)(v58 + 80);
    v60 = *(_QWORD *)(v58 + 136);
    LODWORD(v80) = 1;
    if ( (v59 & 0x80u) == 0 )
    {
      LODWORD(v80) = 5;
    }
    else if ( v60 )
    {
      if ( (*((_DWORD *)this + 1760) & 0x20) != 0 )
        goto LABEL_80;
      v61 = *(_DWORD *)(v60 + 80);
      if ( (v61 & 0x1001) == 0 )
      {
        if ( (**(_DWORD **)(v58 + 504) & 4) != 0 && !*(_BYTE *)(v60 + 474) || (v59 & 0x10000) != 0 )
          goto LABEL_80;
        if ( (v61 & 4) != 0 )
        {
          if ( (v57[4] & 1) == 0 )
          {
            LODWORD(v80) = 3;
            if ( *(_QWORD *)(v58 + 264) )
            {
LABEL_72:
              v62 = 1;
              goto LABEL_79;
            }
          }
        }
        else
        {
          if ( (v61 & 0x2000) == 0 )
            goto LABEL_72;
          v63 = *(_QWORD *)(v58 + 104);
          if ( !v63 || (*(_BYTE *)(v63 + 32) & 1) == 0 )
            goto LABEL_72;
          LODWORD(v80) = 0;
        }
      }
    }
  }
  v8 = VIDMM_GLOBAL::LockInternal(this, (struct VIDMM_LOCK2_DATA *)&v80, (struct VIDMM_ALLOC *)a2, a4, 0, 0LL, 0LL);
  v62 = BYTE4(v80);
LABEL_79:
  if ( !v62 )
  {
    ExReleasePushLockExclusiveEx(v12 + 480, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_82;
  }
LABEL_80:
  ExReleasePushLockExclusiveEx(v12 + 480, 0LL);
  KeLeaveCriticalRegion();
  v64 = *(_DWORD *)(v12 + 76) & 0x3F;
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
  v8 = VIDMM_GLOBAL::QueueDeferredCommand(this, v67, (struct _VIDMM_DEFERRED_COMMAND *)&v68, 1, 0LL);
LABEL_82:
  if ( v8 >= 0 && (*((_BYTE *)this + 40872) & 0x10) == 0 )
    VIDMM_GLOBAL::xWaitForAllPagingEngines(
      this,
      (struct _VIDSCH_SYNC_OBJECT **)this + (*(_DWORD *)(v12 + 76) & 0x3F) + 746,
      (const unsigned __int64 *)(v12 + 176),
      1u,
      (const unsigned __int64 *)this + (*(_DWORD *)(v12 + 76) & 0x3F) + 682,
      *(_DWORD *)(v12 + 76) & 0x3F);
  return (unsigned int)v8;
}
