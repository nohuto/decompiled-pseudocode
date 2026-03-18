/*
 * XREFs of ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C0267C8C
 * Callers:
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z @ 0x1C011A6D0 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C000C6AC (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0017DA0 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     McTemplateK0p @ 0x1C00356F4 (McTemplateK0p.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00F61DC (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C010C3A0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C010C560 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C01522BC (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z @ 0x1C01FC174 (-DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z.c)
 *     ?SignalRenderKmMonitoredFence@DXGCONTEXT@@CAJPEAU_DXGKARG_RENDER@@PEAV1@PEAVDXGHWQUEUE@@_K@Z @ 0x1C02688F8 (-SignalRenderKmMonitoredFence@DXGCONTEXT@@CAJPEAU_DXGKARG_RENDER@@PEAV1@PEAVDXGHWQUEUE@@_K@Z.c)
 */

__int64 __fastcall DXGCONTEXT::RenderKmLda(
        struct _D3DKMT_RENDER *a1,
        struct COREDEVICEACCESS *a2,
        struct DXGCONTEXT **a3,
        struct DXGALLOCATION **a4,
        struct DXGHWQUEUE **a5)
{
  struct _D3DKMT_RENDER *v5; // rdi
  struct DXGCONTEXT *v7; // rax
  __int64 v8; // r10
  unsigned int AllocationCount; // esi
  ULONG BroadcastContextCount; // r15d
  int v11; // r15d
  _BYTE *PoolWithTag; // rax
  char *v13; // r14
  unsigned int v14; // esi
  _BYTE *v15; // r12
  char *v16; // rbx
  struct DXGHWQUEUE **v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r15
  __int64 v22; // r13
  D3DKMT_HANDLE hAllocation; // esi
  __int64 v24; // rcx
  const GUID *v25; // r8
  int v26; // r9d
  __int64 v27; // rax
  __int64 v28; // r8
  int v29; // ecx
  __int64 v30; // rcx
  __int64 v31; // rax
  struct _EX_RUNDOWN_REF *v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  struct _SLIST_ENTRY *v40; // rbx
  int v41; // eax
  __int64 v42; // rcx
  const GUID *v43; // r8
  const EVENT_DESCRIPTOR *v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  struct _SLIST_ENTRY *v49; // r13
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  char v54; // si
  void *v55; // rax
  UINT v56; // edx
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  _QWORD *v61; // rax
  void *v62; // rdx
  int v63; // eax
  bool v64; // zf
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  struct DXGHWQUEUE **v66; // rdi
  int v67; // eax
  int v68; // esi
  int v69; // edi
  int v70; // eax
  int v71; // eax
  __int64 *v72; // rcx
  struct DXGHWQUEUE **v73; // rsi
  int v74; // eax
  __int64 v75; // rdx
  struct DXGCONTEXT *v76; // rcx
  __int64 v77; // r8
  int v78; // edi
  char *v79; // rbx
  __int64 v80; // rax
  _QWORD *v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rax
  __int64 v84; // rdx
  int v85; // esi
  __int64 v86; // r15
  struct DXGCONTEXT **v87; // rbx
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  struct _VIDMM_DMA_BUFFER *v92; // rcx
  __int64 v93; // rbx
  char v95; // [rsp+60h] [rbp-A0h]
  char v96; // [rsp+61h] [rbp-9Fh]
  struct _VIDMM_DMA_BUFFER *v97; // [rsp+68h] [rbp-98h] BYREF
  UINT AllocationListSize; // [rsp+70h] [rbp-90h]
  __int64 v99; // [rsp+78h] [rbp-88h]
  int v100; // [rsp+80h] [rbp-80h]
  struct DXGHWQUEUE **v101; // [rsp+88h] [rbp-78h]
  __int64 v102; // [rsp+90h] [rbp-70h]
  void *v103; // [rsp+98h] [rbp-68h] BYREF
  struct _SLIST_ENTRY *v104[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v105; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v106; // [rsp+B8h] [rbp-48h] BYREF
  char *v107; // [rsp+C0h] [rbp-40h]
  struct _EX_RUNDOWN_REF *v108; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD *v109; // [rsp+D0h] [rbp-30h]
  __int64 v110; // [rsp+D8h] [rbp-28h] BYREF
  struct _D3DKMT_RENDER *v111; // [rsp+E0h] [rbp-20h]
  UINT v112; // [rsp+E8h] [rbp-18h] BYREF
  struct DXGPROCESS *Current; // [rsp+F0h] [rbp-10h]
  LARGE_INTEGER v114; // [rsp+F8h] [rbp-8h] BYREF
  void *pDmaBuffer; // [rsp+100h] [rbp+0h]
  ADAPTER_RENDER *v116; // [rsp+108h] [rbp+8h]
  struct DXGHWQUEUE **v117; // [rsp+110h] [rbp+10h]
  struct DXGALLOCATION **v118; // [rsp+118h] [rbp+18h]
  struct COREDEVICEACCESS *v119; // [rsp+120h] [rbp+20h]
  __int64 v120; // [rsp+128h] [rbp+28h]
  char *v121; // [rsp+130h] [rbp+30h]
  struct DXGCONTEXT **v122; // [rsp+138h] [rbp+38h]
  __int64 v123; // [rsp+140h] [rbp+40h]
  _BYTE v124[24]; // [rsp+148h] [rbp+48h] BYREF
  _DXGKARG_RENDER v125; // [rsp+160h] [rbp+60h] BYREF
  _DXGKARG_RENDERGDI v126; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE *v127; // [rsp+220h] [rbp+120h]
  _BYTE v128[128]; // [rsp+228h] [rbp+128h] BYREF
  unsigned int v129; // [rsp+2A8h] [rbp+1A8h]
  PVOID P; // [rsp+2B0h] [rbp+1B0h]
  _BYTE v131[128]; // [rsp+2B8h] [rbp+1B8h] BYREF
  unsigned int v132; // [rsp+338h] [rbp+238h]

  v5 = a1;
  v117 = a5;
  v7 = *a3;
  v111 = a1;
  v118 = a4;
  v122 = a3;
  v8 = *((_QWORD *)v7 + 2);
  v119 = a2;
  v116 = *(ADAPTER_RENDER **)(v8 + 16);
  v99 = *((_QWORD *)v116 + 68);
  v105 = *((_QWORD *)v116 + 65);
  Current = DXGPROCESS::GetCurrent((__int64)v116, (__int64)a2);
  AllocationCount = v5->AllocationCount;
  BroadcastContextCount = v5->BroadcastContextCount;
  P = 0LL;
  v11 = BroadcastContextCount + 1;
  v132 = 0;
  if ( AllocationCount <= 0x10 )
  {
    PoolWithTag = v131;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / AllocationCount < 8 )
      goto LABEL_7;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * AllocationCount, 0x4B677844u);
  }
  P = PoolWithTag;
  v132 = AllocationCount;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, 8LL * AllocationCount);
