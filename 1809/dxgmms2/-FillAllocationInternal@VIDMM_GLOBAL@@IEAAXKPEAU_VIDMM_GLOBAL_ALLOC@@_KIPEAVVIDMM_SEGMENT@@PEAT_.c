/*
 * XREFs of ?FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C006F998
 * Callers:
 *     ?FillAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C006F958 (-FillAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 * Callees:
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C001051C (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C00109D0 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     McTemplateK0pppxxq @ 0x1C0026494 (McTemplateK0pppxxq.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C006FA30 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C006FD68 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C006FE10 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C00721E4 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
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
  __int64 v8; // rbp
  __int64 v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  D3DGPU_VIRTUAL_ADDRESS v16; // rax
  D3DGPU_VIRTUAL_ADDRESS v17; // rax
  bool v18; // zf
  ADAPTER_RENDER *v19; // rcx
  int v20; // r13d
  ADAPTER_RENDER *v21; // r12
  HANDLE CurrentProcessId; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  const GUID *v25; // r8
  unsigned int v26; // [rsp+20h] [rbp-198h]
  __int64 v27; // [rsp+40h] [rbp-178h]
  struct _DXGKARG_BUILDPAGINGBUFFER v28; // [rsp+50h] [rbp-168h] BYREF

  v8 = a2;
  v11 = a2;
  if ( (*((_BYTE *)this[5023] + 1560 * a2 + 436) & 4) != 0 )
  {
    VIDMM_GLOBAL::FillAllocationUsingGpuVa((VIDMM_GLOBAL *)this, a2, (struct _VIDMM_GLOBAL_ALLOC *)a3, a4, v26, a6, a7);
  }
  else
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a3;
      v13 = WdLogNewEntry5_WdTrace(v12);
      *(_QWORD *)(v13 + 24) = a4;
      *(_QWORD *)(v13 + 32) = 0LL;
      v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v14);
      v15[3] = a6;
      v15[4] = a7->HighPart;
      v15[5] = a7->LowPart;
    }
    VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, v8, (struct _VIDMM_GLOBAL_ALLOC *)a3, &v28);
    do
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v8, (struct _VIDMM_GLOBAL_ALLOC *)a3, &v28);
      v28.Operation = DXGK_OPERATION_FILL;
      if ( a3 )
      {
        v17 = a3[5];
        if ( v17 )
          v16 = *(_QWORD *)(v17 + 16);
        else
          v16 = a3[6];
      }
      else
      {
        v16 = 0LL;
      }
      v18 = (*((_DWORD *)a6 + 20) & 0x1000) == 0;
      v28.UpdateContextAllocation.ContextAllocation = v16;
      v28.Fill.FillSize = a4;
      v28.Fill.FillPattern = 0;
      if ( v18 )
        v28.Transfer.Source.SegmentId = *((_DWORD *)a6 + 4) + 1;
      else
        v28.Transfer.Source.SegmentId = 0;
      v19 = this[2];
      v28.Transfer.Source.SegmentAddress.QuadPart = *((_QWORD *)a6 + 3) + a7->QuadPart;
      v20 = ADAPTER_RENDER::DdiBuildPagingBuffer(v19, &v28);
      if ( bTracingEnabled )
      {
        v21 = this[v11 + 143];
        CurrentProcessId = PsGetCurrentProcessId();
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        {
          LODWORD(v27) = 0;
          McTemplateK0pppxxq(v24, v23, v25, CurrentProcessId, a3, v21, 0LL, a4, v27);
        }
        v11 = v8;
      }
      VidMmRecordTransfer((struct _VIDMM_GLOBAL_STATISTICS *)(this + 896), a4, 0);
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
        (VIDMM_GLOBAL *)this,
        v8,
        (struct _VIDMM_GLOBAL_ALLOC *)a3,
        &v28,
        v20,
        0,
        0LL);
    }
    while ( v20 < 0 );
  }
}
