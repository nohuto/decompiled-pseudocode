/*
 * XREFs of ?CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00789C4
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0075870 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 * Callees:
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ @ 0x1C0010BDC (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C00728D0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::CommitPageTable(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        struct VIDMM_ALLOC **a3)
{
  unsigned int v4; // ebx
  __int64 v5; // r8
  struct VIDMM_ALLOC **v6; // r9
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  char v11; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  *a3 = 0LL;
  if ( !VIDMM_PAGE_TABLE_BASE::IsResident(this) )
  {
    v7 = *(_QWORD *)(v5 + 80);
    *(_BYTE *)(*((_QWORD *)this + 1) + 97LL) = 0;
    v8 = VIDMM_GLOBAL::PageInOneAllocation(
           v7,
           *((__int64 ***)this + 2),
           (*(_DWORD *)(v5 + 136) & 4) == 0 ? 7 : 0,
           0,
           &v11,
           v6);
    v4 = v8;
    if ( v11 )
    {
      return (unsigned int)-1073741267;
    }
    else if ( v8 >= 0 )
    {
      v9 = *((_QWORD *)this + 1);
      if ( (*(_DWORD *)(*(_QWORD *)(v9 + 136) + 80LL) & 0x1000) != 0 )
        *(_QWORD *)(*((_QWORD *)this + 1) + 144LL) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v9 + 104) + 8LL) + 24LL)
                                                                                               + 104LL))(
                                                       *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 104) + 8LL) + 24LL),
                                                       *(_QWORD *)(*(_QWORD *)(v9 + 104) + 24LL));
    }
  }
  return v4;
}
