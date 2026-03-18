/*
 * XREFs of ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00626E0
 * Callers:
 *     ?OpenAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@IPEAXHPEAVDXGALLOCATION@@PEAPEAU_VIDMM_MULTI_ALLOC@@PEAIPEAE@Z @ 0x1C0061FF8 (-OpenAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@IPEAXHPEAVDX.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C006ACA0 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C0078300 (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C007DA00 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@@Z @ 0x1C007EA9C (-TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_AL.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00015B0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001AD8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001BE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001C40 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00023E8 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00029E0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsWarpAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0010BC8 (-IsWarpAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C00183C0 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     McTemplateK0q @ 0x1C0019440 (McTemplateK0q.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ??0VIDMM_ALLOC@@QEAA@XZ @ 0x1C0025704 (--0VIDMM_ALLOC@@QEAA@XZ.c)
 *     McTemplateK0pppppppppppp @ 0x1C002636C (McTemplateK0pppppppppppp.c)
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C005FB98 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C00609D8 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C00631DC (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z @ 0x1C0065A48 (-CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C00663F0 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C00814F8 (-PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x1C00AB96C (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_.c)
 *     ?NotifyAllocationClosed@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00B0370 (-NotifyAllocationClosed@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::OpenOneAllocation(
        DXGADAPTER **this,
        struct VIDMM_DEVICE *a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        void *a4,
        int a5,
        struct DXGALLOCATION *a6,
        struct VIDMM_ALLOC **a7,
        unsigned __int8 *a8)
{
  __int64 v8; // rbp
  struct VIDMM_DEVICE *v11; // r13
  __int64 v13; // r14
  __int64 v14; // rax
  VIDMM_ALLOC *v15; // rax
  __int64 v16; // rcx
  VIDMM_ALLOC *v17; // rdi
  __int64 v18; // rdx
  VIDMM_ALLOC *v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  const GUID *v24; // r8
  int v25; // r9d
  struct VIDMM_DEVICE *v26; // rax
  struct VIDMM_DEVICE **v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r8
  struct _VIDMM_LOCAL_ALLOC *v31; // rax
  struct _VIDMM_LOCAL_ALLOC *v32; // r13
  bool v33; // al
  struct _VIDMM_LOCAL_ALLOC *v34; // r12
  struct _VIDMM_LOCAL_ALLOC **v35; // rcx
  __int64 v36; // rax
  __int64 CurrentProcess; // rax
  int v38; // eax
  __int64 v39; // rcx
  _QWORD *v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  _QWORD *v44; // rax
  VIDMM_GLOBAL *v45; // rcx
  __int64 *v46; // rbx
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 **v50; // rcx
  int v51; // eax
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rcx
  struct VIDMM_DEVICE *v55; // r8
  bool v56; // zf
  __int64 v57; // rdx
  __int64 v58; // rax
  unsigned int v59; // ecx
  __int64 v60; // r12
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rbx
  __int64 v64; // rax
  struct _VIDSCH_SYNC_OBJECT **v65; // rbx
  int Resident; // eax
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rax
  int v70; // eax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rbx
  _QWORD *v74; // rax
  __int64 v75; // rax
  struct _VIDMM_LOCAL_ALLOC **v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rbx
  __int64 v79; // r13
  const GUID *v80; // r8
  HANDLE CurrentProcessId; // r9
  __int64 v82; // rax
  __int64 v83; // rax
  unsigned int v85; // [rsp+80h] [rbp-F8h]
  unsigned int v86; // [rsp+84h] [rbp-F4h]
  struct _VIDSCH_SYNC_OBJECT *v87; // [rsp+88h] [rbp-F0h] BYREF
  __int64 v88; // [rsp+90h] [rbp-E8h] BYREF
  struct VIDMM_PROCESS_ADAPTER_INFO *v89; // [rsp+98h] [rbp-E0h]
  unsigned __int64 v90; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v91; // [rsp+A8h] [rbp-D0h]
  __int64 v92; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v93; // [rsp+B8h] [rbp-C0h]
  __int64 v94; // [rsp+C0h] [rbp-B8h]
  unsigned __int64 v95; // [rsp+C8h] [rbp-B0h] BYREF
  struct _VIDMM_MULTI_ALLOC *v96; // [rsp+D0h] [rbp-A8h] BYREF
  unsigned __int64 v97; // [rsp+D8h] [rbp-A0h] BYREF
  _BYTE v98[32]; // [rsp+E0h] [rbp-98h] BYREF
  _QWORD v99[15]; // [rsp+100h] [rbp-78h] BYREF
  struct VIDMM_ALLOC **v101; // [rsp+1B0h] [rbp+38h]

  v8 = 0LL;
  v86 = 0;
  v85 = 0;
  v11 = a2;
  v91 = 0LL;
  LODWORD(v13) = 0;
  v89 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v14 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v14 + 24) = a3;
    *(_QWORD *)(v14 + 32) = v11;
  }
  *a7 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v15 = (VIDMM_ALLOC *)operator new[](0x120uLL, 0x33306956u, (POOL_TYPE)512);
    v17 = v15;
    if ( v15 )
    {
      VIDMM_ALLOC::VIDMM_ALLOC(v15);
      *((_DWORD *)v17 + 7) |= 0x20u;
      *((_QWORD *)v17 + 30) = 0LL;
      *((_QWORD *)v17 + 31) = 0LL;
      *((_QWORD *)v17 + 32) = 0LL;
      *((_QWORD *)v17 + 33) = 0LL;
      *((_QWORD *)v17 + 34) = 0LL;
      *((_QWORD *)v17 + 35) = 0LL;
      goto LABEL_8;
    }
LABEL_112:
    _InterlockedIncrement(&dword_1C004D5A8);
    v83 = WdLogNewEntry5_WdLowResource(v16);
    *(_QWORD *)(v83 + 24) = 3940LL;
    WdLogEvent5_WdLowResource(v83);
    LODWORD(v13) = -1073741801;
    return (unsigned int)v13;
  }
  v19 = (VIDMM_ALLOC *)operator new[](0xF0uLL, 0x33306956u, (POOL_TYPE)512);
  v17 = v19;
  if ( !v19 )
    goto LABEL_112;
  memset(v19, 0, 0xF0uLL);
  KeInitializeEvent((PRKEVENT)v17 + 3, NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)v17 + 7, SynchronizationEvent, 0);
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)v17 + 29);
LABEL_8:
  if ( !v17 )
    goto LABEL_112;
  *((_BYTE *)v17 + 36) ^= (*((_BYTE *)v17 + 36) ^ (*((_DWORD *)this + 1760) >> 13)) & 1;
  v20 = *((_QWORD *)v11 + 2);
  if ( v20 )
  {
    v21 = v20 + 360;
    if ( v21 && *(struct _KTHREAD **)(v21 + 8) == KeGetCurrentThread() )
    {
      v22 = WdLogNewEntry5_WdAssertion(v16, v18);
      *(_QWORD *)(v22 + 24) = 1309LL;
      WdLogEvent5_WdAssertion(v22);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v21, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v25 = *(_DWORD *)(v21 + 16);
        if ( v25 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v23, &EventBlockThread, v24, v25);
      }
      ExAcquirePushLockExclusiveEx(v21, 0LL);
    }
    *(_QWORD *)(v21 + 8) = KeGetCurrentThread();
    v26 = (VIDMM_ALLOC *)((char *)v17 + 112);
    v27 = (struct VIDMM_DEVICE **)*((_QWORD *)v11 + 21);
    if ( *v27 != (struct VIDMM_DEVICE *)((char *)v11 + 160) )
      goto LABEL_111;
    *(_QWORD *)v26 = (char *)v11 + 160;
    *((_QWORD *)v17 + 15) = v27;
    *v27 = v26;
    *((_QWORD *)v11 + 21) = v26;
    *(_QWORD *)(v21 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v21, 0LL);
    KeLeaveCriticalRegion();
  }
  *((_DWORD *)v17 + 8) ^= (*((_DWORD *)v17 + 8) ^ (4 * *((_DWORD *)a3 + 19))) & 0xFC;
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a3 + 40));
  if ( *((_BYTE *)a3 + 96) == 1 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v28) + 24) = a3;
    LODWORD(v13) = -1071775482;
    goto LABEL_100;
  }
  v29 = *((unsigned int *)a3 + 21);
  if ( (*((_BYTE *)a3 + 84) & 1) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v29) + 24) = a3;
    LODWORD(v13) = -1071775470;
    goto LABEL_100;
  }
  v30 = *((_QWORD *)a3 + 13);
  v94 = v30;
  if ( (v29 & 4) != 0 )
    v89 = *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(*(_QWORD *)(v30 + 8) + 16LL)
                                                + 8LL * *((unsigned int *)this[3] + 52));
  v31 = VIDMM_GLOBAL::OpenLocalAllocation((VIDMM_GLOBAL *)this, a3, *((struct VIDMM_PROCESS **)v11 + 1), a4, a8);
  v32 = v31;
  if ( !v31 )
  {
    LODWORD(v13) = -1071775488;
LABEL_99:
    v11 = a2;
LABEL_100:
    VIDMM_DEVICE::NotifyAllocationClosed(v11, v17);
    operator delete(v17);
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a3 + 40));
    return (unsigned int)v13;
  }
  v93 = *((_QWORD *)a3 + 13);
  *((_QWORD *)v17 + 1) = a2;
  *(_QWORD *)v17 = v31;
  *((_QWORD *)v17 + 2) = a6;
  *((_QWORD *)v17 + 12) = *((_QWORD *)a3 + 63);
  *((_DWORD *)v17 + 7) ^= (*((_DWORD *)v17 + 7) ^ (**((_DWORD **)a3 + 63) >> 26)) & 8;
  *((_BYTE *)v17 + 24) = a5 != 0;
  if ( a5 && (**((_DWORD **)a3 + 63) & 0x200000) != 0 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a6 + 1) + 40LL) + 322LL) )
  {
    v33 = a5 != 0;
    if ( *((_DWORD *)this + 1748) > 1u )
      v33 = 0;
    *((_BYTE *)v17 + 24) = v33;
  }
  *((_QWORD *)v17 + 18) = 0LL;
  *((_QWORD *)v17 + 17) = (char *)v17 + 128;
  v34 = (VIDMM_ALLOC *)((char *)v17 + 40);
  *((_QWORD *)v17 + 16) = (char *)v17 + 128;
  v35 = (struct _VIDMM_LOCAL_ALLOC **)*((_QWORD *)v32 + 6);
  if ( *v35 != (struct _VIDMM_LOCAL_ALLOC *)((char *)v32 + 40) )
LABEL_111:
    __fastfail(3u);
  *(_QWORD *)v34 = (char *)v32 + 40;
  *((_QWORD *)v17 + 6) = v35;
  *v35 = v34;
  *((_QWORD *)v32 + 6) = v34;
  if ( ((_BYTE)this[5109] & 4) != 0 )
  {
    if ( (**((_DWORD **)a3 + 63) & 0x10000008) != 0 )
    {
      if ( DXGADAPTER::IsWarpAdapter(this[3]) )
      {
        v36 = *((_QWORD *)a3 + 46);
      }
      else
      {
        v88 = 0LL;
        v92 = 0LL;
        CurrentProcess = PsGetCurrentProcess();
        v38 = MmMapViewOfSection(
                *((_QWORD *)a3 + 45),
                CurrentProcess,
                &v88,
                0LL,
                *((_QWORD *)a3 + 1),
                &v92,
                (char *)a3 + 8,
                2,
                0,
                4);
        v13 = v38;
        if ( v38 < 0 )
        {
          _InterlockedIncrement(&dword_1C004D5BC);
          v40 = (_QWORD *)WdLogNewEntry5_WdLowResource(v39);
          v40[3] = a3;
          v41 = PsGetCurrentProcess();
          v40[5] = v13;
          v40[4] = v41;
          WdLogEvent5_WdLowResource(v40);
          DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a3 + 40));
LABEL_92:
          memset(v99, 0, 0x50uLL);
          v67 = *((_DWORD *)a3 + 19) & 0x3F;
          LODWORD(v99[0]) = 200;
          v68 = 176 * v67;
          v69 = *((_QWORD *)v17 + 1);
          v99[2] = v17;
          v70 = VIDMM_GLOBAL::QueueDeferredCommand(
                  (VIDMM_GLOBAL *)this,
                  (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(v69 + 72) + v68),
                  (struct _VIDMM_DEFERRED_COMMAND *)v99,
                  1,
                  0LL);
          v73 = v70;
          if ( v70 < 0 )
          {
            v74 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v72, v71);
            v74[3] = 270LL;
            v74[4] = 5LL;
            v74[5] = 200LL;
            v74[6] = v73;
            v74[7] = 0LL;
            WdLogEvent5_WdCriticalError(v74);
          }
          KeWaitForSingleObject((char *)v17 + 72, Executive, 0, 0, 0LL);
          DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a3 + 40));
          v75 = *(_QWORD *)v34;
          if ( !*(_QWORD *)v34 )
            goto LABEL_98;
          if ( *(struct _VIDMM_LOCAL_ALLOC **)(v75 + 8) == v34 )
          {
            v76 = (struct _VIDMM_LOCAL_ALLOC **)*((_QWORD *)v17 + 6);
            if ( *v76 == v34 )
            {
              *v76 = (struct _VIDMM_LOCAL_ALLOC *)v75;
              *(_QWORD *)(v75 + 8) = v76;
LABEL_98:
              VIDMM_GLOBAL::CloseLocalAllocation((VIDMM_GLOBAL *)this, v32, 1);
              goto LABEL_99;
            }
          }
          goto LABEL_111;
        }
        v36 = v88;
      }
    }
    else
    {
      v36 = *((_QWORD *)v32 + 2);
    }
    *((_QWORD *)v17 + 18) = v36;
  }
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a3 + 40));
  if ( v94 != v93 )
  {
    if ( v32 != *((struct _VIDMM_LOCAL_ALLOC **)a3 + 13) && g_IsInternalRelease )
    {
      v44 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v43, v42);
      v44[3] = 270LL;
      v44[4] = 9LL;
      v44[5] = 0LL;
      v44[6] = 0LL;
      v44[7] = 0LL;
      WdLogEvent5_WdCriticalError(v44);
    }
    if ( *(_WORD *)(*((_QWORD *)a3 + 63) + 4LL) )
    {
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v98, this + 4994);
      v46 = (__int64 *)((char *)a3 + 416);
      if ( *((_QWORD *)a3 + 52) )
        VIDMM_GLOBAL::RemoveAllocationFromDecommitList(v45, a3, v89);
      v47 = *((_DWORD *)a3 + 23);
      if ( (v47 & 2) != 0 && (v47 & 1) != 0 )
      {
        v48 = *((unsigned int *)this[3] + 52);
        v49 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v32 + 1) + 16LL) + 8 * v48) + 416LL;
        v50 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v32 + 1) + 16LL) + 8 * v48) + 424LL);
        if ( *v50 != (__int64 *)v49 )
          goto LABEL_111;
        *v46 = v49;
        *((_QWORD *)a3 + 53) = v50;
        *v50 = v46;
        *(_QWORD *)(v49 + 8) = v46;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v98);
    }
  }
  if ( (**((_DWORD **)a3 + 63) & 0x40000000) != 0 )
  {
    if ( ((_DWORD)this[880] & 2) != 0
      && (**(_DWORD **)(*(_QWORD *)v32 + 504LL) & 0x20000000) != 0
      && v32 == *(struct _VIDMM_LOCAL_ALLOC **)(*(_QWORD *)v32 + 104LL) )
    {
      LODWORD(v13) = -1071775487;
      goto LABEL_92;
    }
    v51 = VIDMM_GLOBAL::PinOneAllocation((VIDMM_GLOBAL *)this, v17);
    v13 = v51;
    if ( v51 < 0 )
    {
      _InterlockedIncrement(&dword_1C004D62C);
      v53 = WdLogNewEntry5_WdLowResource(v52);
      *(_QWORD *)(v53 + 24) = v17;
      *(_QWORD *)(v53 + 32) = v13;
      WdLogEvent5_WdLowResource(v53);
      goto LABEL_92;
    }
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a3 + 40));
    if ( *((_BYTE *)a3 + 96) == 1 )
    {
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v54) + 24) = a3;
      LODWORD(v13) = -1071775482;
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a3 + 40));
      goto LABEL_92;
    }
    if ( (*((_BYTE *)a3 + 84) & 1) != 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v54) + 24) = a3;
      LODWORD(v13) = -1071775470;
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a3 + 40));
      goto LABEL_92;
    }
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a3 + 40));
  }
  else
  {
    v55 = a2;
    v61 = *((_QWORD *)a2 + 3);
    if ( !v61
      || (*(_BYTE *)(v61 + 1751)
       || *(_DWORD *)(v61 + 328) == 2
       && (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(v61 + 16) + 16LL)) >= 2000)
      && (*((_DWORD *)a3 + 20) & 0x20) == 0 )
    {
      goto LABEL_78;
    }
    v62 = *((_DWORD *)a3 + 19) & 0x3F;
    v90 = 0LL;
    v63 = 176 * v62;
    v64 = *((_QWORD *)v17 + 1);
    v95 = 0LL;
    v96 = v17;
    v65 = (struct _VIDSCH_SYNC_OBJECT **)(*(_QWORD *)(v64 + 72) + v63);
    Resident = VIDMM_GLOBAL::MakeResident(
                 (VIDMM_GLOBAL *)this,
                 (struct VIDMM_PAGING_QUEUE *)v65,
                 &v96,
                 1uLL,
                 0,
                 &v90,
                 &v95);
    LODWORD(v13) = Resident;
    if ( Resident == 259 )
    {
      v87 = v65[11];
      v97 = v90;
      VIDMM_GLOBAL::WaitForFences((VIDMM_GLOBAL *)this, &v87, &v97, 1u, 0LL);
      LODWORD(v13) = 0;
    }
    else if ( Resident < 0 )
    {
      goto LABEL_92;
    }
  }
  v55 = a2;
LABEL_78:
  *((_DWORD *)v17 + 7) |= 0x40u;
  v56 = bTracingEnabled == 0;
  *a7 = v17;
  if ( !v56 )
  {
    v57 = *((_QWORD *)v17 + 2);
    if ( v57 )
    {
      v86 = *(_DWORD *)(v57 + 16);
      v58 = *(_QWORD *)(v57 + 40);
      if ( v58 )
      {
        v59 = *(_DWORD *)(v58 + 16);
        v91 = *(_QWORD *)(v58 + 48);
        v85 = v59;
      }
    }
    if ( (**((_DWORD **)a3 + 63) & 8) != 0 )
      v60 = *((_QWORD *)a3 + 46);
    else
      v60 = *((_QWORD *)v32 + 2);
    if ( v57 && (v77 = *(_QWORD *)(v57 + 40)) != 0 )
      v78 = *(_QWORD *)(v77 + 56);
    else
      v78 = 0LL;
    if ( v57 )
      v8 = *(_QWORD *)(v57 + 40);
    v79 = *((_QWORD *)v32 + 3);
    v87 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)v55 + 3);
    v101 = (struct VIDMM_ALLOC **)this[3];
    CurrentProcessId = PsGetCurrentProcessId();
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      McTemplateK0pppppppppppp(
        v85,
        &EventCreateDeviceAllocation,
        v80,
        CurrentProcessId,
        v87,
        v101,
        v17,
        a3,
        v8,
        v78,
        v86,
        v85,
        v91,
        v60,
        v79);
  }
  v82 = *((_QWORD *)a3 + 2);
  ++*((_DWORD *)this + 1916);
  this[959] = (DXGADAPTER *)((char *)this[959] + v82);
  return (unsigned int)v13;
}