LABEL_7:
  v109 = P;
  if ( !P )
  {
    LODWORD(v13) = -1073741801;
    goto LABEL_115;
  }
  v14 = v5->AllocationCount;
  v15 = 0LL;
  v129 = 0;
  v127 = 0LL;
  if ( v14 <= 0x10 )
  {
    v15 = v128;
    v127 = v128;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v14 < 8 )
      goto LABEL_15;
    v15 = ExAllocatePoolWithTag(PagedPool, 8LL * v14, 0x4B677844u);
    v127 = v15;
  }
  v129 = v14;
  if ( !v15 )
  {
LABEL_16:
    LODWORD(v13) = -1073741801;
    goto LABEL_111;
  }
  memset(v15, 0, 8LL * v14);
  v15 = v127;
LABEL_15:
  if ( !v15 )
    goto LABEL_16;
  v13 = 0LL;
  v100 = 0;
  v120 = v11;
  if ( v11 <= 0 )
    goto LABEL_111;
  v16 = (char *)((char *)a3 - (char *)v117);
  v107 = 0LL;
  v121 = (char *)((char *)a3 - (char *)v117);
  v17 = v117;
  v101 = v117;
LABEL_19:
  v102 = ((*(_DWORD *)&v5->Flags & 8u) << 12) | 0x100LL;
  v125.pCommand = (char *)v5->pNewCommandBuffer + v5->CommandOffset;
  v125.CommandLength = v5->CommandLength;
  memset(&v125.CommandLength + 1, 0, 0x64uLL);
  v21 = *(__int64 *)((char *)v17 + (_QWORD)v16);
  v123 = v21;
  if ( (*(_DWORD *)(v21 + 412) & 0x10) != 0 && !v117 )
  {
    v80 = WdLogNewEntry5_WdError(v19, v18, v20);
    *(_QWORD *)(v80 + 24) = 1191LL;
    WdLogEvent5_WdError(v80);
    LODWORD(v13) = -1073741823;
    goto LABEL_110;
  }
  v22 = 0LL;
  AllocationListSize = *(_DWORD *)(v21 + 408);
  if ( !v5->AllocationCount )
  {
LABEL_45:
    v103 = 0LL;
    v97 = 0LL;
    v40 = (struct _SLIST_ENTRY *)v102;
    v95 = 0;
    v96 = 1;
    while ( 1 )
    {
      v41 = DXGCONTEXT::AcquireDmaBuffer((DXGCONTEXT *)v21, &v97, v119, 0);
      v13 = (char *)v41;
      if ( v41 < 0 )
      {
        v91 = WdLogNewEntry5_WdEvent(v42);
        *(_QWORD *)(v91 + 24) = v21;
        *(_QWORD *)(v91 + 32) = v13;
        WdLogEvent5_WdEvent(v91);
        goto LABEL_103;
      }
      if ( bTracingEnabled )
      {
        if ( (*(_DWORD *)&v5->Flags & 0x20) != 0 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
            goto LABEL_55;
          v44 = (const EVENT_DESCRIPTOR *)&EventRenderKm;
        }
        else
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
            goto LABEL_55;
          v44 = &EventRender;
        }
        McTemplateK0p((struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context, v44, v43, v97);
      }
LABEL_55:
      v114.QuadPart = 0LL;
      v110 = 0LL;
      v104[0] = 0LL;
      v104[1] = (struct _SLIST_ENTRY *)v116;
      CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v104);
      v49 = v104[0];
      if ( !v104[0] )
      {
        v90 = WdLogNewEntry5_WdLowResource(v46, v45, v47, v48);
        *(_QWORD *)(v90 + 24) = 1292LL;
        WdLogEvent5_WdLowResource(v90);
        LODWORD(v13) = -1073741801;
LABEL_100:
        CVidSchSubmitData::~CVidSchSubmitData(v104);
LABEL_103:
        v54 = 0;
LABEL_104:
        v92 = v97;
        if ( v97 )
        {
          v93 = v99;
          if ( v103 )
          {
            (*(void (**)(void))(*(_QWORD *)(v99 + 8) + 512LL))();
            v92 = v97;
          }
          if ( v54 )
          {
            LOBYTE(v84) = 1;
            (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, __int64))(*(_QWORD *)(v93 + 8) + 576LL))(v92, v84);
            v92 = v97;
          }
          (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(v93 + 8) + 496LL))(v92, 0LL);
        }
        goto LABEL_110;
      }
      LOBYTE(v48) = 1;
      v50 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD *, _QWORD, __int64, int, UINT *, LARGE_INTEGER *, unsigned __int64 *, __int64 *, struct _SLIST_ENTRY **, _BYTE *))(*(_QWORD *)(v99 + 8) + 568LL))(
              v97,
              v109,
              v5->AllocationCount,
              v48,
              1,
              &v112,
              &v114,
              &v106,
              &v110,
              &v104[0][12].Next + 1,
              v15);
      v13 = (char *)v50;
      if ( v50 < 0 )
      {
        v89 = WdLogNewEntry5_WdWarning(v52, v51, v53);
        *(_QWORD *)(v89 + 24) = v21;
        *(_QWORD *)(v89 + 32) = v13;
        WdLogEvent5_WdWarning(v89);
        goto LABEL_100;
      }
      v54 = 1;
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, void **))(*(_QWORD *)(v99 + 8) + 504LL))(v97, &v103);
      pDmaBuffer = v103;
      v125.pDmaBuffer = v103;
      v125.DmaSize = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(v99 + 8) + 528LL))(v97);
      v125.pAllocationList = (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(v99 + 8) + 552LL))(v97);
      AllocationListSize = v5->AllocationCount;
      v125.AllocationListSize = AllocationListSize;
      v55 = (void *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(v99 + 8) + 560LL))(v97);
      v56 = *(_DWORD *)(v21 + 208);
      v125.DmaBufferSegmentId = v112;
      v125.DmaBufferPhysicalAddress = v114;
      v125.pDmaBufferPrivateData = v55;
      LODWORD(v102) = v56;
      v125.DmaBufferPrivateDataSize = v56;
      if ( v95 )
      {
        v57 = DXGCONTEXT::SignalRenderKmMonitoredFence(&v125, (struct DXGCONTEXT *)v21, *v101, v106);
        v13 = (char *)v57;
        if ( v57 == -1071775743 )
        {
          v61 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v59, v58);
          v61[3] = 275LL;
          v61[4] = 40LL;
          v61[5] = v21;
          v61[6] = 0LL;
          v61[7] = 0LL;
          WdLogEvent5_WdCriticalError(v61);
        }
        if ( (int)v13 < 0 )
        {
LABEL_91:
          v83 = WdLogNewEntry5_WdWarning(v59, v58, v60);
          *(_QWORD *)(v83 + 24) = v21;
          *(_QWORD *)(v83 + 32) = v13;
          WdLogEvent5_WdWarning(v83);
          CVidSchSubmitData::~CVidSchSubmitData(v104);
          goto LABEL_104;
        }
        AllocationListSize = v125.AllocationListSize;
        LODWORD(v102) = v125.DmaBufferPrivateDataSize;
        pDmaBuffer = v125.pDmaBuffer;
        v95 = 0;
      }
      if ( v96 )
      {
        v126.pCommand = (char *)v5->pNewCommandBuffer + v5->CommandOffset;
        v126.CommandLength = v5->CommandLength;
        memset(&v126.CommandLength + 1, 0, 0x3CuLL);
        v62 = *(void **)(v21 + 184);
        v126.pDmaBuffer = pDmaBuffer;
        v126.DmaBufferGpuVirtualAddress = v106;
        v126.DmaSize = v125.DmaSize;
        v126.pDmaBufferPrivateData = v125.pDmaBufferPrivateData;
        v126.DmaBufferPrivateDataSize = v102;
        v126.pAllocationList = v125.pAllocationList;
        v126.AllocationListSize = AllocationListSize;
        v126.MultipassOffset = v125.MultipassOffset;
        v63 = ADAPTER_RENDER::DdiRenderGdi(v116, v62, (const GUID *)&v126);
        v13 = (char *)v63;
        if ( v63 == -1071775743 )
        {
          v96 = 1;
        }
        else
        {
          if ( v63 < 0 )
            goto LABEL_91;
          v96 = 0;
        }
        v125.pDmaBuffer = v126.pDmaBuffer;
        v125.pDmaBufferPrivateData = v126.pDmaBufferPrivateData;
        v125.MultipassOffset = v126.MultipassOffset;
        if ( (*(_DWORD *)(v21 + 412) & 0x10) != 0 )
        {
          v64 = *(_QWORD *)(v21 + 248) == 0LL;
          v125.DmaBufferPrivateDataSize = v126.DmaBufferPrivateDataSize;
          v125.DmaSize = v126.DmaSize;
          if ( v64 )
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX(
              (DXGAUTOMUTEX *)v124,
              (struct DXGFASTMUTEX *const)(*(_QWORD *)(*(_QWORD *)(v21 + 240) + 32LL) + 32LL),
              0);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v124);
            VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                                 *(DXGSYNCOBJECT **)(*(_QWORD *)(v21 + 240) + 32LL),
                                 *(struct ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v21 + 240) + 16LL) + 16LL));
            v66 = v101;
            (*(void (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, _QWORD))(*(_QWORD *)(v105 + 8) + 272LL))(
              *((_QWORD *)*v101 + 5),
              VidSchSyncObject,
              0LL);
            if ( v124[8] )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v124);
          }
          else
          {
            v66 = v101;
          }
          ++*(_QWORD *)(v21 + 248);
          if ( !*(_BYTE *)(v21 + 312) )
          {
            v67 = DXGCONTEXT::SignalRenderKmMonitoredFence(&v125, (struct DXGCONTEXT *)v21, *v66, v106);
            v13 = (char *)v67;
            if ( v67 == -1071775743 )
            {
              v95 = 1;
            }
            else if ( v67 < 0 )
            {
              goto LABEL_91;
            }
          }
        }
      }
      v68 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(v99 + 8) + 560LL))(v97);
      v69 = LODWORD(v125.pDmaBuffer) - (_DWORD)v103;
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(v99 + 8) + 512LL))(v97);
      v103 = 0LL;
      v49->Next = v40;
      LODWORD(v49->Next) |= 0x8000000u;
      v49[3].Next = (struct _SLIST_ENTRY *)v106;
      *((_QWORD *)&v49->Next + 1) = v97;
      v70 = LODWORD(v125.pDmaBufferPrivateData) - v68;
      *((_DWORD *)&v49[3].Next + 3) = v69;
      HIDWORD(v49[5].Next) = v70;
      *((_DWORD *)&v49[3].Next + 2) = 0;
      v49[4].Next = 0LL;
      *((_QWORD *)&v49[4].Next + 1) = 0LL;
      LODWORD(v49[5].Next) = 0;
      if ( v110 )
      {
        v71 = 1;
        v72 = &v110;
      }
      else
      {
        v71 = 0;
        v72 = 0LL;
      }
      *((_QWORD *)&v49[21].Next + 1) = v72;
      LODWORD(v49[22].Next) = v71;
      if ( (*(_DWORD *)(v21 + 412) & 0x10) != 0 )
      {
        v73 = v101;
        *((_QWORD *)&v49[30].Next + 1) = *(_QWORD *)(v21 + 248);
        LODWORD(v49[31].Next) = 0;
        v49[32].Next = *(struct _SLIST_ENTRY **)(*(_QWORD *)(v21 + 240) + 64LL);
        *((_QWORD *)&v49[31].Next + 1) = *(_QWORD *)(*(_QWORD *)(v21 + 240) + 48LL);
        v74 = (*(__int64 (__fastcall **)(_QWORD, struct _SLIST_ENTRY *))(*(_QWORD *)(v105 + 8) + 432LL))(
                *((_QWORD *)*v73 + 5),
                v49);
      }
      else
      {
        v74 = (*(__int64 (__fastcall **)(_QWORD, struct _SLIST_ENTRY *))(*(_QWORD *)(v105 + 8) + 424LL))(
                *(_QWORD *)(v21 + 272),
                v49);
        v73 = v101;
      }
      v78 = v74;
      if ( v74 < 0 )
      {
        v85 = v100;
        if ( v100 >= 0 )
        {
          v86 = v105;
          v87 = &v122[v100];
          do
          {
            v76 = *v87;
            if ( (*((_DWORD *)*v87 + 103) & 0x10) == 0 )
              (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v86 + 8) + 440LL))(*((_QWORD *)v76 + 34), 0LL);
            --v87;
            --v85;
          }
          while ( v85 >= 0 );
          v21 = v123;
        }
        v88 = WdLogNewEntry5_WdWarning(v76, v75, v77);
        *(_QWORD *)(v88 + 32) = v78;
        *(_QWORD *)(v88 + 24) = v21;
        WdLogEvent5_WdWarning(v88);
        LODWORD(v13) = v78;
        CVidSchSubmitData::~CVidSchSubmitData(v104);
        v54 = 1;
        goto LABEL_104;
      }
      v97 = 0LL;
      CVidSchSubmitData::~CVidSchSubmitData(v104);
      v5 = v111;
      if ( !v95 && !v96 )
      {
        v17 = v73 + 1;
        ++v100;
        v79 = v107 + 1;
        v107 = v79;
        v101 = v17;
        if ( (__int64)v79 >= v120 )
          goto LABEL_110;
        v13 = v79;
        v16 = v121;
        goto LABEL_19;
      }
    }
  }
  while ( 1 )
  {
    v109[v22] = v5->pNewAllocationList[v22];
    *(_QWORD *)&v15[8 * v22] = v118[v22];
    if ( !v13 )
      goto LABEL_44;
    v13 = (char *)Current + 184;
    hAllocation = v5->pNewAllocationList[v22].hAllocation;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v13, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v26 = *((_DWORD *)v13 + 4);
        if ( v26 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v24, &EventBlockThread, v25, v26);
      }
      ExAcquirePushLockSharedEx(v13, 0LL);
    }
    v27 = (hAllocation >> 6) & 0xFFFFFF;
    if ( (unsigned int)v27 >= *((_DWORD *)Current + 56) )
      goto LABEL_35;
    v28 = *((_QWORD *)Current + 26);
    v29 = *(_DWORD *)(v28 + 16 * v27 + 8);
    if ( ((hAllocation >> 25) & 0x60) != (*(_BYTE *)(v28 + 16 * v27 + 8) & 0x60)
      || (v29 & 0x2000) != 0
      || (v29 & 0x1F) == 0 )
    {
      goto LABEL_35;
    }
    v30 = v29 & 0x1F;
    if ( (_BYTE)v30 != 5 )
    {
      v31 = WdLogNewEntry5_WdError(v30, 2LL * (unsigned int)v27, v28);
      *(_QWORD *)(v31 + 24) = 267LL;
      WdLogEvent5_WdError(v31);
LABEL_35:
      v32 = 0LL;
      goto LABEL_36;
    }
    v32 = *(struct _EX_RUNDOWN_REF **)(v28 + 16LL * (unsigned int)v27);
