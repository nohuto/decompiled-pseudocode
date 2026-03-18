/*
 * XREFs of ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C006A620
 * Callers:
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C006A5EC (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00015B0 (--3@YAXPEAX@Z.c)
 *     ?GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z @ 0x1C000FDD0 (-GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z.c)
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     ExFreeToPagedLookasideList @ 0x1C0027D3C (ExFreeToPagedLookasideList.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C005FE90 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C00621D0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C006A5EC (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0079A18 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C0079B00 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 */

void __fastcall VIDMM_PAGE_DIRECTORY::DestroyPageDirectoryObjects(
        struct _KEVENT **this,
        struct CVirtualAddressAllocator *a2,
        unsigned __int64 a3)
{
  struct CVirtualAddressAllocator *v4; // rdi
  struct _PAGED_LOOKASIDE_LIST *v6; // r14
  struct _KEVENT *v7; // r9
  unsigned int NumPde; // r12d
  unsigned int v9; // ebp
  unsigned __int64 v10; // rsi
  __int64 v11; // rbx
  unsigned int v12; // edi
  __int64 v13; // r13
  __int64 v14; // r14
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  struct _VIDMM_GLOBAL_ALLOC *v17; // r8
  struct _KEVENT *v18; // rcx
  struct _PAGED_LOOKASIDE_LIST *v21; // [rsp+40h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-70h] BYREF

  v4 = a2;
  VIDMM_PAGE_DIRECTORY::EvictPageDirectory((VIDMM_PAGE_DIRECTORY *)this, a2, a3, 1u, 1);
  v6 = (struct _PAGED_LOOKASIDE_LIST *)*((_QWORD *)v4 + 10);
  v21 = v6;
  if ( this[4] )
  {
    NumPde = CVirtualAddressAllocator::GetNumPde(v4, (struct VIDMM_PAGE_DIRECTORY *)this);
    v9 = NumPde;
    if ( (*(_DWORD *)this & 0x1020) == 0x1020 )
      NumPde *= 2;
    v10 = a3;
    v11 = 0LL;
    v12 = 0;
    v13 = *(_QWORD *)(48LL * (*(_DWORD *)this & 7)
                    + 1560 * (((unsigned __int64)*(unsigned int *)this >> 7) & 0x1F)
                    + *(_QWORD *)&v6[313].L.Future[8]
                    + 128);
    if ( NumPde )
    {
      v14 = 0LL;
      v15 = v10;
      do
      {
        v7 = this[4];
        if ( *(_QWORD *)((char *)&v7->Header.Lock + v11) )
        {
          if ( (*(_DWORD *)this & 0x20) != 0 )
          {
            if ( (*(LONG *)((_BYTE *)&this[3]->Header.LockNV + v14) & 0x400LL) != 0 )
              ExFreeToPagedLookasideList(v21 + 314, *(PVOID *)((char *)&v7->Header.Lock + v11));
            else
              VIDMM_PAGE_TABLE::DestroyPageTable(*(VIDMM_PAGE_TABLE **)((char *)&v7->Header.Lock + v11), a2, v10);
          }
          else
          {
            VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(
              *(VIDMM_PAGE_DIRECTORY **)((char *)&v7->Header.Lock + v11),
              a2,
              v10,
              (unsigned __int8)v7);
          }
          v15 = a3;
          *(_QWORD *)((char *)&this[4]->Header.Lock + v11) = 0LL;
          v7 = this[4];
        }
        v16 = v10 + v13;
        v10 = v15;
        if ( v12 != v9 )
          v10 = v16;
        ++v12;
        v14 += 16LL;
        v11 += 8LL;
      }
      while ( v12 < NumPde );
      v6 = v21;
    }
    operator delete(v7);
    v4 = a2;
    this[4] = 0LL;
  }
  if ( this[2] )
  {
    KeStackAttachProcess(**((PRKPROCESS **)v4 + 11), &ApcState);
    VIDMM_GLOBAL::CloseOneAllocation(
      (VIDMM_GLOBAL *)v6,
      this[2],
      0LL,
      0,
      (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1,
      0LL);
    KeUnstackDetachProcess(&ApcState);
    this[2] = 0LL;
  }
  v17 = (struct _VIDMM_GLOBAL_ALLOC *)this[1];
  if ( v17 )
  {
    VIDMM_GLOBAL::DestroyOneAllocation((struct _KTHREAD **)v6, 0LL, v17, 0);
    this[1] = 0LL;
  }
  v18 = this[3];
  if ( v18 )
  {
    operator delete(v18);
    this[3] = 0LL;
  }
}
