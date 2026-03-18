/*
 * XREFs of ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C00A9F44
 * Callers:
 *     ??_GVIDMM_GLOBAL@@QEAAPEAXI@Z @ 0x1C0024100 (--_GVIDMM_GLOBAL@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x1C00014B4 (--0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0001710 (--3@YAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C000188C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0014300 (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     ??_GVIDMM_DMA_POOL@@QEAAPEAXI@Z @ 0x1C0016BCC (--_GVIDMM_DMA_POOL@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     ?ResetAdapter@VIDMM_PARTITION@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C0027B18 (-ResetAdapter@VIDMM_PARTITION@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?VidSchiDestroyNodeSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C00354F4 (-VidSchiDestroyNodeSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C0062A6C (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?RequestWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@E@Z @ 0x1C008265C (-RequestWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@E@Z.c)
 *     ?DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00AB1F8 (-DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00AB330 (-DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?RemoveFromAdapterList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00AECB4 (-RemoveFromAdapterList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C00B7948 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::~VIDMM_GLOBAL(VIDMM_GLOBAL *this)
{
  __int64 v2; // rbx
  unsigned int i; // esi
  __int64 v4; // r8
  unsigned int v5; // r10d
  __int64 v6; // rax
  struct _VIDSCH_NODE **v7; // rcx
  unsigned int j; // ebx
  struct _VIDMM_DMA_BUFFER *v9; // rdx
  VIDMM_DMA_POOL *v10; // rcx
  __int64 v11; // rbx
  VIDMM_PARTITION *v12; // rax
  VIDMM_PARTITION *v13; // rbx
  VIDMM_PARTITION **v14; // rcx
  VIDMM_PARTITION *v15; // rax
  VIDMM_PARTITION *k; // rcx
  unsigned int m; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct _PCW_INSTANCE *v20; // rcx
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

  if ( *((_QWORD *)this + 5183) )
    VIDMM_GLOBAL::RemoveFromAdapterList(this);
  *((_BYTE *)this + 7072) = 1;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
  VIDMM_GLOBAL::DoDeferredUnlock(this);
  v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 528LL);
  if ( *(int *)(*(_QWORD *)(v2 + 16) + 2452LL) >= 2500 )
  {
    for ( i = 0; i < *(_DWORD *)(v2 + 68); ++i )
    {
      v4 = *(_QWORD *)(v2 + 616);
      v5 = *(_DWORD *)(v2 + 688);
      v6 = v4 + 8LL * i;
      if ( i >= v5 )
        v6 = *(_QWORD *)(v2 + 616);
      if ( (*(_DWORD *)(*(_QWORD *)v6 + 12LL) & 2) != 0 )
      {
        v7 = (struct _VIDSCH_NODE **)(v4 + 8LL * i);
        if ( i >= v5 )
          v7 = *(struct _VIDSCH_NODE ***)(v2 + 616);
        VidSchiDestroyNodeSchedulingLog(*v7);
      }
    }
  }
  VIDMM_GLOBAL::DestroyPagingFenceObjects(this);
  for ( j = 0; j < *((_DWORD *)this + 1748); ++j )
  {
    v9 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)this + j + 143);
    if ( v9 )
    {
      VIDMM_DMA_POOL::ReleaseBuffer(*((VIDMM_DMA_POOL **)this + j + 79), v9, 1);
      *((_QWORD *)this + j + 143) = 0LL;
    }
    v10 = (VIDMM_DMA_POOL *)*((_QWORD *)this + j + 79);
    if ( v10 )
      VIDMM_DMA_POOL::`scalar deleting destructor'(v10);
  }
  VIDMM_PAGING_PROCESS::DestroyPagingProcess((VIDMM_GLOBAL *)((char *)this + 40320));
  if ( (*((_BYTE *)this + 40872) & 0x20) != 0 )
    VIDMM_PROCESS::CloseAdapter((struct _KTHREAD **)g_pVidMmSystemProcess, this);
  v11 = *(_QWORD *)this;
  *((_QWORD *)this + 5140) = 0LL;
  if ( v11 )
  {
    ObfReferenceObject(*(PVOID *)(v11 + 8));
    VIDMM_WORKER_THREAD::RequestWorkerThreadStatus(v11, 2, 1);
    KeWaitForSingleObject(*(PVOID *)(v11 + 8), Executive, 0, 0, 0LL);
    ObfDereferenceObject(*(PVOID *)(v11 + 8));
    operator delete(*(void **)(v11 + 152));
    *(_QWORD *)(v11 + 152) = 0LL;
    if ( *(_QWORD *)this )
      operator delete(*(void **)this);
    *(_QWORD *)this = 0LL;
  }
  DXGAUTOEXPUSHLOCKSHARED::DXGAUTOEXPUSHLOCKSHARED(
    (DXGAUTOEXPUSHLOCKSHARED *)v33,
    (struct _EX_PUSH_LOCK *const)&VIDMM_PARTITION::_PartitionLock);
  v12 = (VIDMM_PARTITION *)VIDMM_PARTITION::_PartitionTree;
  v13 = 0LL;
  while ( v12 )
  {
    v13 = v12;
    v12 = *(VIDMM_PARTITION **)v12;
  }
  while ( v13 )
  {
    VIDMM_PARTITION::ResetAdapter(v13, this);
    v14 = (VIDMM_PARTITION **)*((_QWORD *)v13 + 1);
    v15 = v13;
    if ( v14 )
    {
      v13 = (VIDMM_PARTITION *)*((_QWORD *)v13 + 1);
      for ( k = *v14; k; k = *(VIDMM_PARTITION **)k )
        v13 = k;
    }
    else
    {
      while ( 1 )
      {
        v13 = (VIDMM_PARTITION *)(*((_QWORD *)v13 + 2) & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v13 || *(VIDMM_PARTITION **)v13 == v15 )
          break;
        v15 = v13;
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
    v18 = *((_QWORD *)this + 5023);
    v19 = 1560LL * m;
    if ( (*(_BYTE *)(v19 + v18 + 512) & 1) == 0 )
    {
      v20 = *(struct _PCW_INSTANCE **)(v19 + v18 + 864);
      if ( v20 )
        PcwCloseInstance(v20);
    }
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
