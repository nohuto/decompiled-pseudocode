/*
 * XREFs of ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1C006EF00
 * Callers:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C00027A8 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C006DDE0 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0002868 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00180B4 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00180D8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     McTemplateK0q @ 0x1C0026600 (McTemplateK0q.c)
 *     McTemplateK0pptpqqx @ 0x1C0027BD0 (McTemplateK0pptpqqx.c)
 *     McTemplateK0pptpqxpx @ 0x1C0027C90 (McTemplateK0pptpqxpx.c)
 *     McTemplateK0pptpqxpxx @ 0x1C0027D70 (McTemplateK0pptpqxpxx.c)
 *     McTemplateK0pptpqxq @ 0x1C0027E60 (McTemplateK0pptpqxq.c)
 *     McTemplateK0pptpqxqqppqqxxpqx @ 0x1C0027F20 (McTemplateK0pptpqxqqppqqxxpqx.c)
 *     McTemplateK0pptpqxqxqxq @ 0x1C00280CC (McTemplateK0pptpqxqxqxq.c)
 *     McTemplateK0pptpqxqxqxqqq @ 0x1C00281E4 (McTemplateK0pptpqxqxqxqqq.c)
 *     McTemplateK0pptpqxxqt @ 0x1C002832C (McTemplateK0pptpqxxqt.c)
 *     McTemplateK0pptpqxxt @ 0x1C002841C (McTemplateK0pptpqxxt.c)
 *     McTemplateK0pptpxqqx @ 0x1C00284FC (McTemplateK0pptpxqqx.c)
 *     McTemplateK0pptpxx @ 0x1C00285DC (McTemplateK0pptpxx.c)
 *     McTemplateK0pptpxxpq @ 0x1C002869C (McTemplateK0pptpxxpq.c)
 *     McTemplateK0pptpxxqqxx @ 0x1C002877C (McTemplateK0pptpxxqqxx.c)
 *     McTemplateK0pptpxxqqxxxqqxxx @ 0x1C0028880 (McTemplateK0pptpxxqqxxxqqxxx.c)
 *     McTemplateK0pptqx @ 0x1C0028A14 (McTemplateK0pptqx.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C005D000 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0079770 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C00B5900 (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 *     ?RecordVaPagingHistoryFlushTlb@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGK_BUILDPAGINGBUFFER_FLUSHTLB@@I@Z @ 0x1C00B8C6C (-RecordVaPagingHistoryFlushTlb@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGK_BUILDPAGINGBUFFER.c)
 */

