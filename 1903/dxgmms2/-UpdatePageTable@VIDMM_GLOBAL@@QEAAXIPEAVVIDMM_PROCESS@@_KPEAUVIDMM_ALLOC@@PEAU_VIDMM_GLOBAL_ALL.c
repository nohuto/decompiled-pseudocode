/*
 * XREFs of ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C006F660
 * Callers:
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C00600F0 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C006DA14 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006E2C0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006FE00 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C00BA604 (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C00028A8 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     __security_check_cookie @ 0x1C0018060 (__security_check_cookie.c)
 *     memset @ 0x1C0018980 (memset.c)
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
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0078D90 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C00AEE10 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 *     ?RecordVaPagingHistoryUpdatePte@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGK_BUILDPAGINGBUFFER_UPDATEPAGETABLE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@I@Z @ 0x1C00B9A84 (-RecordVaPagingHistoryUpdatePte@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGK_BUILDPAGINGBUFFE.c)
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
        LONG a9,
        struct _DXGK_PTE *a10,
        struct _DXGK_PTE *a11,
        unsigned int a12,
        UINT a13,
        SIZE_T a14,
        enum _DXGK_PAGETABLEUPDATEMODE a15,
        unsigned __int64 a16,
        DXGK_UPDATEPAGETABLEFLAGS a17,
        unsigned __int64 a18)
{
  bool v18; // zf
  UINT v19; // r12d
  unsigned int v21; // r14d
  _OWORD *v22; // rdx
  SIZE_T TransferSize; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  void *v26; // rax
  D3DGPU_VIRTUAL_ADDRESS v27; // r13
  LONG v28; // r9d
  unsigned __int64 v29; // r11
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned int NumPageTableEntries; // r10d
  __int64 v34; // rcx
  __int64 v35; // r8
  void *v36; // rdx
  int v37; // eax
  LONG v38; // eax
  UINT SegmentId; // r9d
  __int64 v40; // rcx
  DXGK_PTE *pPageTableEntries64KB; // rax
  __int64 v42; // rcx
  void *v43; // rdx
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // r12
  int v47; // esi
  __int64 v48; // r14
  char v49; // al
  const GUID *v50; // r8
  __int64 v51; // r9
  _BOOL8 v52; // rdx
  __int64 v53; // rcx
  SIZE_T v54; // rcx
  _QWORD *v55; // rax
  int v56; // r14d
  unsigned int v57; // esi
  unsigned __int64 v58; // rdx
  _QWORD *v59; // rax
  _QWORD *v60; // rax
  struct _DXGKARG_BUILDPAGINGBUFFER *v61; // rax
  __int64 v62; // rcx
  __int128 v63; // xmm0
  __int64 v64; // rsi
  _QWORD *v65; // rax
  char v66[8]; // [rsp+30h] [rbp-F8h]
  char v67[8]; // [rsp+38h] [rbp-F0h]
  struct _DXGKARG_BUILDPAGINGBUFFER v70; // [rsp+B8h] [rbp-70h] BYREF
  SIZE_T v71; // [rsp+1F8h] [rbp+D0h]
  struct _DXGK_PTE *v72; // [rsp+200h] [rbp+D8h]
  DXGK_PTE *v73; // [rsp+208h] [rbp+E0h]
  D3DGPU_VIRTUAL_ADDRESS v74; // [rsp+210h] [rbp+E8h]
  struct _VIDMM_GLOBAL_ALLOC *v75; // [rsp+218h] [rbp+F0h]
  struct VIDMM_PROCESS *v76; // [rsp+220h] [rbp+F8h]
  unsigned __int64 v77; // [rsp+228h] [rbp+100h]
  _QWORD v78[2]; // [rsp+230h] [rbp+108h] BYREF

  v18 = *((_BYTE *)this + 7072) == 0;
  v19 = a2;
  v21 = a12;
  v75 = a6;
  v72 = a10;
  v73 = a11;
  v71 = a14;
  v74 = a4;
  v76 = a3;
  if ( v18 )
  {
    if ( (*((_BYTE *)this + 40872) & 0x10) != 0 )
      a15 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
    memset(&v70, 0, sizeof(v70));
    TransferSize = *(_QWORD *)(*((_QWORD *)this + 2) + 528LL);
    v24 = *(_QWORD *)(*(_QWORD *)(TransferSize + 256) + 8LL * a12);
    if ( v24 )
    {
      v26 = *(void **)(v24 + 48);
    }
    else
    {
      if ( (*((_BYTE *)this + 40873) & 8) != 0 )
        v25 = *(_QWORD *)(TransferSize + 272);
      else
        v25 = *(_QWORD *)(TransferSize + 248);
      v26 = *(void **)(*(_QWORD *)(v25 + 8LL * a12) + 64LL);
    }
    v27 = a16 << 12;
    v77 = a16 << 12;
    v70.MultipassOffset = 0;
    v70.hSystemContext = v26;
LABEL_8:
    v28 = a9;
    v29 = a18;
    do
    {
      v30 = *((_QWORD *)this + a12 + 79);
      if ( (*(_DWORD *)(v30 + 32) & 4) == 0 )
      {
        v55 = (_QWORD *)WdLogNewEntry5_WdCriticalError(TransferSize, v22);
        v55[3] = 270LL;
        v55[4] = 29LL;
        v55[5] = v30;
        v55[6] = 0LL;
        v55[7] = 0LL;
        WdLogEvent5_WdCriticalError(v55);
        v29 = a18;
        v28 = a9;
        v30 = *((_QWORD *)this + a12 + 79);
      }
      v31 = *((_QWORD *)this + a12 + 143);
      if ( *(_DWORD *)(v30 + 36) )
        v32 = *(_QWORD *)(*(_QWORD *)(v31 + 56) + 368LL);
      else
        v32 = *(_QWORD *)(v31 + 72);
      *((_QWORD *)this + a12 + 335) = v32;
      NumPageTableEntries = v28;
      *((_QWORD *)this + a12 + 335) += *((unsigned int *)this + a12 + 414);
      v34 = *((unsigned int *)this + a12 + 542);
      v35 = *((_QWORD *)this + a12 + 143);
      v70.pDmaBuffer = (void *)*((_QWORD *)this + a12 + 335);
      v36 = (void *)(v34 + *(_QWORD *)(v35 + 128));
      *((_QWORD *)this + a12 + 399) = v36;
      v37 = *((_DWORD *)this + a12 + 29);
      LODWORD(v34) = *((_DWORD *)this + a12 + 93) - *((_DWORD *)this + a12 + 542);
      v70.pDmaBufferPrivateData = v36;
      LODWORD(v36) = *((_DWORD *)this + a12 + 414);
      v70.DmaSize = v37 - (_DWORD)v36;
      v70.DmaBufferPrivateDataSize = v34;
      v70.DmaBufferGpuVirtualAddress = *(_QWORD *)(v35 + 96);
      v70.DmaBufferWriteOffset = (unsigned int)v36;
      v78[0] = 0LL;
      v78[1] = 0LL;
      v38 = (LONG)a17;
      v70.Operation = DXGK_OPERATION_UPDATE_PAGE_TABLE;
      v70.UpdatePageTable.Flags = a17;
      v70.UnmapApertureSegment.DummyPage.HighPart = v28;
      if ( (unsigned int)a15 <= DXGK_PAGETABLEUPDATE_GPU_VIRTUAL )
      {
        v70.Transfer.TransferSize = v71;
      }
      else
      {
        v70.Fill.FillPattern = a13;
        v70.MapApertureSegment.OffsetInPages = v71;
      }
      SegmentId = v19;
      v70.Transfer.Destination.SegmentId = a8;
      v70.ReadPhysical.SegmentId = v19;
      if ( v72 )
      {
        v70.Transfer.Source.SegmentAddress.QuadPart = (LONGLONG)v72;
        v70.UpdatePageTable.pPageTableEntries64KB = v73;
      }
      else
      {
        v40 = *((_QWORD *)this + 5023);
        v70.Transfer.Source.SegmentAddress.QuadPart = (LONGLONG)v78;
        pPageTableEntries64KB = (DXGK_PTE *)v78;
        if ( **(char **)(1560LL * a12 + v40 + 440) >= 0 )
          pPageTableEntries64KB = v70.UpdatePageTable.pPageTableEntries64KB;
        v70.UpdatePageTable.pPageTableEntries64KB = pPageTableEntries64KB;
        v38 = *(_DWORD *)&a17 | 1;
        v70.Transfer.Destination.SegmentAddress.HighPart = *(_DWORD *)&a17 | 1;
      }
      v70.Reserved.Reserved[20] = a15;
      v70.UpdatePageTable.FirstPteVirtualAddress = v27;
      if ( !v19 )
      {
        if ( v29 == 16 )
        {
          if ( (*(_BYTE *)&a17 & 8) != 0 )
            goto LABEL_86;
        }
        else if ( v29 == 1 && (*(_BYTE *)&a17 & 8) == 0 )
        {
LABEL_86:
          v38 |= 1u;
          v70.Transfer.Destination.SegmentAddress.HighPart = v38;
        }
      }
      v70.TransferVirtual.DestinationPageTable = v74;
      if ( v75 )
      {
        v53 = *((_QWORD *)v75 + 5);
        if ( v53 )
          v54 = *(_QWORD *)(v53 + 16);
        else
          v54 = *((_QWORD *)v75 + 6);
        v70.Fill.FillSize = v54;
        v70.UpdatePageTable.AllocationOffsetInBytes = a7;
      }
      v42 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v76 + 4) + 48LL) + 8LL
                                                                 * *(unsigned int *)(*((_QWORD *)this + 3) + 208LL));
      if ( v42 )
        v43 = *(void **)(v42 + 16);
      else
        v43 = 0LL;
      v18 = *((_QWORD *)this + 5115) == 0LL;
      v70.UpdatePageTable.hProcess = v43;
      if ( !v18 )
      {
        VIDMM_GLOBAL::RecordVaPagingHistoryUpdatePte(this, v76, &v70.UpdatePageTable, a5, v75, v21);
        LOBYTE(v38) = v70.Reserved.Reserved[13];
        NumPageTableEntries = v70.UpdatePageTable.NumPageTableEntries;
        SegmentId = v70.ReadPhysical.SegmentId;
      }
      if ( *((_QWORD *)this + 5119) && !SegmentId && (v38 & 1) == 0 )
      {
        v56 = 0x10000;
        if ( (v38 & 8) == 0 )
          v56 = 4096;
        v57 = 0;
        if ( NumPageTableEntries )
        {
          do
          {
            v58 = *(_QWORD *)(v70.Transfer.Source.SegmentAddress.QuadPart + 16LL * v57);
            if ( (v58 & 1) != 0 )
            {
              VIDMM_GLOBAL::RecordPageMappingHistory(
                this,
                (v58 >> 5) & 0x1F,
                *(_QWORD *)(v70.Transfer.Source.SegmentAddress.QuadPart + 16LL * v57 + 8),
                1LL,
                1,
                v70.UpdatePageTable.FirstPteVirtualAddress + v57 * v56,
                *(_QWORD *)v67);
              NumPageTableEntries = v70.UpdatePageTable.NumPageTableEntries;
            }
            ++v57;
          }
          while ( v57 < NumPageTableEntries );
          v27 = v77;
        }
      }
      v44 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v70);
      v46 = -1LL;
      TransferSize = (unsigned int)(LODWORD(v70.pDmaBuffer) - *((_DWORD *)this + 2 * a12 + 670));
      v47 = LODWORD(v70.pDmaBufferPrivateData) - *((_DWORD *)this + 2 * a12 + 798);
      v48 = v44;
      if ( LODWORD(v70.pDmaBuffer) != *((_DWORD *)this + 2 * a12 + 670) || v47 )
      {
        if ( !*((_DWORD *)this + a12 + 1171) )
        {
          *((_DWORD *)this + a12 + 1171) = 1;
          ++*((_QWORD *)this + a12 + 618);
        }
        v49 = *((_BYTE *)this + 40873);
        v46 = *((_QWORD *)this + a12 + 618);
        if ( (v49 & 2) != 0 )
          *((_BYTE *)this + 40873) = v49 & 0xFD;
      }
      *((_DWORD *)this + a12 + 414) += TransferSize;
      if ( *((_DWORD *)this + a12 + 414) > *((_DWORD *)this + a12 + 29) )
      {
        v59 = (_QWORD *)WdLogNewEntry5_WdCriticalError(TransferSize, v45);
        v59[3] = 270LL;
        v59[4] = 18LL;
        v59[5] = 0LL;
        v59[6] = 0LL;
        v59[7] = 0LL;
        WdLogEvent5_WdCriticalError(v59);
      }
      *((_DWORD *)this + a12 + 542) += v47;
      if ( *((_DWORD *)this + a12 + 542) > *((_DWORD *)this + a12 + 93) )
      {
        v60 = (_QWORD *)WdLogNewEntry5_WdCriticalError(TransferSize, v45);
        v60[3] = 270LL;
        v60[4] = 19LL;
        v60[5] = 0LL;
        v60[6] = 0LL;
        v60[7] = 0LL;
        WdLogEvent5_WdCriticalError(v60);
      }
      if ( bTracingEnabled )
      {
        v50 = (const GUID *)*((_QWORD *)this + a12 + 143);
        v51 = *((_QWORD *)this + 3);
        v52 = (_DWORD)v48 == -1071775743;
        if ( v70.Operation == DXGK_OPERATION_UPDATE_PAGE_TABLE )
        {
          if ( v70.Reserved.Reserved[20] < 2 )
          {
            TransferSize = v70.Transfer.TransferSize;
          }
          else if ( v70.Reserved.Reserved[20] == 2 )
          {
            TransferSize = v70.MapApertureSegment.OffsetInPages;
          }
          else
          {
            TransferSize = 0LL;
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          {
            *(_QWORD *)v67 = 0LL;
            *(_DWORD *)v66 = v48 == -1071775743;
            McTemplateK0pptpqxqqppqqxxpqx(TransferSize, v52, v50, v51, v50, *(_QWORD *)v66);
          }
        }
        else if ( v70.Operation == DXGK_OPERATION_FLUSH_TLB )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          {
            *(_QWORD *)v67 = 0LL;
            *(_DWORD *)v66 = v48 == -1071775743;
            McTemplateK0pptpqxpxx(TransferSize, v52, v50, v51, v50, *(_QWORD *)v66);
          }
        }
        else
        {
          switch ( v70.Operation )
          {
            case DXGK_OPERATION_TRANSFER:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v67 = 0LL;
                *(_DWORD *)v66 = v48 == -1071775743;
                McTemplateK0pptpqxqxqxq(TransferSize, v52, v50, v51, v50, *(_QWORD *)v66);
              }
              break;
            case DXGK_OPERATION_FILL:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v67 = 0LL;
                *(_DWORD *)v66 = v48 == -1071775743;
                McTemplateK0pptpxqqx(TransferSize, v52, v50, v51, v50, *(_QWORD *)v66);
              }
              break;
            case DXGK_OPERATION_DISCARD_CONTENT:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v67 = 0LL;
                *(_DWORD *)v66 = v48 == -1071775743;
                McTemplateK0pptpqqx(TransferSize, v52, v50, v51, v50, *(_QWORD *)v66);
              }
              break;
            case DXGK_OPERATION_READ_PHYSICAL:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_DWORD *)v67 = v70.ReadPhysical.SegmentId;
                *(_DWORD *)v66 = v48 == -1071775743;
                McTemplateK0pptqx(TransferSize, &EventPagingOpReadPhysical, v50, v51, v50, *(_QWORD *)v66);
              }
              break;
            case DXGK_OPERATION_WRITE_PHYSICAL:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_DWORD *)v67 = v70.ReadPhysical.SegmentId;
                *(_DWORD *)v66 = v48 == -1071775743;
                McTemplateK0pptqx(TransferSize, &EventPagingOpWritePhysical, v50, v51, v50, *(_QWORD *)v66);
              }
              break;
            case DXGK_OPERATION_MAP_APERTURE_SEGMENT:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v67 = 0LL;
                *(_DWORD *)v66 = v48 == -1071775743;
                McTemplateK0pptpqxxqt(TransferSize, v52, v50, v51, v50, *(_QWORD *)v66);
              }
              break;
            case DXGK_OPERATION_UNMAP_APERTURE_SEGMENT:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v67 = 0LL;
                *(_DWORD *)v66 = v48 == -1071775743;
                McTemplateK0pptpqxxt(TransferSize, v52, v50, v51, v50, *(_QWORD *)v66);
              }
              break;
            case DXGK_OPERATION_SPECIAL_LOCK_TRANSFER:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v67 = 0LL;
                *(_DWORD *)v66 = v48 == -1071775743;
                McTemplateK0pptpqxqxqxqqq(TransferSize, v52, v50, v51, v50, *(_QWORD *)v66);
              }
              break;
            case DXGK_OPERATION_VIRTUAL_TRANSFER:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v67 = 0LL;
                *(_DWORD *)v66 = v48 == -1071775743;
                McTemplateK0pptpxxqqxxxqqxxx(TransferSize, v52, v50, v51, v50, *(_QWORD *)v66);
              }
              break;
            case DXGK_OPERATION_VIRTUAL_FILL:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v67 = 0LL;
                *(_DWORD *)v66 = v48 == -1071775743;
                McTemplateK0pptpxxqqxx(TransferSize, v52, v50, v51, v50, *(_QWORD *)v66);
              }
              break;
            case DXGK_OPERATION_INIT_CONTEXT_RESOURCE:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v67 = 0LL;
                *(_DWORD *)v66 = v48 == -1071775743;
                McTemplateK0pptpqxpx(TransferSize, v52, v50, v51, v50, *(_QWORD *)v66);
              }
              break;
            case DXGK_OPERATION_UPDATE_CONTEXT_ALLOCATION:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v67 = 0LL;
                *(_DWORD *)v66 = v48 == -1071775743;
                McTemplateK0pptpxxpq(TransferSize, v52, v50, v51, v50, *(_QWORD *)v66);
              }
              break;
            case DXGK_OPERATION_NOTIFY_RESIDENCY:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v67 = 0LL;
                *(_DWORD *)v66 = v48 == -1071775743;
                McTemplateK0pptpqxq(TransferSize, v52, v50, v51, v50, *(_QWORD *)v66);
              }
              break;
            case DXGK_OPERATION_SIGNAL_MONITORED_FENCE:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v67 = 0LL;
                *(_DWORD *)v66 = v48 == -1071775743;
                McTemplateK0pptpxx(TransferSize, v52, v50, v51, v50, *(_QWORD *)v66);
              }
              break;
            default:
              break;
          }
        }
      }
      v22 = (_OWORD *)*((_QWORD *)this + 983);
      if ( v22 )
      {
        *((_QWORD *)v22 + 45 * *((unsigned int *)this + 1968) + 1) = 0LL;
        *(_QWORD *)(360LL * *((unsigned int *)this + 1968) + *((_QWORD *)this + 983) + 16) = 0LL;
        *(_DWORD *)(360LL * *((unsigned int *)this + 1968) + *((_QWORD *)this + 983)) = a12;
        v61 = &v70;
        v22 = (_OWORD *)(360LL * *((unsigned int *)this + 1968) + *((_QWORD *)this + 983) + 24LL);
        v62 = 2LL;
        do
        {
          v22 += 8;
          v63 = *(_OWORD *)&v61->pDmaBuffer;
          v61 = (struct _DXGKARG_BUILDPAGINGBUFFER *)((char *)v61 + 128);
          *(v22 - 8) = v63;
          *(v22 - 7) = *(_OWORD *)&v61[-1].Reserved.Reserved[42];
          *(v22 - 6) = *(_OWORD *)&v61[-1].Reserved.Reserved[46];
          *(v22 - 5) = *(_OWORD *)&v61[-1].Reserved.Reserved[50];
          *(v22 - 4) = *(_OWORD *)&v61[-1].Reserved.Reserved[54];
          *(v22 - 3) = *(_OWORD *)&v61[-1].Reserved.Reserved[58];
          *(v22 - 2) = *(_OWORD *)&v61[-1].Reserved.Reserved[62];
          *(v22 - 1) = *(_OWORD *)&v61[-1].DmaBufferGpuVirtualAddress;
          --v62;
        }
        while ( v62 );
        *v22 = *(_OWORD *)&v61->pDmaBuffer;
        v22[1] = *(_OWORD *)&v61->pDmaBufferPrivateData;
        v22[2] = *(_OWORD *)&v61->MultipassOffset;
        v22[3] = *(_OWORD *)&v61->SpecialLockTransfer.TransferOffset;
        *(_DWORD *)(360LL * *((unsigned int *)this + 1968) + *((_QWORD *)this + 983) + 344) = v48;
        TransferSize = 360LL * *((unsigned int *)this + 1968);
        *(_QWORD *)(TransferSize + *((_QWORD *)this + 983) + 352) = v46;
        if ( ++*((_DWORD *)this + 1968) >= *((_DWORD *)this + 1964) )
        {
          ++*((_DWORD *)this + 1969);
          *((_DWORD *)this + 1968) = 0;
        }
      }
      if ( (int)v48 < 0 )
      {
        if ( (_DWORD)v48 == -1071775743 )
        {
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace(TransferSize);
          v21 = a12;
          VIDMM_GLOBAL::FlushPagingBufferInternal(this, a12, 1u, 0LL, 0LL, 1, 0);
          v19 = a2;
          goto LABEL_8;
        }
        v64 = *((_QWORD *)this + 3);
        v65 = (_QWORD *)WdLogNewEntry5_WdCriticalError(TransferSize, v22);
        v65[5] = &v70;
        v65[3] = 270LL;
        v65[4] = 11LL;
        v65[6] = v48;
        v65[7] = v64;
        WdLogEvent5_WdCriticalError(v65);
      }
      v19 = a2;
      v18 = (_DWORD)v48 == -1071775743;
      v29 = a18;
      v21 = a12;
      v28 = a9;
    }
    while ( v18 );
  }
}
