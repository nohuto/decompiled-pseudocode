/*
 * XREFs of ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006AE90
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C000257C (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B90 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppq @ 0x1C0025CF0 (McTemplateK0ppq.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006A9D0 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006AB2C (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006B144 (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C0080A70 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?IoMmuMapAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00ACED0 (-IoMmuMapAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_SYSMEM_SEGMENT::CommitResource(VIDMM_GLOBAL **this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v4; // rdx
  VIDMM_GLOBAL *v5; // rcx
  bool v6; // bp
  int v7; // esi
  VIDMM_GLOBAL *v8; // rcx
  __int64 v9; // rcx
  const GUID *v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  VIDMM_SYSMEM_SEGMENT *v14; // rax
  VIDMM_SYSMEM_SEGMENT **v15; // rdx
  unsigned int v16; // ecx
  int v17; // edx
  int v18; // eax
  int v19; // ecx
  __int64 v20; // r8
  unsigned int v21; // eax
  struct _VIDMM_GLOBAL_ALLOC *i; // r9
  __int64 v23; // rcx
  VIDMM_GLOBAL *v24; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  VIDMM_GLOBAL *v31; // r9
  __int64 v32; // rax
  signed __int32 v33[8]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v34; // [rsp+28h] [rbp-10h]

  if ( g_IsInternalReleaseOrDbg )
  {
    v26 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v26 + 24) = a2;
    *(_QWORD *)(v26 + 32) = *((int *)a2 + 87);
  }
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(this[1], a2, 1u);
  v5 = this[1];
  if ( *(_BYTE *)(*((_QWORD *)v5 + 3) + 2502LL) || *(_BYTE *)(*((_QWORD *)v5 + 2) + 777LL) )
  {
    v32 = WdLogNewEntry5_WdEvent(v5, v4);
    *(_QWORD *)(v32 + 24) = a2;
    WdLogEvent5_WdEvent(v32);
    return 3221226166LL;
  }
  v6 = 0;
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 40));
  if ( (*((_DWORD *)a2 + 21) & 2) != 0 )
  {
    VIDMM_GLOBAL::ReturnPinnedBackingStore(this[1], *((_QWORD *)a2 + 1));
    v7 = 0;
  }
  else
  {
    v7 = VIDMM_SEGMENT::LockAllocationBackingStore((VIDMM_SEGMENT *)this, a2);
    v6 = v7 >= 0;
  }
  *((_DWORD *)a2 + 21) &= ~2u;
  if ( v7 < 0 )
    goto LABEL_34;
  if ( (**((_DWORD **)a2 + 63) & 0x4000) != 0 && !*((_QWORD *)a2 + 46) )
  {
    v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)a2 + 13) + 8LL) + 24LL)
                                                    + 112LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 13) + 8LL) + 24LL),
            *(_QWORD *)(*((_QWORD *)a2 + 13) + 24LL));
    if ( !v27 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v29, v28);
      *(_QWORD *)(v30 + 24) = a2;
      WdLogEvent5_WdAssertion(v30);
      v7 = -1073741801;
LABEL_34:
      if ( v6 )
        VIDMM_SEGMENT::UnlockAllocationBackingStore(this[1], a2, 0LL);
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40));
      return (unsigned int)v7;
    }
    *((_QWORD *)a2 + 46) = v27;
  }
  v8 = this[1];
  if ( *((_BYTE *)v8 + 40139) )
    v7 = VIDMM_GLOBAL::IoMmuMapAllocation(v8, a2);
  if ( v7 < 0 )
    goto LABEL_34;
  (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *))*this + 7))(this, a2);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
  {
    v31 = this[1];
    LODWORD(v34) = *((_DWORD *)this + 4) + 1;
    McTemplateK0ppq(v9, &EventPagingOpSysmemCommit, v10, *((_QWORD *)v31 + 3), a2, v34);
  }
  v11 = *((_QWORD *)a2 + 28);
  *((_QWORD *)a2 + 28) = 0LL;
  *((_DWORD *)a2 + 21) &= ~8u;
  *((_QWORD *)a2 + 17) = v11;
  v12 = *((_QWORD *)a2 + 27);
  *((_QWORD *)a2 + 27) = 0LL;
  *((_QWORD *)a2 + 18) = v12;
  v13 = *((_QWORD *)a2 + 26);
  *((_QWORD *)a2 + 26) = 0LL;
  *((_QWORD *)a2 + 19) = v13;
  v14 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 384);
  *((_DWORD *)a2 + 32) = 2;
  *((_BYTE *)a2 + 97) = 1;
  v15 = (VIDMM_SYSMEM_SEGMENT **)this[21];
  if ( *v15 != (VIDMM_SYSMEM_SEGMENT *)(this + 20) )
    __fastfail(3u);
  *(_QWORD *)v14 = this + 20;
  *((_QWORD *)a2 + 49) = v15;
  *v15 = v14;
  this[21] = v14;
  v16 = *((_DWORD *)a2 + 18);
  if ( !v16
    || (((_DWORD)this[10] & 0x1000) == 0 ? (v17 = *((_DWORD *)this + 4) + 1) : (v17 = 0),
        (*((_DWORD *)a2 + 18) & 0x1F) == v17
     || (((_DWORD)this[10] & 0x1000) == 0 ? (v18 = *((_DWORD *)this + 4) + 1) : (v18 = 0), ((v16 >> 6) & 0x1F) == v18)) )
  {
    v19 = 0x800000;
  }
  else
  {
    v19 = 0;
  }
  v20 = *((_QWORD *)a2 + 13);
  v21 = v19 | *((_DWORD *)a2 + 19) & 0xFF7FFFFF;
  *((_DWORD *)a2 + 19) = v21;
  if ( v20 && *(_QWORD *)(v20 + 8) )
  {
    VidMmRecordAlloc(this[1], (__int64)a2, v20, (__int64)this, *((_QWORD *)a2 + 2), 0);
    v21 = *((_DWORD *)a2 + 19);
  }
  *(_QWORD *)(1560LL * (v21 & 0x3F) + *((_QWORD *)this[1] + 5023) + 1544) += *((_QWORD *)a2 + 2);
  for ( i = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 37);
        i != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296);
        i = *(struct _VIDMM_GLOBAL_ALLOC **)i )
  {
    v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)i - 6) + 16LL)
                                + 8LL * *(unsigned int *)(*((_QWORD *)this[1] + 3) + 208LL))
                    + 48LL)
        + 296LL * (*((_DWORD *)a2 + 19) & 0x3F);
    *(_QWORD *)(v23 + 240) += *((_QWORD *)a2 + 2);
  }
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40));
  v24 = this[1];
  _InterlockedOr(v33, 0);
  ++*((_QWORD *)v24 + 5);
  return 0LL;
}
