/*
 * XREFs of ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B7C28
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006DFD0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018050 (__security_check_cookie.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C0060C7C (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006DFD0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006FB10 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z @ 0x1C0081AC0 (-SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::ExpandZeroPte(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        const struct COMMIT_VA_STATE *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned __int64 a9,
        struct VIDMM_ALLOC **a10)
{
  __int64 v10; // r12
  __int64 v14; // r14
  struct VIDMM_PAGE_TABLE *PageTable; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  char v20; // al
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // r14d
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // r10
  int v27; // eax
  unsigned __int64 v28; // [rsp+20h] [rbp-A1h]
  unsigned __int64 v29; // [rsp+20h] [rbp-A1h]
  struct VIDMM_ALLOC *v30; // [rsp+28h] [rbp-99h]
  struct VIDMM_ALLOC *v31; // [rsp+28h] [rbp-99h]
  __int64 v32; // [rsp+50h] [rbp-71h]
  _QWORD v33[10]; // [rsp+60h] [rbp-61h] BYREF

  v10 = a5;
  v14 = *((_QWORD *)this + 4);
  v32 = a4;
  if ( (*(_BYTE *)(*((_QWORD *)this + 3) + 16LL * a4) & 2) != 0 )
    v10 = a4;
  if ( !*(_QWORD *)(v14 + 8 * v10) )
  {
    PageTable = CreatePageTable(a2, (*(_DWORD *)this >> 7) & 0x1F, (unsigned int)v10 > a4, 0);
    v17 = *((_QWORD *)this + 4);
    *(_QWORD *)(v17 + 8 * v10) = PageTable;
    v14 = *((_QWORD *)this + 4);
    if ( !*(_QWORD *)(v14 + 8 * v10) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v17, v16);
      *(_QWORD *)(v18 + 24) = 5126LL;
      WdLogEvent5_WdAssertion(v18);
      return 3221225495LL;
    }
  }
  memset(v33, 0, 0x48uLL);
  v20 = *((_BYTE *)a3 + 57);
  v33[0] |= 3uLL;
  BYTE1(v33[7]) = v20;
  LOBYTE(v33[7]) = *((_BYTE *)a3 + 56);
  v33[6] = 0xFFFFFFFE00000006uLL;
  if ( a8 >= a6 )
  {
LABEL_12:
    v25 = v32;
    goto LABEL_13;
  }
  v30 = (struct VIDMM_ALLOC *)(a6 - a8);
  v28 = a8 << 12;
  if ( (*(_DWORD *)this & 0x20) != 0 )
  {
    v23 = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
            *(VIDMM_PAGE_TABLE **)(v14 + 8 * v10),
            (struct VIDMM_GLOBAL **)a2,
            (const struct COMMIT_VA_STATE *)v33,
            0LL,
            v28,
            v30,
            0LL,
            0,
            a10);
    if ( v23 < 0 )
    {
LABEL_9:
      v24 = WdLogNewEntry5_WdWarning(v22, v21);
      WdLogEvent5_WdWarning(v24);
      return (unsigned int)v23;
    }
    goto LABEL_12;
  }
  v25 = v32;
  v23 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
          *(VIDMM_PAGE_DIRECTORY **)(v14 + 8 * v32),
          (VIDMM_GLOBAL **)a2,
          (const struct COMMIT_VA_STATE *)v33,
          0LL,
          v28,
          (unsigned __int64)v30,
          0LL,
          0,
          a10);
  if ( v23 < 0 )
    goto LABEL_9;
LABEL_13:
  if ( a7 < a9 )
  {
    v26 = *((_QWORD *)this + 4);
    v31 = (struct VIDMM_ALLOC *)(a9 - a7);
    v29 = a7 << 12;
    v27 = (*(_DWORD *)this & 0x20) != 0
        ? VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
            *(VIDMM_PAGE_TABLE **)(v26 + 8 * v10),
            (struct VIDMM_GLOBAL **)a2,
            (const struct COMMIT_VA_STATE *)v33,
            0LL,
            v29,
            v31,
            0LL,
            0,
            a10)
        : VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
            *(VIDMM_PAGE_DIRECTORY **)(v26 + 8 * v25),
            (VIDMM_GLOBAL **)a2,
            (const struct COMMIT_VA_STATE *)v33,
            0LL,
            v29,
            (unsigned __int64)v31,
            0LL,
            0,
            a10);
    v23 = v27;
    if ( v27 < 0 )
      goto LABEL_9;
  }
  *(_QWORD *)(*((_QWORD *)this + 3) + 16LL * (unsigned int)v10) &= ~2uLL;
  VIDMM_PAGE_DIRECTORY::SetPageTableInPde(this, a2, v10);
  return 0LL;
}
