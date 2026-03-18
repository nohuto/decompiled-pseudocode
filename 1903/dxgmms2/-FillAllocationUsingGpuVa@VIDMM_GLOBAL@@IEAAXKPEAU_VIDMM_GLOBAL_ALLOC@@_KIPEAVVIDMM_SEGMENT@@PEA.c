/*
 * XREFs of ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C005A970
 * Callers:
 *     ?FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C005A8D4 (-FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_.c)
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
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0082944 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?RecordVaPagingHistoryVirtualFill@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@KPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B9CFC (-RecordVaPagingHistoryVirtualFill@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@KPEAU_VIDMM.c)
 */

void __fastcall VIDMM_GLOBAL::FillAllocationUsingGpuVa(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        D3DGPU_VIRTUAL_ADDRESS *a3,
        unsigned __int64 a4,
        unsigned int a5,
        struct VIDMM_SEGMENT *a6,
        union _LARGE_INTEGER *a7)
{
  __int64 v9; // r14
  unsigned __int64 v10; // r15
  __int64 v11; // rcx
  LONGLONG QuadPart; // rbx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r12
  struct VIDMM_SEGMENT *v17; // r15
  unsigned int v18; // eax
  LARGE_INTEGER *v19; // r13
  unsigned int v20; // edx
  struct _VIDMM_GLOBAL_ALLOC *v21; // r8
  D3DGPU_VIRTUAL_ADDRESS v22; // rax
  D3DGPU_VIRTUAL_ADDRESS v23; // rax
  bool v24; // zf
  __int64 v25; // r12
  HANDLE CurrentProcessId; // rax
  __int64 v27; // rdx
  const GUID *v28; // r8
  int v29; // eax
  LARGE_INTEGER *v30; // rcx
  unsigned __int64 v31; // r15
  __int64 v32; // rdx
  LARGE_INTEGER **v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // rax
  unsigned __int8 *v38; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v39[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v40; // [rsp+54h] [rbp-ACh]
  LONGLONG v41; // [rsp+58h] [rbp-A8h]
  int v42; // [rsp+60h] [rbp-A0h]
  __int64 v43; // [rsp+68h] [rbp-98h]
  unsigned __int64 v44; // [rsp+70h] [rbp-90h]
  struct VIDMM_SEGMENT *v45; // [rsp+78h] [rbp-88h]
  __int64 v46; // [rsp+80h] [rbp-80h]
  unsigned __int64 v47; // [rsp+88h] [rbp-78h]
  struct _DXGKARG_BUILDPAGINGBUFFER v48; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v49[2]; // [rsp+1D0h] [rbp+D0h] BYREF
  LONGLONG v50; // [rsp+1D8h] [rbp+D8h]

  v9 = a2;
  v45 = a6;
  v44 = a4;
  v10 = a4;
  memset(&v48, 0, sizeof(v48));
  QuadPart = a7->QuadPart;
  v41 = a7->QuadPart;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v11) + 24) = a3;
    v35 = WdLogNewEntry5_WdTrace(v34);
    *(_QWORD *)(v35 + 24) = v10;
    *(_QWORD *)(v35 + 32) = 0LL;
    v37 = (_QWORD *)WdLogNewEntry5_WdTrace(v36);
    v37[4] = SHIDWORD(v41);
    v37[5] = (unsigned int)QuadPart;
    v37[3] = a6;
  }
  v13 = *((unsigned int *)this + 10228);
  v14 = 0LL;
  v42 = *((_DWORD *)this + 10228);
  v41 = 0LL;
  v39[0] = 0;
  if ( v10 )
  {
    v15 = (unsigned int)v13;
    v47 = v13;
    v46 = 1560 * v9;
    while ( 1 )
    {
      v16 = (unsigned int)v13;
      if ( v10 <= v15 )
        v16 = (unsigned int)v10;
      v17 = v45;
      v43 = v16;
      while ( 1 )
      {
        v18 = (*((_DWORD *)v17 + 20) & 0x1000) != 0 ? 0 : *((_DWORD *)v17 + 4) + 1;
        v19 = (LARGE_INTEGER *)VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                                 (VIDMM_GLOBAL *)((char *)this + 40320),
                                 v9,
                                 v16,
                                 (struct _VIDMM_GLOBAL_ALLOC *)a3,
                                 v14,
                                 v18,
                                 QuadPart,
                                 0LL,
                                 v39,
                                 0LL);
        if ( v19 )
          break;
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, v9, 1u, 0LL, 0LL, 0, 0);
        VIDMM_GLOBAL::FlushScratchGpuVaRanges(this, v9);
        v14 = v41;
      }
      if ( VIDMM_GLOBAL::MustFlushTlbOnValidTransition(this, v9) )
        CVirtualAddressAllocator::FlushGpuVaTlb(
          *((CVirtualAddressAllocator **)this + v9 + 5044),
          v20,
          v19[12].QuadPart,
          v19[13].QuadPart);
      VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, v9, v21, &v48);
      do
      {
        VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(this, v9, (struct _VIDMM_GLOBAL_ALLOC *)a3, &v48);
        v48.Operation = DXGK_OPERATION_VIRTUAL_FILL;
        if ( a3 )
        {
          v22 = a3[5];
          if ( v22 )
            v23 = *(_QWORD *)(v22 + 16);
          else
            v23 = a3[6];
        }
        else
        {
          v23 = 0LL;
        }
        v48.Transfer.Source.SegmentId = 0;
        v24 = *((_QWORD *)this + 5115) == 0LL;
        v48.UpdateContextAllocation.ContextAllocation = v23;
        v48.Transfer.TransferSize = v16;
        v48.Transfer.Source.SegmentAddress = v19[12];
        if ( !v24 )
          VIDMM_GLOBAL::RecordVaPagingHistoryVirtualFill(this, &v48, v9, (struct _VIDMM_GLOBAL_ALLOC *)a3);
        v40 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v48);
        if ( bTracingEnabled )
        {
          v25 = *((_QWORD *)this + v9 + 143);
          CurrentProcessId = PsGetCurrentProcessId();
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          {
            LODWORD(v38) = 0;
            McTemplateK0pppxxq(v43, v27, v28, CurrentProcessId, a3, v25, 0LL, v43, v38);
          }
          v16 = v43;
        }
        VidMmRecordTransfer((VIDMM_GLOBAL *)((char *)this + 7168), v16, 0);
        v29 = *((_DWORD *)v17 + 4);
        v49[1] = 0;
        v49[0] = v29 + 1;
        v50 = QuadPart;
        VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(this, v9, (struct _VIDMM_GLOBAL_ALLOC *)a3, &v48, v40, 0, v49);
      }
      while ( v40 < 0 );
      v30 = v19 + 3;
      v31 = v44;
      v32 = *((_QWORD *)this + 5023) + v46 + 464;
      v33 = *(LARGE_INTEGER ***)(v32 + 8);
      if ( *v33 != (LARGE_INTEGER *)v32 )
        __fastfail(3u);
      v30->QuadPart = v32;
      v10 = v31 - v16;
      v19[4].QuadPart = (LONGLONG)v33;
      QuadPart += v16;
      *v33 = v30;
      *(_QWORD *)(v32 + 8) = v30;
      v14 = v16 + v41;
      v19[5].QuadPart = a3[22];
      v44 = v10;
      v41 = v14;
      if ( !v10 )
        break;
      LODWORD(v13) = v42;
      v15 = v47;
    }
  }
}
