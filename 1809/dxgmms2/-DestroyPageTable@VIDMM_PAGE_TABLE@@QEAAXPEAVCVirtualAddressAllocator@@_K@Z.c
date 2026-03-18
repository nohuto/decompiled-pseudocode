/*
 * XREFs of ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0079A18
 * Callers:
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C006A620 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0074100 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C00788FC (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z.c)
 *     ?DestroyPdePageTableData@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I_K@Z @ 0x1C00B483C (-DestroyPdePageTableData@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I_K@Z.c)
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B48D4 (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00015B0 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C005FE90 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C00621D0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C0079860 (-EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 */

void __fastcall VIDMM_PAGE_TABLE::DestroyPageTable(VIDMM_PAGE_TABLE *this, struct CVirtualAddressAllocator *a2)
{
  VIDMM_GLOBAL *v2; // rdi
  struct _VIDMM_GLOBAL_ALLOC *v5; // r8
  void *v6; // rcx
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-48h] BYREF

  v2 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 10);
  VIDMM_PAGE_TABLE::EvictPageTable((struct VIDMM_ALLOC **)this, a2);
  if ( *((_QWORD *)this + 2) )
  {
    KeStackAttachProcess(**((PRKPROCESS **)a2 + 11), &ApcState);
    VIDMM_GLOBAL::CloseOneAllocation(
      v2,
      *((struct _KEVENT **)this + 2),
      0LL,
      0,
      (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1,
      0LL);
    KeUnstackDetachProcess(&ApcState);
    *((_QWORD *)this + 2) = 0LL;
  }
  v5 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)this + 1);
  if ( v5 )
  {
    VIDMM_GLOBAL::DestroyOneAllocation((struct _KTHREAD **)v2, 0LL, v5, 0);
    *((_QWORD *)this + 1) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 3);
  if ( v6 )
  {
    operator delete(v6);
    *((_QWORD *)this + 3) = 0LL;
  }
  operator delete(this);
}
