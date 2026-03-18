/*
 * XREFs of ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C006D3E0
 * Callers:
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C005C978 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C005DC50 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C006041C (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0062BBC (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?DestroyAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C006C8DC (-DestroyAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z.c)
 *     ?DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0080ACC (-DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C00830A8 (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001750 (--3@YAXPEAX@Z.c)
 *     ?VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z @ 0x1C0002798 (-VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003790 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0018060 (__security_check_cookie.c)
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht @ 0x1C001812C (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ?FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00254C0 (-FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     McTemplateK0puu @ 0x1C002657C (McTemplateK0puu.c)
 *     McTemplateK0q @ 0x1C0026600 (McTemplateK0q.c)
 *     VidSchDestroySyncObject @ 0x1C0061F20 (VidSchDestroySyncObject.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C006340C (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006A9D0 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006B198 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C006D2C8 (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ??1_VIDMM_GLOBAL_ALLOC@@QEAA@XZ @ 0x1C006D958 (--1_VIDMM_GLOBAL_ALLOC@@QEAA@XZ.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0071350 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C0080A70 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@@Z @ 0x1C00AB4C4 (-DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AEF18 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::DestroyOneAllocation(
        struct _KTHREAD **this,
        struct VIDMM_DEVICE *a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        char a4)
{
  __int64 v8; // r15
  char v9; // si
  __int64 v10; // rcx
  const GUID *v11; // r8
  _QWORD *v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  const GUID *v16; // r8
  KSPIN_LOCK *v17; // rdx
  int v18; // eax
  const GUID *v19; // r8
  int *v20; // rdx
  int v21; // r10d
  int v22; // r11d
  int v23; // edi
  int v24; // esi
  int v25; // r12d
  int v26; // r13d
  int v27; // r9d
  __int64 v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // rsi
  int *v31; // rsi
  int v32; // r9d
  __int64 v33; // r13
  __int64 v34; // rdi
  int v35; // eax
  _QWORD *v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  struct _KTHREAD *v39; // rdi
  __int64 v40; // rdx
  int *v41; // rdi
  __int64 v42; // rsi
  _QWORD *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 i; // rdi
  _VIDSCH_SYNC_OBJECT *v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rdi
  _QWORD *v50; // rax
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v51[2]; // [rsp+20h] [rbp-218h]
  struct _KEVENT **v52; // [rsp+28h] [rbp-210h]
  int v53; // [rsp+48h] [rbp-1F0h]
  int v54; // [rsp+60h] [rbp-1D8h]
  int v55; // [rsp+100h] [rbp-138h]
  int v56; // [rsp+104h] [rbp-134h]
  int v57; // [rsp+108h] [rbp-130h]
  __int64 v58; // [rsp+128h] [rbp-110h]
  __int64 v59; // [rsp+130h] [rbp-108h]
  _BYTE v60[8]; // [rsp+148h] [rbp-F0h] BYREF
  char *v61; // [rsp+150h] [rbp-E8h]
  int v62; // [rsp+158h] [rbp-E0h]
  _QWORD v63[12]; // [rsp+160h] [rbp-D8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1C0h] [rbp-78h] BYREF

  if ( a2 )
    v8 = *((_QWORD *)a2 + 3);
  else
    v8 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v37 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v37 + 24) = a3;
    *(_QWORD *)(v37 + 32) = a2;
  }
  v9 = 0;
  if ( (*((_DWORD *)a3 + 19) & 0x100) == 0 )
  {
    v61 = (char *)(this + 4994);
    if ( this != (struct _KTHREAD **)-39952LL && this[4995] == KeGetCurrentThread() )
    {
      v38 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v38 + 24) = 1448LL;
      WdLogEvent5_WdAssertion(v38);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(this + 4994, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v32 = *((_DWORD *)this + 9992);
        if ( v32 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v10, (const EVENT_DESCRIPTOR *)"g", v11, v32);
      }
      ExAcquirePushLockExclusiveEx(this + 4994, 0LL);
    }
    this[4995] = KeGetCurrentThread();
    v12 = (_QWORD *)((char *)a3 + 400);
    v13 = *((_QWORD *)a3 + 50);
    v62 = 2;
    if ( v13 )
    {
      if ( *(_QWORD **)(v13 + 8) != v12 || (v36 = (_QWORD *)*((_QWORD *)a3 + 51), (_QWORD *)*v36 != v12) )
        __fastfail(3u);
      *v36 = v13;
      *(_QWORD *)(v13 + 8) = v36;
      *v12 = 0LL;
    }
    if ( *((_QWORD *)a3 + 52) )
      VIDMM_GLOBAL::RemoveAllocationFromDecommitList((VIDMM_GLOBAL *)this, a3);
    if ( this[5182] == a3 )
      v9 = 1;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v60);
  }
  v14 = *((_DWORD *)a3 + 21);
  if ( (v14 & 4) != 0 )
  {
    if ( *((_QWORD *)a3 + 17) || *((_QWORD *)a3 + 33) )
    {
      memset(v63, 0, 0x58uLL);
      v35 = *((_DWORD *)a3 + 19) & 0x3F;
      LODWORD(v63[0]) = 112;
      HIDWORD(v63[0]) = v35;
      v63[5] = a3;
      LODWORD(v63[6]) = 0;
      VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait((VIDMM_GLOBAL *)this, (struct _VIDMM_SYSTEM_COMMAND *)v63);
      v14 = *((_DWORD *)a3 + 21);
      v9 = 0;
    }
    v33 = *((_QWORD *)a3 + 13);
    v34 = *(_QWORD *)(v33 + 40);
    if ( (v14 & 2) != 0 )
    {
      VIDMM_SEGMENT::UnlockAllocationBackingStore((struct VIDMM_GLOBAL *)this, a3, 0LL);
      VIDMM_GLOBAL::ReturnPinnedBackingStore((VIDMM_GLOBAL *)this, *((_QWORD *)a3 + 1));
      *((_DWORD *)a3 + 21) &= ~2u;
      v33 = *((_QWORD *)a3 + 13);
    }
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(**(PRKPROCESS **)(v33 + 8), &ApcState);
    VIDMM_GLOBAL::CloseOneAllocation((VIDMM_GLOBAL *)this, (struct VIDMM_ALLOC *)(v34 - 40), 0LL, 0, 0, 0LL);
    KeUnstackDetachProcess(&ApcState);
    *((_QWORD *)a3 + 13) = 0LL;
  }
  if ( v9 )
  {
    v39 = *this;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)v39 + 48, 0LL);
    *((_QWORD *)v39 + 7) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v39 + 48, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( a4 )
    VIDMM_GLOBAL::WaitForAllPagingEngines((VIDMM_GLOBAL *)this, a3);
  if ( (*((_DWORD *)a3 + 23) & 1) != 0 )
    VIDMM_GLOBAL::UncommitGlobalBackingStore((VIDMM_GLOBAL *)this, a3, 1);
  VidMmiClosePartition(**((volatile signed __int32 ***)a3 + 61));
  v17 = (KSPIN_LOCK *)*((_QWORD *)a3 + 62);
  if ( v17 )
  {
    VIDMM_GLOBAL::FreeCrossAdapterDataDpc((VIDMM_GLOBAL *)v15, v17, a3);
    v15 = (unsigned int)_InterlockedDecrement(*((volatile signed __int32 **)a3 + 62));
    if ( (_DWORD)v15 )
    {
      if ( (int)v15 < 0 )
      {
        v41 = (int *)*((_QWORD *)a3 + 62);
        v42 = *v41;
        v43 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v40);
        v43[3] = 270LL;
        v43[4] = 66LL;
        v43[5] = v41;
        v43[6] = v42;
        v43[7] = 0LL;
        WdLogEvent5_WdCriticalError(v43);
      }
    }
    else
    {
      VIDMM_GLOBAL::DestroyCrossAdapterAllocation((VIDMM_GLOBAL *)v15, *((struct _VIDMM_CROSSADAPTER_ALLOC **)a3 + 62));
    }
    *((_QWORD *)a3 + 62) = 0LL;
  }
  if ( bTracingEnabled )
  {
    v15 = *((_QWORD *)a3 + 63);
    if ( *(_WORD *)(v15 + 4) && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LOBYTE(v52) = *((_BYTE *)a3 + 432);
      *(_BYTE *)&v51[0].0 = *(_WORD *)(v15 + 4);
      McTemplateK0puu(v15, &EventReportOfferAllocation, v16, a3, *(_QWORD *)&v51[0].0, v52);
      v15 = *((_QWORD *)a3 + 63);
    }
    v18 = *(_DWORD *)v15;
    if ( bTracingEnabled )
    {
      v19 = (const GUID *)*((_QWORD *)a3 + 5);
      if ( v19 )
        v20 = *(int **)v19[1].Data4;
      else
        v20 = 0LL;
      if ( v8 )
      {
        v58 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 16LL);
        v59 = *(_QWORD *)(*(_QWORD *)(v8 + 40) + 64LL);
      }
      else
      {
        LOBYTE(v58) = 0;
        v59 = 0LL;
      }
      LOBYTE(v21) = 0;
      LOBYTE(v57) = 0;
      LOBYTE(v22) = 0;
      LOBYTE(v23) = 0;
      LOBYTE(v24) = 0;
      LOBYTE(v25) = 0;
      LOBYTE(v26) = 0;
      v15 = *((unsigned int *)a3 + 18);
      LOBYTE(v27) = 0;
      LOBYTE(v56) = 0;
      LOBYTE(v55) = 0;
      if ( v20 )
      {
        v27 = *v20;
        v21 = v20[1];
        v22 = v20[2];
        v23 = v20[3];
        v24 = v20[4];
        v25 = v20[5];
        v26 = v20[6];
        v57 = v20[7];
        v55 = v20[9];
        v56 = v20[8];
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht(
          *((_QWORD *)a3 + 2),
          &EventDestroyAdapterAllocation,
          v19,
          v59,
          v8,
          v58,
          v18,
          *((_QWORD *)a3 + 2),
          *((_DWORD *)a3 + 8),
          v53,
          *((_DWORD *)a3 + 17),
          v15,
          v54,
          *((_DWORD *)a3 + 16),
          *((_DWORD *)a3 + 94),
          (char)a3,
          (char)v19,
          0,
          v27,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26,
          v57,
          v56,
          v55,
          (*((_DWORD *)a3 + 21) & 2) != 0,
          *((_QWORD *)a3 + 45),
          *((_DWORD *)a3 + 19) & 0x3F,
          BYTE1(*((_DWORD *)a3 + 19)) & 1);
    }
  }
  this[957] = (struct _KTHREAD *)((char *)this[957] + *((_QWORD *)a3 + 2));
  ++*((_DWORD *)this + 1912);
  v28 = *((_QWORD *)a3 + 2);
  if ( (**((_DWORD **)a3 + 63) & 0x20000000) != 0 )
  {
    ++*((_DWORD *)this + 1944);
    this[973] = (struct _KTHREAD *)((char *)this[973] + v28);
  }
  else
  {
    ++*((_DWORD *)this + 1948);
    this[975] = (struct _KTHREAD *)((char *)this[975] + v28);
  }
  this[5019] = (struct _KTHREAD *)((char *)this[5019] - *((_QWORD *)a3 + 2));
  v29 = *((_QWORD *)a3 + 40);
  if ( v29 )
  {
    if ( *(_QWORD *)(v29 + 16) )
    {
      v44 = WdLogNewEntry5_WdAssertion(v15, v28);
      *(_QWORD *)(v44 + 24) = 538LL;
      WdLogEvent5_WdAssertion(v44);
    }
    if ( *(_DWORD *)(v29 + 24) )
    {
      v45 = WdLogNewEntry5_WdAssertion(v15, v28);
      *(_QWORD *)(v45 + 24) = 539LL;
      WdLogEvent5_WdAssertion(v45);
    }
    operator delete((void *)v29);
  }
  v30 = *((_QWORD *)a3 + 63);
  if ( v30 )
  {
    if ( *(_QWORD *)(v30 + 24) )
    {
      for ( i = 0LL; i < 16; i += 8LL )
      {
        v47 = *(_VIDSCH_SYNC_OBJECT **)(i + *(_QWORD *)(v30 + 24));
        v48 = v30;
        if ( v47 )
        {
          VidSchDestroySyncObject(v47, v28);
          *(_QWORD *)(i + *(_QWORD *)(*((_QWORD *)a3 + 63) + 24LL)) = 0LL;
          v30 = *((_QWORD *)a3 + 63);
          v48 = v30;
        }
        else
        {
          v30 = *((_QWORD *)a3 + 63);
        }
      }
      operator delete(*(void **)(v48 + 24));
      *(_QWORD *)(*((_QWORD *)a3 + 63) + 24LL) = 0LL;
      v30 = *((_QWORD *)a3 + 63);
    }
    v31 = *(int **)(v30 + 16);
    if ( v31 )
    {
      if ( _InterlockedExchangeAdd(v31, 0xFFFFFFFF) == 1 )
      {
        if ( v31[2] )
        {
          v49 = v31[2];
          v50 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v28);
          v50[3] = 270LL;
          v50[4] = 42LL;
          v50[5] = v31;
          v50[6] = v49;
          v50[7] = 0LL;
          WdLogEvent5_WdCriticalError(v50);
        }
        operator delete(v31);
      }
      *(_QWORD *)(*((_QWORD *)a3 + 63) + 16LL) = 0LL;
    }
  }
  if ( !*((_DWORD *)a3 + 95) )
  {
    operator delete(*((void **)a3 + 63));
    *((_DWORD *)a3 + 19) |= 0x200000u;
    _VIDMM_GLOBAL_ALLOC::~_VIDMM_GLOBAL_ALLOC(a3);
    operator delete(a3);
  }
}
