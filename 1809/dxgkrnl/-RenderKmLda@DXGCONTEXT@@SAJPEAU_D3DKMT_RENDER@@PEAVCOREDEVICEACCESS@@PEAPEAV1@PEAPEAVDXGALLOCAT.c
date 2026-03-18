/*
 * XREFs of ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C023315C
 * Callers:
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@@Z @ 0x1C0115420 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C001137C (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0011984 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     McTemplateK0p @ 0x1C002FD94 (McTemplateK0p.c)
 *     ?VidMmReferenceDmaBuffer@VIDMM_EXPORT@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C003D468 (-VidMmReferenceDmaBuffer@VIDMM_EXPORT@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@I.c)
 *     ?VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C003D57C (-VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00E0E70 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0102F60 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C013D9E8 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z @ 0x1C01CD90C (-DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z.c)
 *     ?SignalRenderKmMonitoredFence@DXGCONTEXT@@CAJPEAU_DXGKARG_RENDER@@PEAV1@PEAVDXGHWQUEUE@@_K@Z @ 0x1C0233D38 (-SignalRenderKmMonitoredFence@DXGCONTEXT@@CAJPEAU_DXGKARG_RENDER@@PEAV1@PEAVDXGHWQUEUE@@_K@Z.c)
 */

__int64 __fastcall DXGCONTEXT::RenderKmLda(
        struct _D3DKMT_RENDER *a1,
        struct COREDEVICEACCESS *a2,
        struct DXGCONTEXT **a3,
        struct DXGALLOCATION **a4,
        struct DXGHWQUEUE **a5)
{
  struct DXGCONTEXT *v5; // rax
  struct _D3DKMT_RENDER *v6; // rdi
  __int64 v7; // r10
  unsigned int AllocationCount; // esi
  char v9; // r13
  ULONG BroadcastContextCount; // r15d
  int v11; // r15d
  _BYTE *PoolWithTag; // rax
  struct DXGPROCESS *v13; // r14
  unsigned int v14; // esi
  _BYTE *v15; // r12
  struct DXGHWQUEUE **v16; // rsi
  signed __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r15
  UINT v20; // eax
  __int64 v21; // rbx
  D3DKMT_HANDLE hAllocation; // esi
  __int64 v23; // rax
  __int64 v24; // r8
  int v25; // ecx
  __int64 v26; // rcx
  __int64 v27; // rax
  struct _EX_RUNDOWN_REF *v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdx
  struct _SLIST_ENTRY *v32; // rbx
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  const GUID *v36; // r8
  const EVENT_DESCRIPTOR *v37; // rdx
  __int64 v38; // rcx
  VIDMM_EXPORT *v39; // rsi
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  void *pDmaBuffer; // rsi
  void *v45; // rax
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  _QWORD *v50; // rax
  void *v51; // rdx
  int v52; // eax
  bool v53; // zf
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  struct DXGHWQUEUE **v55; // rdi
  int v56; // eax
  int v57; // esi
  int v58; // edi
  struct _SLIST_ENTRY *v59; // rdx
  int v60; // eax
  int v61; // eax
  struct VIDMM_ALLOC **v62; // rcx
  struct DXGHWQUEUE **v63; // rsi
  int v64; // eax
  __int64 v65; // rdx
  struct DXGCONTEXT *v66; // rcx
  __int64 v67; // r8
  int v68; // edi
  struct DXGPROCESS *v69; // rbx
  __int64 v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // rax
  int v73; // esi
  __int64 v74; // r15
  struct DXGCONTEXT **v75; // rbx
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  struct _VIDMM_DMA_BUFFER *v80; // rcx
  char v82; // [rsp+60h] [rbp-A0h]
  char v83; // [rsp+61h] [rbp-9Fh]
  struct _VIDMM_DMA_BUFFER *v84; // [rsp+68h] [rbp-98h] BYREF
  VIDMM_EXPORT *v85; // [rsp+70h] [rbp-90h]
  UINT DmaBufferPrivateDataSize; // [rsp+78h] [rbp-88h]
  UINT AllocationListSize; // [rsp+7Ch] [rbp-84h]
  int v88; // [rsp+80h] [rbp-80h]
  struct DXGHWQUEUE **v89; // [rsp+88h] [rbp-78h]
  void *v90; // [rsp+90h] [rbp-70h] BYREF
  struct _SLIST_ENTRY *v91[2]; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v92; // [rsp+A8h] [rbp-58h] BYREF
  struct DXGPROCESS *v93; // [rsp+B0h] [rbp-50h]
  struct _EX_RUNDOWN_REF *v94; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v95; // [rsp+C0h] [rbp-40h]
  struct _SLIST_ENTRY *v96; // [rsp+C8h] [rbp-38h]
  unsigned int v97; // [rsp+D0h] [rbp-30h] BYREF
  struct _D3DDDI_ALLOCATIONLIST *v98; // [rsp+D8h] [rbp-28h]
  struct VIDMM_ALLOC *v99; // [rsp+E0h] [rbp-20h] BYREF
  struct _D3DKMT_RENDER *v100; // [rsp+E8h] [rbp-18h]
  struct DXGHWQUEUE **v101; // [rsp+F0h] [rbp-10h]
  ADAPTER_RENDER *v102; // [rsp+F8h] [rbp-8h]
  struct DXGCONTEXT **v103; // [rsp+100h] [rbp+0h]
  struct DXGPROCESS *Current; // [rsp+108h] [rbp+8h]
  struct COREDEVICEACCESS *v105; // [rsp+110h] [rbp+10h]
  union _LARGE_INTEGER v106; // [rsp+118h] [rbp+18h] BYREF
  __int64 v107; // [rsp+120h] [rbp+20h]
  signed __int64 v108; // [rsp+128h] [rbp+28h]
  __int64 v109; // [rsp+130h] [rbp+30h]
  struct DXGALLOCATION **v110; // [rsp+138h] [rbp+38h]
  _BYTE v111[16]; // [rsp+140h] [rbp+40h] BYREF
  _DXGKARG_RENDER v112; // [rsp+150h] [rbp+50h] BYREF
  _DXGKARG_RENDERGDI v113; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE *v114; // [rsp+210h] [rbp+110h]
  _BYTE v115[128]; // [rsp+218h] [rbp+118h] BYREF
  unsigned int v116; // [rsp+298h] [rbp+198h]
  PVOID P; // [rsp+2A0h] [rbp+1A0h]
  _BYTE v118[128]; // [rsp+2A8h] [rbp+1A8h] BYREF
  unsigned int v119; // [rsp+328h] [rbp+228h]

