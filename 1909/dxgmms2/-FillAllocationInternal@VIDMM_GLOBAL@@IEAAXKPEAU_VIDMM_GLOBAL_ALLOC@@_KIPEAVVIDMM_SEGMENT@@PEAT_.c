/*
 * XREFs of ?FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C005A4E0
 * Callers:
 *     ?FillAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C005A4A0 (-FillAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 * Callees:
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C0001370 (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0002868 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     McTemplateK0pppxxq @ 0x1C0025C30 (McTemplateK0pppxxq.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C005A57C (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C005B998 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C005BD2C (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C005BEE8 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 */

void __fastcall VIDMM_GLOBAL::FillAllocationInternal(
        ADAPTER_RENDER **this,
        unsigned int a2,
        D3DGPU_VIRTUAL_ADDRESS *a3,
        unsigned __int64 a4,
        unsigned int a5,
        struct VIDMM_SEGMENT *a6,
        union _LARGE_INTEGER *a7)
{
  __int64 v8; // r14
  __int64 v11; // r13
  __int64 v12; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  D3DGPU_VIRTUAL_ADDRESS v18; // rax
  D3DGPU_VIRTUAL_ADDRESS v19; // rax
  bool v20; // zf
  ADAPTER_RENDER *v21; // rcx
  ADAPTER_RENDER *v22; // r13
  HANDLE CurrentProcessId; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  const GUID *v26; // r8
  unsigned int v27; // [rsp+28h] [rbp-E0h]
  __int64 v28; // [rsp+48h] [rbp-C0h]
  struct _DXGKARG_BUILDPAGINGBUFFER v29; // [rsp+58h] [rbp-B0h] BYREF
  int v30; // [rsp+1D0h] [rbp+C8h]

  v8 = a2;
  v11 = a2;
  if ( (*((_BYTE *)this[5023] + 1560 * a2 + 436) & 4) != 0 )
  {
    VIDMM_GLOBAL::FillAllocationUsingGpuVa((VIDMM_GLOBAL *)this, a2, (struct _VIDMM_GLOBAL_ALLOC *)a3, a4, v27, a6, a7);
  }
  else
  {
    memset(&v29, 0, sizeof(v29));
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v12) + 24) = a3;
      v15 = WdLogNewEntry5_WdTrace(v14);
      *(_QWORD *)(v15 + 32) = 0LL;
      *(_QWORD *)(v15 + 24) = a4;
      v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v16);
      v17[3] = a6;
      v17[4] = a7->HighPart;
      v17[5] = a7->LowPart;
    }
    VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, v8, v13, &v29);
    do
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v8, (struct _VIDMM_GLOBAL_ALLOC *)a3, &v29);
      v29.Operation = DXGK_OPERATION_FILL;
      if ( a3 )
      {
        v19 = a3[5];
        if ( v19 )
          v18 = *(_QWORD *)(v19 + 16);
        else
          v18 = a3[6];
      }
      else
      {
        v18 = 0LL;
      }
      v29.Fill.FillPattern = 0;
      v20 = (*((_DWORD *)a6 + 20) & 0x1000) == 0;
      v29.UpdateContextAllocation.ContextAllocation = v18;
      v29.Fill.FillSize = a4;
      if ( v20 )
        v29.Transfer.Source.SegmentId = *((_DWORD *)a6 + 4) + 1;
      else
        v29.Transfer.Source.SegmentId = 0;
      v21 = this[2];
      v29.Transfer.Source.SegmentAddress.QuadPart = *((_QWORD *)a6 + 3) + a7->QuadPart;
      v30 = ADAPTER_RENDER::DdiBuildPagingBuffer(v21, &v29);
      if ( bTracingEnabled )
      {
        v22 = this[v11 + 143];
        CurrentProcessId = PsGetCurrentProcessId();
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        {
          LODWORD(v28) = 0;
          McTemplateK0pppxxq(v25, v24, v26, CurrentProcessId, a3, v22, 0LL, a4, v28);
        }
      }
      VidMmRecordTransfer((struct _VIDMM_GLOBAL_STATISTICS *)(this + 896), a4, 0);
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
        (VIDMM_GLOBAL *)this,
        v8,
        (struct _VIDMM_GLOBAL_ALLOC *)a3,
        &v29,
        v30,
        0,
        0LL);
      v11 = v8;
    }
    while ( v30 < 0 );
  }
}
