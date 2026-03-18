/*
 * XREFs of ?UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@_K1@Z @ 0x1C00700CC
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006DFD0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C006D724 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAEPEAVVIDMM_GLOBAL@@II@Z @ 0x1C00701E0 (-InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAEPEAVVIDMM_GLOBAL@@II@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::UncommitVirtualAddressRange(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        unsigned __int64 a3,
        __int64 a4)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // esi
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int updated; // ebx
  __int64 v17; // rax

  v4 = a3;
  if ( (a3 & 0xFFF) != 0 )
    return 3221225485LL;
  v7 = (a3 >> 12) + a4;
  if ( v7 <= a3 >> 12 )
    return 3221225485LL;
  v8 = *((_QWORD *)this + 1);
  if ( !v8 || !*(_QWORD *)(v8 + 136) )
    return 0LL;
  v9 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 10) + 40184LL) + 1560LL * ((*(_DWORD *)this >> 7) & 0x1F) + 72);
  v10 = v9 & (v7 - 1);
  v11 = (a3 >> 12) & v9;
  if ( (*(_DWORD *)this & 0x40) != 0 )
  {
    v11 >>= 4;
    v10 >>= 4;
    v4 = a3 & 0xFFFFFFFFFFFF0000uLL;
  }
  v12 = v10 - v11;
  VIDMM_PAGE_TABLE::InvalidatePageTable(this, *((struct VIDMM_GLOBAL **)a2 + 10), v11, v12 + 1);
  if ( !*((_DWORD *)this + 1) && (*((_DWORD *)a2 + 34) & 4) == 0 )
    return 0LL;
  updated = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
              this,
              a2,
              v11,
              v12 + 1,
              v4 >> 12,
              (struct _DXGK_UPDATEPAGETABLEFLAGS)((*(_DWORD *)this >> 3) & 8));
  if ( updated >= 0 )
    return 0LL;
  v17 = WdLogNewEntry5_WdAssertion(v14, v13);
  *(_QWORD *)(v17 + 24) = 6284LL;
  WdLogEvent5_WdAssertion(v17);
  return (unsigned int)updated;
}
