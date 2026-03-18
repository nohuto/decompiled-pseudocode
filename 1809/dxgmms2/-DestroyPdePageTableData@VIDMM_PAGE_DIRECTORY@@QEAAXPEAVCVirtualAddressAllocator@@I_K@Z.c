/*
 * XREFs of ?DestroyPdePageTableData@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I_K@Z @ 0x1C00B483C
 * Callers:
 *     ?HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_GPUMMUCAPS@@PEBUCOMMIT_VA_STATE@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@III_KPEAE@Z @ 0x1C00B53DC (-HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_.c)
 * Callees:
 *     ExFreeToPagedLookasideList @ 0x1C0027D3C (ExFreeToPagedLookasideList.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C006A5EC (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0079A18 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 */

void __fastcall VIDMM_PAGE_DIRECTORY::DestroyPdePageTableData(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        unsigned int a3,
        unsigned __int64 a4)
{
  __int64 v4; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // r9
  VIDMM_PAGE_TABLE *v11; // rcx

  v4 = *((_QWORD *)this + 3);
  v7 = 2LL * a3;
  v8 = a3;
  v9 = *(_QWORD *)(v4 + 16LL * a3);
  if ( (v9 & 2) == 0 )
  {
    v10 = *((_QWORD *)this + 4);
    if ( (v9 & 0x400) != 0 )
    {
      ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)(*((_QWORD *)a2 + 10) + 40192LL), *(PVOID *)(v10 + 8LL * a3));
    }
    else
    {
      v11 = *(VIDMM_PAGE_TABLE **)(v10 + 8LL * a3);
      if ( (*(_DWORD *)this & 0x20) != 0 )
        VIDMM_PAGE_TABLE::DestroyPageTable(v11, a2);
      else
        VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(v11, a2, a4, v10);
    }
    *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v8) = 0LL;
    v4 = *((_QWORD *)this + 3);
  }
  *(_QWORD *)(v4 + 8 * v7) = 0LL;
  *(_QWORD *)(v4 + 8 * v7 + 8) = 0LL;
  --*((_DWORD *)this + 1);
}