  v5 = *a3;
  v6 = a1;
  v100 = a1;
  v101 = a5;
  v7 = *((_QWORD *)v5 + 2);
  v110 = a4;
  v103 = a3;
  v105 = a2;
  v102 = *(ADAPTER_RENDER **)(v7 + 16);
  v85 = (VIDMM_EXPORT *)*((_QWORD *)v102 + 68);
  v95 = *((_QWORD *)v102 + 65);
  Current = DXGPROCESS::GetCurrent();
  AllocationCount = v6->AllocationCount;
  v9 = 1;
  BroadcastContextCount = v6->BroadcastContextCount;
  P = 0LL;
  v11 = BroadcastContextCount + 1;
  v119 = 0;
  if ( AllocationCount <= 0x10 )
  {
    PoolWithTag = v118;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / AllocationCount < 8 )
      goto LABEL_7;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * AllocationCount, 0x4B677844u);
  }
  P = PoolWithTag;
  v119 = AllocationCount;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, 8LL * AllocationCount);
LABEL_7:
  v98 = (struct _D3DDDI_ALLOCATIONLIST *)P;
  if ( !P )
  {
    LODWORD(v13) = -1073741801;
    goto LABEL_110;
  }
  v14 = v6->AllocationCount;
  v15 = 0LL;
  v116 = 0;
  v114 = 0LL;
  if ( v14 <= 0x10 )
  {
    v15 = v115;
    v114 = v115;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v14 < 8 )
      goto LABEL_15;
    v15 = ExAllocatePoolWithTag(PagedPool, 8LL * v14, 0x4B677844u);
    v114 = v15;
  }
  v116 = v14;
  if ( !v15 )
  {
LABEL_16:
    LODWORD(v13) = -1073741801;
    goto LABEL_106;
  }
  memset(v15, 0, 8LL * v14);
  v15 = v114;
