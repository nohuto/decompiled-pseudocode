/*
 * XREFs of ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C00751C0
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0074100 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0075870 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0077E00 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C0079B00 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C00B7374 (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C00109D0 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     McTemplateK0pptpqqx @ 0x1C00194A4 (McTemplateK0pptpqqx.c)
 *     McTemplateK0pptpqxpx @ 0x1C0019564 (McTemplateK0pptpqxpx.c)
 *     McTemplateK0pptpqxpxx @ 0x1C0019644 (McTemplateK0pptpqxpxx.c)
 *     McTemplateK0pptpqxq @ 0x1C0019734 (McTemplateK0pptpqxq.c)
 *     McTemplateK0pptpqxqqppqqxxpqx @ 0x1C00197F4 (McTemplateK0pptpqxqqppqqxxpqx.c)
 *     McTemplateK0pptpqxqxqxq @ 0x1C00199A0 (McTemplateK0pptpqxqxqxq.c)
 *     McTemplateK0pptpqxqxqxqqq @ 0x1C0019AB8 (McTemplateK0pptpqxqxqxqqq.c)
 *     McTemplateK0pptpqxxqt @ 0x1C0019C00 (McTemplateK0pptpqxxqt.c)
 *     McTemplateK0pptpqxxt @ 0x1C0019CF0 (McTemplateK0pptpqxxt.c)
 *     McTemplateK0pptpxqqx @ 0x1C0019DD0 (McTemplateK0pptpxqqx.c)
 *     McTemplateK0pptpxx @ 0x1C0019EB0 (McTemplateK0pptpxx.c)
 *     McTemplateK0pptpxxpq @ 0x1C0019F70 (McTemplateK0pptpxxpq.c)
 *     McTemplateK0pptpxxqqxx @ 0x1C001A050 (McTemplateK0pptpxxqqxx.c)
 *     McTemplateK0pptpxxqqxxxqqxxx @ 0x1C001A154 (McTemplateK0pptpxxqqxxxqqxxx.c)
 *     McTemplateK0pptqx @ 0x1C001A2E8 (McTemplateK0pptqx.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0067ED0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C00AB834 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 *     ?RecordVaPagingHistoryUpdatePte@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGK_BUILDPAGINGBUFFER_UPDATEPAGETABLE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@I@Z @ 0x1C00B6804 (-RecordVaPagingHistoryUpdatePte@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGK_BUILDPAGINGBUFFE.c)
 */

