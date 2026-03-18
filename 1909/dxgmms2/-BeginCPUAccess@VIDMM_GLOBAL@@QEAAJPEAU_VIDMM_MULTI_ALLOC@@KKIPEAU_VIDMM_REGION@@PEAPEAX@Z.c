/*
 * XREFs of ?BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAPEAX@Z @ 0x1C0061074
 * Callers:
 *     VidMmBeginCPUAccess @ 0x1C0001740 (VidMmBeginCPUAccess.c)
 * Callees:
 *     ?IsCurrentProcess@VIDMM_PROCESS@@QEAAEXZ @ 0x1C0001764 (-IsCurrentProcess@VIDMM_PROCESS@@QEAAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B50 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002BD0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z @ 0x1C00033D0 (-VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppqq @ 0x1C0025E28 (McTemplateK0ppqq.c)
 *     ?WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C007C190 (-WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?LockParavirtualizedAllocationOnHost@@YAJPEAUVIDMM_ALLOC@@PEAPEAX@Z @ 0x1C00AD1EC (-LockParavirtualizedAllocationOnHost@@YAJPEAUVIDMM_ALLOC@@PEAPEAX@Z.c)
 *     ?SetupAllocationForCPUAccess@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@IEE@Z @ 0x1C00AF584 (-SetupAllocationForCPUAccess@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@IEE@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::BeginCPUAccess(
        GUID *this,
        __int64 **a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        struct _VIDMM_REGION *a6,
        void **a7)
{
  __int64 *v7; // r13
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // ebp
  __int64 v16; // rcx
  __int64 v17; // rdx
  const GUID *v18; // r8
  __int64 v19; // rdx
  int v20; // eax
  void *v21; // rax
  bool v22; // zf
  __int64 *v23; // rax
  __int64 v24; // r9
  char v25; // bl
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned int v39; // r8d
  unsigned __int8 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rax
  unsigned __int8 v47; // [rsp+20h] [rbp-58h]
  unsigned int v49; // [rsp+90h] [rbp+18h]

  v7 = *a2;
  v8 = 0LL;
  v9 = a4;
  v49 = 0;
  LODWORD(v11) = 0;
  v12 = **a2;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v12 + 480, 0LL);
  if ( *((_WORD *)a2[12] + 2) )
  {
    if ( DxgkVidMmAllowFailOnOfferReclaimErrors() )
    {
      v30 = WdLogNewEntry5_WdAssertion(v29, v28);
      *(_QWORD *)(v30 + 24) = a2;
      *(_QWORD *)(v30 + 32) = 2LL;
LABEL_43:
      WdLogEvent5_WdAssertion(v30);
LABEL_45:
      LODWORD(v11) = -1073741811;
      goto LABEL_34;
    }
    v32 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v32 + 24) = a2;
    *(_QWORD *)(v32 + 32) = 2LL;
    WdLogEvent5_WdError(v32);
  }
  if ( (*(_DWORD *)(v12 + 84) & 0x20) != 0 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v14, v13);
    *(_QWORD *)(v33 + 24) = 7707LL;
    WdLogEvent5_WdAssertion(v33);
    goto LABEL_34;
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    v34 = WdLogNewEntry5_WdTrace(v14);
    *(_QWORD *)(v34 + 24) = a2;
    *(_QWORD *)(v34 + 32) = v9;
  }
  v15 = v9 & 0xFFFFFFA7;
  *a7 = 0LL;
  if ( (v15 & 0xFFFFFC58) != 0 )
  {
    v30 = WdLogNewEntry5_WdAssertion(v14, v13);
    *(_QWORD *)(v30 + 24) = v15;
    goto LABEL_43;
  }
  v16 = **(unsigned int **)(v12 + 504);
  if ( (v16 & 1) == 0 )
  {
    v31 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v31 + 24) = 7747LL;
    WdLogEvent5_WdError(v31);
    goto LABEL_45;
  }
  if ( (v16 & 8) == 0
    && !VIDMM_PROCESS::IsCurrentProcess((VIDMM_PROCESS *)v7[1])
    && (*(_DWORD *)(v12 + 80) & 0x1000) == 0 )
  {
    v30 = WdLogNewEntry5_WdAssertion(v16, v17);
    *(_QWORD *)(v30 + 24) = 7762LL;
    goto LABEL_43;
  }
  v18 = this;
  v19 = **(unsigned int **)(v12 + 504);
  if ( (**(_DWORD **)(v12 + 504) & 0x60000000) == 0x20000000 && v7 != *(__int64 **)(v12 + 104) )
  {
    v16 = *(unsigned int *)(*(_QWORD *)this[1].Data4 + 308LL);
    if ( (v16 & 0x10) == 0 && (v16 & 8) == 0 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v16, v19);
      *(_QWORD *)(v30 + 24) = 7777LL;
      goto LABEL_43;
    }
  }
  if ( (v15 & 0x82) != 0 )
  {
    if ( (*(_DWORD *)(v12 + 76) & 0x40) == 0 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v16, v19);
      *(_QWORD *)(v30 + 24) = 7803LL;
      goto LABEL_43;
    }
    if ( !BYTE1(this[442].Data1) && (v19 & 4) != 0 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v16, v19);
      *(_QWORD *)(v30 + 24) = 7814LL;
      goto LABEL_43;
    }
  }
  if ( (v15 & 0x81) != 0 )
  {
    if ( (v15 & 0x100) != 0 )
    {
      LODWORD(v11) = -1071775484;
      v27 = WdLogNewEntry5_WdEvent(v16, v19);
      *(_QWORD *)(v27 + 24) = a2;
      *(_QWORD *)(v27 + 32) = -1071775484LL;
      WdLogEvent5_WdEvent(v27);
      goto LABEL_34;
    }
    VIDMM_GLOBAL::WaitOnAllocForceSync((VIDMM_GLOBAL *)v16, (struct VIDMM_ALLOC *)a2);
    v49 = 4;
LABEL_16:
    if ( v7[3] )
    {
      DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v12 + 320));
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v7[1] + 24) + 152LL))(*(_QWORD *)(v7[1] + 24), v7[3]);
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v12 + 320));
    }
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 344));
    v20 = *(_DWORD *)(v12 + 80);
    if ( (v20 & 0x4000) != 0 )
    {
      v21 = *(void **)(v12 + 536);
      goto LABEL_25;
    }
    if ( (v20 & 0x2000) != 0 )
    {
      DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v12 + 320));
      v11 = (int)LockParavirtualizedAllocationOnHost((struct VIDMM_ALLOC *)a2, a7);
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v12 + 320));
      if ( (int)v11 >= 0 )
        goto LABEL_26;
      v36 = WdLogNewEntry5_WdAssertion(v16, v19);
      *(_QWORD *)(v36 + 24) = v11;
      WdLogEvent5_WdAssertion(v36);
      goto LABEL_32;
    }
    v16 = **(unsigned int **)(v12 + 504);
    if ( (v16 & 0x40000000) != 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v16);
      goto LABEL_24;
    }
    if ( (*(_DWORD *)(v12 + 76) & 0x80u) != 0 )
    {
      if ( !g_IsInternalReleaseOrDbg )
        goto LABEL_23;
      WdLogNewEntry5_WdTrace(v16);
LABEL_68:
      v16 = **(unsigned int **)(v12 + 504);
LABEL_23:
      if ( (v16 & 8) != 0 )
      {
        v21 = *(void **)(v12 + 368);
        goto LABEL_25;
      }
LABEL_24:
      v21 = (void *)v7[2];
LABEL_25:
      *a7 = v21;
LABEL_26:
      v22 = bTracingEnabled == 0;
      *(_BYTE *)(v12 + 97) = 1;
      if ( v22 )
      {
        v25 = v49;
      }
      else
      {
        v23 = a2[1];
        v24 = 0LL;
        if ( v23 )
          v24 = v23[3];
        v25 = v49;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0ppqq(v16, v19, v18, v24, a2, v15, v49);
      }
      VidMmRecordLock((struct _VIDMM_GLOBAL_STATISTICS *)&this[448], v15, v25, 0);
      LODWORD(v11) = 0;
      goto LABEL_32;
    }
    DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v12 + 320));
    if ( (*(_DWORD *)(v12 + 76) & 0x100000) != 0 )
    {
      v41 = WdLogNewEntry5_WdWarning(v38, v37);
      *(_QWORD *)(v41 + 24) = v12;
    }
    else
    {
      if ( (this[440].Data1 & 0x20) != 0 || LOBYTE(this[442].Data1) )
      {
        LODWORD(v11) = -1073741823;
        goto LABEL_81;
      }
      v42 = *(_QWORD *)(v12 + 136);
      if ( !v42 || (*(_DWORD *)(v42 + 80) & 0x1001) != 0 )
        goto LABEL_81;
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v38);
      LODWORD(v11) = VIDMM_GLOBAL::SetupAllocationForCPUAccess(
                       (VIDMM_GLOBAL *)this,
                       (struct VIDMM_ALLOC *)a2,
                       v39,
                       v40,
                       v47);
      if ( (int)v11 >= 0 )
        goto LABEL_81;
      v41 = WdLogNewEntry5_WdWarning(v44, v43);
      *(_QWORD *)(v41 + 24) = a2;
    }
    WdLogEvent5_WdWarning(v41);
LABEL_81:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v12 + 320));
    if ( (int)v11 >= 0 )
      goto LABEL_68;
    v46 = WdLogNewEntry5_WdWarning(v45, v19);
    *(_QWORD *)(v46 + 24) = a2;
    WdLogEvent5_WdWarning(v46);
LABEL_32:
    if ( (int)v11 < 0 )
      _InterlockedDecrement((volatile signed __int32 *)(v12 + 344));
    goto LABEL_34;
  }
  if ( (v15 & 2) != 0 )
    goto LABEL_16;
  if ( bTracingEnabled )
  {
    v35 = a2[1];
    if ( v35 )
      v8 = v35[3];
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0ppqq(v16, v19, this, v8, a2, v15, 2);
  }
  VidMmRecordLock((struct _VIDMM_GLOBAL_STATISTICS *)&this[448], v15, 2, 0);
  LODWORD(v11) = -1071775486;
LABEL_34:
  ExReleasePushLockExclusiveEx(v12 + 480, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v11;
}
