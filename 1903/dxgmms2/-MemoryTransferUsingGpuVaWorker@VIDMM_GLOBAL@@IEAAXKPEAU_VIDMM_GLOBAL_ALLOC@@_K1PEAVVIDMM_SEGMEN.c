/*
 * XREFs of ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C0082138
 * Callers:
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0081FE8 (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00AD914 (-MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEA.c)
 * Callees:
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C00013AC (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C00027E8 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C00028A8 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     __security_check_cookie @ 0x1C0018060 (__security_check_cookie.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     McTemplateK0pppxxq @ 0x1C0025C30 (McTemplateK0pppxxq.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C005BD88 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C005C11C (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C005C2D8 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?MustFlushTlbOnValidTransition@VIDMM_GLOBAL@@QEAA_NI@Z @ 0x1C005C394 (-MustFlushTlbOnValidTransition@VIDMM_GLOBAL@@QEAA_NI@Z.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C005C3C4 (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0078D90 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?GetVirtualAddressOfPageTable@CVirtualAddressAllocator@@QEBA_KI_KE@Z @ 0x1C00826F4 (-GetVirtualAddressOfPageTable@CVirtualAddressAllocator@@QEBA_KI_KE@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0082944 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z @ 0x1C00B523C (-ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z.c)
 *     ?RecordVaPagingHistoryVirtualTransfer@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B9E88 (-RecordVaPagingHistoryVirtualTransfer@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAU_VI.c)
 */

