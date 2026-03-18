/*
 * XREFs of ?DestroyPdePageTableData@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I_K@Z @ 0x1C0085038
 * Callers:
 *     ?HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_GPUMMUCAPS@@PEBUCOMMIT_VA_STATE@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@III_KPEAE@Z @ 0x1C0084F5C (-HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_.c)
 * Callees:
 *     ExFreeToPagedLookasideList @ 0x1C0027840 (ExFreeToPagedLookasideList.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C005C324 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C006002C (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 */

void __fastcall VIDMM_PAGE_DIRECTORY::DestroyPdePageTableData(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        unsigned int a3,
        unsigned __int64 a4)
{
  __int64 v4; // rax
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  struct VIDMM_ALLOC **v10; // rcx

  v4 = *((_QWORD *)this + 3);
  v6 = 2LL * a3;
  v7 = a3;
  v8 = *(_QWORD *)(v4 + 16LL * a3);
  if ( (v8 & 2) == 0 )
  {
    v9 = *((_QWORD *)this + 4);
    if ( (v8 & 0x400) != 0 )
    {
      ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)(*((_QWORD *)a2 + 10) + 40192LL), *(PVOID *)(v9 + 8LL * a3));
    }
    else
    {
      v10 = *(struct VIDMM_ALLOC ***)(v9 + 8LL * a3);
      if ( (*(_DWORD *)this & 0x20) != 0 )
        VIDMM_PAGE_TABLE::DestroyPageTable(v10, a2, a4);
      else
        VIDMM_PAGE_DIRECTORY::DestroyPageDirectory((VIDMM_PAGE_DIRECTORY *)v10, a2, a4, a4);
    }
    *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v7) = 0LL;
    v4 = *((_QWORD *)this + 3);
  }
  *(_QWORD *)(v4 + 8 * v6) = 0LL;
  *(_QWORD *)(v4 + 8 * v6 + 8) = 0LL;
  --*((_DWORD *)this + 1);
}
