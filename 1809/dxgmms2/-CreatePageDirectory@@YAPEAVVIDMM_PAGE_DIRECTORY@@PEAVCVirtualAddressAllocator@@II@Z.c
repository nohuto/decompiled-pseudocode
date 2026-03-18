/*
 * XREFs of ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1C007E5B0
 * Callers:
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00735B0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0074100 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001AD8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C006A5EC (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?InitializePageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C007E64C (-InitializePageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ??0VIDMM_PAGE_DIRECTORY@@QEAA@III@Z @ 0x1C007E7D8 (--0VIDMM_PAGE_DIRECTORY@@QEAA@III@Z.c)
 */

struct VIDMM_PAGE_DIRECTORY *__fastcall CreatePageDirectory(
        struct CVirtualAddressAllocator *a1,
        unsigned int a2,
        unsigned int a3)
{
  __int64 v6; // rbx
  VIDMM_PAGE_DIRECTORY *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  VIDMM_PAGE_DIRECTORY *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int8 v16; // r9

  v6 = *(_QWORD *)(*((_QWORD *)a1 + 10) + 40184LL) + 1560LL * a2;
  v7 = (VIDMM_PAGE_DIRECTORY *)operator new[](0x28uLL, 0x36356956u, PagedPool);
  if ( v7 )
    v10 = VIDMM_PAGE_DIRECTORY::VIDMM_PAGE_DIRECTORY(v7, a2, *(_DWORD *)(v6 + 428), a3);
  else
    v10 = 0LL;
  if ( v10 )
  {
    if ( (int)VIDMM_PAGE_DIRECTORY::InitializePageDirectory(v10, a1) >= 0 )
      return v10;
    v15 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v15 + 24) = 4181LL;
    WdLogEvent5_WdAssertion(v15);
    VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(v10, a1, 0LL, v16);
  }
  else
  {
    v14 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v14 + 24) = 4175LL;
    WdLogEvent5_WdAssertion(v14);
  }
  return 0LL;
}
