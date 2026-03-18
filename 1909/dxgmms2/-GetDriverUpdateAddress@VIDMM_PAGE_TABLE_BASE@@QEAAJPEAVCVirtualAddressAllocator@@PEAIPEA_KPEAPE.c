/*
 * XREFs of ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C006F980
 * Callers:
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C005FD00 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C006D724 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006DFD0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006FB10 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C00BA2A4 (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_.c)
 * Callees:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C00027A8 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     ?GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ @ 0x1C002779C (-GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ.c)
 *     ?GetSegmentOffsetInPages@VIDMM_PAGE_TABLE_BASE@@QEBA_KXZ @ 0x1C00277D4 (-GetSegmentOffsetInPages@VIDMM_PAGE_TABLE_BASE@@QEBA_KXZ.c)
 *     ?MustFlushTlbOnValidTransition@VIDMM_GLOBAL@@QEAA_NI@Z @ 0x1C005BFA4 (-MustFlushTlbOnValidTransition@VIDMM_GLOBAL@@QEAA_NI@Z.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C005BFD4 (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z @ 0x1C005C168 (-GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C005D000 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z @ 0x1C006FA58 (-GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0083BA4 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
        VIDMM_PAGE_TABLE_BASE *this,
        struct CVirtualAddressAllocator *a2,
        unsigned int *a3,
        unsigned __int64 *a4,
        void **a5)
{
  _BYTE *v5; // rbp
  void *v6; // rdi
  __int64 v8; // r9
  __int64 v11; // rcx
  unsigned int v12; // r8d
  int v13; // eax
  void *CpuVisibleAddress; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  char v20; // cl
  __int64 v21; // rax
  __int64 GpuVirtualAddress; // rax
  __int64 v23; // r8
  __int64 v24; // rax
  unsigned int v25; // r13d
  int v26; // r12d
  __int64 *v27; // rbx
  __int64 SegmentOffsetInPages; // rax
  struct _MDL *v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct VIDMM_MAPPED_VA_RANGE *v32; // rbx
  _QWORD *v33; // rax
  unsigned int v34; // edx
  __int64 *v35; // rcx
  __int64 v36; // rax
  __int64 **v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rax
  void *v40; // [rsp+90h] [rbp+8h] BYREF
  CVirtualAddressAllocator *v41; // [rsp+98h] [rbp+10h]

  v5 = (_BYTE *)*((_QWORD *)a2 + 10);
  v6 = 0LL;
  v40 = 0LL;
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
        v20 = *(_DWORD *)this;
        *a3 = 0;
        *a4 = 0LL;
        v21 = (v12 >> 7) & 0x1F;
        v41 = *(CVirtualAddressAllocator **)&v5[8 * v21 + 40352];
        if ( v41 == a2 )
        {
          GpuVirtualAddress = VIDMM_ALLOC::GetGpuVirtualAddress(*((VIDMM_ALLOC **)this + 2), (v12 >> 7) & 0x1F);
        }
        else
        {
          v23 = *((_QWORD *)a2 + 14);
          v24 = 32 * v21;
          if ( (v20 & 7) != 0 )
            v25 = *(_DWORD *)(v24 + v23 + 24);
          else
            v25 = *(_DWORD *)(v24 + v23 + 28);
          v26 = 0;
          while ( 1 )
          {
            v27 = (__int64 *)*((_QWORD *)this + 1);
            VIDMM_PAGE_TABLE_BASE::GetSegmentAddressMdl(this);
            SegmentOffsetInPages = VIDMM_PAGE_TABLE_BASE::GetSegmentOffsetInPages(this);
            v32 = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                    (VIDMM_PAGING_PROCESS *)(v5 + 40320),
                    (*(_DWORD *)this >> 7) & 0x1F,
                    v27[2],
                    (struct _VIDMM_GLOBAL_ALLOC *)v27,
                    0LL,
                    v25,
                    SegmentOffsetInPages << 12,
                    v29,
                    (struct VIDMM_ALLOC *)&v40,
                    0LL);
            if ( v32 )
              break;
            if ( !v26 )
            {
              VIDMM_GLOBAL::WaitForAllPagingEnginesIdle((VIDMM_GLOBAL *)v5, (*(_DWORD *)this >> 7) & 0x1F);
              VIDMM_GLOBAL::FlushScratchGpuVaRanges((VIDMM_GLOBAL *)v5, (*(_DWORD *)this >> 7) & 0x1F);
            }
            if ( (unsigned int)++v26 >= 2 )
            {
              v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v31, v30);
              v33[3] = 270LL;
              v33[4] = 48LL;
              v33[5] = this;
              v33[6] = 1LL;
              v33[7] = 0LL;
              WdLogEvent5_WdCriticalError(v33);
              break;
            }
          }
          if ( VIDMM_GLOBAL::MustFlushTlbOnValidTransition((VIDMM_GLOBAL *)v5, (*(_DWORD *)this >> 7) & 0x1F) )
            CVirtualAddressAllocator::FlushGpuVaTlb(v41, v34, *((_QWORD *)v32 + 12), *((_QWORD *)v32 + 13));
          v35 = (__int64 *)((char *)v32 + 24);
          v36 = *((_QWORD *)this + 2) + 128LL;
          v37 = *(__int64 ***)(*((_QWORD *)this + 2) + 136LL);
          if ( *v37 != (__int64 *)v36 )
            __fastfail(3u);
          *v35 = v36;
          *((_QWORD *)v32 + 4) = v37;
          *v37 = v35;
          *(_QWORD *)(v36 + 8) = v35;
          GpuVirtualAddress = *((_QWORD *)v32 + 12);
          *a3 = v25;
        }
      }
      else
      {
        if ( (*(_DWORD *)(v11 + 80) & 0x1000) == 0 )
        {
          *a3 = *(_DWORD *)(v11 + 16) + 1;
          *a4 = *(_QWORD *)(***((_QWORD ***)this + 2) + 144LL);
LABEL_6:
          *a5 = v6;
          return 0LL;
        }
        v38 = *(_QWORD *)(v8 + 104);
        *a3 = 0;
        GpuVirtualAddress = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v38 + 8) + 24LL)
                                                                      + 104LL))(
                              *(_QWORD *)(*(_QWORD *)(v38 + 8) + 24LL),
                              *(_QWORD *)(v38 + 24));
      }
      *a4 = GpuVirtualAddress;
      goto LABEL_6;
    }
  }
  CpuVisibleAddress = VIDMM_PAGE_TABLE_BASE::GetCpuVisibleAddress(this, (struct VIDMM_GLOBAL *)v5, &v40);
  *a4 = (unsigned __int64)CpuVisibleAddress;
  *a3 = 0;
  if ( CpuVisibleAddress )
  {
    v6 = v40;
    goto LABEL_6;
  }
  v39 = WdLogNewEntry5_WdError(v17, v16, v18, v19);
  *(_QWORD *)(v39 + 24) = this;
  WdLogEvent5_WdError(v39);
  return 3221225495LL;
}