LABEL_15:
  if ( !v15 )
    goto LABEL_16;
  v13 = 0LL;
  v88 = 0;
  v107 = v11;
  if ( v11 <= 0 )
    goto LABEL_106;
  v16 = v101;
  v17 = (char *)v103 - (char *)v101;
  v93 = 0LL;
  v108 = (char *)v103 - (char *)v101;
  v89 = v101;
LABEL_19:
  v96 = (struct _SLIST_ENTRY *)(((*(_DWORD *)&v6->Flags & 8u) << 12) | 0x100LL);
  v112.pCommand = (char *)v6->pNewCommandBuffer + v6->CommandOffset;
  v112.CommandLength = v6->CommandLength;
  memset(&v112.pDmaBuffer, 0, 0x60uLL);
  v19 = *(__int64 *)((char *)v16 + v17);
  v109 = v19;
  if ( (*(_DWORD *)(v19 + 396) & 0x10) != 0 && !v101 )
  {
    v70 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v70 + 24) = 1195LL;
    WdLogEvent5_WdError(v70);
    LODWORD(v13) = -1073741823;
    goto LABEL_105;
  }
  AllocationListSize = *(_DWORD *)(v19 + 392);
  v20 = 0;
  DmaBufferPrivateDataSize = 0;
  if ( !v6->AllocationCount )
  {
LABEL_39:
    v90 = 0LL;
    v84 = 0LL;
    v32 = v96;
    v82 = 0;
    v83 = 1;
    while ( 1 )
    {
      v33 = DXGCONTEXT::AcquireDmaBuffer((DXGCONTEXT *)v19, &v84, v105, 0);
      v13 = (struct DXGPROCESS *)v33;
      if ( v33 < 0 )
      {
        v79 = WdLogNewEntry5_WdEvent(v35, v34);
        *(_QWORD *)(v79 + 24) = v19;
        *(_QWORD *)(v79 + 32) = v13;
        WdLogEvent5_WdEvent(v79);
        goto LABEL_97;
      }
      if ( bTracingEnabled )
      {
        if ( (*(_DWORD *)&v6->Flags & 0x20) != 0 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
            goto LABEL_49;
          v37 = (const EVENT_DESCRIPTOR *)&EventRenderKm;
        }
        else
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
            goto LABEL_49;
          v37 = &EventRender;
        }
        McTemplateK0p((struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context, v37, v36, v84);
      }
LABEL_49:
      v99 = 0LL;
      v91[0] = 0LL;
      v91[1] = (struct _SLIST_ENTRY *)v102;
      CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v91);
      v96 = v91[0];
      if ( !v91[0] )
      {
        v78 = WdLogNewEntry5_WdLowResource(v38);
        *(_QWORD *)(v78 + 24) = 1296LL;
        WdLogEvent5_WdLowResource(v78);
        LODWORD(v13) = -1073741801;
        CVidSchSubmitData::~CVidSchSubmitData(v91);
LABEL_97:
        v9 = 0;
        goto LABEL_98;
      }
      v39 = v85;
      v40 = VIDMM_EXPORT::VidMmReferenceDmaBuffer(
              v85,
              v84,
              v98,
              v6->AllocationCount,
              1,
              1,
              &v97,
              &v106,
              &v92,
              &v99,
              (struct _VIDMM_PRIMARIES_REFERENCES *)(&v91[0][12].Next + 1),
              (struct DXGALLOCATION **)v15);
      v13 = (struct DXGPROCESS *)v40;
      if ( v40 < 0 )
      {
        v77 = WdLogNewEntry5_WdWarning(v42, v41, v43);
        *(_QWORD *)(v77 + 24) = v19;
        *(_QWORD *)(v77 + 32) = v13;
        WdLogEvent5_WdWarning(v77);
        CVidSchSubmitData::~CVidSchSubmitData(v91);
        v9 = 0;
        goto LABEL_99;
      }
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, void **))(*((_QWORD *)v39 + 1) + 504LL))(v84, &v90);
      pDmaBuffer = v90;
      v112.pDmaBuffer = v90;
      v112.DmaSize = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*((_QWORD *)v85 + 1) + 528LL))(v84);
      v112.pAllocationList = (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*((_QWORD *)v85 + 1) + 552LL))(v84);
      AllocationListSize = v6->AllocationCount;
      v112.AllocationListSize = AllocationListSize;
      v45 = (void *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*((_QWORD *)v85 + 1) + 560LL))(v84);
      v112.DmaBufferSegmentId = v97;
      v112.pDmaBufferPrivateData = v45;
      LODWORD(v45) = *(_DWORD *)(v19 + 208);
      v112.DmaBufferPhysicalAddress = v106;
      DmaBufferPrivateDataSize = (unsigned int)v45;
      v112.DmaBufferPrivateDataSize = (unsigned int)v45;
      if ( v82 )
      {
        v46 = DXGCONTEXT::SignalRenderKmMonitoredFence(&v112, (struct DXGCONTEXT *)v19, *v89, v92);
        v13 = (struct DXGPROCESS *)v46;
        if ( v46 == -1071775743 )
        {
          v50 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v48);
          v50[3] = 275LL;
          v50[4] = 40LL;
          v50[5] = v19;
          v50[6] = 0LL;
          v50[7] = 0LL;
          WdLogEvent5_WdCriticalError(v50);
        }
        if ( (int)v13 < 0 )
        {
LABEL_85:
          v72 = WdLogNewEntry5_WdWarning(v48, v47, v49);
          *(_QWORD *)(v72 + 24) = v19;
          *(_QWORD *)(v72 + 32) = v13;
          WdLogEvent5_WdWarning(v72);
          goto LABEL_86;
        }
        pDmaBuffer = v112.pDmaBuffer;
        AllocationListSize = v112.AllocationListSize;
        DmaBufferPrivateDataSize = v112.DmaBufferPrivateDataSize;
        v82 = 0;
      }
      if ( v83 )
      {
        v113.pCommand = (char *)v6->pNewCommandBuffer + v6->CommandOffset;
        v113.CommandLength = v6->CommandLength;
        memset(&v113.pDmaBuffer, 0, 0x38uLL);
        v51 = *(void **)(v19 + 184);
        v113.DmaBufferGpuVirtualAddress = v92;
        v113.DmaSize = v112.DmaSize;
        v113.pDmaBufferPrivateData = v112.pDmaBufferPrivateData;
        v113.DmaBufferPrivateDataSize = DmaBufferPrivateDataSize;
        v113.pAllocationList = v112.pAllocationList;
        v113.AllocationListSize = AllocationListSize;
        v113.MultipassOffset = v112.MultipassOffset;
        v113.pDmaBuffer = pDmaBuffer;
        v52 = ADAPTER_RENDER::DdiRenderGdi(v102, v51, (const GUID *)&v113);
        v13 = (struct DXGPROCESS *)v52;
        if ( v52 == -1071775743 )
        {
          v83 = 1;
        }
        else
        {
          if ( v52 < 0 )
            goto LABEL_85;
          v83 = 0;
        }
        v112.pDmaBuffer = v113.pDmaBuffer;
        v112.pDmaBufferPrivateData = v113.pDmaBufferPrivateData;
        v112.MultipassOffset = v113.MultipassOffset;
        if ( (*(_DWORD *)(v19 + 396) & 0x10) != 0 )
        {
          v53 = *(_QWORD *)(v19 + 248) == 0LL;
          v112.DmaBufferPrivateDataSize = v113.DmaBufferPrivateDataSize;
          v112.DmaSize = v113.DmaSize;
          if ( v53 )
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX(
              (DXGAUTOMUTEX *)v111,
              (struct DXGFASTMUTEX *const)(*(_QWORD *)(*(_QWORD *)(v19 + 240) + 32LL) + 32LL),
              0);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v111);
            VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                                 *(DXGSYNCOBJECT **)(*(_QWORD *)(v19 + 240) + 32LL),
                                 *(struct ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v19 + 240) + 16LL) + 16LL));
            v55 = v89;
            (*(void (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, _QWORD))(*(_QWORD *)(v95 + 8) + 272LL))(
              *((_QWORD *)*v89 + 5),
              VidSchSyncObject,
              0LL);
            if ( v111[8] )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v111);
          }
          else
          {
            v55 = v89;
          }
          ++*(_QWORD *)(v19 + 248);
          if ( !*(_BYTE *)(v19 + 296) )
          {
            v56 = DXGCONTEXT::SignalRenderKmMonitoredFence(&v112, (struct DXGCONTEXT *)v19, *v55, v92);
            v13 = (struct DXGPROCESS *)v56;
            if ( v56 == -1071775743 )
            {
              v82 = 1;
            }
            else if ( v56 < 0 )
            {
              goto LABEL_85;
            }
          }
        }
      }
      v57 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*((_QWORD *)v85 + 1) + 560LL))(v84);
      v58 = LODWORD(v112.pDmaBuffer) - (_DWORD)v90;
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*((_QWORD *)v85 + 1) + 512LL))(v84);
      v59 = v96;
      v90 = 0LL;
      v96->Next = v32;
      LODWORD(v59->Next) |= 0x8000000u;
      v59[3].Next = (struct _SLIST_ENTRY *)v92;
      *((_QWORD *)&v59->Next + 1) = v84;
      v60 = LODWORD(v112.pDmaBufferPrivateData) - v57;
      *((_DWORD *)&v59[3].Next + 3) = v58;
      HIDWORD(v59[5].Next) = v60;
      *((_DWORD *)&v59[3].Next + 2) = 0;
      v59[4].Next = 0LL;
      *((_QWORD *)&v59[4].Next + 1) = 0LL;
      LODWORD(v59[5].Next) = 0;
      if ( v99 )
      {
        v61 = 1;
        v62 = &v99;
      }
      else
      {
        v61 = 0;
        v62 = 0LL;
      }
      *((_QWORD *)&v59[21].Next + 1) = v62;
      LODWORD(v59[22].Next) = v61;
      if ( (*(_DWORD *)(v19 + 396) & 0x10) != 0 )
      {
        v63 = v89;
        *((_QWORD *)&v59[30].Next + 1) = *(_QWORD *)(v19 + 248);
        LODWORD(v59[31].Next) = 0;
        v59[32].Next = *(struct _SLIST_ENTRY **)(*(_QWORD *)(v19 + 240) + 64LL);
        *((_QWORD *)&v59[31].Next + 1) = *(_QWORD *)(*(_QWORD *)(v19 + 240) + 48LL);
        v64 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(v95 + 8) + 432LL))(*((_QWORD *)*v63 + 5));
      }
      else
      {
        v64 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(v95 + 8) + 424LL))(*(_QWORD *)(v19 + 256));
        v63 = v89;
      }
      v68 = v64;
      if ( v64 < 0 )
      {
        v73 = v88;
        if ( v88 >= 0 )
        {
          v74 = v95;
          v75 = &v103[v88];
          do
          {
            v66 = *v75;
            if ( (*((_DWORD *)*v75 + 99) & 0x10) == 0 )
              (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v74 + 8) + 440LL))(*((_QWORD *)v66 + 32), 0LL);
            --v75;
            --v73;
          }
          while ( v73 >= 0 );
          v19 = v109;
        }
        v76 = WdLogNewEntry5_WdWarning(v66, v65, v67);
        *(_QWORD *)(v76 + 32) = v68;
        *(_QWORD *)(v76 + 24) = v19;
        WdLogEvent5_WdWarning(v76);
        LODWORD(v13) = v68;
