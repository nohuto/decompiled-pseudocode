/*
 * XREFs of ?InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAEPEAVVIDMM_GLOBAL@@II@Z @ 0x1C00701E0
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006FB10 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@_K1@Z @ 0x1C00700CC (-UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@_K1@Z.c)
 * Callees:
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C00AEAB0 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::InvalidatePageTable(
        VIDMM_PAGE_TABLE *this,
        struct VIDMM_GLOBAL *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v5; // rsi
  __int64 v7; // rdi
  unsigned __int8 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  __int64 v13; // r15
  __int64 v14; // r14
  __int64 v15; // r8
  unsigned __int64 v16; // rax
  __int64 v17; // [rsp+30h] [rbp-18h]

  v5 = a4;
  v7 = a3;
  if ( *((_QWORD *)a2 + 5119) && a3 < a3 + a4 )
  {
    v13 = a4;
    v14 = 16LL * a3;
    do
    {
      v15 = *((_QWORD *)this + 3);
      v16 = *(_QWORD *)(v15 + v14);
      if ( (v16 & 1) != 0 )
        VIDMM_GLOBAL::RecordPageMappingHistory(a2, (v16 >> 5) & 0x1F, *(_QWORD *)(v15 + v14 + 8), 1LL, 1, 0LL, v17);
      v14 += 16LL;
      --v13;
    }
    while ( v13 );
  }
  v8 = 0;
  if ( (unsigned int)v7 < (int)v7 + (int)v5 )
  {
    v9 = v5;
    v10 = 16 * v7;
    do
    {
      v11 = (_QWORD *)(v10 + *((_QWORD *)this + 3));
      if ( (*(_BYTE *)v11 & 1) != 0 )
      {
        --*((_DWORD *)this + 1);
        v8 = 1;
        *v11 = 0LL;
        *(_QWORD *)(v10 + *((_QWORD *)this + 3) + 8) = 0LL;
      }
      v10 += 16LL;
      --v9;
    }
    while ( v9 );
  }
  return v8;
}
