/*
 * XREFs of ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B48D4
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0074100 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0001E40 (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ExFreeToPagedLookasideList @ 0x1C0027D3C (ExFreeToPagedLookasideList.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0075870 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C00788FC (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0079A18 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z @ 0x1C007E1D4 (-SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::ExpandLargePagePte(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        struct VIDMM_ALLOC **a3,
        char a4,
        unsigned __int64 a5,
        unsigned int a6,
        struct VIDMM_ALLOC **a7)
{
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r15
  char v13; // r13
  char v14; // r13
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  UINT64 v18; // rbx
  __int64 VidMmGlobalAllocFromOwner; // rax
  unsigned __int8 v20; // r9
  unsigned int v21; // r10d
  unsigned __int8 v22; // r11
  VIDMM_PAGE_TABLE *PageTable; // rax
  VIDMM_PAGE_TABLE *v24; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // ebx
  __int64 v29; // rax
  _QWORD v30[10]; // [rsp+50h] [rbp-78h] BYREF

  v10 = *(_QWORD *)(*((_QWORD *)this + 4) + 8LL * a6);
  memset(v30, 0, 0x48uLL);
  v11 = *(_QWORD *)v10;
  v12 = *((_QWORD *)this + 3);
  v13 = *(_DWORD *)this >> 6;
  LODWORD(v30[6]) = *(_DWORD *)(v10 + 8);
  v14 = v13 & 1;
  v15 = *(_QWORD *)(v12 + 16LL * a6);
  v30[5] = v11;
  v16 = v15 >> 5;
  v30[0] = v15 & 0xFFFFFFFFFFFFFBFFuLL;
  v17 = *(_QWORD *)(v10 + 16);
  v18 = 0LL;
  HIDWORD(v30[6]) = v16 & 0x1F;
  v30[2] = v17;
  BYTE1(v30[7]) = a4;
  LOBYTE(v30[7]) = v14;
  VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(v30[6], v11);
  if ( VidMmGlobalAllocFromOwner )
    v18 = (*(_QWORD *)(v12 + 16LL * a6 + 8) << 12) - *(_QWORD *)(VidMmGlobalAllocFromOwner + 144);
  if ( (v22 & v20) == 0 || a4 )
    v20 = 0;
  PageTable = CreatePageTable(a2, (v21 >> 7) & 0x1F, v14, v20);
  v24 = PageTable;
  if ( !PageTable )
    return 3221225495LL;
  v28 = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
          PageTable,
          (struct VIDMM_GLOBAL **)a2,
          (const struct COMMIT_VA_STATE *)v30,
          v18,
          a5,
          a3[5],
          *(_QWORD *)(*((_QWORD *)this + 3) + 16LL * a6 + 8) << 12,
          0,
          a7);
  if ( v28 >= 0 )
  {
    ExFreeToPagedLookasideList(
      (PPAGED_LOOKASIDE_LIST)(*((_QWORD *)a2 + 10) + 40192LL),
      *(PVOID *)(*((_QWORD *)this + 4) + 8LL * a6));
    *(_QWORD *)(*((_QWORD *)this + 4) + 8LL * a6) = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 4) + 8LL * a6) = v24;
    *(_QWORD *)(*((_QWORD *)this + 3) + 16LL * a6) &= ~0x400uLL;
    VIDMM_PAGE_DIRECTORY::SetPageTableInPde(this, a2, a6);
    return 0LL;
  }
  else
  {
    v29 = WdLogNewEntry5_WdWarning(v27, v26);
    WdLogEvent5_WdWarning(v29);
    VIDMM_PAGE_TABLE::DestroyPageTable(v24, a2);
    return (unsigned int)v28;
  }
}
