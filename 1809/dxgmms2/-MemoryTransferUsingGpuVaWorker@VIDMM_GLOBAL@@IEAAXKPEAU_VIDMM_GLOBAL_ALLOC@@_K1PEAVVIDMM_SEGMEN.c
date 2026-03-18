/*
 * XREFs of ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C007F918
 * Callers:
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C007F7C8 (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00AA34C (-MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEA.c)
 * Callees:
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C001051C (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0010914 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C00109D0 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     McTemplateK0pppxxq @ 0x1C0026494 (McTemplateK0pppxxq.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0067ED0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C006FD68 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C006FE10 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C007132C (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C00721E4 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?GetVirtualAddressOfPageTable@CVirtualAddressAllocator@@QEBA_KI_KE@Z @ 0x1C007FECC (-GetVirtualAddressOfPageTable@CVirtualAddressAllocator@@QEBA_KI_KE@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0080114 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z @ 0x1C00B1E30 (-ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z.c)
 *     ?RecordVaPagingHistoryVirtualTransfer@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B6C08 (-RecordVaPagingHistoryVirtualTransfer@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAU_VI.c)
 */

void __fastcall VIDMM_GLOBAL::MemoryTransferUsingGpuVaWorker(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        D3DGPU_VIRTUAL_ADDRESS *a3,
        unsigned __int64 a4,
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
  unsigned __int64 v15; // r15
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rdx
  bool v19; // r11
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r11
  __int64 v23; // r10
  __int64 v24; // rcx
  struct _MDL *v25; // r8
  unsigned int v26; // r12d
  __int64 v27; // rax
  unsigned __int64 v28; // rdi
  LARGE_INTEGER *v29; // rbx
  unsigned __int64 v30; // r14
  unsigned int v31; // ebx
  unsigned __int64 v32; // r15
  struct _MDL *v33; // rax
  unsigned __int64 v34; // rbx
  __int64 v35; // r14
  unsigned int v36; // r12d
  struct VIDMM_MAPPED_VA_RANGE *v37; // rcx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rcx
  struct VIDMM_MAPPED_VA_RANGE *v40; // rbx
  unsigned __int64 v41; // r9
  unsigned __int64 v42; // r8
  struct _VIDMM_GLOBAL_ALLOC *v43; // r8
  unsigned __int64 v44; // r15
  struct VIDMM_SEGMENT *v45; // r12
  D3DGPU_VIRTUAL_ADDRESS v46; // rax
  D3DGPU_VIRTUAL_ADDRESS v47; // rax
  ADAPTER_RENDER *v48; // r14
  __int64 v49; // rcx
  __int64 v50; // rax
  CVirtualAddressAllocator *v51; // rbx
  int v52; // eax
  __int64 v53; // rcx
  int v54; // ebx
  int v55; // ebx
  __int64 v56; // r14
  HANDLE CurrentProcessId; // rax
  __int64 v58; // rdx
  const GUID *v59; // r8
  bool v60; // sf
  struct VIDMM_MAPPED_VA_RANGE *v61; // r10
  __int64 *v62; // rdx
  __int64 v63; // rcx
  __int64 **v64; // rax
  LARGE_INTEGER *v65; // r9
  __int64 *v66; // rcx
  __int64 v67; // rdx
  __int64 **v68; // rax
  unsigned __int64 v69; // rcx
  unsigned __int64 v70; // r10
  __int64 v71; // rcx
  _QWORD *v72; // rax
  __int64 v73; // rcx
  _QWORD *v74; // rax
  struct VIDMM_SEGMENT *v75; // rcx
  struct _MDL *v76; // r8
  _QWORD *v77; // rax
  struct _MDL *v78; // rcx
  unsigned __int8 *v79; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v80; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v81; // [rsp+51h] [rbp-AFh] BYREF
  bool v82; // [rsp+52h] [rbp-AEh]
  unsigned int v83; // [rsp+54h] [rbp-ACh]
  __int64 v84; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v85; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v86; // [rsp+68h] [rbp-98h]
  struct _MDL *v87; // [rsp+70h] [rbp-90h]
  unsigned int v88; // [rsp+78h] [rbp-88h]
  unsigned int v89; // [rsp+7Ch] [rbp-84h]
  LARGE_INTEGER *v90; // [rsp+80h] [rbp-80h]
  unsigned __int64 v91; // [rsp+88h] [rbp-78h]
  struct _MDL *v92; // [rsp+90h] [rbp-70h]
  struct VIDMM_MAPPED_VA_RANGE *v93; // [rsp+98h] [rbp-68h]
  __int64 v94; // [rsp+A0h] [rbp-60h]
  struct VIDMM_SEGMENT *v95; // [rsp+A8h] [rbp-58h]
  __int64 v96; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v97; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v98; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v99; // [rsp+C8h] [rbp-38h]
  SIZE_T v100; // [rsp+D0h] [rbp-30h]
  struct VIDMM_SEGMENT *v101; // [rsp+D8h] [rbp-28h]
  struct _DXGKARG_BUILDPAGINGBUFFER v102; // [rsp+E0h] [rbp-20h] BYREF
  int v103; // [rsp+220h] [rbp+120h] BYREF
  int v104; // [rsp+224h] [rbp+124h]
  __int64 v105; // [rsp+228h] [rbp+128h]
  unsigned __int64 v106; // [rsp+230h] [rbp+130h]

  v15 = a4;
  v87 = a8;
  v92 = a11;
  v91 = a4;
  v17 = a7;
  v83 = a2;
  v18 = *((unsigned int *)this + 10228);
  v99 = a14;
  v95 = a6;
  v101 = a9;
  if ( a6 == a9 )
  {
    if ( a7 == a10 )
      return;
    v69 = a7 - a10;
    v70 = v18;
    if ( a10 >= a7 )
      v69 = a10 - a7;
    v19 = a10 < a7;
    if ( v69 <= v18 )
      v70 = v69;
    v98 = v70;
  }
  else
  {
    v98 = v18;
    v19 = 1;
  }
  v82 = v19;
  v20 = a12;
  if ( !v19 )
    v20 = a12 + v15;
  v21 = a5;
  v86 = v20;
  if ( !v19 )
    v21 = a5 + v15;
  v22 = v21 + a10;
  v85 = v21 + a10;
  v23 = v21 + a7;
  v84 = v21 + a7;
  v24 = 4096LL;
  if ( !a6 || (*((_DWORD *)a6 + 20) & 0x1000) != 0 )
    v88 = 0;
  else
    v88 = *((_DWORD *)a6 + 4) + 1;
  if ( !a9 || (*((_DWORD *)a9 + 20) & 0x1000) != 0 )
  {
    v89 = 0;
  }
  else
  {
    v24 = (unsigned int)(*((_DWORD *)a9 + 4) + 1);
    v89 = *((_DWORD *)a9 + 4) + 1;
  }
  v81 = 0;
  v80 = 0;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v24) + 24) = a3;
    v72 = (_QWORD *)WdLogNewEntry5_WdTrace(v71);
    v72[3] = v15;
    v72[4] = a5;
    v72[5] = a12;
    v74 = (_QWORD *)WdLogNewEntry5_WdTrace(v73);
    v75 = v95;
    v76 = v87;
    v74[3] = v95;
    v74[4] = a7;
    v74[5] = v76;
    v77 = (_QWORD *)WdLogNewEntry5_WdTrace(v75);
    v78 = v92;
    v77[3] = a9;
    v77[4] = a10;
    v77[5] = v78;
    v17 = a7;
    v20 = v86;
    v23 = v84;
    v22 = v85;
  }
  v25 = v87;
  if ( v15 )
  {
    v26 = v83;
    v94 = v83;
    while ( 1 )
    {
      v27 = v23;
      v28 = (unsigned int)v98;
      v29 = (LARGE_INTEGER *)v20;
      if ( v15 <= v98 )
        v28 = (unsigned int)v15;
      if ( v82 )
      {
        v97 = v22;
      }
      else
      {
        v27 = v23 - v28;
        v97 = v22 - v28;
        v29 = (LARGE_INTEGER *)(v20 - v28);
      }
      v30 = (unsigned __int64)v29;
      v90 = v29;
      v31 = v88;
      v32 = v27 - v17;
      v96 = v27;
      v100 = v27 - v17;
      if ( !v25 )
        v30 = v27;
      while ( 1 )
      {
        v93 = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                (VIDMM_GLOBAL *)((char *)this + 40320),
                v26,
                v28,
                (struct _VIDMM_GLOBAL_ALLOC *)a3,
                v32,
                v31,
                v30,
                v25,
                (struct VIDMM_ALLOC *)&v81,
                v99);
        if ( v93 )
          break;
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, v26, 1u, 0LL, 0LL, 0, 0);
        VIDMM_GLOBAL::FlushScratchGpuVaRanges(this, v26);
        v25 = v87;
      }
      v33 = v92;
      v34 = (unsigned __int64)v90;
      v35 = v83;
      if ( !v92 )
        v34 = v97;
      v36 = v89;
      while ( 1 )
      {
        v37 = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                (VIDMM_GLOBAL *)((char *)this + 40320),
                v35,
                v28,
                (struct _VIDMM_GLOBAL_ALLOC *)a3,
                v32,
                v36,
                v34,
                v33,
                (struct VIDMM_ALLOC *)&v80,
                v99);
        v90 = (LARGE_INTEGER *)v37;
        if ( v37 )
          break;
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, v35, 1u, 0LL, 0LL, 0, 0);
        VIDMM_GLOBAL::FlushScratchGpuVaRanges(this, v35);
        v33 = v92;
      }
      v38 = *((_QWORD *)v37 + 13);
      v39 = *((_QWORD *)v37 + 12);
      v40 = v93;
      v41 = *((_QWORD *)v93 + 13);
      v42 = *((_QWORD *)v93 + 12);
      if ( v41 <= v38 )
        v41 = v38;
      if ( v42 >= v39 )
        v42 = v39;
      CVirtualAddressAllocator::FlushGpuVaTlb(*((CVirtualAddressAllocator **)this + v35 + 5044), v35, v42, v41);
      memset(&v102, 0, sizeof(v102));
      VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, v35, v43, &v102);
      v44 = v91;
      v45 = v101;
      v102.Transfer.Destination.SegmentAddress.LowPart = v87 ? 1 : v92 == 0LL ? 2 : 0;
      do
      {
        VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(
          this,
          (unsigned int)v35,
          (struct _VIDMM_GLOBAL_ALLOC *)a3,
          &v102);
        if ( a3 )
        {
          v46 = a3[5];
          if ( v46 )
            v47 = *(_QWORD *)(v46 + 16);
          else
            v47 = a3[6];
        }
        else
        {
          v47 = 0LL;
        }
        v48 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        v102.UpdateContextAllocation.ContextAllocation = v47;
        v102.Fill.FillSize = v100;
        v102.Operation = DXGK_OPERATION_VIRTUAL_TRANSFER;
        v102.Transfer.TransferSize = v28;
        v102.MapApertureSegment.OffsetInPages = *((_QWORD *)v40 + 12);
        v102.Transfer.Source.SegmentAddress = v90[12];
        v49 = *((_QWORD *)v48 + 126);
        if ( v49 )
          v50 = v49 + 144 * v94;
        else
          v50 = 0LL;
        if ( (*(_DWORD *)(v50 + 20) & 1) != 0 )
        {
          v51 = (CVirtualAddressAllocator *)*((_QWORD *)this + v94 + 5044);
          v102.UnmapApertureSegment.DummyPage.QuadPart = (unsigned int)CVirtualAddressAllocator::GetVirtualAddressOfPageTable(
                                                                         v51,
                                                                         v83,
                                                                         *((_QWORD *)v93 + 12),
                                                                         v81);
          v102.TransferVirtual.DestinationPageTable = (unsigned int)CVirtualAddressAllocator::GetVirtualAddressOfPageTable(
                                                                      v51,
                                                                      v83,
                                                                      v90[12].QuadPart,
                                                                      v80);
          v102.Transfer.Destination.SegmentAddress.HighPart = v102.Transfer.Destination.SegmentAddress.HighPart & 0xFFFFFFFC | v81 & 1 | (2 * (v80 & 1));
        }
        if ( *((_QWORD *)this + 5115) )
        {
          VIDMM_GLOBAL::RecordVaPagingHistoryVirtualTransfer(this, &v102, (struct _VIDMM_GLOBAL_ALLOC *)a3);
          v48 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        }
        v52 = ADAPTER_RENDER::DdiBuildPagingBuffer(v48, &v102);
        v53 = *((_QWORD *)this + 877);
        v54 = v52;
        LODWORD(v91) = v52;
        if ( v53 && (!v45 || (*((_DWORD *)v45 + 20) & 0x1001) != 0) )
          VIDMM_PROCESS::ChargeEvictionTransfer(
            *(VIDMM_PROCESS **)(v53 + 8),
            *(_DWORD *)(*((_QWORD *)this + 3) + 208LL),
            v28);
        _InterlockedExchangeAdd64((volatile signed __int64 *)this + 985, v28);
        if ( bTracingEnabled )
        {
          if ( !v95 || (v55 = 2, (*((_DWORD *)v95 + 20) & 0x1001) != 0) )
            v55 = 1;
          v56 = *((_QWORD *)this + v94 + 143);
          CurrentProcessId = PsGetCurrentProcessId();
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          {
            LODWORD(v79) = v55;
            McTemplateK0pppxxq(v96, v58, v59, CurrentProcessId, a3, v56, v96, v28, v79);
          }
          VidMmRecordTransfer((VIDMM_GLOBAL *)((char *)this + 7168), v28, v55);
          v54 = v91;
        }
        if ( v95 )
          v103 = *((_DWORD *)v95 + 4) + 1;
        else
          v103 = 0;
        v105 = v96;
        if ( v45 )
          v104 = *((_DWORD *)v45 + 4) + 1;
        else
          v104 = 0;
        v35 = v83;
        v106 = v97;
        VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
          this,
          v83,
          (struct _VIDMM_GLOBAL_ALLOC *)a3,
          &v102,
          v54,
          0,
          &v103);
        v60 = v54 < 0;
        if ( v54 >= 0 )
        {
          v61 = v93;
          v62 = (__int64 *)((char *)v93 + 24);
          v63 = 1560 * v35 + *((_QWORD *)this + 5023) + 464LL;
          v64 = *(__int64 ***)(v63 + 8);
          if ( *v64 != (__int64 *)v63 )
            goto LABEL_87;
          v65 = v90;
          *v62 = v63;
          v62[1] = (__int64)v64;
          *v64 = v62;
          *(_QWORD *)(v63 + 8) = v62;
          v66 = (__int64 *)&v65[3];
          v67 = 1560 * v35 + *((_QWORD *)this + 5023) + 464LL;
          v68 = *(__int64 ***)(v67 + 8);
          if ( *v68 != (__int64 *)v67 )
LABEL_87:
            __fastfail(3u);
          *v66 = v67;
          v60 = v54 < 0;
          v65[4].QuadPart = (LONGLONG)v68;
          *v68 = v66;
          *(_QWORD *)(v67 + 8) = v66;
          *((_QWORD *)v61 + 5) = a3[22];
          v65[5].QuadPart = a3[22];
        }
        v40 = v93;
      }
      while ( v60 );
      v15 = v44 - v28;
      v91 = v15;
      if ( v82 )
      {
        v23 = v28 + v84;
        v22 = v28 + v85;
        v20 = v28 + v86;
      }
      else
      {
        v23 = v84 - v28;
        v22 = v85 - v28;
        v20 = v86 - v28;
      }
      v86 = v20;
      v85 = v22;
      v84 = v23;
      if ( !v15 )
        break;
      v17 = a7;
      v26 = v83;
      v25 = v87;
    }
  }
}
