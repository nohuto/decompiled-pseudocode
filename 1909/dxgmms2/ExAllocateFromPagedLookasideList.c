/*
 * XREFs of ExAllocateFromPagedLookasideList @ 0x1C0027800
 * Callers:
 *     ?AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ @ 0x1C007F1B0 (-AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ.c)
 *     ?HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_GPUMMUCAPS@@PEBUCOMMIT_VA_STATE@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@III_KPEAE@Z @ 0x1C0084F5C (-HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_.c)
 *     ?Allocate@VIDMM_PROCESS_HEAP@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C00C53A0 (-Allocate@VIDMM_PROCESS_HEAP@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z.c)
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C00C5F90 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 */

PVOID __stdcall ExAllocateFromPagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside)
{
  PVOID result; // rax

  ++Lookaside->L.TotalAllocates;
  result = ExpInterlockedPopEntrySList(&Lookaside->L.ListHead);
  if ( !result )
  {
    ++Lookaside->L.AllocateMisses;
    return (PVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))Lookaside->L.AllocateEx)(
                    (unsigned int)Lookaside->L.Type,
                    Lookaside->L.Size,
                    Lookaside->L.Tag);
  }
  return result;
}