LABEL_36:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v108, v32);
    ExReleasePushLockSharedEx(v13, 0LL);
    KeLeaveCriticalRegion();
    LODWORD(v13) = -1073741811;
    if ( !v108 )
      break;
    v36 = *(_QWORD *)(v108[1].Count + 16);
    v37 = *(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL);
    v38 = *(_QWORD *)(v37 + 16);
    if ( *(_QWORD *)(v36 + 16) != v38 )
    {
      v81 = (_QWORD *)WdLogNewEntry5_WdError(v38, v37, v36);
      v81[3] = *(_QWORD *)(v21 + 16);
      v81[4] = v108;
      v81[5] = -1073741811LL;
      goto LABEL_90;
    }
    v39 = *(_QWORD *)(v108[5].Count + 24);
    if ( v39 )
    {
      do
      {
        if ( ((*(_DWORD *)(v39 + 72) >> 12) & 0x3F) == AllocationListSize )
          break;
        v39 = *(_QWORD *)(v39 + 64);
      }
      while ( v39 );
      if ( v39 )
      {
        LODWORD(v109[v22]) = *(_DWORD *)(v39 + 16);
        *(_QWORD *)&v15[8 * v22] = v39;
      }
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v108, v39);
    v13 = v107;
LABEL_44:
    v22 = (unsigned int)(v22 + 1);
    if ( (unsigned int)v22 >= v5->AllocationCount )
      goto LABEL_45;
  }
  v81 = (_QWORD *)WdLogNewEntry5_WdError(v34, v33, v35);
  v81[3] = 1214LL;
LABEL_90:
  WdLogEvent5_WdError(v81);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v108, v82);
LABEL_110:
  v15 = v127;
LABEL_111:
  if ( v15 != v128 && v15 )
    ExFreePoolWithTag(v15, 0);
  v127 = 0LL;
  v129 = 0;
LABEL_115:
  if ( P != v131 && P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v13;
}
