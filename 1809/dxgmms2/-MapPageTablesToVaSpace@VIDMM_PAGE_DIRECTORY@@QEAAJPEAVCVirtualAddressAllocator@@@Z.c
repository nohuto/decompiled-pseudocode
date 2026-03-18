/*
 * XREFs of ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00B560C
 * Callers:
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C008CB40 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00B560C (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 * Callees:
 *     ?GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z @ 0x1C000FDD0 (-GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z.c)
 *     ?GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ @ 0x1C0027C98 (-GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ.c)
 *     ?GetSegmentOffsetInPages@VIDMM_PAGE_TABLE_BASE@@QEBA_KXZ @ 0x1C0027CD0 (-GetSegmentOffsetInPages@VIDMM_PAGE_TABLE_BASE@@QEBA_KXZ.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C0059008 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z @ 0x1C006E46C (-GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00735B0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00B560C (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::MapPageTablesToVaSpace(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2)
{
  unsigned int NumPde; // eax
  unsigned int v5; // ebp
  int v6; // r12d
  __int64 i; // r15
  __int64 v8; // rax
  __int64 v9; // rsi
  unsigned int v10; // r9d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  int v14; // ebx
  __int64 SegmentOffsetInPages; // rax
  struct _MDL *v16; // r10
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // rax
  __int64 v22; // rax
  struct VIDMM_ALLOC *v23; // [rsp+A0h] [rbp+8h] BYREF

  NumPde = CVirtualAddressAllocator::GetNumPde(a2, this);
  v5 = 2 * NumPde;
  if ( (*(_DWORD *)this & 0x1020) != 0x1020 )
    v5 = NumPde;
  v6 = 0;
  if ( !v5 )
    return 0LL;
  for ( i = 0LL; ; i += 8LL )
  {
    v8 = *((_QWORD *)this + 4);
    v9 = *(_QWORD *)(i + v8);
    if ( !v9 )
      goto LABEL_12;
    if ( (*(_DWORD *)this & 0x20) == 0 )
    {
      VIDMM_PAGE_DIRECTORY::MapPageTablesToVaSpace(*(VIDMM_PAGE_DIRECTORY **)(i + v8), a2);
      goto LABEL_12;
    }
    if ( !VIDMM_ALLOC::GetGpuVirtualAddress(*(VIDMM_ALLOC **)(v9 + 16), (*(_DWORD *)this >> 7) & 0x1F)
      && !CVirtualAddressAllocator::MapVirtualAddressRange(
            (struct VIDMM_VAD **)a2,
            v9,
            0LL,
            5u,
            *(unsigned int *)(*(_QWORD *)(v9 + 8) + 16LL),
            0LL,
            *(_QWORD *)(*((_QWORD *)a2 + 10) + 40880LL),
            *(_QWORD *)(*((_QWORD *)a2 + 10) + 40888LL),
            0x1000u,
            (_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE)1LL,
            0LL,
            v10,
            0LL,
            0) )
    {
      break;
    }
    v13 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 128LL);
    v14 = *(_DWORD *)(32LL * ((*(_DWORD *)this >> 7) & 0x1F) + *((_QWORD *)a2 + 14) + 28);
    VIDMM_PAGE_TABLE_BASE::GetSegmentAddressMdl((VIDMM_PAGE_TABLE_BASE *)v9);
    SegmentOffsetInPages = VIDMM_PAGE_TABLE_BASE::GetSegmentOffsetInPages((VIDMM_PAGE_TABLE_BASE *)v9);
    v19 = CVirtualAddressAllocator::CommitVirtualAddressRange(
            a2,
            (struct VIDMM_MAPPED_VA_RANGE *)(v13 - 24),
            (*(_DWORD *)this >> 7) & 0x1F,
            v14,
            SegmentOffsetInPages << 12,
            v16,
            0,
            &v23);
    if ( v19 < 0 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v18, v17);
      *(_QWORD *)(v20 + 24) = 2997LL;
      WdLogEvent5_WdAssertion(v20);
      return (unsigned int)v19;
    }
LABEL_12:
    if ( ++v6 >= v5 )
      return 0LL;
  }
  v22 = WdLogNewEntry5_WdAssertion(v12, v11);
  *(_QWORD *)(v22 + 24) = 2972LL;
  WdLogEvent5_WdAssertion(v22);
  return 3221225473LL;
}
