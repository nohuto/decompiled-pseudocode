/*
 * XREFs of ?CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005FC30
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006DFD0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ @ 0x1C00017B4 (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C006C610 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::CommitPageDirectory(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        struct VIDMM_ALLOC **a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  char v11; // [rsp+60h] [rbp+18h] BYREF

  *a3 = 0LL;
  if ( VIDMM_PAGE_TABLE_BASE::IsResident(this) )
    return 0LL;
  v6 = *(_QWORD *)(v5 + 8);
  if ( !v6 )
    return 0LL;
  v7 = *((_QWORD *)a2 + 10);
  *(_BYTE *)(v6 + 97) = 0;
  result = VIDMM_GLOBAL::PageInOneAllocation(
             v7,
             *((_QWORD *)this + 2),
             (*((_DWORD *)a2 + 34) & 4) == 0 ? 7 : 0,
             0LL,
             &v11);
  if ( v11 )
    result = 3221226029LL;
  if ( (int)result >= 0 )
  {
    v9 = *((_QWORD *)this + 1);
    if ( (*(_DWORD *)(*(_QWORD *)(v9 + 136) + 80LL) & 0x1000) != 0 )
      *(_QWORD *)(*((_QWORD *)this + 1) + 144LL) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v9 + 104) + 8LL) + 24LL)
                                                                                             + 104LL))(
                                                     *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 104) + 8LL) + 24LL),
                                                     *(_QWORD *)(*(_QWORD *)(v9 + 104) + 24LL));
    v10 = *(unsigned int *)this;
    if ( (v10 & 0x10) != 0 )
      ++*(_QWORD *)(32 * ((v10 >> 7) & 0x1F) + *((_QWORD *)a2 + 14) + 8);
    return 0LL;
  }
  return result;
}