void __fastcall VIDMM_GLOBAL::MemoryTransferUsingGpuVaWorker(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        D3DGPU_VIRTUAL_ADDRESS *a3,
        SIZE_T a4,
        unsigned __int64 a5,
        struct VIDMM_SEGMENT *a6,
        unsigned __int64 a7,
        struct _MDL *a8,
        struct VIDMM_SEGMENT *a9,
        unsigned __int64 a10,
        struct _MDL *a11,
        unsigned __int64 a12,
        struct _DXGK_TRANSFERFLAGS a13,
        unsigned __int64 a14)
{
  SIZE_T v14; // r12
  unsigned __int64 v17; // r10
  __int64 v18; // r15
  unsigned __int64 v19; // rdx
  bool v20; // r11
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 v23; // r11
  __int64 v24; // rcx
  struct _MDL *v25; // r8
  __int64 v26; // rax
  SIZE_T v27; // rdi
  unsigned __int64 v28; // rcx
  struct VIDMM_MAPPED_VA_RANGE *v29; // rbx
  unsigned __int64 v30; // r14
  unsigned __int64 v31; // rbx
  struct _MDL *v32; // rax
  unsigned __int64 v33; // rbx
  unsigned int v34; // r12d
  struct VIDMM_MAPPED_VA_RANGE *v35; // r14
  bool MustFlushTlbOnValidTransition; // al
  unsigned int v37; // edx
  SIZE_T v38; // r12
  struct VIDMM_MAPPED_VA_RANGE *v39; // rbx
  unsigned __int64 v40; // r9
  unsigned __int64 v41; // r8
  struct _VIDMM_GLOBAL_ALLOC *v42; // r8
  D3DGPU_VIRTUAL_ADDRESS v43; // rax
  D3DGPU_VIRTUAL_ADDRESS v44; // rax
  LARGE_INTEGER v45; // rax
  ADAPTER_RENDER *v46; // r14
  __int64 v47; // rcx
  __int64 v48; // rax
  CVirtualAddressAllocator *v49; // rbx
  int v50; // eax
  __int64 v51; // rcx
  int v52; // ebx
  int v53; // ebx
  __int64 v54; // r14
  HANDLE CurrentProcessId; // rax
  __int64 v56; // rdx
  const GUID *v57; // r8
  struct VIDMM_MAPPED_VA_RANGE *v58; // r9
  __int64 *v59; // rdx
  __int64 v60; // rcx
  __int64 **v61; // rax
  __int64 *v62; // rcx
  __int64 v63; // rdx
  __int64 **v64; // rax
  bool v65; // sf
  unsigned __int64 v66; // rcx
  SIZE_T v67; // rax
  __int64 v68; // rcx
  _QWORD *v69; // rax
  __int64 v70; // rcx
  _QWORD *v71; // rax
  struct VIDMM_SEGMENT *v72; // rcx
  struct _MDL *v73; // r8
  _QWORD *v74; // rax
  unsigned __int8 *v75; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v76; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v77; // [rsp+51h] [rbp-AFh] BYREF
  bool v78; // [rsp+52h] [rbp-AEh]
  __int64 v79; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v80; // [rsp+60h] [rbp-A0h]
  struct _MDL *v81; // [rsp+68h] [rbp-98h]
  unsigned int v82; // [rsp+70h] [rbp-90h]
  unsigned int v83; // [rsp+74h] [rbp-8Ch]
  unsigned __int64 v84; // [rsp+78h] [rbp-88h]
  struct VIDMM_MAPPED_VA_RANGE *v85; // [rsp+80h] [rbp-80h]
  struct VIDMM_MAPPED_VA_RANGE *v86; // [rsp+88h] [rbp-78h]
  SIZE_T v87; // [rsp+90h] [rbp-70h]
  struct _MDL *v88; // [rsp+98h] [rbp-68h]
  unsigned __int64 v89; // [rsp+A0h] [rbp-60h]
  struct VIDMM_SEGMENT *v90; // [rsp+A8h] [rbp-58h]
  __int64 v91; // [rsp+B0h] [rbp-50h]
  struct VIDMM_SEGMENT *v92; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v93; // [rsp+C0h] [rbp-40h]
  SIZE_T v94; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v95; // [rsp+D0h] [rbp-30h]
  struct _DXGKARG_BUILDPAGINGBUFFER v96; // [rsp+E0h] [rbp-20h] BYREF
  int v97; // [rsp+220h] [rbp+120h] BYREF
  int v98; // [rsp+224h] [rbp+124h]
  __int64 v99; // [rsp+228h] [rbp+128h]
  unsigned __int64 v100; // [rsp+230h] [rbp+130h]

  v14 = a4;
  v17 = a7;
  v81 = a8;
  v87 = a4;
  v88 = a11;
  v18 = a2;
  v19 = *((unsigned int *)this + 10228);
  v95 = a14;
  v90 = a6;
  v92 = a9;
  if ( a6 == a9 )
  {
    if ( a7 == a10 )
      return;
    v66 = a7 - a10;
    if ( a10 >= a7 )
      v66 = a10 - a7;
    v20 = a10 < a7;
    v67 = v19;
    if ( v66 <= v19 )
      v67 = v66;
    v94 = v67;
  }
  else
  {
    v94 = v19;
    v20 = 1;
  }
  v78 = v20;
  v21 = a12;
  if ( !v20 )
    v21 = a4 + a12;
  v22 = a5;
  v80 = v21;
  if ( !v20 )
    v22 = a4 + a5;
  v84 = v22 + a10;
  v23 = v22 + a7;
  v79 = v22 + a7;
  v24 = 4096LL;
  if ( !a6 || (*((_DWORD *)a6 + 20) & 0x1000) != 0 )
    v82 = 0;
  else
    v82 = *((_DWORD *)a6 + 4) + 1;
  if ( !a9 || (*((_DWORD *)a9 + 20) & 0x1000) != 0 )
  {
    v83 = 0;
  }
  else
  {
    v24 = (unsigned int)(*((_DWORD *)a9 + 4) + 1);
    v83 = *((_DWORD *)a9 + 4) + 1;
  }
  v77 = 0;
  v76 = 0;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v24) + 24) = a3;
    v69 = (_QWORD *)WdLogNewEntry5_WdTrace(v68);
    v69[3] = v14;
    v69[4] = a5;
    v69[5] = a12;
    v71 = (_QWORD *)WdLogNewEntry5_WdTrace(v70);
    v72 = v90;
    v73 = v81;
    v71[3] = v90;
    v71[4] = a7;
    v71[5] = v73;
    v74 = (_QWORD *)WdLogNewEntry5_WdTrace(v72);
    v74[3] = v92;
    v74[5] = v88;
    v74[4] = a10;
    v17 = a7;
    v21 = v80;
    v23 = v79;
  }
  v25 = v81;
  if ( v14 )
  {
    while ( 1 )
    {
      v26 = v23;
      v27 = (unsigned int)v94;
      v28 = v84;
      v29 = (struct VIDMM_MAPPED_VA_RANGE *)v21;
      if ( v14 <= v94 )
        v27 = (unsigned int)v14;
      if ( !v78 )
      {
        v26 = v23 - v27;
        v28 = v84 - v27;
        v29 = (struct VIDMM_MAPPED_VA_RANGE *)(v21 - v27);
      }
      v93 = v28;
      v30 = (unsigned __int64)v29;
      v85 = v29;
      v91 = v26;
      v89 = v26 - v17;
      v31 = v26 - v17;
      if ( !v25 )
        v30 = v26;
      while ( 1 )
      {
        v86 = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                (VIDMM_GLOBAL *)((char *)this + 40320),
                v18,
                v27,
                (struct _VIDMM_GLOBAL_ALLOC *)a3,
                v31,
                v82,
                v30,
                v25,
                (struct VIDMM_ALLOC *)&v77,
                v95);
        if ( v86 )
          break;
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, v18, 1u, 0LL, 0LL, 0, 0);
        VIDMM_GLOBAL::FlushScratchGpuVaRanges(this, v18);
        v25 = v81;
      }
      v32 = v88;
      v33 = (unsigned __int64)v85;
      v34 = v83;
      if ( !v88 )
        v33 = v93;
      while ( 1 )
      {
        v85 = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                (VIDMM_GLOBAL *)((char *)this + 40320),
                v18,
                v27,
                (struct _VIDMM_GLOBAL_ALLOC *)a3,
                v89,
                v34,
                v33,
                v32,
                (struct VIDMM_ALLOC *)&v76,
                v95);
        v35 = v85;
        if ( v85 )
          break;
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, v18, 1u, 0LL, 0LL, 0, 0);
        VIDMM_GLOBAL::FlushScratchGpuVaRanges(this, v18);
        v32 = v88;
      }
      MustFlushTlbOnValidTransition = VIDMM_GLOBAL::MustFlushTlbOnValidTransition(this, v18);
      v38 = v87;
      v39 = v86;
      if ( MustFlushTlbOnValidTransition )
      {
        v40 = *((_QWORD *)v86 + 13);
        v41 = *((_QWORD *)v86 + 12);
        if ( v40 <= *((_QWORD *)v35 + 13) )
          v40 = *((_QWORD *)v35 + 13);
        if ( v41 >= *((_QWORD *)v35 + 12) )
          v41 = *((_QWORD *)v35 + 12);
        CVirtualAddressAllocator::FlushGpuVaTlb(*((CVirtualAddressAllocator **)this + v18 + 5044), v37, v41, v40);
      }
      memset(&v96, 0, sizeof(v96));
      VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, v18, v42, &v96);
      v96.Transfer.Destination.SegmentAddress.LowPart = v81 ? 1 : v88 == 0LL ? 2 : 0;
      do
      {
        VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(
          this,
          (unsigned int)v18,
          (struct _VIDMM_GLOBAL_ALLOC *)a3,
          &v96);
        if ( a3 )
        {
          v43 = a3[5];
          if ( v43 )
            v44 = *(_QWORD *)(v43 + 16);
          else
            v44 = a3[6];
        }
        else
        {
          v44 = 0LL;
        }
        v96.UpdateContextAllocation.ContextAllocation = v44;
        v96.Fill.FillSize = v89;
        v96.Operation = DXGK_OPERATION_VIRTUAL_TRANSFER;
        v96.Transfer.TransferSize = v27;
        v96.MapApertureSegment.OffsetInPages = *((_QWORD *)v39 + 12);
        v45 = *(LARGE_INTEGER *)((char *)v35 + 96);
        v46 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        v96.Transfer.Source.SegmentAddress = v45;
        v47 = *((_QWORD *)v46 + 126);
        if ( v47 )
          v48 = v47 + 144 * v18;
        else
          v48 = 0LL;
        if ( (*(_DWORD *)(v48 + 20) & 1) != 0 )
        {
          v49 = (CVirtualAddressAllocator *)*((_QWORD *)this + v18 + 5044);
          v96.UnmapApertureSegment.DummyPage.QuadPart = (unsigned int)CVirtualAddressAllocator::GetVirtualAddressOfPageTable(
                                                                        v49,
                                                                        v18,
                                                                        *((_QWORD *)v86 + 12),
                                                                        v77);
          v96.TransferVirtual.DestinationPageTable = (unsigned int)CVirtualAddressAllocator::GetVirtualAddressOfPageTable(
                                                                     v49,
                                                                     v18,
                                                                     *((_QWORD *)v85 + 12),
                                                                     v76);
          v96.Transfer.Destination.SegmentAddress.HighPart = v96.Transfer.Destination.SegmentAddress.HighPart & 0xFFFFFFFC | v77 & 1 | (2 * (v76 & 1));
        }
        if ( *((_QWORD *)this + 5115) )
        {
          VIDMM_GLOBAL::RecordVaPagingHistoryVirtualTransfer(this, &v96, (struct _VIDMM_GLOBAL_ALLOC *)a3);
          v46 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        }
        v50 = ADAPTER_RENDER::DdiBuildPagingBuffer(v46, &v96);
        v51 = *((_QWORD *)this + 877);
        v52 = v50;
        LODWORD(v87) = v50;
        if ( v51 && (!v92 || (*((_DWORD *)v92 + 20) & 0x1001) != 0) )
          VIDMM_PROCESS::ChargeEvictionTransfer(
            *(VIDMM_PROCESS **)(v51 + 8),
            *(_DWORD *)(*((_QWORD *)this + 3) + 208LL),
            v27);
        _InterlockedExchangeAdd64((volatile signed __int64 *)this + 985, v27);
        if ( bTracingEnabled )
        {
          if ( !v90 || (v53 = 2, (*((_DWORD *)v90 + 20) & 0x1001) != 0) )
            v53 = 1;
          v54 = *((_QWORD *)this + v18 + 143);
          CurrentProcessId = PsGetCurrentProcessId();
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          {
            LODWORD(v75) = v53;
            McTemplateK0pppxxq(v91, v56, v57, CurrentProcessId, a3, v54, v91, v27, v75);
          }
          VidMmRecordTransfer((VIDMM_GLOBAL *)((char *)this + 7168), v27, v53);
          v52 = v87;
        }
        if ( v90 )
          v97 = *((_DWORD *)v90 + 4) + 1;
        else
          v97 = 0;
        v99 = v91;
        if ( v92 )
          v98 = *((_DWORD *)v92 + 4) + 1;
        else
          v98 = 0;
        v100 = v93;
        VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
          this,
          (unsigned int)v18,
          (struct _VIDMM_GLOBAL_ALLOC *)a3,
          &v96,
          v52,
          0,
          &v97);
        if ( v52 < 0 )
        {
          v35 = v85;
        }
        else
        {
          v58 = v86;
          v59 = (__int64 *)((char *)v86 + 24);
          v60 = 1560 * v18 + *((_QWORD *)this + 5023) + 464LL;
          v61 = *(__int64 ***)(v60 + 8);
          if ( *v61 != (__int64 *)v60 )
            goto LABEL_87;
          v35 = v85;
          *v59 = v60;
          v59[1] = (__int64)v61;
          *v61 = v59;
          *(_QWORD *)(v60 + 8) = v59;
          v62 = (__int64 *)((char *)v35 + 24);
          v63 = 1560 * v18 + *((_QWORD *)this + 5023) + 464LL;
          v64 = *(__int64 ***)(v63 + 8);
          if ( *v64 != (__int64 *)v63 )
LABEL_87:
            __fastfail(3u);
          *v62 = v63;
          *((_QWORD *)v35 + 4) = v64;
          *v64 = v62;
          *(_QWORD *)(v63 + 8) = v62;
          *((_QWORD *)v58 + 5) = a3[22];
          *((_QWORD *)v35 + 5) = a3[22];
        }
        v65 = v52 < 0;
        v39 = v86;
      }
      while ( v65 );
      v14 = v38 - v27;
      v87 = v14;
      if ( v78 )
      {
        v84 += v27;
        v23 = v27 + v79;
        v21 = v27 + v80;
      }
      else
      {
        v84 -= v27;
        v23 = v79 - v27;
        v21 = v80 - v27;
      }
      v80 = v21;
      v79 = v23;
      if ( !v14 )
        break;
      v17 = a7;
      v25 = v81;
    }
  }
}
