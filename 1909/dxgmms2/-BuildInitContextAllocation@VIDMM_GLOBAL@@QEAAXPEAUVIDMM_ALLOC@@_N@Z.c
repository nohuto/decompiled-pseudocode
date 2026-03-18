/*
 * XREFs of ?BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00AA3D8
 * Callers:
 *     ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B1068 (-UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C0001370 (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0002868 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     McTemplateK0pppxxq @ 0x1C0025C30 (McTemplateK0pppxxq.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C005B998 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C005BD2C (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z @ 0x1C005C168 (-GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z.c)
 */

void __fastcall VIDMM_GLOBAL::BuildInitContextAllocation(ADAPTER_RENDER **this, __int64 **a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rax
  D3DGPU_VIRTUAL_ADDRESS v7; // rax
  __int64 v8; // rcx
  __int64 GpuVirtualAddress; // rax
  ADAPTER_RENDER *v10; // rcx
  int v11; // r15d
  ADAPTER_RENDER *v12; // rsi
  HANDLE CurrentProcessId; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  const GUID *v16; // r8
  __int64 v17; // rdx
  int v18; // [rsp+30h] [rbp-D8h]
  __int64 v19; // [rsp+38h] [rbp-D0h]
  struct _DXGKARG_BUILDPAGINGBUFFER v20; // [rsp+58h] [rbp-B0h] BYREF

  v4 = **a2;
  v5 = *(_DWORD *)(v4 + 76) & 0x3F;
  memset(&v20, 0, sizeof(v20));
  do
  {
    VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(
      (VIDMM_GLOBAL *)this,
      (unsigned int)v5,
      (struct _VIDMM_GLOBAL_ALLOC *)v4,
      &v20);
    v20.Operation = DXGK_OPERATION_INIT_CONTEXT_RESOURCE;
    v6 = *(_QWORD *)(v4 + 40);
    if ( v6 )
      v7 = *(_QWORD *)(v6 + 16);
    else
      v7 = *(_QWORD *)(v4 + 48);
    v20.UpdateContextAllocation.ContextAllocation = v7;
    v8 = *(_QWORD *)(v4 + 136);
    if ( (*(_DWORD *)(v8 + 80) & 0x1000) != 0 )
      v20.Transfer.TransferOffset = 0;
    else
      v20.Transfer.TransferOffset = *(_DWORD *)(v8 + 16) + 1;
    v20.Transfer.TransferSize = *(_QWORD *)(v4 + 144) + *(_QWORD *)(*(_QWORD *)(v4 + 136) + 24LL);
    if ( (*(_DWORD *)(v4 + 80) & 0x80u) != 0 )
    {
      if ( (**(_DWORD **)(v4 + 504) & 8) != 0 )
        v20.MapApertureSegment.OffsetInPages = *(_QWORD *)(v4 + 368);
      else
        v20.MapApertureSegment.OffsetInPages = *(_QWORD *)(*(_QWORD *)(v4 + 104) + 16LL);
    }
    GpuVirtualAddress = VIDMM_ALLOC::GetGpuVirtualAddress((VIDMM_ALLOC *)a2, v5);
    v10 = this[2];
    v20.Transfer.Source.SegmentAddress.QuadPart = GpuVirtualAddress;
    v11 = ADAPTER_RENDER::DdiBuildPagingBuffer(v10, &v20);
    if ( bTracingEnabled )
    {
      v12 = this[v5 + 143];
      CurrentProcessId = PsGetCurrentProcessId();
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      {
        v19 = 0LL;
        v18 = (int)v12;
        McTemplateK0pppxxq(v15, v14, v16, CurrentProcessId, v4);
      }
    }
    VidMmRecordTransfer((struct _VIDMM_GLOBAL_STATISTICS *)(this + 896), 0LL, 8);
    VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
      (VIDMM_GLOBAL *)this,
      (unsigned int)v5,
      (struct _VIDMM_GLOBAL_ALLOC *)v4,
      &v20,
      v11,
      v17 & v18,
      (void *)(v17 & v19));
  }
  while ( v11 < 0 );
}
