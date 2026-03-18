/*
 * XREFs of ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C00757A0
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0074100 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0075870 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0077E00 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C0079B00 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C00B7374 (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_.c)
 * Callees:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0010914 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     ?GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ @ 0x1C0027C98 (-GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ.c)
 *     ?GetSegmentOffsetInPages@VIDMM_PAGE_TABLE_BASE@@QEBA_KXZ @ 0x1C0027CD0 (-GetSegmentOffsetInPages@VIDMM_PAGE_TABLE_BASE@@QEBA_KXZ.c)
 *     ?GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z @ 0x1C0059340 (-GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C006BA84 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z @ 0x1C006E46C (-GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C007132C (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0080114 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
        VIDMM_PAGE_TABLE_BASE *this,
        struct CVirtualAddressAllocator *a2,
        unsigned int *a3,
        unsigned __int64 *a4,
        void **a5)
{
  _BYTE *v5; // rbp
  void *v6; // rsi
  __int64 v8; // r9
  __int64 v11; // rcx
  unsigned int v12; // r8d
  int v13; // eax
  PVOID CpuVisibleAddress; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // r13d
  int v22; // r12d
  unsigned __int64 *v23; // rbx
  __int64 SegmentOffsetInPages; // rax
  struct _MDL *v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  struct VIDMM_MAPPED_VA_RANGE *v28; // rbx
  _QWORD *v29; // rax
  __int64 *v30; // rcx
  __int64 v31; // rax
  __int64 **v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rax
  void *v35; // [rsp+90h] [rbp+8h] BYREF
  CVirtualAddressAllocator *v36; // [rsp+98h] [rbp+10h]

  v5 = (_BYTE *)*((_QWORD *)a2 + 10);
  v6 = 0LL;
  v35 = 0LL;
  v8 = *((_QWORD *)this + 1);
  v11 = *(_QWORD *)(v8 + 136);
  if ( (v5[40872] & 0x10) == 0 )
  {
    v12 = *(_DWORD *)this;
    v13 = (int)(*(_DWORD *)this << 16) >> 29;
    if ( v13 )
    {
      if ( v13 == 1 )
      {
        *a3 = 0;
        *a4 = 0LL;
        v19 = (v12 >> 7) & 0x1F;
        v36 = *(CVirtualAddressAllocator **)&v5[8 * v19 + 40352];
        if ( v36 == a2 )
        {
          *a3 = 0;
          *a4 = VIDMM_ALLOC::GetGpuVirtualAddress(*((VIDMM_ALLOC **)this + 2), (v12 >> 7) & 0x1F);
        }
        else
        {
          v20 = *((_QWORD *)a2 + 14) + 32 * v19;
          if ( (v12 & 7) != 0 )
            v21 = *(_DWORD *)(v20 + 24);
          else
            v21 = *(_DWORD *)(v20 + 28);
          v22 = 0;
          while ( 1 )
          {
            v23 = (unsigned __int64 *)*((_QWORD *)this + 1);
            VIDMM_PAGE_TABLE_BASE::GetSegmentAddressMdl(this);
            SegmentOffsetInPages = VIDMM_PAGE_TABLE_BASE::GetSegmentOffsetInPages(this);
            v28 = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                    (VIDMM_PAGING_PROCESS *)(v5 + 40320),
                    (*(_DWORD *)this >> 7) & 0x1F,
                    v23[2],
                    (struct _VIDMM_GLOBAL_ALLOC *)v23,
                    0LL,
                    v21,
                    SegmentOffsetInPages << 12,
                    v25,
                    (struct VIDMM_ALLOC *)&v35,
                    0LL);
            if ( v28 )
              break;
            if ( !v22 )
            {
              VIDMM_GLOBAL::WaitForAllPagingEnginesIdle((VIDMM_GLOBAL *)v5, (*(_DWORD *)this >> 7) & 0x1F);
              VIDMM_GLOBAL::FlushScratchGpuVaRanges((VIDMM_GLOBAL *)v5, (*(_DWORD *)this >> 7) & 0x1F);
            }
            if ( (unsigned int)++v22 >= 2 )
            {
              v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v27, v26);
              v29[3] = 270LL;
              v29[4] = 48LL;
              v29[5] = this;
              v29[6] = 1LL;
              v29[7] = 0LL;
              WdLogEvent5_WdCriticalError(v29);
              break;
            }
          }
          CVirtualAddressAllocator::FlushGpuVaTlb(
            v36,
            (*(_DWORD *)this >> 7) & 0x1F,
            *((_QWORD *)v28 + 12),
            *((_QWORD *)v28 + 13));
          v30 = (__int64 *)((char *)v28 + 24);
          v31 = *((_QWORD *)this + 2) + 128LL;
          v32 = *(__int64 ***)(*((_QWORD *)this + 2) + 136LL);
          if ( *v32 != (__int64 *)v31 )
            __fastfail(3u);
          *v30 = v31;
          *((_QWORD *)v28 + 4) = v32;
          *v32 = v30;
          *(_QWORD *)(v31 + 8) = v30;
          *a4 = *((_QWORD *)v28 + 12);
          *a3 = v21;
        }
      }
      else if ( (*(_DWORD *)(v11 + 80) & 0x1000) != 0 )
      {
        v33 = *(_QWORD *)(v8 + 104);
        *a3 = 0;
        *a4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v33 + 8) + 24LL) + 104LL))(
                *(_QWORD *)(*(_QWORD *)(v33 + 8) + 24LL),
                *(_QWORD *)(v33 + 24));
      }
      else
      {
        *a3 = *(_DWORD *)(v11 + 16) + 1;
        *a4 = *(_QWORD *)(***((_QWORD ***)this + 2) + 144LL);
      }
      goto LABEL_6;
    }
  }
  CpuVisibleAddress = VIDMM_PAGE_TABLE_BASE::GetCpuVisibleAddress(this, (struct VIDMM_GLOBAL *)v5, (PMDL *)&v35);
  *a4 = (unsigned __int64)CpuVisibleAddress;
  *a3 = 0;
  if ( CpuVisibleAddress )
  {
    v6 = v35;
LABEL_6:
    *a5 = v6;
    return 0LL;
  }
  v34 = WdLogNewEntry5_WdError(v17, v16, v18);
  *(_QWORD *)(v34 + 24) = this;
  WdLogEvent5_WdError(v34);
  return 3221225495LL;
}
