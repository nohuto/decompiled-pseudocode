/*
 * XREFs of ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C00AA1C4
 * Callers:
 *     ??_GVIDMM_GLOBAL@@QEAAPEAXI@Z @ 0x1C0024100 (--_GVIDMM_GLOBAL@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x1C00014F4 (--0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0001750 (--3@YAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C00018CC (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0014310 (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     ??_GVIDMM_DMA_POOL@@QEAAPEAXI@Z @ 0x1C0016BDC (--_GVIDMM_DMA_POOL@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 *     ?ResetAdapter@VIDMM_PARTITION@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C0027B18 (-ResetAdapter@VIDMM_PARTITION@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?VidSchiDestroyNodeSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C00354F4 (-VidSchiDestroyNodeSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C0062E5C (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?RequestWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@E@Z @ 0x1C008152C (-RequestWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@E@Z.c)
 *     ?DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00AB554 (-DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00AB68C (-DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?RemoveFromAdapterList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00AF014 (-RemoveFromAdapterList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C00B7CA8 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::~VIDMM_GLOBAL(VIDMM_GLOBAL *this)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  unsigned int i; // esi
  __int64 v5; // r8
  unsigned int v6; // r10d
  __int64 v7; // rax
  struct _VIDSCH_NODE **v8; // rcx
  unsigned int j; // ebx
  struct _VIDMM_DMA_BUFFER *v10; // rdx
  VIDMM_DMA_POOL *v11; // rcx
  __int64 v12; // rbx
  VIDMM_PARTITION *v13; // rax
  VIDMM_PARTITION *k; // rbx
  VIDMM_PARTITION **v15; // rax
  VIDMM_PARTITION *v16; // rcx
  VIDMM_PARTITION *v17; // rcx
  unsigned int m; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rcx
  unsigned int v22; // ebx
  _QWORD *v23; // rdx
  void (__fastcall ***v24)(_QWORD, __int64); // r8
  void *v25; // rcx
  void *v26; // rcx
  char *v27; // rcx
  char *v28; // rbx
  unsigned int n; // ebx
  struct _PCW_INSTANCE *v30; // rcx
  char *v31; // rcx
  char *v32; // rbx
  char v33[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v34; // [rsp+38h] [rbp-20h]
  int v35; // [rsp+40h] [rbp-18h]

  VIDMM_GLOBAL::RemoveFromAdapterList(this);
  *((_BYTE *)this + 7072) = 1;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v2) + 24) = this;
  VIDMM_GLOBAL::DoDeferredUnlock(this);
  v3 = *(_QWORD *)(*((_QWORD *)this + 2) + 528LL);
  if ( *(int *)(*(_QWORD *)(v3 + 16) + 2452LL) >= 2500 )
  {
    for ( i = 0; i < *(_DWORD *)(v3 + 68); ++i )
    {
      v5 = *(_QWORD *)(v3 + 616);
      v6 = *(_DWORD *)(v3 + 688);
      v7 = v5 + 8LL * i;
      if ( i >= v6 )
        v7 = *(_QWORD *)(v3 + 616);
      if ( (*(_DWORD *)(*(_QWORD *)v7 + 12LL) & 2) != 0 )
      {
        v8 = (struct _VIDSCH_NODE **)(v5 + 8LL * i);
        if ( i >= v6 )
          v8 = *(struct _VIDSCH_NODE ***)(v3 + 616);
        VidSchiDestroyNodeSchedulingLog(*v8);
      }
    }
  }
  VIDMM_GLOBAL::DestroyPagingFenceObjects(this);
  for ( j = 0; j < *((_DWORD *)this + 1748); ++j )
  {
    v10 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)this + j + 143);
    if ( v10 )
    {
      VIDMM_DMA_POOL::ReleaseBuffer(*((VIDMM_DMA_POOL **)this + j + 79), v10, 1);
      *((_QWORD *)this + j + 143) = 0LL;
    }
    v11 = (VIDMM_DMA_POOL *)*((_QWORD *)this + j + 79);
    if ( v11 )
      VIDMM_DMA_POOL::`scalar deleting destructor'(v11);
  }
  VIDMM_PAGING_PROCESS::DestroyPagingProcess((VIDMM_GLOBAL *)((char *)this + 40320));
  if ( (*((_BYTE *)this + 40872) & 0x20) != 0 )
    VIDMM_PROCESS::CloseAdapter((struct _KTHREAD **)g_pVidMmSystemProcess, this);
  v12 = *(_QWORD *)this;
  *((_QWORD *)this + 5140) = 0LL;
  if ( v12 )
  {
    ObfReferenceObject(*(PVOID *)(v12 + 8));
    VIDMM_WORKER_THREAD::RequestWorkerThreadStatus(v12, 2, 1);
    KeWaitForSingleObject(*(PVOID *)(v12 + 8), Executive, 0, 0, 0LL);
    ObfDereferenceObject(*(PVOID *)(v12 + 8));
    operator delete(*(void **)(v12 + 152));
    *(_QWORD *)(v12 + 152) = 0LL;
    if ( *(_QWORD *)this )
      operator delete(*(void **)this);
    *(_QWORD *)this = 0LL;
  }
  DXGAUTOEXPUSHLOCKSHARED::DXGAUTOEXPUSHLOCKSHARED(
    (DXGAUTOEXPUSHLOCKSHARED *)v33,
    (struct _EX_PUSH_LOCK *const)&VIDMM_PARTITION::_PartitionLock);
  v13 = (VIDMM_PARTITION *)VIDMM_PARTITION::_PartitionTree;
  k = 0LL;
  while ( v13 )
  {
    k = v13;
    v13 = *(VIDMM_PARTITION **)v13;
  }
  while ( k )
  {
    VIDMM_PARTITION::ResetAdapter(k, this);
    v15 = (VIDMM_PARTITION **)*((_QWORD *)k + 1);
    v16 = k;
    if ( v15 )
    {
      v17 = *v15;
      for ( k = (VIDMM_PARTITION *)*((_QWORD *)k + 1); v17; v17 = *(VIDMM_PARTITION **)v17 )
        k = v17;
    }
    else
    {
      while ( 1 )
      {
        k = (VIDMM_PARTITION *)(*((_QWORD *)k + 2) & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !k || *(VIDMM_PARTITION **)k == v16 )
          break;
        v16 = k;
      }
    }
  }
  if ( v35 == 1 )
  {
    ExReleasePushLockSharedEx(v34, 0LL);
  }
  else if ( v35 == 2 )
  {
    ExReleasePushLockExclusiveEx(v34, 0LL);
  }
  for ( m = 0; m < *((_DWORD *)this + 1748); ++m )
  {
    v19 = *((_QWORD *)this + 5023);
    v20 = 1560LL * m;
    if ( (*(_BYTE *)(v20 + v19 + 512) & 1) == 0 )
      PcwCloseInstance(*(PPCW_INSTANCE *)(v20 + v19 + 864));
  }
  v21 = (_QWORD *)*((_QWORD *)this + 464);
  if ( v21 )
  {
    v22 = 0;
    if ( *((_DWORD *)this + 926) )
    {
      v23 = (_QWORD *)*((_QWORD *)this + 464);
      do
      {
        v24 = (void (__fastcall ***)(_QWORD, __int64))v21[v22];
        if ( v24 )
        {
          (**v24)(v21[v22], 1LL);
          v21 = (_QWORD *)*((_QWORD *)this + 464);
          v23 = v21;
        }
        ++v22;
      }
      while ( v22 < *((_DWORD *)this + 926) );
      v21 = v23;
    }
    operator delete(v21);
    *((_QWORD *)this + 464) = 0LL;
  }
  v25 = (void *)*((_QWORD *)this + 876);
  if ( v25 )
    ZwClose(v25);
  operator delete(*((void **)this + 875));
  v26 = (void *)*((_QWORD *)this + 983);
  if ( v26 )
  {
    operator delete(v26);
    *((_QWORD *)this + 982) = 0LL;
    *((_QWORD *)this + 983) = 0LL;
    *((_QWORD *)this + 984) = 0LL;
  }
  v27 = (char *)*((_QWORD *)this + 5115);
  if ( v27 )
  {
    v28 = v27 - 8;
    `vector destructor iterator'(
      v27,
      24LL,
      *((_QWORD *)v27 - 1),
      (void (__fastcall *)(char *))VIDMM_PAGING_HISTORY_ENTRY::~VIDMM_PAGING_HISTORY_ENTRY);
    operator delete(v28);
  }
  operator delete(*((void **)this + 5119));
  for ( n = 0; n < *((_DWORD *)this + 1748); ++n )
  {
    v30 = *(struct _PCW_INSTANCE **)(1560LL * n + *((_QWORD *)this + 5023) + 1552);
    if ( v30 )
      PcwCloseInstance(v30);
  }
  v31 = (char *)*((_QWORD *)this + 5023);
  if ( v31 )
  {
    v32 = v31 - 8;
    `vector destructor iterator'(
      v31,
      1560LL,
      *((_QWORD *)v31 - 1),
      (void (__fastcall *)(char *))VidMmFreeDeferredDmaBufferMapping);
    operator delete(v32);
  }
  ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)this + 314);
}
