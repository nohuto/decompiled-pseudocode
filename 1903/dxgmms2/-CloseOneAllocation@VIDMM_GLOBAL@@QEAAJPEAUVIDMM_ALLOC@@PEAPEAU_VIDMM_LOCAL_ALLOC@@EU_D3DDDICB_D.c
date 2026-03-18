/*
 * XREFs of ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0071350
 * Callers:
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C005C978 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C005DC50 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C006041C (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0062BBC (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C006D3E0 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CloseAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@EPEAPEAU_VIDMM_LOCAL_ALLOC@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C00711F4 (-CloseAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@EPEAPEAU_VIDMM_LOCAL_ALLOC@@U_D3DDDI.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C00754F0 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@@Z @ 0x1C007F430 (-TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_AL.c)
 *     ?DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0080ACC (-DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C00830A8 (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001750 (--3@YAXPEAX@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B90 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003790 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     McTemplateK0pppppppppppp @ 0x1C0025B08 (McTemplateK0pppppppppppp.c)
 *     McTemplateK0q @ 0x1C0026600 (McTemplateK0q.c)
 *     ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1C0064498 (-QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGIN.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C006BE60 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C006C358 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z @ 0x1C0071020 (-CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z.c)
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0076B40 (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z @ 0x1C00770E0 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CloseOneAllocation(
        VIDMM_GLOBAL *this,
        struct _KEVENT *a2,
        struct _VIDMM_LOCAL_ALLOC **a3,
        char a4,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a5,
        struct _KEVENT **a6)
{
  struct _LIST_ENTRY *v6; // r15
  struct _LIST_ENTRY *Flink; // r13
  __int64 v11; // rsi
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v14; // rcx
  __int64 v15; // rax
  int v16; // ecx
  int v17; // ebp
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  struct _KEVENT **v21; // rdx
  struct VIDMM_ALLOC **v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct _LIST_ENTRY *v25; // rax
  struct _LIST_ENTRY *v26; // rcx
  struct _LIST_ENTRY *v27; // r12
  struct _LIST_ENTRY *v28; // rbp
  __int64 v29; // r14
  HANDLE CurrentProcessId; // rax
  struct _LIST_ENTRY *v31; // rdi
  bool v32; // zf
  struct _LIST_ENTRY **p_Blink; // rdi
  __int64 v34; // rcx
  const GUID *v35; // r8
  struct _LIST_ENTRY **v36; // rax
  struct _LIST_ENTRY *v37; // rdx
  struct _LIST_ENTRY *v38; // rcx
  __int64 result; // rax
  struct _LIST_ENTRY *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  int v44; // r9d
  struct _LIST_ENTRY *v45; // rdx
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v47; // rcx
  CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  __int64 v49; // rax
  __int64 Blink_low; // rdi
  _QWORD *v51; // rax
  __int64 v52; // [rsp+80h] [rbp-C8h]
  const GUID *v53; // [rsp+88h] [rbp-C0h]
  __int64 v54; // [rsp+90h] [rbp-B8h]
  char v55[8]; // [rsp+98h] [rbp-B0h] BYREF
  struct _LIST_ENTRY **v56; // [rsp+A0h] [rbp-A8h]
  int v57; // [rsp+A8h] [rbp-A0h]
  _QWORD v58[19]; // [rsp+B0h] [rbp-98h] BYREF
  unsigned int v59; // [rsp+158h] [rbp+10h]
  unsigned int v60; // [rsp+160h] [rbp+18h]

  v6 = 0LL;
  Flink = a2->Header.WaitListHead.Flink;
  v60 = 0;
  v59 = 0;
  v11 = **(_QWORD **)&a2->Header.Lock;
  v53 = 0LL;
  v52 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  if ( a3 )
    *a3 = *(struct _VIDMM_LOCAL_ALLOC **)&a2->Header.Lock;
  if ( bTracingEnabled )
  {
    Blink = a2->Header.WaitListHead.Blink;
    if ( Blink )
    {
      v60 = (unsigned int)Blink[1].Flink;
      v14 = Blink[2].Blink;
      if ( v14 )
      {
        v59 = (unsigned int)v14[1].Flink;
        v53 = (const GUID *)v14[3].Flink;
      }
    }
    if ( (**(_DWORD **)(v11 + 504) & 8) != 0 )
      v15 = *(_QWORD *)(v11 + 368);
    else
      v15 = *(_QWORD *)(*(_QWORD *)&a2->Header.Lock + 16LL);
    v52 = v15;
  }
  v16 = (int)a2[1].Header.WaitListHead.Flink;
  if ( (v16 & 1) != 0 )
    goto LABEL_13;
  v40 = a2->Header.WaitListHead.Flink;
  if ( v40 && v40[1].Blink || (*(_DWORD *)(v11 + 84) & 4) != 0 )
  {
    if ( (*(_DWORD *)(v11 + 84) & 4) == 0 )
    {
      VIDMM_GLOBAL::TerminateOneAllocation(this, (struct VIDMM_ALLOC *)a2, (unsigned int)a3, a5, 0LL);
      goto LABEL_13;
    }
    a2[1].Header.SignalState |= 4u;
    LODWORD(a2[1].Header.WaitListHead.Flink) = v16 | 1;
  }
  else
  {
    a2[1].Header.SignalState |= 4u;
    if ( (a2[1].Header.SignalState & 3) == 1 )
    {
      v45 = a2[2].Header.WaitListHead.Flink;
      p_WaitListHead = &a2[2].Header.WaitListHead;
      if ( v45->Blink != &a2[2].Header.WaitListHead )
        goto LABEL_74;
      v47 = a2[2].Header.WaitListHead.Blink;
      if ( v47->Flink != p_WaitListHead )
        goto LABEL_74;
      v47->Flink = v45;
      v45->Blink = v47;
      a2[1].Header.SignalState &= 0xFFFFFFFC;
      a2[2].Header.WaitListHead.Blink = 0LL;
      p_WaitListHead->Flink = 0LL;
    }
    if ( (*(_DWORD *)(v11 + 76) & 0x100) != 0 && (struct _KEVENT *)Flink[15].Flink == a2 )
      Flink[15].Flink = 0LL;
  }
  KeSetEvent(a2 + 3, 0, 0);
LABEL_13:
  if ( a4 && ((__int64)a2[1].Header.WaitListHead.Flink & 1) != 0 && !KeReadStateEvent(a2 + 3) )
  {
    v43 = WdLogNewEntry5_WdEvent(v42, v41);
    *(_QWORD *)(v43 + 24) = a2;
    *(_QWORD *)(v43 + 32) = -1071775486LL;
    WdLogEvent5_WdEvent(v43);
    result = 3223191810LL;
    *a6 = a2 + 3;
    return result;
  }
  KeWaitForSingleObject(&a2[3], Executive, 0, 0, 0LL);
  v17 = 1;
  VIDMM_GLOBAL::xWaitForAllPagingEngines(
    this,
    (struct _VIDSCH_SYNC_OBJECT **)this + (*(_DWORD *)(v11 + 76) & 0x3F) + 746,
    (const unsigned __int64 *)(v11 + 176),
    1u,
    (const unsigned __int64 *)this + (*(_DWORD *)(v11 + 76) & 0x3F) + 682,
    *(_DWORD *)(v11 + 76) & 0x3F);
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v18) + 24) = a2;
  v19 = *(_QWORD *)&a2[6].Header.Lock;
  if ( v19 )
  {
    if ( (**(_DWORD **)(v11 + 504) & 0x10000008) != 0 )
      MmUnmapViewOfSection(**(_QWORD **)(*(_QWORD *)&a2->Header.Lock + 8LL), v19);
    *(_QWORD *)&a2[6].Header.Lock = 0LL;
  }
  if ( a2[5].Header.WaitListHead.Flink != &a2[5].Header.WaitListHead )
  {
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
    {
      VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                  *(VIDMM_PROCESS **)(*(_QWORD *)&a2->Header.Lock + 8LL),
                                  *(_DWORD *)(*((_QWORD *)this + 3) + 208LL),
                                  *(_DWORD *)(v11 + 76) & 0x3F);
      CVirtualAddressAllocator::FreeAllocMappedVaRangeList(VirtualAddressAllocator, (struct VIDMM_ALLOC *)a2);
    }
    else
    {
      memset(v58, 0, 0x58uLL);
      v20 = *((_QWORD *)this + 5041);
      v58[0] = -4294967175LL;
      v58[2] = a2;
      VIDMM_GLOBAL::QueueSystemCommandAndWaitInternal(
        this,
        (struct _VIDMM_SYSTEM_COMMAND *)v58,
        *(PVOID **)(v20 + 80),
        *(struct _VIDSCH_SYNC_OBJECT **)(176LL * *(unsigned int *)(*(_QWORD *)(v20 + 80) + 144LL)
                                       + *(_QWORD *)(v20 + 80)
                                       + 152),
        1);
    }
  }
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v11 + 320));
  v21 = (struct _KEVENT **)a2[1].Header.WaitListHead.Blink;
  if ( v21[1] != (struct _KEVENT *)&a2[1].Header.WaitListHead.Blink )
    goto LABEL_74;
  v22 = *(struct VIDMM_ALLOC ***)&a2[2].Header.Lock;
  if ( *v22 != (struct VIDMM_ALLOC *)&a2[1].Header.WaitListHead.Blink )
    goto LABEL_74;
  *v22 = (struct VIDMM_ALLOC *)v21;
  v21[1] = (struct _KEVENT *)v22;
  v54 = *(_QWORD *)(*(_QWORD *)&a2->Header.Lock + 24LL);
  if ( a3 )
    v17 = 0;
  VIDMM_GLOBAL::CloseLocalAllocation(this, *(struct _VIDMM_LOCAL_ALLOC **)&a2->Header.Lock, v17);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v11 + 320));
  if ( bTracingEnabled )
  {
    v25 = a2->Header.WaitListHead.Blink;
    if ( v25 && (v26 = v25[2].Blink) != 0LL )
      v27 = v26[3].Blink;
    else
      v27 = 0LL;
    if ( v25 )
      v6 = v25[2].Blink;
    if ( Flink )
      v28 = Flink[1].Blink;
    else
      v28 = 0LL;
    v29 = *((_QWORD *)this + 3);
    CurrentProcessId = PsGetCurrentProcessId();
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      McTemplateK0pppppppppppp(
        v59,
        &EventDestroyDeviceAllocation,
        v53,
        CurrentProcessId,
        v28,
        v29,
        a2,
        v11,
        v6,
        v27,
        v60,
        v59,
        v53,
        v52,
        v54);
  }
  *((_QWORD *)this + 961) += *(_QWORD *)(v11 + 16);
  ++*((_DWORD *)this + 1920);
  v31 = a2->Header.WaitListHead.Flink[1].Flink;
  if ( !v31 )
    goto LABEL_42;
  v32 = &v31[22].Blink == 0LL;
  p_Blink = &v31[22].Blink;
  v56 = p_Blink;
  if ( !v32 && p_Blink[1] == (struct _LIST_ENTRY *)KeGetCurrentThread() )
  {
    v49 = WdLogNewEntry5_WdAssertion(v24, v23);
    *(_QWORD *)(v49 + 24) = 1448LL;
    WdLogEvent5_WdAssertion(v49);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(p_Blink, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v44 = *((_DWORD *)p_Blink + 4);
      if ( v44 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v34, (const EVENT_DESCRIPTOR *)"g", v35, v44);
    }
    ExAcquirePushLockExclusiveEx(p_Blink, 0LL);
  }
  p_Blink[1] = (struct _LIST_ENTRY *)KeGetCurrentThread();
  v36 = &a2[4].Header.WaitListHead.Blink;
  v37 = a2[4].Header.WaitListHead.Blink;
  v57 = 2;
  if ( (struct _LIST_ENTRY **)v37->Blink != &a2[4].Header.WaitListHead.Blink
    || (v38 = *(struct _LIST_ENTRY **)&a2[5].Header.Lock, (struct _LIST_ENTRY **)v38->Flink != v36) )
  {
LABEL_74:
    __fastfail(3u);
  }
  v38->Flink = v37;
  v37->Blink = v38;
  *(_QWORD *)&a2[5].Header.Lock = 0LL;
  *v36 = 0LL;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v55);
LABEL_42:
  if ( LODWORD(a2[6].Header.WaitListHead.Blink) )
  {
    Blink_low = SLODWORD(a2[6].Header.WaitListHead.Blink);
    v51 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v24, v23);
    v51[3] = 270LL;
    v51[4] = 56LL;
    v51[5] = a2;
    v51[6] = Blink_low;
    v51[7] = 0LL;
    WdLogEvent5_WdCriticalError(v51);
  }
  operator delete(a2);
  return 0LL;
}
