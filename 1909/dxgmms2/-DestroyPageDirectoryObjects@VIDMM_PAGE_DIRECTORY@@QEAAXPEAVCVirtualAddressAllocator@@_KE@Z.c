/*
 * XREFs of ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C005D860
 * Callers:
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C005C324 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 * Callees:
 *     ?GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z @ 0x1C00013C4 (-GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0001710 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0018050 (__security_check_cookie.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ExFreeToPagedLookasideList @ 0x1C0027840 (ExFreeToPagedLookasideList.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C005C324 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C005FD00 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C006002C (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C006D0F0 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0071060 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 */

void __fastcall VIDMM_PAGE_DIRECTORY::DestroyPageDirectoryObjects(
        struct VIDMM_ALLOC **this,
        struct CVirtualAddressAllocator *a2,
        unsigned __int64 a3)
{
  struct CVirtualAddressAllocator *v3; // rbx
  __int64 v6; // r14
  struct _PAGED_LOOKASIDE_LIST *v7; // rsi
  unsigned int NumPde; // eax
  struct VIDMM_ALLOC *v9; // r10
  unsigned int v10; // r13d
  unsigned __int64 v11; // rdi
  unsigned int v12; // ebx
  unsigned int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // r9
  unsigned __int64 v17; // rax
  struct _VIDMM_GLOBAL_ALLOC *v18; // r8
  struct VIDMM_ALLOC *v19; // rcx
  __int64 v21; // [rsp+38h] [rbp-80h]
  struct _PAGED_LOOKASIDE_LIST *v22; // [rsp+40h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-70h] BYREF

  v3 = a2;
  VIDMM_PAGE_DIRECTORY::EvictPageDirectory((VIDMM_PAGE_DIRECTORY *)this, a2, a3, 1u, 1u);
  v6 = 0LL;
  v7 = (struct _PAGED_LOOKASIDE_LIST *)*((_QWORD *)v3 + 10);
  v22 = v7;
  if ( this[4] )
  {
    NumPde = CVirtualAddressAllocator::GetNumPde(v3, (struct VIDMM_PAGE_DIRECTORY *)this);
    v10 = NumPde;
    v11 = a3;
    v12 = 0;
    v13 = 2 * NumPde;
    if ( (*(_DWORD *)this & 0x1020) != 0x1020 )
      v13 = NumPde;
    v14 = *(_QWORD *)(48LL * (*(_DWORD *)this & 7)
                    + 1560 * (((unsigned __int64)*(unsigned int *)this >> 7) & 0x1F)
                    + *(_QWORD *)&v7[313].L.Future[8]
                    + 128);
    v21 = v14;
    if ( v13 )
    {
      v15 = 0LL;
      do
      {
        v9 = this[4];
        v16 = *(_QWORD *)((char *)v9 + v15);
        if ( v16 )
        {
          if ( (*(_DWORD *)this & 0x20) != 0 )
          {
            if ( (*(_DWORD *)((_BYTE *)this[3] + v6) & 0x400LL) != 0 )
              ExFreeToPagedLookasideList(v22 + 314, *(PVOID *)((char *)v9 + v15));
            else
              VIDMM_PAGE_TABLE::DestroyPageTable(*(VIDMM_PAGE_TABLE **)((char *)v9 + v15), a2, v11);
          }
          else
          {
            VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(*(VIDMM_PAGE_DIRECTORY **)((char *)v9 + v15), a2, v11, v16);
          }
          *(_QWORD *)((char *)this[4] + v15) = 0LL;
          v9 = this[4];
          v14 = v21;
        }
        v17 = v11 + v14;
        v11 = a3;
        if ( v12 != v10 )
          v11 = v17;
        v14 = v21;
        ++v12;
        v6 += 16LL;
        v15 += 8LL;
      }
      while ( v12 < v13 );
      v7 = v22;
    }
    operator delete(v9);
    v3 = a2;
    this[4] = 0LL;
  }
  if ( this[2] )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(**((PRKPROCESS **)v3 + 11), &ApcState);
    VIDMM_GLOBAL::CloseOneAllocation(
      (VIDMM_GLOBAL *)v7,
      this[2],
      0LL,
      0,
      (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1,
      0LL);
    KeUnstackDetachProcess(&ApcState);
    this[2] = 0LL;
  }
  v18 = this[1];
  if ( v18 )
  {
    VIDMM_GLOBAL::DestroyOneAllocation((VIDMM_GLOBAL *)v7, 0LL, v18, 0);
    this[1] = 0LL;
  }
  v19 = this[3];
  if ( v19 )
  {
    operator delete(v19);
    this[3] = 0LL;
  }
}
