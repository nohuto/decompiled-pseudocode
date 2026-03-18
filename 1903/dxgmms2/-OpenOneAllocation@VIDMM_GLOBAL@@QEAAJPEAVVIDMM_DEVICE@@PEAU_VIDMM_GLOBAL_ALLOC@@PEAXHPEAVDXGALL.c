/*
 * XREFs of ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00749D0
 * Callers:
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C005C978 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C0061248 (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0062BBC (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?OpenAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@IPEAXHPEAVDXGALLOCATION@@PEAPEAU_VIDMM_MULTI_ALLOC@@PEAIPEAE@Z @ 0x1C0071170 (-OpenAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@IPEAXHPEAVDX.c)
 *     ?TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@@Z @ 0x1C007F430 (-TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_AL.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001750 (--3@YAXPEAX@Z.c)
 *     ?IsWarpAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00017CC (-IsWarpAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001EB4 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002940 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B90 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003790 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ??0VIDMM_ALLOC@@QEAA@XZ @ 0x1C0024E64 (--0VIDMM_ALLOC@@QEAA@XZ.c)
 *     McTemplateK0pppppppppppp @ 0x1C0025B08 (McTemplateK0pppppppppppp.c)
 *     McTemplateK0q @ 0x1C0026600 (McTemplateK0q.c)
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C0063918 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C00645B0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z @ 0x1C0071020 (-CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C00754F0 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0077180 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@K_K@Z @ 0x1C0084618 (-PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@K_K@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x1C00AEF48 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_.c)
 *     ?NotifyAllocationClosed@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00B3770 (-NotifyAllocationClosed@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
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
  __int64 v8; // r14
  __int64 v13; // r15
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
  struct _VIDMM_LOCAL_ALLOC *v32; // r12
  bool v33; // al
  struct _VIDMM_LOCAL_ALLOC *v34; // rdx
  struct _VIDMM_LOCAL_ALLOC **v35; // rcx
  __int64 v36; // rax
  __int64 CurrentProcess; // rax
  int v38; // eax
  _QWORD *v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rbx
  _QWORD *v44; // rax
  int v45; // eax
  __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  _QWORD *v50; // rax
  VIDMM_GLOBAL *v51; // rcx
  __int64 *v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 **v55; // rcx
  int v56; // eax
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rcx
  struct VIDMM_DEVICE *v60; // r8
  bool v61; // zf
  __int64 v62; // rdx
  __int64 v63; // rax
  unsigned int v64; // ecx
  __int64 v65; // r12
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rbx
  __int64 v69; // rax
  struct _VIDSCH_SYNC_OBJECT **v70; // rbx
  int Resident; // eax
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rax
  struct VIDMM_PAGING_QUEUE *v75; // rdx
  int v76; // eax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rbx
  _QWORD *v80; // rax
  __int64 v81; // rax
  char *v82; // rdx
  char **v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rbx
  HANDLE CurrentProcessId; // r9
  __int64 v87; // rax
  __int64 v88; // rax
  unsigned int v90; // [rsp+80h] [rbp-80h]
  unsigned int v91; // [rsp+84h] [rbp-7Ch]
  struct _VIDSCH_SYNC_OBJECT *v92; // [rsp+88h] [rbp-78h] BYREF
  struct _VIDMM_LOCAL_ALLOC *v93; // [rsp+90h] [rbp-70h]
  __int64 v94; // [rsp+98h] [rbp-68h] BYREF
  struct VIDMM_PROCESS_ADAPTER_INFO *v95; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v96; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v97; // [rsp+B0h] [rbp-50h]
  __int64 v98; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v99; // [rsp+C0h] [rbp-40h]
  __int64 v100; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v101; // [rsp+D0h] [rbp-30h] BYREF
  struct _VIDMM_MULTI_ALLOC *v102; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 v103; // [rsp+E0h] [rbp-20h] BYREF
  int v104; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v105; // [rsp+F4h] [rbp-Ch]
  int v106; // [rsp+FCh] [rbp-4h]
  VIDMM_ALLOC *v107; // [rsp+100h] [rbp+0h]
  __int64 v108; // [rsp+108h] [rbp+8h]
  __int128 v109; // [rsp+110h] [rbp+10h]
  __int128 v110; // [rsp+120h] [rbp+20h]
  __int128 v111; // [rsp+130h] [rbp+30h]
  _BYTE v112[32]; // [rsp+140h] [rbp+40h] BYREF
  struct VIDMM_ALLOC **v114; // [rsp+1C0h] [rbp+C0h]

  v8 = 0LL;
  v91 = 0;
  v90 = 0;
  v97 = 0LL;
  LODWORD(v13) = 0;
  v95 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v14 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v14 + 24) = a3;
    *(_QWORD *)(v14 + 32) = a2;
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
LABEL_116:
    _InterlockedIncrement(&dword_1C004E588);
    v88 = WdLogNewEntry5_WdLowResource(v16);
    *(_QWORD *)(v88 + 24) = 4007LL;
    WdLogEvent5_WdLowResource(v88);
    LODWORD(v13) = -1073741801;
    return (unsigned int)v13;
  }
  v19 = (VIDMM_ALLOC *)operator new[](0xF0uLL, 0x33306956u, (POOL_TYPE)512);
  v17 = v19;
  if ( !v19 )
    goto LABEL_116;
  memset(v19, 0, 0xF0uLL);
  KeInitializeEvent((PRKEVENT)v17 + 3, NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)v17 + 7, SynchronizationEvent, 0);
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)v17 + 29);
LABEL_8:
  if ( !v17 )
    goto LABEL_116;
  *((_BYTE *)v17 + 36) ^= (*((_BYTE *)v17 + 36) ^ (*((_DWORD *)this + 1760) >> 13)) & 1;
  v20 = *((_QWORD *)a2 + 2);
  if ( v20 )
  {
    v21 = v20 + 360;
    if ( v21 && *(struct _KTHREAD **)(v21 + 8) == KeGetCurrentThread() )
    {
      v22 = WdLogNewEntry5_WdAssertion(v16, v18);
      *(_QWORD *)(v22 + 24) = 1448LL;
      WdLogEvent5_WdAssertion(v22);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v21, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v25 = *(_DWORD *)(v21 + 16);
        if ( v25 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v23, (const EVENT_DESCRIPTOR *)"g", v24, v25);
      }
      ExAcquirePushLockExclusiveEx(v21, 0LL);
    }
    *(_QWORD *)(v21 + 8) = KeGetCurrentThread();
    v26 = (VIDMM_ALLOC *)((char *)v17 + 112);
    v27 = (struct VIDMM_DEVICE **)*((_QWORD *)a2 + 21);
    if ( *v27 != (struct VIDMM_DEVICE *)((char *)a2 + 160) )
      goto LABEL_115;
    *(_QWORD *)v26 = (char *)a2 + 160;
    *((_QWORD *)v17 + 15) = v27;
    *v27 = v26;
    *((_QWORD *)a2 + 21) = v26;
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
    goto LABEL_104;
  }
  v29 = *((unsigned int *)a3 + 21);
  if ( (*((_BYTE *)a3 + 84) & 1) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v29) + 24) = a3;
    LODWORD(v13) = -1071775470;
    goto LABEL_104;
  }
  v30 = *((_QWORD *)a3 + 13);
  v100 = v30;
  if ( (v29 & 4) != 0 )
    v95 = *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(*(_QWORD *)(v30 + 8) + 16LL)
                                                + 8LL * *((unsigned int *)this[3] + 52));
  v31 = VIDMM_GLOBAL::OpenLocalAllocation((VIDMM_GLOBAL *)this, a3, *((struct VIDMM_PROCESS **)a2 + 1), a4, a8);
  v93 = v31;
  v32 = v31;
  if ( !v31 )
  {
    LODWORD(v13) = -1071775488;
LABEL_104:
    VIDMM_DEVICE::NotifyAllocationClosed(a2, v17);
    operator delete(v17);
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a3 + 40));
    return (unsigned int)v13;
  }
  v99 = *((_QWORD *)a3 + 13);
  *((_QWORD *)v17 + 2) = a6;
  *(_QWORD *)v17 = v31;
  *((_QWORD *)v17 + 1) = a2;
  *((_QWORD *)v17 + 12) = *((_QWORD *)a3 + 63);
  *((_DWORD *)v17 + 7) ^= (*((_DWORD *)v17 + 7) ^ (**((_DWORD **)a3 + 63) >> 26)) & 8;
  *((_BYTE *)v17 + 24) = a5 != 0;
  if ( a5 && (**((_DWORD **)a3 + 63) & 0x200000) != 0 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a6 + 1) + 40LL) + 298LL) )
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
LABEL_115:
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
        v94 = 0LL;
        v98 = 0LL;
        CurrentProcess = PsGetCurrentProcess(v35, v34);
        v38 = MmMapViewOfSection(
                *((_QWORD *)a3 + 45),
                CurrentProcess,
                &v94,
                0LL,
                *((_QWORD *)a3 + 1),
                &v98,
                (char *)a3 + 8,
                2,
                0,
                4);
        v13 = v38;
        if ( v38 < 0 )
        {
          _InterlockedIncrement(&dword_1C004E59C);
          v39 = (_QWORD *)WdLogNewEntry5_WdLowResource(v35);
          v39[3] = a3;
          v42 = PsGetCurrentProcess(v41, v40);
          v39[5] = v13;
          v39[4] = v42;
          WdLogEvent5_WdLowResource(v39);
          DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a3 + 40));
LABEL_97:
          v72 = *((_DWORD *)a3 + 19) & 0x3F;
          v105 = 0LL;
          v73 = 176 * v72;
          v109 = 0LL;
          v110 = 0LL;
          v111 = 0LL;
          v74 = *((_QWORD *)v17 + 1);
          v106 = 0;
          v108 = 0LL;
          v104 = 200;
          v75 = (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(v74 + 72) + v73);
          v107 = v17;
          v76 = VIDMM_GLOBAL::QueueDeferredCommand(
                  (VIDMM_GLOBAL *)this,
                  v75,
                  (struct _VIDMM_DEFERRED_COMMAND *)&v104,
                  1,
                  0LL);
          v79 = v76;
          if ( v76 < 0 )
          {
            v80 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v78, v77);
            v80[3] = 270LL;
            v80[4] = 5LL;
            v80[5] = 200LL;
            v80[6] = v79;
            v80[7] = 0LL;
            WdLogEvent5_WdCriticalError(v80);
          }
          KeWaitForSingleObject((char *)v17 + 72, Executive, 0, 0, 0LL);
          DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a3 + 40));
          v81 = *((_QWORD *)v17 + 5);
          v82 = (char *)v17 + 40;
          if ( !v81 )
            goto LABEL_103;
          if ( *(char **)(v81 + 8) == v82 )
          {
            v83 = (char **)*((_QWORD *)v17 + 6);
            if ( *v83 == v82 )
            {
              *v83 = (char *)v81;
              *(_QWORD *)(v81 + 8) = v83;
LABEL_103:
              VIDMM_GLOBAL::CloseLocalAllocation((VIDMM_GLOBAL *)this, v32, 1);
              goto LABEL_104;
            }
          }
          goto LABEL_115;
        }
        v36 = v94;
      }
    }
    else
    {
      v36 = *((_QWORD *)v32 + 2);
    }
    *((_QWORD *)v17 + 18) = v36;
  }
  v43 = *((_QWORD *)a3 + 40);
  if ( *(struct _KTHREAD **)(v43 + 16) != KeGetCurrentThread() )
  {
    v44 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v35, v34);
    v44[3] = 275LL;
    v44[4] = 4LL;
    v44[5] = v43;
    v44[6] = 0LL;
    v44[7] = 0LL;
    WdLogEvent5_WdCriticalError(v44);
  }
  v45 = *(_DWORD *)(v43 + 24);
  if ( v45 <= 0 )
  {
    v46 = WdLogNewEntry5_WdAssertion(v35, v34);
    *(_QWORD *)(v46 + 24) = 602LL;
    WdLogEvent5_WdAssertion(v46);
    v45 = *(_DWORD *)(v43 + 24);
  }
  v47 = v45 - 1;
  *(_DWORD *)(v43 + 24) = v47;
  if ( !v47 )
  {
    *(_QWORD *)(v43 + 16) = 0LL;
    ExReleasePushLockExclusiveEx(v43, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( v100 != v99 )
  {
    if ( v32 != *((struct _VIDMM_LOCAL_ALLOC **)a3 + 13) && g_IsInternalRelease )
    {
      v50 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v49, v48);
      v50[3] = 270LL;
      v50[4] = 9LL;
      v50[5] = 0LL;
      v50[6] = 0LL;
      v50[7] = 0LL;
      WdLogEvent5_WdCriticalError(v50);
    }
    if ( *(_WORD *)(*((_QWORD *)a3 + 63) + 4LL) )
    {
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v112, this + 4994);
      v52 = (__int64 *)((char *)a3 + 416);
      if ( *((_QWORD *)a3 + 52) )
        VIDMM_GLOBAL::RemoveAllocationFromDecommitList(v51, a3, v95);
      if ( (*((_BYTE *)a3 + 92) & 3) == 3 )
      {
        v53 = *((unsigned int *)this[3] + 52);
        v54 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v32 + 1) + 16LL) + 8 * v53) + 416LL;
        v55 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v32 + 1) + 16LL) + 8 * v53) + 424LL);
        if ( *v55 != (__int64 *)v54 )
          goto LABEL_115;
        *v52 = v54;
        *((_QWORD *)a3 + 53) = v55;
        *v55 = v52;
        *(_QWORD *)(v54 + 8) = v52;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v112);
    }
  }
  if ( (**((_DWORD **)a3 + 63) & 0x40000000) != 0 )
  {
    if ( ((_DWORD)this[880] & 2) != 0
      && (**(_DWORD **)(*(_QWORD *)v32 + 504LL) & 0x20000000) != 0
      && v32 == *(struct _VIDMM_LOCAL_ALLOC **)(*(_QWORD *)v32 + 104LL) )
    {
      LODWORD(v13) = -1071775487;
      goto LABEL_97;
    }
    v56 = VIDMM_GLOBAL::PinOneAllocation((VIDMM_GLOBAL *)this, v17, 0, 0xFFFFFFFFFFFFFFFFuLL);
    v13 = v56;
    if ( v56 < 0 )
    {
      _InterlockedIncrement(&dword_1C004E60C);
      v58 = WdLogNewEntry5_WdLowResource(v57);
      *(_QWORD *)(v58 + 24) = v17;
      *(_QWORD *)(v58 + 32) = v13;
      WdLogEvent5_WdLowResource(v58);
      goto LABEL_97;
    }
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a3 + 40));
    if ( *((_BYTE *)a3 + 96) == 1 )
    {
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v59) + 24) = a3;
      LODWORD(v13) = -1071775482;
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a3 + 40));
      goto LABEL_97;
    }
    if ( (*((_BYTE *)a3 + 84) & 1) != 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v59) + 24) = a3;
      LODWORD(v13) = -1071775470;
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a3 + 40));
      goto LABEL_97;
    }
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a3 + 40));
  }
  else
  {
    v60 = a2;
    v66 = *((_QWORD *)a2 + 3);
    if ( !v66
      || (*(_BYTE *)(v66 + 1751)
       || *(_DWORD *)(v66 + 328) == 2 && *(int *)(*(_QWORD *)(*(_QWORD *)(v66 + 16) + 16LL) + 2452LL) >= 2000)
      && (*((_DWORD *)a3 + 20) & 0x20) == 0 )
    {
      goto LABEL_83;
    }
    v67 = *((_DWORD *)a3 + 19) & 0x3F;
    v96 = 0LL;
    v68 = 176 * v67;
    v69 = *((_QWORD *)v17 + 1);
    v101 = 0LL;
    v102 = v17;
    v70 = (struct _VIDSCH_SYNC_OBJECT **)(*(_QWORD *)(v69 + 72) + v68);
    Resident = VIDMM_GLOBAL::MakeResident(
                 (VIDMM_GLOBAL *)this,
                 (struct VIDMM_PAGING_QUEUE *)v70,
                 &v102,
                 1uLL,
                 0,
                 &v96,
                 &v101);
    LODWORD(v13) = Resident;
    if ( Resident == 259 )
    {
      v92 = v70[11];
      v103 = v96;
      VIDMM_GLOBAL::WaitForFences((VIDMM_GLOBAL *)this, &v92, &v103, 1u, 0LL);
      LODWORD(v13) = 0;
    }
    else if ( Resident < 0 )
    {
      goto LABEL_97;
    }
  }
  v60 = a2;
LABEL_83:
  *((_DWORD *)v17 + 7) |= 0x40u;
  v61 = bTracingEnabled == 0;
  *a7 = v17;
  if ( !v61 )
  {
    v62 = *((_QWORD *)v17 + 2);
    if ( v62 )
    {
      v91 = *(_DWORD *)(v62 + 16);
      v63 = *(_QWORD *)(v62 + 40);
      if ( v63 )
      {
        v64 = *(_DWORD *)(v63 + 16);
        v97 = *(_QWORD *)(v63 + 48);
        v90 = v64;
      }
    }
    if ( (**((_DWORD **)a3 + 63) & 8) != 0 )
      v65 = *((_QWORD *)a3 + 46);
    else
      v65 = *((_QWORD *)v32 + 2);
    if ( v62 && (v84 = *(_QWORD *)(v62 + 40)) != 0 )
      v85 = *(_QWORD *)(v84 + 56);
    else
      v85 = 0LL;
    if ( v62 )
      v8 = *(_QWORD *)(v62 + 40);
    v92 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)v60 + 3);
    v114 = (struct VIDMM_ALLOC **)*((_QWORD *)v93 + 3);
    v93 = this[3];
    CurrentProcessId = PsGetCurrentProcessId();
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      McTemplateK0pppppppppppp(
        v90,
        &EventCreateDeviceAllocation,
        (const GUID *)v114,
        CurrentProcessId,
        v92,
        v93,
        v17,
        a3,
        v8,
        v85,
        v91,
        v90,
        v97,
        v65,
        v114);
  }
  v87 = *((_QWORD *)a3 + 2);
  ++*((_DWORD *)this + 1916);
  this[959] = (DXGADAPTER *)((char *)this[959] + v87);
  return (unsigned int)v13;
}
