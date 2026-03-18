/*
 * XREFs of ?InitializePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C00787E8
 * Callers:
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C00788FC (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001AD8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C0078300 (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::InitializePageTable(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        unsigned int a3,
        char a4,
        unsigned __int8 a5)
{
  __int64 v7; // rdi
  __int64 v9; // rbx
  __int64 v10; // rbp
  int v11; // ecx
  SIZE_T v12; // rax
  PVOID v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // rcx
  int VidMmObjects; // ebx
  __int64 v20; // rax
  __int64 v21; // rax

  v7 = a3;
  v9 = *(_QWORD *)(*((_QWORD *)a2 + 10) + 40184LL) + 1560LL * ((*(_DWORD *)this >> 7) & 0x1F);
  v10 = *((_QWORD *)a2 + 14) + 32LL * ((*(_DWORD *)this >> 7) & 0x1F);
  v11 = *(_DWORD *)this ^ ((unsigned __int8)*(_DWORD *)this ^ (unsigned __int8)(a4 << 6)) & 0x40;
  *(_DWORD *)this = v11;
  *(_DWORD *)this = v11 ^ ((unsigned __int16)v11 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v9 + 424) << 13)) & 0xE000;
  v12 = 16LL * a3;
  if ( !is_mul_ok(a3, 0x10uLL) )
    v12 = -1LL;
  v13 = operator new[](v12, 0x34356956u, PagedPool);
  *((_QWORD *)this + 3) = v13;
  if ( v13 )
  {
    memset(v13, 0, 16 * v7);
    if ( a4 )
    {
      v15 = *(_DWORD *)(*(_QWORD *)(v9 + 440) + 12LL);
    }
    else
    {
      v15 = *(_DWORD *)(v9 + 32);
      if ( a5 && *(_DWORD *)(*(_QWORD *)(v9 + 440) + 12LL) > v15 )
        v15 = *(_DWORD *)(*(_QWORD *)(v9 + 440) + 12LL);
    }
    VidMmObjects = VIDMM_PAGE_TABLE_BASE::CreateVidMmObjects(this, a2, v15, *(_DWORD *)(v10 + 28));
    if ( VidMmObjects < 0 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v17, v16);
      *(_QWORD *)(v21 + 24) = 4003LL;
      WdLogEvent5_WdAssertion(v21);
      return (unsigned int)VidMmObjects;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    _InterlockedIncrement(&dword_1C004D6DC);
    v20 = WdLogNewEntry5_WdLowResource(v14);
    *(_QWORD *)(v20 + 24) = 3970LL;
    WdLogEvent5_WdLowResource(v20);
    return 3221225495LL;
  }
}
