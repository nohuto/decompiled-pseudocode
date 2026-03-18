/*
 * XREFs of ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00861B0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C000253C (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B50 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002BD0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0018050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C005A324 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C005B520 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0069F2C (-VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006A5E0 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006A73C (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006AE5C (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006C0A8 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C0081BA0 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?IoMmuMapAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00ACB74 (-IoMmuMapAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::CommitResource(VIDMM_GLOBAL **this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  char v9; // r12
  char v10; // bp
  __int64 v11; // rbx
  struct _VIDMM_MDL *v12; // rax
  unsigned int *v13; // rcx
  struct _VIDMM_MDL *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  VIDMM_GLOBAL *v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // r15d
  int v26; // ecx
  BOOL v27; // ebp
  VIDMM_GLOBAL *v28; // rdi
  __int64 v29; // rbx
  struct _MDL *FullMDL; // rax
  __int64 v31; // rcx
  __int16 v32; // cx
  VIDMM_APERTURE_SEGMENT *v33; // rax
  VIDMM_APERTURE_SEGMENT **v34; // rdx
  unsigned int v35; // ecx
  int v36; // edx
  int v37; // eax
  __int64 v38; // r8
  __int64 v39; // rdx
  struct _VIDMM_GLOBAL_ALLOC *i; // r9
  __int64 v41; // rcx
  VIDMM_GLOBAL *v42; // rcx
  signed __int32 v43[8]; // [rsp+0h] [rbp-B8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-68h] BYREF

  if ( g_IsInternalReleaseOrDbg )
  {
    v4 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v4 + 24) = a2;
    *(_QWORD *)(v4 + 32) = *((int *)a2 + 87);
  }
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(this[1], a2, 1);
  if ( VIDMM_GLOBAL::IsTdrPending(this[1]) )
  {
    v7 = WdLogNewEntry5_WdEvent(v6, v5);
    *(_QWORD *)(v7 + 24) = a2;
    WdLogEvent5_WdEvent(v7);
    return 3221226166LL;
  }
  v9 = 0;
  v10 = 0;
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 40));
  if ( (*((_DWORD *)a2 + 21) & 2) != 0 )
  {
    v9 = 1;
LABEL_7:
    LODWORD(v11) = 0;
    goto LABEL_20;
  }
  if ( (*((_DWORD *)a2 + 20) & 0x400) != 0 )
    goto LABEL_7;
  LODWORD(v11) = VIDMM_SEGMENT::LockAllocationBackingStore((VIDMM_SEGMENT *)this, a2);
  if ( (int)v11 < 0 )
    goto LABEL_31;
  v10 = 1;
  if ( (*(_DWORD *)(*((_QWORD *)this[1] + 3) + 308LL) & 4) == 0 && (*((_DWORD *)a2 + 20) & 0x8000) == 0 )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    if ( (**((_DWORD **)a2 + 63) & 8) == 0 )
      KeStackAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a2 + 13) + 8LL), &ApcState);
    v12 = VidMmiProbeAndLockAllocation(a2, 0LL, *((_QWORD *)a2 + 1), IoModifyAccess, (struct VIDMM_SEGMENT *)this, 0LL);
    v13 = (unsigned int *)*((_QWORD *)a2 + 63);
    v14 = v12;
    v15 = *v13;
    if ( (v15 & 8) == 0 )
      KeUnstackDetachProcess(&ApcState);
    if ( v14 )
    {
      *((_QWORD *)a2 + 14) = v14;
    }
    else
    {
      v16 = WdLogNewEntry5_WdWarning(v13, v15);
      *(_QWORD *)(v16 + 24) = a2;
      WdLogEvent5_WdWarning(v16);
      LODWORD(v11) = -1073741801;
    }
  }
  if ( (int)v11 < 0 )
    goto LABEL_30;
LABEL_20:
  if ( (**((_DWORD **)a2 + 63) & 0x4000) != 0 && !*((_QWORD *)a2 + 46) )
  {
    v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)a2 + 13) + 8LL) + 24LL)
                                                    + 112LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 13) + 8LL) + 24LL),
            *(_QWORD *)(*((_QWORD *)a2 + 13) + 24LL));
    if ( !v17 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v19, v18);
      *(_QWORD *)(v20 + 24) = a2;
      WdLogEvent5_WdAssertion(v20);
      LODWORD(v11) = -1073741801;
      goto LABEL_29;
    }
    *((_QWORD *)a2 + 46) = v17;
  }
  v21 = this[1];
  if ( *((_BYTE *)v21 + 40139) )
  {
    v22 = VIDMM_GLOBAL::IoMmuMapAllocation(v21, a2);
    v11 = v22;
    if ( v22 >= 0 )
      goto LABEL_32;
    _InterlockedIncrement(&dword_1C004E734);
    v24 = WdLogNewEntry5_WdLowResource(v23);
    *(_QWORD *)(v24 + 24) = a2;
    *(_QWORD *)(v24 + 32) = v11;
    WdLogEvent5_WdLowResource(v24);
  }
  if ( (int)v11 < 0 )
  {
LABEL_29:
    if ( v10 )
LABEL_30:
      VIDMM_SEGMENT::UnlockAllocationBackingStore(this[1], a2, 0LL);
LABEL_31:
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40));
    return (unsigned int)v11;
  }
LABEL_32:
  v25 = 0x800000;
  if ( (*((_DWORD *)a2 + 20) & 0x400) == 0 )
  {
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *))*this + 7))(this, a2);
    v26 = **((_DWORD **)a2 + 63);
    v27 = (v26 & 4) != 0 && (v26 & 0x800000) == 0;
    v28 = *this;
    v29 = *((_QWORD *)a2 + 27) / 4096LL;
    FullMDL = VidMmGetFullMDL(a2, 0LL);
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64, __int64, struct _MDL *, _DWORD, BOOL))v28
     + 27))(
      this,
      a2,
      *((_QWORD *)a2 + 1) >> 12,
      v29,
      v29,
      FullMDL,
      0,
      v27);
  }
  v31 = *((_QWORD *)a2 + 28);
  *((_QWORD *)a2 + 18) = *((_QWORD *)a2 + 27);
  *((_QWORD *)a2 + 19) = *((_QWORD *)a2 + 26);
  *((_DWORD *)a2 + 32) = 2;
  *((_QWORD *)a2 + 17) = v31;
  if ( (*(_DWORD *)(v31 + 80) & 0x1000) != 0 )
    v32 = 0;
  else
    v32 = *(_DWORD *)(v31 + 16) + 1;
  *(_WORD *)(*((_QWORD *)a2 + 63) + 6LL) = v32;
  *(_QWORD *)(*((_QWORD *)a2 + 63) + 32LL) = *((_QWORD *)a2 + 18) + *(_QWORD *)(*((_QWORD *)a2 + 17) + 24LL);
  *((_QWORD *)a2 + 28) = 0LL;
  v33 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 384);
  *((_QWORD *)a2 + 27) = 0LL;
  *((_QWORD *)a2 + 26) = 0LL;
  *((_DWORD *)a2 + 21) &= ~8u;
  *((_BYTE *)a2 + 97) = 1;
  v34 = (VIDMM_APERTURE_SEGMENT **)this[21];
  if ( *v34 != (VIDMM_APERTURE_SEGMENT *)(this + 20) )
    __fastfail(3u);
  *(_QWORD *)v33 = this + 20;
  *((_QWORD *)a2 + 49) = v34;
  *v34 = v33;
  this[21] = v33;
  v35 = *((_DWORD *)a2 + 18);
  if ( v35 )
  {
    v36 = ((_DWORD)this[10] & 0x1000) != 0 ? 0 : *((_DWORD *)this + 4) + 1;
    if ( (*((_DWORD *)a2 + 18) & 0x1F) != v36 )
    {
      v37 = ((_DWORD)this[10] & 0x1000) != 0 ? 0 : *((_DWORD *)this + 4) + 1;
      if ( ((v35 >> 6) & 0x1F) != v37 )
        v25 = 0;
    }
  }
  v38 = *((_QWORD *)a2 + 13);
  *((_DWORD *)a2 + 19) = v25 | *((_DWORD *)a2 + 19) & 0xFF7FFFFF;
  if ( v38 && *(_QWORD *)(v38 + 8) )
    VidMmRecordAlloc(this[1], (__int64)a2, v38, (__int64)this, *((_QWORD *)a2 + 2), 0);
  if ( (**((_DWORD **)a2 + 63) & 0x10000) != 0 )
    VIDMM_GLOBAL::NotifyResidency((ADAPTER_RENDER **)this[1], a2, 1u);
  v39 = 1560LL * (*((_DWORD *)a2 + 19) & 0x3F);
  *(_QWORD *)(v39 + *((_QWORD *)this[1] + 5023) + 1544) += *((_QWORD *)a2 + 2);
  for ( i = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 37);
        i != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296);
        i = *(struct _VIDMM_GLOBAL_ALLOC **)i )
  {
    v41 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)i - 6) + 16LL)
                                + 8LL * *(unsigned int *)(*((_QWORD *)this[1] + 3) + 208LL))
                    + 48LL)
        + 296LL * (*((_DWORD *)a2 + 19) & 0x3F);
    *(_QWORD *)(v41 + 240) += *((_QWORD *)a2 + 2);
  }
  if ( v9 )
  {
    VIDMM_GLOBAL::ReturnPinnedBackingStore(this[1], *((_QWORD *)a2 + 1));
    *((_DWORD *)a2 + 21) &= ~2u;
  }
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40));
  v42 = this[1];
  _InterlockedOr(v43, 0);
  ++*((_QWORD *)v42 + 5);
  return 0LL;
}