void __fastcall VIDMM_GLOBAL::UpdatePageTable(
        VIDMM_GLOBAL *this,
        UINT a2,
        struct VIDMM_PROCESS *a3,
        D3DGPU_VIRTUAL_ADDRESS a4,
        struct VIDMM_ALLOC *a5,
        struct _VIDMM_GLOBAL_ALLOC *a6,
        UINT64 a7,
        UINT a8,
        unsigned int a9,
        struct _DXGK_PTE *a10,
        struct _DXGK_PTE *a11,
        unsigned int a12,
        UINT a13,
        SIZE_T a14,
        enum _DXGK_PAGETABLEUPDATEMODE a15,
        unsigned __int64 a16,
        LONG a17,
        unsigned __int64 a18)
{
  bool v18; // zf
  UINT v19; // r12d
  LONG v21; // ebx
  unsigned int v22; // r14d
  _OWORD *v24; // rdx
  __int64 FillPattern; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  void *v28; // rax
  D3DGPU_VIRTUAL_ADDRESS v29; // r11
  unsigned int NumPageTableEntries; // r10d
  UINT v31; // r9d
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r8
  void *v37; // rdx
  int v38; // eax
  LONG v39; // eax
  UINT SegmentId; // r9d
  __int64 v41; // rcx
  void *v42; // rdx
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // r12
  int v46; // esi
  __int64 v47; // r14
  char v48; // al
  const GUID *v49; // r8
  __int64 v50; // r9
  _BOOL8 v51; // rdx
  __int64 v52; // rcx
  SIZE_T v53; // rcx
  _QWORD *v54; // rax
  int v55; // r14d
  unsigned int v56; // esi
  unsigned __int64 v57; // rdx
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  struct _DXGKARG_BUILDPAGINGBUFFER *v60; // rax
  __int64 v61; // rcx
  __int128 v62; // xmm0
  __int64 v63; // rsi
  _QWORD *v64; // rax
  char v65[8]; // [rsp+30h] [rbp-F8h]
  char v66[8]; // [rsp+38h] [rbp-F0h]
  struct _DXGKARG_BUILDPAGINGBUFFER v68; // [rsp+C8h] [rbp-60h] BYREF
  struct _DXGK_PTE *v69; // [rsp+208h] [rbp+E0h]
  DXGK_PTE *v70; // [rsp+210h] [rbp+E8h]
  D3DGPU_VIRTUAL_ADDRESS v71; // [rsp+218h] [rbp+F0h]
  struct _VIDMM_GLOBAL_ALLOC *v72; // [rsp+220h] [rbp+F8h]
  struct VIDMM_PROCESS *v73; // [rsp+228h] [rbp+100h]
  _QWORD v74[2]; // [rsp+230h] [rbp+108h] BYREF

  v18 = *((_BYTE *)this + 7072) == 0;
  v19 = a2;
  v21 = a17;
  v22 = a12;
  v72 = a6;
  v69 = a10;
  v70 = a11;
  v71 = a4;
  v73 = a3;
  if ( v18 )
  {
    if ( (*((_BYTE *)this + 40872) & 0x10) != 0 )
      a15 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
    memset(&v68, 0, sizeof(v68));
    FillPattern = *(_QWORD *)(*((_QWORD *)this + 2) + 528LL);
    v26 = *(_QWORD *)(*(_QWORD *)(FillPattern + 256) + 8LL * a12);
    if ( v26 )
    {
      v28 = *(void **)(v26 + 48);
    }
    else
    {
      if ( (*((_BYTE *)this + 40873) & 8) != 0 )
        v27 = *(_QWORD *)(FillPattern + 272);
      else
        v27 = *(_QWORD *)(FillPattern + 248);
      v28 = *(void **)(*(_QWORD *)(v27 + 8LL * a12) + 64LL);
    }
    v29 = a16 << 12;
    v68.MultipassOffset = 0;
    v68.hSystemContext = v28;
LABEL_8:
    NumPageTableEntries = a9;
    v31 = a13;
    do
    {
      v32 = *((_QWORD *)this + a12 + 79);
      if ( (*(_DWORD *)(v32 + 32) & 4) == 0 )
      {
        v54 = (_QWORD *)WdLogNewEntry5_WdCriticalError(FillPattern, v24);
        v54[3] = 270LL;
        v54[4] = 29LL;
        v54[5] = v32;
        v54[6] = 0LL;
        v54[7] = 0LL;
        WdLogEvent5_WdCriticalError(v54);
        v29 = a16 << 12;
        v31 = a13;
        NumPageTableEntries = a9;
        v32 = *((_QWORD *)this + a12 + 79);
      }
      v33 = *((_QWORD *)this + a12 + 143);
      if ( *(_DWORD *)(v32 + 36) )
        v34 = *(_QWORD *)(*(_QWORD *)(v33 + 56) + 368LL);
      else
        v34 = *(_QWORD *)(v33 + 72);
      *((_QWORD *)this + a12 + 335) = v34;
      *((_QWORD *)this + a12 + 335) += *((unsigned int *)this + a12 + 414);
      v35 = *((unsigned int *)this + a12 + 542);
      v36 = *((_QWORD *)this + a12 + 143);
      v68.pDmaBuffer = (void *)*((_QWORD *)this + a12 + 335);
      v37 = (void *)(v35 + *(_QWORD *)(v36 + 128));
      *((_QWORD *)this + a12 + 399) = v37;
      v38 = *((_DWORD *)this + a12 + 29);
      LODWORD(v35) = *((_DWORD *)this + a12 + 93) - *((_DWORD *)this + a12 + 542);
      v68.pDmaBufferPrivateData = v37;
      LODWORD(v37) = *((_DWORD *)this + a12 + 414);
      v68.DmaSize = v38 - (_DWORD)v37;
      v68.DmaBufferPrivateDataSize = v35;
      v68.DmaBufferGpuVirtualAddress = *(_QWORD *)(v36 + 96);
      v74[0] = 0LL;
      v74[1] = 0LL;
      v39 = v21;
      v68.DmaBufferWriteOffset = (unsigned int)v37;
      v68.Operation = DXGK_OPERATION_UPDATE_PAGE_TABLE;
      v68.Transfer.Destination.SegmentAddress.HighPart = v21;
      v68.UnmapApertureSegment.DummyPage.HighPart = NumPageTableEntries;
      if ( a15 )
      {
        if ( a15 == DXGK_PAGETABLEUPDATE_GPU_VIRTUAL )
        {
          v68.Transfer.TransferSize = a14;
        }
        else
        {
          v68.Fill.FillPattern = v31;
          v68.MapApertureSegment.OffsetInPages = a14;
        }
      }
      else
      {
        v68.Transfer.TransferSize = a14;
      }
      SegmentId = v19;
      v68.Transfer.Destination.SegmentId = a8;
      v68.ReadPhysical.SegmentId = v19;
      if ( v69 )
      {
        v68.Transfer.Source.SegmentAddress.QuadPart = (LONGLONG)v69;
        v68.UpdatePageTable.pPageTableEntries64KB = v70;
      }
      else
      {
        v68.Transfer.Source.SegmentAddress.QuadPart = (LONGLONG)v74;
        if ( (**(_DWORD **)(1560LL * a12 + *((_QWORD *)this + 5023) + 440) & 0x80u) != 0 )
          v68.UpdatePageTable.pPageTableEntries64KB = (DXGK_PTE *)v74;
        v39 = v21 | 1;
        v68.Transfer.Destination.SegmentAddress.HighPart = v21 | 1;
      }
      v68.Reserved.Reserved[20] = a15;
      v68.UpdatePageTable.FirstPteVirtualAddress = v29;
      if ( !v19 )
      {
        if ( a18 == 16 )
        {
          if ( (v21 & 8) != 0 )
            goto LABEL_83;
        }
        else if ( a18 == 1 && (v21 & 8) == 0 )
        {
LABEL_83:
          v39 |= 1u;
          v68.Transfer.Destination.SegmentAddress.HighPart = v39;
        }
      }
      v68.TransferVirtual.DestinationPageTable = v71;
      if ( v72 )
      {
        v52 = *((_QWORD *)v72 + 5);
        if ( v52 )
          v53 = *(_QWORD *)(v52 + 16);
        else
          v53 = *((_QWORD *)v72 + 6);
        v68.Fill.FillSize = v53;
        v68.UpdatePageTable.AllocationOffsetInBytes = a7;
      }
      v41 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v73 + 4) + 48LL) + 8LL
                                                                 * *(unsigned int *)(*((_QWORD *)this + 3) + 208LL));
      if ( v41 )
        v42 = *(void **)(v41 + 16);
      else
        v42 = 0LL;
      v18 = *((_QWORD *)this + 5115) == 0LL;
      v68.UpdatePageTable.hProcess = v42;
      if ( !v18 )
      {
        VIDMM_GLOBAL::RecordVaPagingHistoryUpdatePte(this, v73, &v68.UpdatePageTable, a5, v72, v22);
        LOBYTE(v39) = v68.Reserved.Reserved[13];
        NumPageTableEntries = v68.UpdatePageTable.NumPageTableEntries;
        SegmentId = v68.ReadPhysical.SegmentId;
      }
      if ( *((_QWORD *)this + 5119) && !SegmentId && (v39 & 1) == 0 )
      {
        v55 = 0x10000;
        if ( (v39 & 8) == 0 )
          v55 = 4096;
        v56 = 0;
        if ( NumPageTableEntries )
        {
          do
          {
            v57 = *(_QWORD *)(v68.Transfer.Source.SegmentAddress.QuadPart + 16LL * v56);
            if ( (v57 & 1) != 0 )
            {
              VIDMM_GLOBAL::RecordPageMappingHistory(
                this,
                (v57 >> 5) & 0x1F,
                *(_QWORD *)(v68.Transfer.Source.SegmentAddress.QuadPart + 16LL * v56 + 8),
                1LL,
                1,
                v68.UpdatePageTable.FirstPteVirtualAddress + v56 * v55,
                *(_QWORD *)v66);
              NumPageTableEntries = v68.UpdatePageTable.NumPageTableEntries;
            }
            ++v56;
          }
          while ( v56 < NumPageTableEntries );
          v21 = a17;
        }
      }
      v43 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v68);
      v45 = -1LL;
      FillPattern = (unsigned int)(LODWORD(v68.pDmaBuffer) - *((_DWORD *)this + 2 * a12 + 670));
      v46 = LODWORD(v68.pDmaBufferPrivateData) - *((_DWORD *)this + 2 * a12 + 798);
      v47 = v43;
      if ( LODWORD(v68.pDmaBuffer) != *((_DWORD *)this + 2 * a12 + 670) || v46 )
      {
        if ( !*((_DWORD *)this + a12 + 1171) )
        {
          *((_DWORD *)this + a12 + 1171) = 1;
          ++*((_QWORD *)this + a12 + 618);
        }
        v48 = *((_BYTE *)this + 40873);
        v45 = *((_QWORD *)this + a12 + 618);
        if ( (v48 & 2) != 0 )
          *((_BYTE *)this + 40873) = v48 & 0xFD;
      }
      *((_DWORD *)this + a12 + 414) += FillPattern;
      if ( *((_DWORD *)this + a12 + 414) > *((_DWORD *)this + a12 + 29) )
      {
        v58 = (_QWORD *)WdLogNewEntry5_WdCriticalError(FillPattern, v44);
        v58[3] = 270LL;
        v58[4] = 18LL;
        v58[5] = 0LL;
        v58[6] = 0LL;
        v58[7] = 0LL;
        WdLogEvent5_WdCriticalError(v58);
      }
      *((_DWORD *)this + a12 + 542) += v46;
      if ( *((_DWORD *)this + a12 + 542) > *((_DWORD *)this + a12 + 93) )
      {
        v59 = (_QWORD *)WdLogNewEntry5_WdCriticalError(FillPattern, v44);
        v59[3] = 270LL;
        v59[4] = 19LL;
        v59[5] = 0LL;
        v59[6] = 0LL;
        v59[7] = 0LL;
        WdLogEvent5_WdCriticalError(v59);
      }
      if ( bTracingEnabled )
      {
        v49 = (const GUID *)*((_QWORD *)this + a12 + 143);
        v50 = *((_QWORD *)this + 3);
        v51 = (_DWORD)v47 == -1071775743;
        if ( v68.Operation == DXGK_OPERATION_UPDATE_PAGE_TABLE )
        {
          FillPattern = 0LL;
          if ( v68.Reserved.Reserved[20] == 2 )
            FillPattern = v68.Fill.FillPattern;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          {
            *(_QWORD *)v66 = 0LL;
            *(_DWORD *)v65 = v47 == -1071775743;
            McTemplateK0pptpqxqqppqqxxpqx(FillPattern, v51, v49, v50, v49, *(_QWORD *)v65);
          }
        }
        else if ( v68.Operation == DXGK_OPERATION_FLUSH_TLB )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          {
            *(_QWORD *)v66 = 0LL;
            *(_DWORD *)v65 = v47 == -1071775743;
            McTemplateK0pptpqxpxx(FillPattern, v51, v49, v50, v49, *(_QWORD *)v65);
          }
        }
        else
        {
          switch ( v68.Operation )
          {
            case DXGK_OPERATION_TRANSFER:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v66 = 0LL;
                *(_DWORD *)v65 = v47 == -1071775743;
                McTemplateK0pptpqxqxqxq(FillPattern, v51, v49, v50, v49, *(_QWORD *)v65);
              }
              break;
            case DXGK_OPERATION_FILL:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v66 = 0LL;
                *(_DWORD *)v65 = v47 == -1071775743;
                McTemplateK0pptpxqqx(FillPattern, v51, v49, v50, v49, *(_QWORD *)v65);
              }
              break;
            case DXGK_OPERATION_DISCARD_CONTENT:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v66 = 0LL;
                *(_DWORD *)v65 = v47 == -1071775743;
                McTemplateK0pptpqqx(FillPattern, v51, v49, v50, v49, *(_QWORD *)v65);
              }
              break;
            case DXGK_OPERATION_READ_PHYSICAL:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_DWORD *)v66 = v68.ReadPhysical.SegmentId;
                *(_DWORD *)v65 = v47 == -1071775743;
                McTemplateK0pptqx(FillPattern, &EventPagingOpReadPhysical, v49, v50, v49, *(_QWORD *)v65);
              }
              break;
            case DXGK_OPERATION_WRITE_PHYSICAL:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_DWORD *)v66 = v68.ReadPhysical.SegmentId;
                *(_DWORD *)v65 = v47 == -1071775743;
                McTemplateK0pptqx(FillPattern, &EventPagingOpWritePhysical, v49, v50, v49, *(_QWORD *)v65);
              }
              break;
            case DXGK_OPERATION_MAP_APERTURE_SEGMENT:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v66 = 0LL;
                *(_DWORD *)v65 = v47 == -1071775743;
                McTemplateK0pptpqxxqt(FillPattern, v51, v49, v50, v49, *(_QWORD *)v65);
              }
              break;
            case DXGK_OPERATION_UNMAP_APERTURE_SEGMENT:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v66 = 0LL;
                *(_DWORD *)v65 = v47 == -1071775743;
                McTemplateK0pptpqxxt(FillPattern, v51, v49, v50, v49, *(_QWORD *)v65);
              }
              break;
            case DXGK_OPERATION_SPECIAL_LOCK_TRANSFER:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v66 = 0LL;
                *(_DWORD *)v65 = v47 == -1071775743;
                McTemplateK0pptpqxqxqxqqq(FillPattern, v51, v49, v50, v49, *(_QWORD *)v65);
              }
              break;
            case DXGK_OPERATION_VIRTUAL_TRANSFER:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v66 = 0LL;
                *(_DWORD *)v65 = v47 == -1071775743;
                McTemplateK0pptpxxqqxxxqqxxx(FillPattern, v51, v49, v50, v49, *(_QWORD *)v65);
              }
              break;
            case DXGK_OPERATION_VIRTUAL_FILL:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v66 = 0LL;
                *(_DWORD *)v65 = v47 == -1071775743;
                McTemplateK0pptpxxqqxx(FillPattern, v51, v49, v50, v49, *(_QWORD *)v65);
              }
              break;
            case DXGK_OPERATION_INIT_CONTEXT_RESOURCE:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v66 = 0LL;
                *(_DWORD *)v65 = v47 == -1071775743;
                McTemplateK0pptpqxpx(FillPattern, v51, v49, v50, v49, *(_QWORD *)v65);
              }
              break;
            case DXGK_OPERATION_UPDATE_CONTEXT_ALLOCATION:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v66 = 0LL;
                *(_DWORD *)v65 = v47 == -1071775743;
                McTemplateK0pptpxxpq(FillPattern, v51, v49, v50, v49, *(_QWORD *)v65);
              }
              break;
            case DXGK_OPERATION_NOTIFY_RESIDENCY:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v66 = 0LL;
                *(_DWORD *)v65 = v47 == -1071775743;
                McTemplateK0pptpqxq(FillPattern, v51, v49, v50, v49, *(_QWORD *)v65);
              }
              break;
            case DXGK_OPERATION_SIGNAL_MONITORED_FENCE:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v66 = 0LL;
                *(_DWORD *)v65 = v47 == -1071775743;
                McTemplateK0pptpxx(FillPattern, v51, v49, v50, v49, *(_QWORD *)v65);
              }
              break;
            default:
              break;
          }
        }
      }
      v24 = (_OWORD *)*((_QWORD *)this + 983);
      if ( v24 )
      {
        *((_QWORD *)v24 + 45 * *((unsigned int *)this + 1968) + 1) = 0LL;
        *(_QWORD *)(360LL * *((unsigned int *)this + 1968) + *((_QWORD *)this + 983) + 16) = 0LL;
        *(_DWORD *)(360LL * *((unsigned int *)this + 1968) + *((_QWORD *)this + 983)) = a12;
        v60 = &v68;
        v24 = (_OWORD *)(360LL * *((unsigned int *)this + 1968) + *((_QWORD *)this + 983) + 24LL);
        v61 = 2LL;
        do
        {
          v24 += 8;
          v62 = *(_OWORD *)&v60->pDmaBuffer;
          v60 = (struct _DXGKARG_BUILDPAGINGBUFFER *)((char *)v60 + 128);
          *(v24 - 8) = v62;
          *(v24 - 7) = *(_OWORD *)&v60[-1].Reserved.Reserved[42];
          *(v24 - 6) = *(_OWORD *)&v60[-1].Reserved.Reserved[46];
          *(v24 - 5) = *(_OWORD *)&v60[-1].Reserved.Reserved[50];
          *(v24 - 4) = *(_OWORD *)&v60[-1].Reserved.Reserved[54];
          *(v24 - 3) = *(_OWORD *)&v60[-1].Reserved.Reserved[58];
          *(v24 - 2) = *(_OWORD *)&v60[-1].Reserved.Reserved[62];
          *(v24 - 1) = *(_OWORD *)&v60[-1].DmaBufferGpuVirtualAddress;
          --v61;
        }
        while ( v61 );
        *v24 = *(_OWORD *)&v60->pDmaBuffer;
        v24[1] = *(_OWORD *)&v60->pDmaBufferPrivateData;
        v24[2] = *(_OWORD *)&v60->MultipassOffset;
        v24[3] = *(_OWORD *)&v60->SpecialLockTransfer.TransferOffset;
        *(_DWORD *)(360LL * *((unsigned int *)this + 1968) + *((_QWORD *)this + 983) + 344) = v47;
        FillPattern = 360LL * *((unsigned int *)this + 1968);
        *(_QWORD *)(FillPattern + *((_QWORD *)this + 983) + 352) = v45;
        if ( ++*((_DWORD *)this + 1968) >= *((_DWORD *)this + 1964) )
        {
          ++*((_DWORD *)this + 1969);
          *((_DWORD *)this + 1968) = 0;
        }
      }
      if ( (int)v47 < 0 )
      {
        if ( (_DWORD)v47 == -1071775743 )
        {
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace(FillPattern);
          v22 = a12;
          VIDMM_GLOBAL::FlushPagingBufferInternal(this, a12, 1u, 0LL, 0LL, 1, 0);
          v29 = a16 << 12;
          v19 = a2;
          goto LABEL_8;
        }
        v63 = *((_QWORD *)this + 3);
        v64 = (_QWORD *)WdLogNewEntry5_WdCriticalError(FillPattern, v24);
        v64[5] = &v68;
        v64[3] = 270LL;
        v64[4] = 11LL;
        v64[6] = v47;
        v64[7] = v63;
        WdLogEvent5_WdCriticalError(v64);
      }
      v29 = a16 << 12;
      v18 = (_DWORD)v47 == -1071775743;
      v19 = a2;
      v22 = a12;
      v31 = a13;
      NumPageTableEntries = a9;
    }
    while ( v18 );
  }
}
