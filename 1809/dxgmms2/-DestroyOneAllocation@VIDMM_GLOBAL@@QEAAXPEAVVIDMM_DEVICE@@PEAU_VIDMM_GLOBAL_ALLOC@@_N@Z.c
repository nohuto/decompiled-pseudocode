/*
 * XREFs of ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C005FE90
 * Callers:
 *     ?DestroyAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C005FD68 (-DestroyAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C006A620 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C006ACA0 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0079A18 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C007DA00 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C007E0B0 (-DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C0080848 (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00015B0 (--3@YAXPEAX@Z.c)
 *     ?VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z @ 0x1C0001978 (-VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00029E0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht @ 0x1C0018E68 (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht.c)
 *     McTemplateK0q @ 0x1C0019440 (McTemplateK0q.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ?FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0025C40 (-FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     McTemplateK0puu @ 0x1C0026ADC (McTemplateK0puu.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C005FD80 (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ??1_VIDMM_GLOBAL_ALLOC@@QEAA@XZ @ 0x1C00603CC (--1_VIDMM_GLOBAL_ALLOC@@QEAA@XZ.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C00621D0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C006C8B8 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     VidSchDestroySyncObject @ 0x1C006D920 (VidSchDestroySyncObject.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006EF9C (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006F4CC (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C007E954 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@@Z @ 0x1C00A7DA4 (-DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AB93C (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::DestroyOneAllocation(
        struct _KTHREAD **this,
        struct VIDMM_DEVICE *a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        char a4)
{
  int v4; // r13d
  __int64 v9; // r15
  char *v10; // rdi
  char v11; // si
  __int64 v12; // rcx
  const GUID *v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // rcx
  const GUID *v16; // r8
  int v17; // eax
  __int64 v18; // rcx
  const GUID *v19; // r8
  KSPIN_LOCK *v20; // rdx
  int v21; // eax
  const GUID *v22; // r8
  int *v23; // rdx
  int v24; // r10d
  int v25; // r11d
  int v26; // edi
  int v27; // esi
  int v28; // r12d
  int v29; // r9d
  __int64 v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // rsi
  int *v33; // rsi
  int v34; // r9d
  int v35; // eax
  bool v36; // r8
  __int64 v37; // rcx
  __int64 v38; // rdi
  _QWORD *v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rax
  struct _KTHREAD *v42; // rdi
  __int64 v43; // rdx
  int *v44; // rdi
  __int64 v45; // rsi
  _QWORD *v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 i; // rdi
  void *v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rdi
  _QWORD *v53; // rax
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v54[2]; // [rsp+20h] [rbp-228h]
  struct _KEVENT **v55; // [rsp+28h] [rbp-220h]
  int v56; // [rsp+48h] [rbp-200h]
  int v57; // [rsp+60h] [rbp-1E8h]
  int v58; // [rsp+100h] [rbp-148h]
  int v59; // [rsp+104h] [rbp-144h]
  int v60; // [rsp+108h] [rbp-140h]
  __int64 v61; // [rsp+128h] [rbp-120h]
  __int64 v62; // [rsp+130h] [rbp-118h]
  _BYTE v63[8]; // [rsp+150h] [rbp-F8h] BYREF
  char *v64; // [rsp+158h] [rbp-F0h]
  int v65; // [rsp+160h] [rbp-E8h]
  _QWORD v66[12]; // [rsp+170h] [rbp-D8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1D0h] [rbp-78h] BYREF

  LOBYTE(v4) = 0;
  if ( a2 )
    v9 = *((_QWORD *)a2 + 3);
  else
    v9 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v40 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v40 + 24) = a3;
    *(_QWORD *)(v40 + 32) = a2;
  }
  v10 = (char *)(this + 4994);
  v11 = 0;
  v64 = (char *)(this + 4994);
  if ( this != (struct _KTHREAD **)-39952LL && this[4995] == KeGetCurrentThread() )
  {
    v41 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v41 + 24) = 1309LL;
    WdLogEvent5_WdAssertion(v41);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v10, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v34 = *((_DWORD *)this + 9992);
      if ( v34 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v12, &EventBlockThread, v13, v34);
    }
    ExAcquirePushLockExclusiveEx(v10, 0LL);
  }
  this[4995] = KeGetCurrentThread();
  v14 = (_QWORD *)((char *)a3 + 400);
  v15 = *((_QWORD *)a3 + 50);
  v65 = 2;
  if ( v15 )
  {
    if ( *(_QWORD **)(v15 + 8) != v14 || (v39 = (_QWORD *)*((_QWORD *)a3 + 51), (_QWORD *)*v39 != v14) )
      __fastfail(3u);
    *v39 = v15;
    *(_QWORD *)(v15 + 8) = v39;
    *v14 = 0LL;
  }
  if ( *((_QWORD *)a3 + 52) )
    VIDMM_GLOBAL::RemoveAllocationFromDecommitList((VIDMM_GLOBAL *)this, a3);
  if ( this[5182] == a3 )
    v11 = 1;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v63);
  v17 = *((_DWORD *)a3 + 21);
  if ( (v17 & 4) != 0 )
  {
    if ( *((_QWORD *)a3 + 17) || *((_QWORD *)a3 + 33) )
    {
      memset(v66, 0, 0x58uLL);
      v35 = *((_DWORD *)a3 + 19) & 0x3F;
      LODWORD(v66[0]) = 112;
      HIDWORD(v66[0]) = v35;
      v66[5] = a3;
      LODWORD(v66[6]) = 0;
      VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait((VIDMM_GLOBAL *)this, (struct _VIDMM_SYSTEM_COMMAND *)v66, v36);
      v17 = *((_DWORD *)a3 + 21);
      v11 = 0;
    }
    v37 = *((_QWORD *)a3 + 13);
    v38 = *(_QWORD *)(v37 + 40);
    if ( (v17 & 2) != 0 )
    {
      VIDMM_SEGMENT::UnlockAllocationBackingStore((struct VIDMM_GLOBAL *)this, a3, 0LL);
      VIDMM_GLOBAL::ReturnPinnedBackingStore((VIDMM_GLOBAL *)this, *((_QWORD *)a3 + 1));
      *((_DWORD *)a3 + 21) &= ~2u;
      v37 = *((_QWORD *)a3 + 13);
    }
    KeStackAttachProcess(**(PRKPROCESS **)(v37 + 8), &ApcState);
    VIDMM_GLOBAL::CloseOneAllocation((VIDMM_GLOBAL *)this, (struct VIDMM_ALLOC *)(v38 - 40), 0LL, 0, 0, 0LL);
    KeUnstackDetachProcess(&ApcState);
    *((_QWORD *)a3 + 13) = 0LL;
  }
  if ( v11 )
  {
    v42 = *this;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)v42 + 48, 0LL);
    *((_QWORD *)v42 + 7) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v42 + 48, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( a4 )
    VIDMM_GLOBAL::WaitForAllPagingEngines((VIDMM_GLOBAL *)this, a3);
  if ( (*((_DWORD *)a3 + 23) & 1) != 0 )
  {
    LOBYTE(v16) = 1;
    VIDMM_GLOBAL::UncommitGlobalBackingStore((VIDMM_GLOBAL *)this, a3, v16);
  }
  VidMmiClosePartition(**((volatile signed __int32 ***)a3 + 61));
  v20 = (KSPIN_LOCK *)*((_QWORD *)a3 + 62);
  if ( v20 )
  {
    VIDMM_GLOBAL::FreeCrossAdapterDataDpc((VIDMM_GLOBAL *)v18, v20, a3);
    v18 = (unsigned int)_InterlockedDecrement(*((volatile signed __int32 **)a3 + 62));
    if ( (_DWORD)v18 )
    {
      if ( (int)v18 < 0 )
      {
        v44 = (int *)*((_QWORD *)a3 + 62);
        v45 = *v44;
        v46 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v43);
        v46[3] = 270LL;
        v46[4] = 66LL;
        v46[5] = v44;
        v46[6] = v45;
        v46[7] = 0LL;
        WdLogEvent5_WdCriticalError(v46);
      }
    }
    else
    {
      VIDMM_GLOBAL::DestroyCrossAdapterAllocation((VIDMM_GLOBAL *)v18, *((struct _VIDMM_CROSSADAPTER_ALLOC **)a3 + 62));
    }
    *((_QWORD *)a3 + 62) = 0LL;
  }
  if ( bTracingEnabled )
  {
    v18 = *((_QWORD *)a3 + 63);
    if ( *(_WORD *)(v18 + 4) && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LOBYTE(v55) = *((_BYTE *)a3 + 432);
      *(_BYTE *)&v54[0].0 = *(_WORD *)(v18 + 4);
      McTemplateK0puu(v18, &EventReportOfferAllocation, v19, a3, *(_QWORD *)&v54[0].0, v55);
      v18 = *((_QWORD *)a3 + 63);
    }
    v21 = *(_DWORD *)v18;
    if ( bTracingEnabled )
    {
      v22 = (const GUID *)*((_QWORD *)a3 + 5);
      if ( v22 )
        v23 = *(int **)v22[1].Data4;
      else
        v23 = 0LL;
      if ( v9 )
      {
        v61 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 16LL);
        v62 = *(_QWORD *)(*(_QWORD *)(v9 + 40) + 64LL);
      }
      else
      {
        LOBYTE(v61) = 0;
        v62 = 0LL;
      }
      LOBYTE(v60) = 0;
      LOBYTE(v24) = 0;
      LOBYTE(v25) = 0;
      LOBYTE(v26) = 0;
      LOBYTE(v27) = 0;
      LOBYTE(v28) = 0;
      v18 = *((unsigned int *)a3 + 18);
      LOBYTE(v29) = 0;
      LOBYTE(v59) = 0;
      LOBYTE(v58) = 0;
      if ( v23 )
      {
        v29 = *v23;
        v24 = v23[1];
        v25 = v23[2];
        v26 = v23[3];
        v27 = v23[4];
        v28 = v23[5];
        v4 = v23[6];
        v60 = v23[7];
        v58 = v23[9];
        v59 = v23[8];
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht(
          *((_QWORD *)a3 + 2),
          &EventDestroyAdapterAllocation,
          v22,
          v62,
          v9,
          v61,
          v21,
          *((_QWORD *)a3 + 2),
          *((_DWORD *)a3 + 8),
          v56,
          *((_DWORD *)a3 + 17),
          v18,
          v57,
          *((_DWORD *)a3 + 16),
          *((_DWORD *)a3 + 94),
          (char)a3,
          (char)v22,
          0,
          v29,
          v24,
          v25,
          v26,
          v27,
          v28,
          v4,
          v60,
          v59,
          v58,
          (*((_DWORD *)a3 + 21) & 2) != 0,
          *((_QWORD *)a3 + 45),
          *((_DWORD *)a3 + 19) & 0x3F,
          BYTE1(*((_DWORD *)a3 + 19)) & 1);
    }
  }
  this[957] = (struct _KTHREAD *)((char *)this[957] + *((_QWORD *)a3 + 2));
  ++*((_DWORD *)this + 1912);
  v30 = *((_QWORD *)a3 + 2);
  if ( (**((_DWORD **)a3 + 63) & 0x20000000) != 0 )
  {
    ++*((_DWORD *)this + 1944);
    this[973] = (struct _KTHREAD *)((char *)this[973] + v30);
  }
  else
  {
    ++*((_DWORD *)this + 1948);
    this[975] = (struct _KTHREAD *)((char *)this[975] + v30);
  }
  this[5019] = (struct _KTHREAD *)((char *)this[5019] - *((_QWORD *)a3 + 2));
  v31 = *((_QWORD *)a3 + 40);
  if ( v31 )
  {
    if ( *(_QWORD *)(v31 + 8) )
    {
      v47 = WdLogNewEntry5_WdAssertion(v18, v30);
      *(_QWORD *)(v47 + 24) = 389LL;
      WdLogEvent5_WdAssertion(v47);
    }
    if ( *(_DWORD *)(v31 + 24) )
    {
      v48 = WdLogNewEntry5_WdAssertion(v18, v30);
      *(_QWORD *)(v48 + 24) = 390LL;
      WdLogEvent5_WdAssertion(v48);
    }
    operator delete((void *)v31);
  }
  v32 = *((_QWORD *)a3 + 63);
  if ( v32 )
  {
    if ( *(_QWORD *)(v32 + 24) )
    {
      for ( i = 0LL; i < 16; i += 8LL )
      {
        v50 = *(void **)(i + *(_QWORD *)(v32 + 24));
        v51 = v32;
        if ( v50 )
        {
          VidSchDestroySyncObject(v50);
          *(_QWORD *)(i + *(_QWORD *)(*((_QWORD *)a3 + 63) + 24LL)) = 0LL;
          v32 = *((_QWORD *)a3 + 63);
          v51 = v32;
        }
        else
        {
          v32 = *((_QWORD *)a3 + 63);
        }
      }
      operator delete(*(void **)(v51 + 24));
      *(_QWORD *)(*((_QWORD *)a3 + 63) + 24LL) = 0LL;
      v32 = *((_QWORD *)a3 + 63);
    }
    v33 = *(int **)(v32 + 16);
    if ( v33 )
    {
      if ( _InterlockedExchangeAdd(v33, 0xFFFFFFFF) == 1 )
      {
        if ( v33[2] )
        {
          v52 = v33[2];
          v53 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v30);
          v53[3] = 270LL;
          v53[4] = 42LL;
          v53[5] = v33;
          v53[6] = v52;
          v53[7] = 0LL;
          WdLogEvent5_WdCriticalError(v53);
        }
        operator delete(v33);
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
