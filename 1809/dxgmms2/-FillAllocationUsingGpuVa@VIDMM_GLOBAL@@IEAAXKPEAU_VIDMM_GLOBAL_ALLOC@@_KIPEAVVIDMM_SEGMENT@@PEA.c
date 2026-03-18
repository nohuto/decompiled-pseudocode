/*
 * XREFs of ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C006FA30
 * Callers:
 *     ?FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C006F998 (-FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_.c)
 * Callees:
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C001051C (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0010914 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C00109D0 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     McTemplateK0pppxxq @ 0x1C0026494 (McTemplateK0pppxxq.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0067ED0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C006FD68 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C006FE10 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C007132C (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C00721E4 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0080114 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?RecordVaPagingHistoryVirtualFill@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@KPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B6A7C (-RecordVaPagingHistoryVirtualFill@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@KPEAU_VIDMM.c)
 */

void __fastcall VIDMM_GLOBAL::FillAllocationUsingGpuVa(
        ADAPTER_RENDER **this,
        unsigned int a2,
        D3DGPU_VIRTUAL_ADDRESS *a3,
        unsigned __int64 a4,
        unsigned int a5,
        struct VIDMM_SEGMENT *a6,
        union _LARGE_INTEGER *a7)
{
  unsigned __int64 v7; // r14
  __int64 v10; // r15
  LONGLONG QuadPart; // rbx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r8
  struct VIDMM_SEGMENT *v15; // r14
  unsigned __int64 v16; // r12
  unsigned int v17; // eax
  LARGE_INTEGER *v18; // r13
  struct _VIDMM_GLOBAL_ALLOC *v19; // r8
  D3DGPU_VIRTUAL_ADDRESS v20; // rax
  D3DGPU_VIRTUAL_ADDRESS v21; // rax
  bool v22; // zf
  HANDLE CurrentProcessId; // rax
  __int64 v24; // rdx
  const GUID *v25; // r8
  int v26; // eax
  LARGE_INTEGER *v27; // rcx
  unsigned __int64 v28; // r14
  __int64 v29; // rdx
  LARGE_INTEGER **v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rax
  unsigned __int8 *v35; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v36[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v37; // [rsp+54h] [rbp-ACh]
  int v38; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v39; // [rsp+60h] [rbp-A0h]
  struct VIDMM_SEGMENT *v40; // [rsp+68h] [rbp-98h]
  unsigned __int64 v41; // [rsp+70h] [rbp-90h]
  ADAPTER_RENDER *v42; // [rsp+78h] [rbp-88h]
  __int64 v43; // [rsp+80h] [rbp-80h]
  unsigned __int64 v44; // [rsp+88h] [rbp-78h]
  struct _DXGKARG_BUILDPAGINGBUFFER v45; // [rsp+90h] [rbp-70h] BYREF
  int v46; // [rsp+1D0h] [rbp+D0h] BYREF
  LONGLONG v47; // [rsp+1D8h] [rbp+D8h]

  v7 = a4;
  v41 = a4;
  v10 = a2;
  QuadPart = a7->QuadPart;
  v40 = a6;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a3;
    v32 = WdLogNewEntry5_WdTrace(v31);
    *(_QWORD *)(v32 + 24) = v7;
    *(_QWORD *)(v32 + 32) = 0LL;
    v34 = (_QWORD *)WdLogNewEntry5_WdTrace(v33);
    v34[4] = QuadPart >> 32;
    v34[5] = (unsigned int)QuadPart;
    v34[3] = a6;
  }
  v12 = *((unsigned int *)this + 10228);
  v13 = 0LL;
  v38 = *((_DWORD *)this + 10228);
  v39 = 0LL;
  v36[0] = 0;
  if ( v7 )
  {
    v14 = (unsigned int)v12;
    v44 = v12;
    v43 = 1560 * v10;
    while ( 1 )
    {
      if ( v7 <= v14 )
        LODWORD(v12) = v7;
      v15 = v40;
      v16 = (unsigned int)v12;
      while ( 1 )
      {
        v17 = (*((_DWORD *)v15 + 20) & 0x1000) != 0 ? 0 : *((_DWORD *)v15 + 4) + 1;
        v18 = (LARGE_INTEGER *)VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                                 (VIDMM_PAGING_PROCESS *)(this + 5040),
                                 v10,
                                 v16,
                                 (struct _VIDMM_GLOBAL_ALLOC *)a3,
                                 v13,
                                 v17,
                                 QuadPart,
                                 0LL,
                                 v36,
                                 0LL);
        if ( v18 )
          break;
        VIDMM_GLOBAL::FlushPagingBufferInternal((VIDMM_GLOBAL *)this, v10, 1u, 0LL, 0LL, 0, 0);
        VIDMM_GLOBAL::FlushScratchGpuVaRanges((VIDMM_GLOBAL *)this, v10);
        v13 = v39;
      }
      CVirtualAddressAllocator::FlushGpuVaTlb(this[v10 + 5044], v10, v18[12].QuadPart, v18[13].QuadPart);
      VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, v10, v19, &v45);
      do
      {
        VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(
          (VIDMM_GLOBAL *)this,
          v10,
          (struct _VIDMM_GLOBAL_ALLOC *)a3,
          &v45);
        v45.Operation = DXGK_OPERATION_VIRTUAL_FILL;
        if ( a3 )
        {
          v20 = a3[5];
          if ( v20 )
            v21 = *(_QWORD *)(v20 + 16);
          else
            v21 = a3[6];
        }
        else
        {
          v21 = 0LL;
        }
        v45.Transfer.Source.SegmentId = 0;
        v22 = this[5115] == 0LL;
        v45.UpdateContextAllocation.ContextAllocation = v21;
        v45.Transfer.TransferSize = v16;
        v45.Transfer.Source.SegmentAddress = v18[12];
        if ( !v22 )
          VIDMM_GLOBAL::RecordVaPagingHistoryVirtualFill(
            (VIDMM_GLOBAL *)this,
            &v45,
            v10,
            (struct _VIDMM_GLOBAL_ALLOC *)a3);
        v37 = ADAPTER_RENDER::DdiBuildPagingBuffer(this[2], &v45);
        if ( bTracingEnabled )
        {
          v42 = this[v10 + 143];
          CurrentProcessId = PsGetCurrentProcessId();
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          {
            LODWORD(v35) = 0;
            McTemplateK0pppxxq((__int64)v42, v24, v25, CurrentProcessId, a3, v42, 0LL, v16, v35);
          }
        }
        VidMmRecordTransfer((struct _VIDMM_GLOBAL_STATISTICS *)(this + 896), v16, 0);
        v26 = *((_DWORD *)v15 + 4) + 1;
        v47 = QuadPart;
        v46 = v26;
        VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
          (VIDMM_GLOBAL *)this,
          v10,
          (struct _VIDMM_GLOBAL_ALLOC *)a3,
          &v45,
          v37,
          0,
          &v46);
      }
      while ( v37 < 0 );
      v27 = v18 + 3;
      v28 = v41;
      v29 = (__int64)this[5023] + v43 + 464;
      v30 = *(LARGE_INTEGER ***)(v29 + 8);
      if ( *v30 != (LARGE_INTEGER *)v29 )
        __fastfail(3u);
      v27->QuadPart = v29;
      v7 = v28 - v16;
      v18[4].QuadPart = (LONGLONG)v30;
      QuadPart += v16;
      *v30 = v27;
      *(_QWORD *)(v29 + 8) = v27;
      v13 = v16 + v39;
      v18[5].QuadPart = a3[22];
      v41 = v7;
      v39 = v13;
      if ( !v7 )
        break;
      LODWORD(v12) = v38;
      v14 = v44;
    }
  }
}
