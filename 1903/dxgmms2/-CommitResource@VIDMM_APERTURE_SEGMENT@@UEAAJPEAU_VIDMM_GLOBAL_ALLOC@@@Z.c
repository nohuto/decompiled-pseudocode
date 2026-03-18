/*
 * XREFs of ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0084F50
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C000257C (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B90 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0018060 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C005A718 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C005B910 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006A31C (-VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006A9D0 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006AB2C (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006B144 (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006C398 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C0080A70 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?IoMmuMapAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00ACED0 (-IoMmuMapAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::CommitResource(VIDMM_GLOBAL **this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  char v6; // si
  int v7; // ebx
  struct _VIDMM_MDL *v8; // rax
  unsigned int *v9; // rcx
  struct _VIDMM_MDL *v10; // rdi
  __int64 v11; // rdx
  VIDMM_GLOBAL *v12; // rcx
  VIDMM_GLOBAL *v13; // rdi
  __int64 v14; // rsi
  BOOL v15; // ebx
  struct _MDL *FullMDL; // rax
  __int64 v17; // rcx
  __int16 v18; // cx
  VIDMM_APERTURE_SEGMENT *v19; // rax
  VIDMM_APERTURE_SEGMENT **v20; // rdx
  unsigned int v21; // ecx
  int v22; // edx
  int v23; // ecx
  __int64 v24; // r8
  __int64 v25; // rdx
  struct _VIDMM_GLOBAL_ALLOC *i; // r9
  __int64 v27; // rcx
  VIDMM_GLOBAL *v28; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // eax
  signed __int32 v38[8]; // [rsp+0h] [rbp-B8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-68h] BYREF

  if ( g_IsInternalReleaseOrDbg )
  {
    v30 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v30 + 24) = a2;
    *(_QWORD *)(v30 + 32) = *((int *)a2 + 87);
  }
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(this[1], a2, 1);
  if ( VIDMM_GLOBAL::IsTdrPending(this[1]) )
  {
    v31 = WdLogNewEntry5_WdEvent(v5, v4);
    *(_QWORD *)(v31 + 24) = a2;
    WdLogEvent5_WdEvent(v31);
    return 3221226166LL;
  }
  v6 = 0;
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 40));
  if ( (*((_DWORD *)a2 + 21) & 2) != 0 )
  {
    VIDMM_GLOBAL::ReturnPinnedBackingStore(this[1], *((_QWORD *)a2 + 1));
    goto LABEL_43;
  }
  if ( (*((_DWORD *)a2 + 20) & 0x400) != 0 )
  {
LABEL_43:
    v7 = 0;
    goto LABEL_15;
  }
  v7 = VIDMM_SEGMENT::LockAllocationBackingStore((VIDMM_SEGMENT *)this, a2);
  if ( v7 >= 0 )
  {
    v6 = 1;
    if ( (*(_DWORD *)(*((_QWORD *)this[1] + 3) + 308LL) & 4) == 0 && (*((_DWORD *)a2 + 20) & 0x8000) == 0 )
    {
      memset(&ApcState, 0, sizeof(ApcState));
      if ( (**((_DWORD **)a2 + 63) & 8) == 0 )
        KeStackAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a2 + 13) + 8LL), &ApcState);
      v8 = VidMmiProbeAndLockAllocation(a2, 0LL, *((_QWORD *)a2 + 1), IoModifyAccess, (struct VIDMM_SEGMENT *)this, 0LL);
      v9 = (unsigned int *)*((_QWORD *)a2 + 63);
      v10 = v8;
      v11 = *v9;
      if ( (v11 & 8) == 0 )
        KeUnstackDetachProcess(&ApcState);
      if ( v10 )
      {
        *((_QWORD *)a2 + 14) = v10;
      }
      else
      {
        v32 = WdLogNewEntry5_WdWarning(v9, v11);
        *(_QWORD *)(v32 + 24) = a2;
        WdLogEvent5_WdWarning(v32);
        v7 = -1073741801;
      }
    }
  }
LABEL_15:
  *((_DWORD *)a2 + 21) &= ~2u;
  if ( v7 < 0 )
  {
LABEL_48:
    if ( v6 )
      VIDMM_SEGMENT::UnlockAllocationBackingStore(this[1], a2, 0LL);
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40));
    return (unsigned int)v7;
  }
  if ( (**((_DWORD **)a2 + 63) & 0x4000) != 0 && !*((_QWORD *)a2 + 46) )
  {
    v33 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)a2 + 13) + 8LL) + 24LL)
                                                    + 112LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 13) + 8LL) + 24LL),
            *(_QWORD *)(*((_QWORD *)a2 + 13) + 24LL));
    if ( !v33 )
    {
      v36 = WdLogNewEntry5_WdAssertion(v35, v34);
      *(_QWORD *)(v36 + 24) = a2;
      WdLogEvent5_WdAssertion(v36);
      v7 = -1073741801;
      goto LABEL_48;
    }
    *((_QWORD *)a2 + 46) = v33;
  }
  v12 = this[1];
  if ( *((_BYTE *)v12 + 40139) )
    v7 = VIDMM_GLOBAL::IoMmuMapAllocation(v12, a2);
  if ( v7 < 0 )
    goto LABEL_48;
  if ( (*((_DWORD *)a2 + 20) & 0x400) == 0 )
  {
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *))*this + 7))(this, a2);
    v13 = *this;
    v14 = *((_QWORD *)a2 + 27) / 4096LL;
    v15 = (**((_DWORD **)a2 + 63) & 0x800004) == 4;
    FullMDL = VidMmGetFullMDL(a2, 0LL);
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64, __int64, struct _MDL *, _DWORD, BOOL))v13
     + 27))(
      this,
      a2,
      *((_QWORD *)a2 + 1) >> 12,
      v14,
      v14,
      FullMDL,
      0,
      v15);
  }
  v17 = *((_QWORD *)a2 + 28);
  *((_QWORD *)a2 + 18) = *((_QWORD *)a2 + 27);
  *((_QWORD *)a2 + 19) = *((_QWORD *)a2 + 26);
  *((_DWORD *)a2 + 32) = 2;
  *((_QWORD *)a2 + 17) = v17;
  if ( (*(_DWORD *)(v17 + 80) & 0x1000) != 0 )
    v18 = 0;
  else
    v18 = *(_DWORD *)(v17 + 16) + 1;
  *(_WORD *)(*((_QWORD *)a2 + 63) + 6LL) = v18;
  *(_QWORD *)(*((_QWORD *)a2 + 63) + 32LL) = *((_QWORD *)a2 + 18) + *(_QWORD *)(*((_QWORD *)a2 + 17) + 24LL);
  *((_QWORD *)a2 + 28) = 0LL;
  v19 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 384);
  *((_QWORD *)a2 + 27) = 0LL;
  *((_QWORD *)a2 + 26) = 0LL;
  *((_DWORD *)a2 + 21) &= ~8u;
  *((_BYTE *)a2 + 97) = 1;
  v20 = (VIDMM_APERTURE_SEGMENT **)this[21];
  if ( *v20 != (VIDMM_APERTURE_SEGMENT *)(this + 20) )
    __fastfail(3u);
  *(_QWORD *)v19 = this + 20;
  *((_QWORD *)a2 + 49) = v20;
  *v20 = v19;
  this[21] = v19;
  v21 = *((_DWORD *)a2 + 18);
  if ( !v21
    || (((_DWORD)this[10] & 0x1000) != 0 ? (v22 = 0) : (v22 = *((_DWORD *)this + 4) + 1),
        (*((_DWORD *)a2 + 18) & 0x1F) == v22
     || (((_DWORD)this[10] & 0x1000) == 0 ? (v37 = *((_DWORD *)this + 4) + 1) : (v37 = 0), ((v21 >> 6) & 0x1F) == v37)) )
  {
    v23 = 0x800000;
  }
  else
  {
    v23 = 0;
  }
  v24 = *((_QWORD *)a2 + 13);
  *((_DWORD *)a2 + 19) = v23 | *((_DWORD *)a2 + 19) & 0xFF7FFFFF;
  if ( v24 && *(_QWORD *)(v24 + 8) )
    VidMmRecordAlloc(this[1], (__int64)a2, v24, (__int64)this, *((_QWORD *)a2 + 2), 0);
  if ( (**((_DWORD **)a2 + 63) & 0x10000) != 0 )
    VIDMM_GLOBAL::NotifyResidency((ADAPTER_RENDER **)this[1], a2, 1u);
  v25 = 1560LL * (*((_DWORD *)a2 + 19) & 0x3F);
  *(_QWORD *)(v25 + *((_QWORD *)this[1] + 5023) + 1544) += *((_QWORD *)a2 + 2);
  for ( i = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 37);
        i != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296);
        i = *(struct _VIDMM_GLOBAL_ALLOC **)i )
  {
    v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)i - 6) + 16LL)
                                + 8LL * *(unsigned int *)(*((_QWORD *)this[1] + 3) + 208LL))
                    + 48LL)
        + 296LL * (*((_DWORD *)a2 + 19) & 0x3F);
    *(_QWORD *)(v27 + 240) += *((_QWORD *)a2 + 2);
  }
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40));
  v28 = this[1];
  _InterlockedOr(v38, 0);
  ++*((_QWORD *)v28 + 5);
  return 0LL;
}
