/*
 * XREFs of ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C005FD00
 * Callers:
 *     ?EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z @ 0x1C0025484 (-EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C005D860 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C005FD00 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006DFD0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ @ 0x1C00017B4 (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ.c)
 *     ExFreeToPagedLookasideList @ 0x1C0027840 (ExFreeToPagedLookasideList.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C005FD00 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C006011C (-EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00601F4 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C006D83C (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C006F370 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C006F980 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::EvictPageDirectory(
        struct VIDMM_ALLOC **this,
        struct CVirtualAddressAllocator *a2,
        unsigned __int64 a3,
        unsigned __int8 a4,
        unsigned __int8 a5)
{
  unsigned __int64 v5; // rdi
  int *v8; // rcx
  unsigned __int64 v9; // r8
  unsigned __int8 v10; // r10
  int v11; // eax
  struct _PAGED_LOOKASIDE_LIST *v12; // r14
  unsigned int v13; // r9d
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r12
  __int64 v17; // r15
  unsigned __int64 v18; // rbp
  __int64 v19; // rdi
  unsigned int v20; // esi
  struct VIDMM_ALLOC *v21; // rax
  __int64 v22; // r14
  struct VIDMM_ALLOC *v23; // rax
  enum _DXGK_PAGETABLEUPDATEMODE v24; // eax
  unsigned __int64 v25; // rdi
  unsigned int v26; // r8d
  VIDMM_PAGE_DIRECTORY *v28; // rcx
  __int64 v29; // rax
  unsigned __int64 v30; // [rsp+78h] [rbp-70h]
  unsigned int v31; // [rsp+90h] [rbp-58h] BYREF
  struct _PAGED_LOOKASIDE_LIST *v32; // [rsp+98h] [rbp-50h]
  void *v33; // [rsp+A0h] [rbp-48h] BYREF
  unsigned __int64 v34; // [rsp+A8h] [rbp-40h] BYREF

  v5 = a3;
  if ( !VIDMM_PAGE_TABLE_BASE::IsResident((VIDMM_PAGE_TABLE_BASE *)this) )
    return 0LL;
  v11 = *v8;
  v12 = (struct _PAGED_LOOKASIDE_LIST *)*((_QWORD *)a2 + 10);
  v13 = ((unsigned int)*v8 >> 7) & 0x1F;
  v14 = *v8 & 7;
  v32 = v12;
  v15 = *(_QWORD *)&v12[313].L.Future[8] + 1560LL * v13;
  v34 = v15;
  if ( (v11 & 0x10) != 0 )
    v16 = *(unsigned int *)(32LL * v13 + *((_QWORD *)a2 + 14) + 16);
  else
    v16 = *(unsigned int *)(v15 + 48 * v14 + 88);
  v31 = v16;
  v17 = 0LL;
  v18 = v9;
  v33 = *(void **)(v15 + 48 * v14 + 128);
  if ( (_DWORD)v16 )
  {
    v19 = 0LL;
    v20 = v16;
    do
    {
      if ( v10 )
      {
        if ( (*(_DWORD *)this & 0x20) != 0 )
        {
          v21 = this[4];
          if ( *(_QWORD *)((char *)v21 + v17) )
          {
            if ( (*(_DWORD *)((_BYTE *)this[3] + v19) & 0x400) != 0 )
            {
              ExFreeToPagedLookasideList(v12 + 314, *(PVOID *)((char *)v21 + v17));
              *(_QWORD *)((char *)this[4] + v17) = 0LL;
            }
            else
            {
              VIDMM_PAGE_TABLE::EvictPageTable(*(VIDMM_PAGE_TABLE **)((char *)v21 + v17), a2, v18, a5);
            }
          }
          if ( (*(_DWORD *)this & 0x1000) != 0 )
          {
            v22 = 8LL * v20;
            v23 = this[4];
            if ( *(_QWORD *)((char *)v23 + v22) )
            {
              if ( (*((_DWORD *)this[3] + 4 * v20) & 0x400) != 0 )
              {
                ExFreeToPagedLookasideList(v32 + 314, *(PVOID *)((char *)v23 + v22));
                *(_QWORD *)((char *)this[4] + v22) = 0LL;
              }
              else
              {
                VIDMM_PAGE_TABLE::EvictPageTable(*(VIDMM_PAGE_TABLE **)((char *)v23 + v22), a2, v18, a5);
              }
            }
          }
        }
        else
        {
          v28 = *(VIDMM_PAGE_DIRECTORY **)((char *)this[4] + v17);
          if ( v28 )
            VIDMM_PAGE_DIRECTORY::EvictPageDirectory(v28, a2, v18, v10, a5);
        }
      }
      *(_QWORD *)((char *)this[3] + v19) = 0LL;
      if ( (*(_DWORD *)this & 0x1020) == 0x1020 )
        *((_QWORD *)this[3] + 2 * v20) = 0LL;
      v18 += (unsigned __int64)v33;
      ++v20;
      v10 = a4;
      v17 += 8LL;
      v12 = v32;
      v19 += 16LL;
      --v16;
    }
    while ( v16 );
    v15 = v34;
    LODWORD(v16) = v31;
    v5 = a3;
  }
  if ( (**(_DWORD **)(v15 + 440) & 8) == 0 || !a5 )
  {
LABEL_21:
    *((_DWORD *)this[1] + 19) |= 0x100000u;
    *((_BYTE *)this[1] + 97) = 0;
    VIDMM_GLOBAL::EvictOneAllocation((VIDMM_GLOBAL *)v12, this[2], 0);
    *((_DWORD *)this[1] + 19) &= ~0x100000u;
    return 0LL;
  }
  if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress((VIDMM_PAGE_TABLE_BASE *)this, a2, &v31, &v34, &v33) >= 0 )
  {
    if ( (v12[319].L.Tag & 0x10) != 0 )
      v24 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
    else
      v24 = (__int16)*(_DWORD *)this >> 13;
    v30 = v5;
    v25 = v34;
    VIDMM_GLOBAL::UpdatePageTable(
      (VIDMM_GLOBAL *)v12,
      *(_DWORD *)this & 7,
      *((struct VIDMM_PROCESS **)a2 + 11),
      0LL,
      0LL,
      0LL,
      0LL,
      0,
      v16,
      0LL,
      0LL,
      (*(_DWORD *)this >> 7) & 0x1F,
      v31,
      v34,
      v24,
      v30,
      (struct _DXGK_UPDATEPAGETABLEFLAGS)4,
      0LL);
    VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress((VIDMM_PAGE_TABLE_BASE *)this, a2, v26, v25, v33);
    goto LABEL_21;
  }
  v29 = WdLogNewEntry5_WdError();
  *(_QWORD *)(v29 + 24) = 6396LL;
  WdLogEvent5_WdError(v29);
  return 3221225473LL;
}
