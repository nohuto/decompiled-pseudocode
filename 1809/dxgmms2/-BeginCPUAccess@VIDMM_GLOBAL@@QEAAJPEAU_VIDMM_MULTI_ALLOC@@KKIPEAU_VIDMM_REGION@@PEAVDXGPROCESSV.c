/*
 * XREFs of ?BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAVDXGPROCESSVIDMMLOCK@@PEAPEAX@Z @ 0x1C007851C
 * Callers:
 *     ?VidMmBeginCPUAccess@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAVDXGPROCESSVIDMMLOCK@@PEAPEAX@Z @ 0x1C0010B70 (-VidMmBeginCPUAccess@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAVDXG.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001BE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001C40 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z @ 0x1C0002470 (-VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0010A40 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCurrentProcess@VIDMM_PROCESS@@QEAAEXZ @ 0x1C0010BA0 (-IsCurrentProcess@VIDMM_PROCESS@@QEAAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppqq @ 0x1C002668C (McTemplateK0ppqq.c)
 *     ?WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C007ACA0 (-WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?LockParavirtualizedAllocationOnHost@@YAJPEAUVIDMM_ALLOC@@PEAPEAX@Z @ 0x1C00A9DC0 (-LockParavirtualizedAllocationOnHost@@YAJPEAUVIDMM_ALLOC@@PEAPEAX@Z.c)
 *     ?SetupAllocationForCPUAccess@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@IEE@Z @ 0x1C00AC2E4 (-SetupAllocationForCPUAccess@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@IEE@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::BeginCPUAccess(
        GUID *this,
        struct _VIDMM_MULTI_ALLOC *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        struct _VIDMM_REGION *a6,
        VIDMM_GLOBAL **a7,
        void **a8)
{
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 v11; // rbx
  __int64 *v12; // r12
  __int64 v13; // rsi
  unsigned int v14; // ebp
  __int64 v15; // rcx
  __int64 v16; // rdx
  const GUID *v17; // r8
  __int64 v18; // rdx
  int v19; // eax
  void *v20; // rax
  bool v21; // zf
  __int64 v22; // rax
  char v23; // bl
  __int64 v25; // rax
  VIDMM_GLOBAL *v26; // rcx
  char *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  unsigned int v40; // r8d
  unsigned __int8 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rax
  unsigned __int8 v48; // [rsp+20h] [rbp-58h]
  unsigned int v50; // [rsp+90h] [rbp+18h]

  v8 = 0LL;
  v9 = a4;
  v50 = 0;
  LODWORD(v11) = 0;
  if ( *(_WORD *)(*((_QWORD *)a2 + 12) + 4LL) )
  {
    if ( DxgkVidMmAllowFailOnOfferReclaimErrors() )
    {
      v31 = WdLogNewEntry5_WdAssertion(v29, v28);
      *(_QWORD *)(v31 + 24) = a2;
      *(_QWORD *)(v31 + 32) = 2LL;
LABEL_44:
      WdLogEvent5_WdAssertion(v31);
LABEL_46:
      LODWORD(v11) = -1073741811;
      return (unsigned int)v11;
    }
    v33 = WdLogNewEntry5_WdError(v29, v28, v30);
    *(_QWORD *)(v33 + 24) = a2;
    *(_QWORD *)(v33 + 32) = 2LL;
    WdLogEvent5_WdError(v33);
  }
  v12 = *(__int64 **)a2;
  v13 = **(_QWORD **)a2;
  if ( (*(_DWORD *)(v13 + 84) & 0x20) != 0 )
  {
    v34 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v34 + 24) = 7549LL;
    WdLogEvent5_WdAssertion(v34);
    return (unsigned int)v11;
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    v35 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v35 + 24) = a2;
    *(_QWORD *)(v35 + 32) = v9;
  }
  v14 = v9 & 0xFFFFFFA7;
  *a8 = 0LL;
  if ( (v14 & 0xFFFFFC58) != 0 )
  {
    v31 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v31 + 24) = v14;
    goto LABEL_44;
  }
  v15 = **(unsigned int **)(v13 + 504);
  if ( (v15 & 1) == 0 )
  {
    v32 = WdLogNewEntry5_WdError(v15, a2, a3);
    *(_QWORD *)(v32 + 24) = 7589LL;
    WdLogEvent5_WdError(v32);
    goto LABEL_46;
  }
  if ( (v15 & 8) == 0
    && !VIDMM_PROCESS::IsCurrentProcess((VIDMM_PROCESS *)v12[1])
    && (*(_DWORD *)(v13 + 80) & 0x800) == 0 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v15, v16);
    *(_QWORD *)(v31 + 24) = 7604LL;
    goto LABEL_44;
  }
  v17 = this;
  v18 = **(unsigned int **)(v13 + 504);
  if ( (**(_DWORD **)(v13 + 504) & 0x60000000) == 0x20000000 && v12 != *(__int64 **)(v13 + 104) )
  {
    v15 = *(unsigned int *)(*(_QWORD *)this[1].Data4 + 308LL);
    if ( (v15 & 0x10) == 0 && (v15 & 8) == 0 )
    {
      v31 = WdLogNewEntry5_WdAssertion(v15, v18);
      *(_QWORD *)(v31 + 24) = 7619LL;
      goto LABEL_44;
    }
  }
  if ( (v14 & 0x82) != 0 )
  {
    if ( (*(_DWORD *)(v13 + 76) & 0x40) == 0 )
    {
      v31 = WdLogNewEntry5_WdAssertion(v15, v18);
      *(_QWORD *)(v31 + 24) = 7645LL;
      goto LABEL_44;
    }
    if ( !BYTE1(this[442].Data1) && (v18 & 4) != 0 )
    {
      v31 = WdLogNewEntry5_WdAssertion(v15, v18);
      *(_QWORD *)(v31 + 24) = 7656LL;
      goto LABEL_44;
    }
  }
  if ( (v14 & 0x81) != 0 )
  {
    if ( (v14 & 0x100) != 0 )
    {
      v25 = WdLogNewEntry5_WdEvent(v15, v18);
      LODWORD(v11) = -1071775484;
      *(_QWORD *)(v25 + 24) = a2;
      *(_QWORD *)(v25 + 32) = -1071775484LL;
      WdLogEvent5_WdEvent(v25);
      return (unsigned int)v11;
    }
    v26 = *a7;
    if ( *a7 )
    {
      v27 = (char *)v26 + 144;
      *((_QWORD *)v27 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v27, 0LL);
      KeLeaveCriticalRegion();
    }
    VIDMM_GLOBAL::WaitOnAllocForceSync(v26, a2);
    v15 = (__int64)*a7;
    if ( *a7 )
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v15 + 144));
    v50 = 4;
  }
  else if ( (v14 & 2) == 0 )
  {
    if ( bTracingEnabled )
    {
      v36 = *((_QWORD *)a2 + 1);
      if ( v36 )
        v8 = *(_QWORD *)(v36 + 24);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0ppqq(v15, v18, this, v8, a2, v14, 2);
    }
    VidMmRecordLock((struct _VIDMM_GLOBAL_STATISTICS *)&this[448], v14, 2, 0);
    LODWORD(v11) = -1071775486;
    return (unsigned int)v11;
  }
  if ( v12[3] )
  {
    DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v13 + 320));
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v12[1] + 24) + 152LL))(*(_QWORD *)(v12[1] + 24), v12[3]);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v13 + 320));
  }
  _InterlockedIncrement((volatile signed __int32 *)(v13 + 344));
  v19 = *(_DWORD *)(v13 + 80);
  if ( (v19 & 0x2000) != 0 )
  {
    v20 = *(void **)(v13 + 528);
    goto LABEL_26;
  }
  if ( (v19 & 0x1000) != 0 )
  {
    DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v13 + 320));
    v11 = (int)LockParavirtualizedAllocationOnHost(a2, a8);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v13 + 320));
    if ( (int)v11 >= 0 )
      goto LABEL_27;
    v37 = WdLogNewEntry5_WdAssertion(v15, v18);
    *(_QWORD *)(v37 + 24) = v11;
    WdLogEvent5_WdAssertion(v37);
    goto LABEL_84;
  }
  v15 = **(unsigned int **)(v13 + 504);
  if ( (v15 & 0x40000000) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v15);
    goto LABEL_25;
  }
  if ( (*(_DWORD *)(v13 + 76) & 0x80u) == 0 )
  {
    DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v13 + 320));
    if ( (*(_DWORD *)(v13 + 76) & 0x100000) != 0 )
    {
      v42 = WdLogNewEntry5_WdWarning(v39, v38);
      *(_QWORD *)(v42 + 24) = v13;
    }
    else
    {
      if ( (this[440].Data1 & 0x20) != 0 || LOBYTE(this[442].Data1) )
      {
        LODWORD(v11) = -1073741823;
        goto LABEL_82;
      }
      v43 = *(_QWORD *)(v13 + 136);
      if ( !v43 || (*(_DWORD *)(v43 + 80) & 0x1001) != 0 )
        goto LABEL_82;
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v39);
      LODWORD(v11) = VIDMM_GLOBAL::SetupAllocationForCPUAccess((VIDMM_GLOBAL *)this, a2, v40, v41, v48);
      if ( (int)v11 >= 0 )
        goto LABEL_82;
      v42 = WdLogNewEntry5_WdWarning(v45, v44);
      *(_QWORD *)(v42 + 24) = a2;
    }
    WdLogEvent5_WdWarning(v42);
LABEL_82:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v13 + 320));
    if ( (int)v11 >= 0 )
      goto LABEL_69;
    v47 = WdLogNewEntry5_WdWarning(v46, v18);
    *(_QWORD *)(v47 + 24) = a2;
    WdLogEvent5_WdWarning(v47);
LABEL_84:
    _InterlockedDecrement((volatile signed __int32 *)(v13 + 344));
    return (unsigned int)v11;
  }
  if ( !g_IsInternalReleaseOrDbg )
    goto LABEL_24;
  WdLogNewEntry5_WdTrace(v15);
LABEL_69:
  v15 = **(unsigned int **)(v13 + 504);
LABEL_24:
  if ( (v15 & 8) != 0 )
  {
    v20 = *(void **)(v13 + 368);
    goto LABEL_26;
  }
LABEL_25:
  v20 = (void *)v12[2];
LABEL_26:
  *a8 = v20;
LABEL_27:
  v21 = bTracingEnabled == 0;
  *(_BYTE *)(v13 + 97) = 1;
  if ( v21 )
  {
    v23 = v50;
  }
  else
  {
    v22 = *((_QWORD *)a2 + 1);
    if ( v22 )
      v8 = *(_QWORD *)(v22 + 24);
    v23 = v50;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0ppqq(v15, v18, v17, v8, a2, v14, v50);
  }
  VidMmRecordLock((struct _VIDMM_GLOBAL_STATISTICS *)&this[448], v14, v23, 0);
  return 0LL;
}
