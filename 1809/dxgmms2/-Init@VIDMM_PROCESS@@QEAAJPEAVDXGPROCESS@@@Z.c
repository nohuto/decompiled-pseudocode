/*
 * XREFs of ?Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C005F214
 * Callers:
 *     VidMmCreateProcess @ 0x1C00015E0 (VidMmCreateProcess.c)
 * Callees:
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C000164C (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000166C (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z @ 0x1C00016C8 (-VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001AD8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ??0VIDMM_PROCESS_FENCE_STORAGE@@QEAA@PEAVVIDMM_PROCESS@@@Z @ 0x1C005E8F8 (--0VIDMM_PROCESS_FENCE_STORAGE@@QEAA@PEAVVIDMM_PROCESS@@@Z.c)
 *     ??0VIDMM_RECYCLE_HEAP_MGR@@QEAA@XZ @ 0x1C005E964 (--0VIDMM_RECYCLE_HEAP_MGR@@QEAA@XZ.c)
 *     ??0VIDMM_PROCESS_HEAP@@QEAA@XZ @ 0x1C00C2480 (--0VIDMM_PROCESS_HEAP@@QEAA@XZ.c)
 */

__int64 __fastcall VIDMM_PROCESS::Init(struct VIDMM_PARTITION **this, struct DXGPROCESS *a2)
{
  unsigned int v2; // ebx
  char v5; // al
  struct VIDMM_PARTITION *v6; // rcx
  VIDMM_PROCESS_FENCE_STORAGE *v7; // rax
  __int64 v8; // rcx
  VIDMM_PROCESS_FENCE_STORAGE *v9; // rax
  char v10; // al
  char *v11; // rax
  __int64 v12; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v13; // rax
  int v14; // ebp
  DXGGLOBAL *Global; // rax
  unsigned int MaximumAdapterCount; // ebp
  SIZE_T v17; // rax
  struct VIDMM_PARTITION *v18; // rax
  __int64 v19; // rcx
  struct VIDMM_PROCESS *v20; // rcx
  int v21; // eax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  VIDMM_PROCESS_HEAP *v26; // rax
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  v2 = 0;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
  v5 = *((_BYTE *)a2 + 323);
  if ( (v5 & 8) != 0 )
  {
    v6 = *(struct VIDMM_PARTITION **)(*((_QWORD *)a2 + 57) + 472LL);
  }
  else if ( (v5 & 4) != 0 )
  {
    v6 = (struct VIDMM_PARTITION *)*((_QWORD *)a2 + 59);
  }
  else
  {
    v6 = (struct VIDMM_PARTITION *)*((_QWORD *)a2 + 7);
  }
  *this = v6;
  this[1] = (struct VIDMM_PARTITION *)*((_QWORD *)a2 + 8);
  this[4] = a2;
  v7 = (VIDMM_PROCESS_FENCE_STORAGE *)operator new[](0x48uLL, 0x34346956u, (POOL_TYPE)512);
  if ( v7 )
    v9 = VIDMM_PROCESS_FENCE_STORAGE::VIDMM_PROCESS_FENCE_STORAGE(v7, (struct VIDMM_PROCESS *)this);
  else
    v9 = 0LL;
  this[5] = v9;
  if ( !v9 )
  {
    _InterlockedIncrement(&dword_1C004D628);
    v23 = WdLogNewEntry5_WdLowResource(v8);
    *(_QWORD *)(v23 + 24) = 212LL;
LABEL_29:
    WdLogEvent5_WdLowResource(v23);
    return 3221225495LL;
  }
  v10 = *((_BYTE *)a2 + 323);
  if ( (v10 & 8) != 0 )
  {
    v24 = *(_QWORD *)(*((_QWORD *)a2 + 57) + 72LL);
    if ( v24 )
      v25 = *(_QWORD *)(v24 + 8);
    else
      v25 = 0LL;
    this[3] = *(struct VIDMM_PARTITION **)(v25 + 24);
    goto LABEL_15;
  }
  if ( !dword_1C004D348 && (v10 & 4) == 0 )
  {
    v26 = (VIDMM_PROCESS_HEAP *)operator new[](0x140uLL, 0x30316956u, (POOL_TYPE)512);
    if ( v26 )
    {
      v13 = VIDMM_PROCESS_HEAP::VIDMM_PROCESS_HEAP(v26);
      goto LABEL_13;
    }
LABEL_37:
    v13 = 0LL;
    goto LABEL_13;
  }
  v11 = (char *)operator new[](0x648uLL, 0x30316956u, (POOL_TYPE)512);
  if ( !v11 )
    goto LABEL_37;
  v13 = VIDMM_RECYCLE_HEAP_MGR::VIDMM_RECYCLE_HEAP_MGR(v11);
LABEL_13:
  this[3] = v13;
  if ( !v13 )
  {
    _InterlockedIncrement(&dword_1C004D674);
    v23 = WdLogNewEntry5_WdLowResource(v12);
    *(_QWORD *)(v23 + 24) = 247LL;
    goto LABEL_29;
  }
  KeStackAttachProcess(*this, &ApcState);
  v14 = (*(__int64 (__fastcall **)(struct VIDMM_PARTITION *, struct VIDMM_PARTITION **))(*(_QWORD *)this[3] + 8LL))(
          this[3],
          this);
  KeUnstackDetachProcess(&ApcState);
  if ( v14 < 0 )
    return (unsigned int)v14;
LABEL_15:
  Global = DXGGLOBAL::GetGlobal();
  MaximumAdapterCount = DXGGLOBAL::GetMaximumAdapterCount(Global);
  v17 = 8LL * MaximumAdapterCount;
  if ( !is_mul_ok(MaximumAdapterCount, 8uLL) )
    v17 = -1LL;
  v18 = (struct VIDMM_PARTITION *)operator new[](v17, 0x33316956u, PagedPool);
  this[2] = v18;
  if ( !v18 )
  {
    _InterlockedIncrement(&dword_1C004D618);
    v23 = WdLogNewEntry5_WdLowResource(v19);
    *(_QWORD *)(v23 + 24) = 282LL;
    goto LABEL_29;
  }
  memset(v18, 0, 8LL * MaximumAdapterCount);
  if ( *((_BYTE *)a2 + 321) )
  {
    *((_DWORD *)this + 22) |= 2u;
    g_pVidMmSystemProcess = (VIDMM_PROCESS *)this;
  }
  v21 = VidMmiOpenCurrentPartition(v20, this + 33);
  if ( v21 < 0 )
    return (unsigned int)v21;
  return v2;
}