void __fastcall VIDMM_GLOBAL::FlushGpuVaTlb(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct _D3DGPU_PHYSICAL_ADDRESS *a3,
        struct VIDMM_PROCESS *a4,
        void *a5,
        SIZE_T a6,
        unsigned __int64 a7)
{
  struct VIDMM_PROCESS *v7; // r13
  struct _D3DGPU_PHYSICAL_ADDRESS *v8; // r15
  __int64 v9; // r12
  _OWORD *v11; // rdx
  SIZE_T TransferSize; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  void *v15; // rax
  SIZE_T v16; // r11
  SIZE_T v17; // r10
  LARGE_INTEGER v18; // r9
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r8
  struct _D3DGPU_PHYSICAL_ADDRESS v24; // xmm0
  void *v25; // rdx
  int v26; // eax
  bool v27; // zf
  int v28; // eax
  __int64 v29; // rdx
  const GUID *v30; // r8
  __int64 v31; // r13
  int v32; // edi
  __int64 v33; // r15
  char v34; // al
  __int64 v35; // r9
  _BOOL8 v36; // rdx
  UINT FillPattern; // r11d
  _DWORD *v38; // rcx
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  struct _DXGKARG_BUILDPAGINGBUFFER *v42; // rax
  __int64 v43; // rcx
  __int128 v44; // xmm0
  __int64 v45; // rdi
  _QWORD *v46; // rax
  __int64 v47; // rcx
  const GUID *v48; // r8
  char v49[8]; // [rsp+30h] [rbp-F8h]
  char v50[8]; // [rsp+38h] [rbp-F0h]
  __int64 v51; // [rsp+40h] [rbp-E8h]
  __int64 v52; // [rsp+48h] [rbp-E0h]
  __int64 v53; // [rsp+50h] [rbp-D8h]
  __int64 v54; // [rsp+58h] [rbp-D0h]
  __int64 v55; // [rsp+60h] [rbp-C8h]
  __int64 v56; // [rsp+70h] [rbp-B8h]
  __int64 v57; // [rsp+78h] [rbp-B0h]
  __int64 v58; // [rsp+80h] [rbp-A8h]
  __int64 v59; // [rsp+98h] [rbp-90h]
  int v60; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v61; // [rsp+B0h] [rbp-78h]
  char v62; // [rsp+B8h] [rbp-70h]
  struct _DXGKARG_BUILDPAGINGBUFFER v63; // [rsp+C8h] [rbp-60h] BYREF

  v7 = a4;
  v8 = a3;
  v9 = a2;
  if ( !*((_BYTE *)this + 7072) && (*((_BYTE *)this + 40872) & 0x10) == 0 )
  {
    memset(&v63, 0, sizeof(v63));
    TransferSize = *(_QWORD *)(*((_QWORD *)this + 2) + 528LL);
    v13 = *(_QWORD *)(*(_QWORD *)(TransferSize + 256) + 8 * v9);
    if ( v13 )
    {
      v15 = *(void **)(v13 + 48);
    }
    else
    {
      if ( (*((_BYTE *)this + 40873) & 8) != 0 )
        v14 = *(_QWORD *)(TransferSize + 272);
      else
        v14 = *(_QWORD *)(TransferSize + 248);
      v15 = *(void **)(*(_QWORD *)(v14 + 8 * v9) + 64LL);
    }
    v63.hSystemContext = v15;
    v63.MultipassOffset = 0;
LABEL_8:
    v16 = (SIZE_T)a5;
    v17 = a6;
    v18.QuadPart = a7;
    do
    {
      v19 = *((_QWORD *)this + v9 + 79);
      if ( (*(_DWORD *)(v19 + 32) & 4) == 0 )
      {
        v39 = (_QWORD *)WdLogNewEntry5_WdCriticalError(TransferSize, v11);
        v39[3] = 270LL;
        v39[4] = 29LL;
        v39[5] = v19;
        v39[6] = 0LL;
        v39[7] = 0LL;
        WdLogEvent5_WdCriticalError(v39);
        v18.QuadPart = a7;
        v17 = a6;
        v16 = (SIZE_T)a5;
        v19 = *((_QWORD *)this + v9 + 79);
      }
      v20 = *((_QWORD *)this + v9 + 143);
      if ( *(_DWORD *)(v19 + 36) )
        v21 = *(_QWORD *)(*(_QWORD *)(v20 + 56) + 368LL);
      else
        v21 = *(_QWORD *)(v20 + 72);
      *((_QWORD *)this + v9 + 335) = v21;
      *((_QWORD *)this + v9 + 335) += *((unsigned int *)this + v9 + 414);
      v22 = *((unsigned int *)this + v9 + 542);
      v23 = *((_QWORD *)this + v9 + 143);
      v24 = *v8;
      v63.pDmaBuffer = (void *)*((_QWORD *)this + v9 + 335);
      v25 = (void *)(v22 + *(_QWORD *)(v23 + 128));
      *((_QWORD *)this + v9 + 399) = v25;
      v26 = *((_DWORD *)this + v9 + 29);
      LODWORD(v22) = *((_DWORD *)this + v9 + 93) - *((_DWORD *)this + v9 + 542);
      v63.pDmaBufferPrivateData = v25;
      LODWORD(v25) = *((_DWORD *)this + v9 + 414);
      v27 = *((_QWORD *)this + 5115) == 0LL;
      v63.DmaSize = v26 - (_DWORD)v25;
      v63.DmaBufferPrivateDataSize = v22;
      v63.DmaBufferGpuVirtualAddress = *(_QWORD *)(v23 + 96);
      v63.DmaBufferWriteOffset = (unsigned int)v25;
      v63.Operation = DXGK_OPERATION_FLUSH_TLB;
      v63.FlushTlb.RootPageTableAddress = v24;
      v63.Transfer.TransferSize = v16;
      v63.MapApertureSegment.OffsetInPages = v17;
      v63.Transfer.Source.SegmentAddress = v18;
      if ( !v27 )
        VIDMM_GLOBAL::RecordVaPagingHistoryFlushTlb(this, v7, &v63.FlushTlb, v9);
      v28 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v63);
      v31 = -1LL;
      TransferSize = (unsigned int)(LODWORD(v63.pDmaBuffer) - *((_DWORD *)this + 2 * v9 + 670));
      v32 = LODWORD(v63.pDmaBufferPrivateData) - *((_DWORD *)this + 2 * v9 + 798);
      v33 = v28;
      if ( LODWORD(v63.pDmaBuffer) != *((_DWORD *)this + 2 * v9 + 670) || v32 )
      {
        if ( !*((_DWORD *)this + v9 + 1171) )
        {
          *((_DWORD *)this + v9 + 1171) = 1;
          ++*((_QWORD *)this + v9 + 618);
        }
        v34 = *((_BYTE *)this + 40873);
        v31 = *((_QWORD *)this + v9 + 618);
        if ( (v34 & 2) != 0 )
          *((_BYTE *)this + 40873) = v34 & 0xFD;
      }
      *((_DWORD *)this + v9 + 414) += TransferSize;
      if ( *((_DWORD *)this + v9 + 414) > *((_DWORD *)this + v9 + 29) )
      {
        v40 = (_QWORD *)WdLogNewEntry5_WdCriticalError(TransferSize, v29);
        v40[3] = 270LL;
        v40[4] = 18LL;
        v40[5] = 0LL;
        v40[6] = 0LL;
        v40[7] = 0LL;
        WdLogEvent5_WdCriticalError(v40);
      }
      *((_DWORD *)this + v9 + 542) += v32;
      if ( *((_DWORD *)this + v9 + 542) > *((_DWORD *)this + v9 + 93) )
      {
        v41 = (_QWORD *)WdLogNewEntry5_WdCriticalError(TransferSize, v29);
        v41[3] = 270LL;
        v41[4] = 19LL;
        v41[5] = 0LL;
        v41[6] = 0LL;
        v41[7] = 0LL;
        WdLogEvent5_WdCriticalError(v41);
      }
      if ( bTracingEnabled )
      {
        v30 = (const GUID *)*((_QWORD *)this + v9 + 143);
        v35 = *((_QWORD *)this + 3);
        v36 = (_DWORD)v33 == -1071775743;
        if ( v63.Operation == DXGK_OPERATION_UPDATE_PAGE_TABLE )
        {
          FillPattern = 0;
          if ( v63.Reserved.Reserved[20] < 2 )
          {
            TransferSize = v63.Transfer.TransferSize;
          }
          else if ( v63.Reserved.Reserved[20] == 2 )
          {
            TransferSize = v63.MapApertureSegment.OffsetInPages;
            FillPattern = v63.Fill.FillPattern;
          }
          else
          {
            TransferSize = 0LL;
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          {
            LODWORD(v59) = v63.UpdatePageTable.UpdateMode;
            LODWORD(v57) = v63.Transfer.Destination.SegmentAddress.HighPart;
            LODWORD(v54) = v63.UnmapApertureSegment.DummyPage.HighPart;
            LODWORD(v56) = v63.Transfer.Destination.SegmentId;
            LODWORD(v53) = FillPattern;
            LODWORD(v51) = v63.ReadPhysical.SegmentId;
            *(_DWORD *)v49 = v33 == -1071775743;
            McTemplateK0pptpqxqqppqqxxpqx(
              TransferSize,
              v36,
              v30,
              v35,
              v30,
              *(_QWORD *)v49,
              0LL,
              v51,
              TransferSize,
              v53,
              v54,
              v63.Transfer.Source.SegmentAddress.QuadPart,
              v63.UpdatePageTable.pPageTableEntries64KB,
              v56,
              v57,
              *(_OWORD *)&v63.Reserved.Reserved[14],
              v63.UpdatePageTable.hProcess,
              v59,
              v63.UpdatePageTable.FirstPteVirtualAddress);
          }
        }
        else if ( v63.Operation == DXGK_OPERATION_FLUSH_TLB )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          {
            LODWORD(v51) = v63.ReadPhysical.SegmentId;
            *(_DWORD *)v49 = v33 == -1071775743;
            McTemplateK0pptpqxpxx(
              TransferSize,
              v36,
              v30,
              v35,
              v30,
              *(_QWORD *)v49,
              0LL,
              v51,
              *(_OWORD *)&v63.SpecialLockTransfer.TransferOffset,
              *(_OWORD *)&v63.Reserved.Reserved[6]);
          }
        }
        else
        {
          switch ( v63.Operation )
          {
            case DXGK_OPERATION_TRANSFER:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v56) = v63.Transfer.Flags.0;
                LODWORD(v55) = v63.Transfer.Destination.SegmentId;
                LODWORD(v53) = v63.Transfer.Source.SegmentId;
                LODWORD(v51) = v63.Transfer.TransferOffset;
                *(_DWORD *)v49 = v33 == -1071775743;
                McTemplateK0pptpqxqxqxq(
                  TransferSize,
                  v36,
                  v30,
                  v35,
                  v30,
                  *(_QWORD *)v49,
                  0LL,
                  v51,
                  v63.Transfer.TransferSize,
                  v53,
                  v63.Transfer.Source.SegmentAddress.QuadPart,
                  v55,
                  v63.Transfer.Destination.SegmentAddress.QuadPart,
                  v56);
              }
              break;
            case DXGK_OPERATION_FILL:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v53) = v63.Transfer.Source.SegmentId;
                LODWORD(v52) = v63.Fill.FillPattern;
                *(_DWORD *)v49 = v33 == -1071775743;
                McTemplateK0pptpxqqx(
                  TransferSize,
                  v36,
                  v30,
                  v35,
                  v30,
                  *(_QWORD *)v49,
                  0LL,
                  v63.Fill.FillSize,
                  v52,
                  v53,
                  v63.Transfer.Source.SegmentAddress.QuadPart);
              }
              break;
            case DXGK_OPERATION_DISCARD_CONTENT:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v52) = v63.DiscardContent.SegmentId;
                LODWORD(v51) = v63.Transfer.TransferOffset;
                *(_DWORD *)v49 = v33 == -1071775743;
                McTemplateK0pptpqqx(
                  TransferSize,
                  v36,
                  v30,
                  v35,
                  v30,
                  *(_QWORD *)v49,
                  0LL,
                  v51,
                  v52,
                  v63.Transfer.TransferSize);
              }
              break;
            case DXGK_OPERATION_READ_PHYSICAL:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_DWORD *)v50 = v63.ReadPhysical.SegmentId;
                *(_DWORD *)v49 = v33 == -1071775743;
                McTemplateK0pptqx(
                  TransferSize,
                  &EventPagingOpReadPhysical,
                  v30,
                  v35,
                  v30,
                  *(_QWORD *)v49,
                  *(_QWORD *)v50,
                  v63.Fill.FillSize);
              }
              break;
            case DXGK_OPERATION_WRITE_PHYSICAL:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_DWORD *)v50 = v63.ReadPhysical.SegmentId;
                *(_DWORD *)v49 = v33 == -1071775743;
                McTemplateK0pptqx(
                  TransferSize,
                  &EventPagingOpWritePhysical,
                  v30,
                  v35,
                  v30,
                  *(_QWORD *)v49,
                  *(_QWORD *)v50,
                  v63.Fill.FillSize);
              }
              break;
            case DXGK_OPERATION_MAP_APERTURE_SEGMENT:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v55) = 0;
                LODWORD(v54) = v63.Transfer.Destination.SegmentAddress.LowPart;
                LODWORD(v51) = v63.Fill.FillPattern;
                *(_DWORD *)v49 = v33 == -1071775743;
                McTemplateK0pptpqxxqt(
                  TransferSize,
                  v36,
                  v30,
                  v35,
                  v30,
                  *(_QWORD *)v49,
                  0LL,
                  v51,
                  *(_OWORD *)&v63.Reserved.Reserved[6],
                  v54,
                  v55);
              }
              break;
            case DXGK_OPERATION_UNMAP_APERTURE_SEGMENT:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v54) = 0;
                LODWORD(v51) = v63.Fill.FillPattern;
                *(_DWORD *)v49 = v33 == -1071775743;
                McTemplateK0pptpqxxt(
                  TransferSize,
                  v36,
                  v30,
                  v35,
                  v30,
                  *(_QWORD *)v49,
                  0LL,
                  v51,
                  *(_OWORD *)&v63.Reserved.Reserved[6],
                  v54);
              }
              break;
            case DXGK_OPERATION_SPECIAL_LOCK_TRANSFER:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v58) = v63.SpecialLockTransfer.SwizzlingRangeData;
                LODWORD(v57) = v63.Transfer.MdlOffset;
                LODWORD(v56) = v63.Transfer.Flags.0;
                LODWORD(v55) = v63.Transfer.Destination.SegmentId;
                LODWORD(v53) = v63.Transfer.Source.SegmentId;
                LODWORD(v51) = v63.Transfer.TransferOffset;
                *(_DWORD *)v49 = v33 == -1071775743;
                McTemplateK0pptpqxqxqxqqq(
                  TransferSize,
                  v36,
                  v30,
                  v35,
                  v30,
                  *(_QWORD *)v49,
                  0LL,
                  v51,
                  v63.Transfer.TransferSize,
                  v53,
                  v63.Transfer.Source.SegmentAddress.QuadPart,
                  v55,
                  v63.Transfer.Destination.SegmentAddress.QuadPart,
                  v56,
                  v57,
                  v58);
              }
              break;
            case DXGK_OPERATION_VIRTUAL_TRANSFER:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v58) = v63.Transfer.Destination.SegmentAddress.HighPart;
                LODWORD(v57) = v63.Transfer.Destination.SegmentAddress.LowPart;
                LODWORD(v54) = MEMORY[4];
                LODWORD(v53) = MEMORY[0];
                *(_DWORD *)v49 = v33 == -1071775743;
                McTemplateK0pptpxxqqxxxqqxxx(
                  TransferSize,
                  v36,
                  v30,
                  v35,
                  v30,
                  *(_QWORD *)v49,
                  0LL,
                  *(_OWORD *)&v63.SpecialLockTransfer.TransferOffset,
                  v53,
                  v54,
                  *(_OWORD *)&v63.Reserved.Reserved[6],
                  v63.UnmapApertureSegment.DummyPage.QuadPart,
                  v57,
                  v58,
                  v63.TransferVirtual.DestinationPageTable,
                  MEMORY[8],
                  MEMORY[0x10]);
              }
              break;
            case DXGK_OPERATION_VIRTUAL_FILL:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v54) = MEMORY[0];
                LODWORD(v53) = v63.Transfer.Source.SegmentId;
                *(_DWORD *)v49 = v33 == -1071775743;
                McTemplateK0pptpxxqqxx(
                  TransferSize,
                  v36,
                  v30,
                  v35,
                  v30,
                  *(_QWORD *)v49,
                  0LL,
                  *(_OWORD *)&v63.SpecialLockTransfer.TransferOffset,
                  v53,
                  v54,
                  v63.Transfer.Source.SegmentAddress.QuadPart,
                  MEMORY[8]);
              }
              break;
            case DXGK_OPERATION_INIT_CONTEXT_RESOURCE:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v51) = v63.Transfer.TransferOffset;
                *(_DWORD *)v49 = v33 == -1071775743;
                McTemplateK0pptpqxpx(
                  TransferSize,
                  v36,
                  v30,
                  v35,
                  v30,
                  *(_QWORD *)v49,
                  0LL,
                  v51,
                  *(_OWORD *)&v63.NotifyResidency.PhysicalAddress.SegmentOffset,
                  v63.Transfer.Source.SegmentAddress.QuadPart);
              }
              break;
            case DXGK_OPERATION_UPDATE_CONTEXT_ALLOCATION:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v54) = v63.Transfer.Source.SegmentId;
                *(_DWORD *)v49 = v33 == -1071775743;
                McTemplateK0pptpxxpq(
                  TransferSize,
                  v36,
                  v30,
                  v35,
                  v30,
                  *(_QWORD *)v49,
                  0LL,
                  *(_OWORD *)&v63.Transfer.hAllocation,
                  v63.Transfer.TransferSize,
                  v54);
              }
              break;
            case DXGK_OPERATION_NOTIFY_RESIDENCY:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v53) = v63.Transfer.Source.SegmentId;
                LODWORD(v51) = v63.Transfer.TransferOffset;
                *(_DWORD *)v49 = v33 == -1071775743;
                McTemplateK0pptpqxq(
                  TransferSize,
                  v36,
                  v30,
                  v35,
                  v30,
                  *(_QWORD *)v49,
                  0LL,
                  v51,
                  v63.Transfer.TransferSize,
                  v53);
              }
              break;
            case DXGK_OPERATION_SIGNAL_MONITORED_FENCE:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_DWORD *)v49 = v33 == -1071775743;
                McTemplateK0pptpxx(
                  TransferSize,
                  v36,
                  v30,
                  v35,
                  v30,
                  *(_QWORD *)v49,
                  0LL,
                  *(_OWORD *)&v63.Transfer.hAllocation);
              }
              break;
            default:
              break;
          }
        }
      }
      v11 = (_OWORD *)*((_QWORD *)this + 983);
      if ( v11 )
      {
        *((_QWORD *)v11 + 45 * *((unsigned int *)this + 1968) + 1) = 0LL;
        *(_QWORD *)(360LL * *((unsigned int *)this + 1968) + *((_QWORD *)this + 983) + 16) = 0LL;
        *(_DWORD *)(360LL * *((unsigned int *)this + 1968) + *((_QWORD *)this + 983)) = v9;
        v42 = &v63;
        v11 = (_OWORD *)(360LL * *((unsigned int *)this + 1968) + *((_QWORD *)this + 983) + 24LL);
        v43 = 2LL;
        do
        {
          v11 += 8;
          v44 = *(_OWORD *)&v42->pDmaBuffer;
          v42 = (struct _DXGKARG_BUILDPAGINGBUFFER *)((char *)v42 + 128);
          *(v11 - 8) = v44;
          *(v11 - 7) = *(_OWORD *)&v42[-1].Reserved.Reserved[42];
          *(v11 - 6) = *(_OWORD *)&v42[-1].Reserved.Reserved[46];
          *(v11 - 5) = *(_OWORD *)&v42[-1].Reserved.Reserved[50];
          *(v11 - 4) = *(_OWORD *)&v42[-1].Reserved.Reserved[54];
          *(v11 - 3) = *(_OWORD *)&v42[-1].Reserved.Reserved[58];
          *(v11 - 2) = *(_OWORD *)&v42[-1].Reserved.Reserved[62];
          *(v11 - 1) = *(_OWORD *)&v42[-1].DmaBufferGpuVirtualAddress;
          --v43;
        }
        while ( v43 );
        *v11 = *(_OWORD *)&v42->pDmaBuffer;
        v11[1] = *(_OWORD *)&v42->pDmaBufferPrivateData;
        v11[2] = *(_OWORD *)&v42->MultipassOffset;
        v11[3] = *(_OWORD *)&v42->SpecialLockTransfer.TransferOffset;
        *(_DWORD *)(360LL * *((unsigned int *)this + 1968) + *((_QWORD *)this + 983) + 344) = v33;
        TransferSize = 360LL * *((unsigned int *)this + 1968);
        *(_QWORD *)(TransferSize + *((_QWORD *)this + 983) + 352) = v31;
        if ( ++*((_DWORD *)this + 1968) >= *((_DWORD *)this + 1964) )
        {
          ++*((_DWORD *)this + 1969);
          *((_DWORD *)this + 1968) = 0;
        }
      }
      if ( (int)v33 < 0 )
      {
        if ( (_DWORD)v33 == -1071775743 )
        {
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace(TransferSize);
          VIDMM_GLOBAL::FlushPagingBufferInternal(this, v9, 1u, 0LL, 0LL, 1, 0);
          v8 = a3;
          v7 = a4;
          goto LABEL_8;
        }
        v45 = *((_QWORD *)this + 3);
        v46 = (_QWORD *)WdLogNewEntry5_WdCriticalError(TransferSize, v11);
        v46[5] = &v63;
        v46[3] = 270LL;
        v46[4] = 11LL;
        v46[6] = v33;
        v46[7] = v45;
        WdLogEvent5_WdCriticalError(v46);
      }
      v18.QuadPart = a7;
      v27 = (_DWORD)v33 == -1071775743;
      v8 = a3;
      v17 = a6;
      v16 = (SIZE_T)a5;
      v7 = a4;
    }
    while ( v27 );
    v38 = *(_DWORD **)(1560LL * (unsigned int)v9 + *((_QWORD *)this + 5023) + 440);
    if ( (*v38 & 0x20) != 0 && (*((_DWORD *)a4 + 22) & 2) == 0 )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q((__int64)v38, &EventPerformanceWarning, v30, 23);
      v60 = -1;
      v61 = 0LL;
      if ( (qword_1C004E010 & 2) != 0 )
      {
        v62 = 1;
        v60 = 8010;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q((__int64)v38, &EventProfilerEnter, v30, 8010);
      }
      else
      {
        v62 = 0;
      }
      DXGETWPROFILER_BASE::PushProfilerEntry();
      VIDMM_GLOBAL::FlushPagingBufferInternal(this, v9, 0, 0LL, 0LL, 0, 0);
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, v9);
      if ( (*((_DWORD *)a4 + 22) & 4) == 0 )
      {
        VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(a4, *(_DWORD *)(*((_QWORD *)this + 3) + 208LL), 1);
        VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(a4, *(_DWORD *)(*((_QWORD *)this + 3) + 208LL), 0);
      }
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60);
      if ( v62 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v47, &EventProfilerExit, v48, v60);
      }
    }
  }
}