LABEL_86:
        CVidSchSubmitData::~CVidSchSubmitData(v91);
LABEL_98:
        v39 = v85;
LABEL_99:
        v80 = v84;
        if ( v84 )
        {
          if ( v90 )
          {
            (*(void (**)(void))(*((_QWORD *)v39 + 1) + 512LL))();
            v80 = v84;
          }
          if ( v9 )
          {
            VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(v39, v80);
            v80 = v84;
          }
          (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*((_QWORD *)v39 + 1) + 496LL))(v80, 0LL);
        }
        goto LABEL_105;
      }
      v84 = 0LL;
      CVidSchSubmitData::~CVidSchSubmitData(v91);
      v6 = v100;
      if ( !v82 && !v83 )
      {
        v16 = v63 + 1;
        ++v88;
        v69 = (struct DXGPROCESS *)((char *)v93 + 1);
        v93 = v69;
        v89 = v16;
        if ( (__int64)v69 >= v107 )
          goto LABEL_105;
        v13 = v69;
        v17 = v108;
        goto LABEL_19;
      }
    }
  }
  while ( 1 )
  {
    v21 = v20;
    v98[v20] = v6->pNewAllocationList[v20];
    *(_QWORD *)&v15[8 * v20] = v110[v20];
    if ( !v13 )
      goto LABEL_38;
    v13 = Current;
    hAllocation = v6->pNewAllocationList[v20].hAllocation;
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
    v23 = (hAllocation >> 6) & 0xFFFFFF;
    if ( (unsigned int)v23 >= *((_DWORD *)v13 + 62) )
      goto LABEL_29;
    v24 = *((_QWORD *)v13 + 29);
    v25 = *(_DWORD *)(v24 + 16 * v23 + 8);
    if ( ((hAllocation >> 25) & 0x60) != (*(_BYTE *)(v24 + 16 * v23 + 8) & 0x60)
      || (v25 & 0x2000) != 0
      || (v25 & 0x1F) == 0 )
    {
      goto LABEL_29;
    }
    v26 = v25 & 0x1F;
    if ( (_BYTE)v26 != 5 )
    {
      v27 = WdLogNewEntry5_WdError(v26);
      *(_QWORD *)(v27 + 24) = 316LL;
      WdLogEvent5_WdError(v27);
LABEL_29:
      v28 = 0LL;
      goto LABEL_30;
    }
    v28 = *(struct _EX_RUNDOWN_REF **)(v24 + 16LL * (unsigned int)v23);
LABEL_30:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v94, v28);
    ExReleasePushLockSharedEx((char *)v13 + 208, 0LL);
    KeLeaveCriticalRegion();
    LODWORD(v13) = -1073741811;
    if ( !v94 )
      break;
    v30 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 16LL);
    if ( *(_QWORD *)(*(_QWORD *)(v94[1].Count + 16) + 16LL) != v30 )
    {
      v71 = (_QWORD *)WdLogNewEntry5_WdError(v30);
      v71[3] = *(_QWORD *)(v19 + 16);
      v71[4] = v94;
      v71[5] = -1073741811LL;
      goto LABEL_84;
    }
    v31 = *(_QWORD *)(v94[5].Count + 24);
    if ( v31 )
    {
      do
      {
        if ( ((*(_DWORD *)(v31 + 72) >> 12) & 0x3F) == AllocationListSize )
          break;
        v31 = *(_QWORD *)(v31 + 64);
      }
      while ( v31 );
      if ( v31 )
      {
        v98[v21].hAllocation = *(_DWORD *)(v31 + 16);
        *(_QWORD *)&v15[8 * v21] = v31;
      }
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v94);
    v13 = v93;
LABEL_38:
    v20 = DmaBufferPrivateDataSize + 1;
    DmaBufferPrivateDataSize = v20;
    if ( v20 >= v6->AllocationCount )
      goto LABEL_39;
  }
  v71 = (_QWORD *)WdLogNewEntry5_WdError(v29);
  v71[3] = 1218LL;
LABEL_84:
  WdLogEvent5_WdError(v71);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v94);
LABEL_105:
  v15 = v114;
LABEL_106:
  if ( v15 != v115 && v15 )
    ExFreePoolWithTag(v15, 0);
  v114 = 0LL;
  v116 = 0;
LABEL_110:
  if ( P != v118 && P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v13;
}
