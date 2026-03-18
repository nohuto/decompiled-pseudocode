/*
 * XREFs of ?Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0065A58
 * Callers:
 *     VidMmCreateProcess @ 0x1C0001F50 (VidMmCreateProcess.c)
 * Callees:
 *     ?VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z @ 0x1C0001FBC (-VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C0002730 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002750 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002940 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0018060 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ??0VIDMM_RECYCLE_HEAP_MGR@@QEAA@XZ @ 0x1C0065C3C (--0VIDMM_RECYCLE_HEAP_MGR@@QEAA@XZ.c)
 *     ??0VIDMM_PROCESS_FENCE_STORAGE@@QEAA@PEAVVIDMM_PROCESS@@@Z @ 0x1C00661D4 (--0VIDMM_PROCESS_FENCE_STORAGE@@QEAA@PEAVVIDMM_PROCESS@@@Z.c)
 *     ??0VIDMM_PROCESS_HEAP@@QEAA@XZ @ 0x1C00C5464 (--0VIDMM_PROCESS_HEAP@@QEAA@XZ.c)
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
  PVOID v11; // rax
  __int64 v12; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v13; // rax
  int v14; // ebp
  DXGGLOBAL *Global; // rax
  unsigned int MaximumAdapterCount; // ebp
  SIZE_T v17; // rax
  struct VIDMM_PARTITION *v18; // rax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  VIDMM_PROCESS_HEAP *v25; // rax
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  v2 = 0;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
  v5 = *((_BYTE *)a2 + 299);
  if ( (v5 & 8) != 0 )
  {
    v6 = *(struct VIDMM_PARTITION **)(*((_QWORD *)a2 + 54) + 448LL);
  }
  else if ( (v5 & 4) != 0 )
  {
    v6 = (struct VIDMM_PARTITION *)*((_QWORD *)a2 + 56);
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
    _InterlockedIncrement(&dword_1C004E608);
    v22 = WdLogNewEntry5_WdLowResource(v8);
    *(_QWORD *)(v22 + 24) = 212LL;
LABEL_29:
    WdLogEvent5_WdLowResource(v22);
    return 3221225495LL;
  }
  v10 = *((_BYTE *)a2 + 299);
  if ( (v10 & 8) != 0 )
  {
    v23 = *(_QWORD *)(*((_QWORD *)a2 + 54) + 72LL);
    if ( v23 )
      v24 = *(_QWORD *)(v23 + 8);
    else
      v24 = 0LL;
    this[3] = *(struct VIDMM_PARTITION **)(v24 + 24);
    goto LABEL_15;
  }
  if ( !dword_1C004E348 && (v10 & 4) == 0 )
  {
    v25 = (VIDMM_PROCESS_HEAP *)operator new[](0x140uLL, 0x30316956u, (POOL_TYPE)512);
    if ( v25 )
    {
      v13 = VIDMM_PROCESS_HEAP::VIDMM_PROCESS_HEAP(v25);
      goto LABEL_13;
    }
LABEL_37:
    v13 = 0LL;
    goto LABEL_13;
  }
  v11 = operator new[](0x690uLL, 0x30316956u, (POOL_TYPE)512);
  if ( !v11 )
    goto LABEL_37;
  v13 = VIDMM_RECYCLE_HEAP_MGR::VIDMM_RECYCLE_HEAP_MGR(v11);
LABEL_13:
  this[3] = v13;
  if ( !v13 )
  {
    _InterlockedIncrement(&dword_1C004E654);
    v22 = WdLogNewEntry5_WdLowResource(v12);
    *(_QWORD *)(v22 + 24) = 247LL;
    goto LABEL_29;
  }
  memset(&ApcState, 0, sizeof(ApcState));
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
    _InterlockedIncrement(&dword_1C004E5F8);
    v22 = WdLogNewEntry5_WdLowResource(v19);
    *(_QWORD *)(v22 + 24) = 282LL;
    goto LABEL_29;
  }
  memset(v18, 0, 8LL * MaximumAdapterCount);
  if ( *((_BYTE *)a2 + 297) )
  {
    *((_DWORD *)this + 22) |= 2u;
    g_pVidMmSystemProcess = (VIDMM_PROCESS *)this;
  }
  v20 = VidMmiOpenCurrentPartition((struct VIDMM_PROCESS *)this, this + 33);
  if ( v20 < 0 )
    return (unsigned int)v20;
  return v2;
}
