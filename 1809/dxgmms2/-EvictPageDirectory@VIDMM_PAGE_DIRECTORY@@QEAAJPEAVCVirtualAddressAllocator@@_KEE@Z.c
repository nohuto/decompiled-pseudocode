/*
 * XREFs of ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C0079B00
 * Callers:
 *     ?EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z @ 0x1C0025C04 (-EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C006A620 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0074100 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C0079B00 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 * Callees:
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ @ 0x1C0010BDC (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ.c)
 *     ExFreeToPagedLookasideList @ 0x1C0027D3C (ExFreeToPagedLookasideList.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C00751C0 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C00757A0 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C0077F18 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z.c)
 *     ?EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C0079860 (-EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C007993C (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C0079B00 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::EvictPageDirectory(
        struct VIDMM_ALLOC **this,
        struct CVirtualAddressAllocator *a2,
        unsigned __int64 a3,
        unsigned __int8 a4,
        char a5)
{
  unsigned __int64 v5; // rdi
  struct CVirtualAddressAllocator *v6; // r14
  int *v8; // rcx
  unsigned __int64 v9; // r8
  unsigned __int8 v10; // r10
  int v11; // eax
  _QWORD *v12; // rsi
  unsigned int v13; // r9d
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r12
  __int64 v17; // r15
  unsigned __int64 v18; // rbp
  __int64 v19; // r13
  unsigned int v20; // esi
  __int64 v21; // rdi
  struct VIDMM_ALLOC *v22; // rax
  void *v23; // r10
  __int64 v24; // r14
  __int64 v25; // r10
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  enum _DXGK_PAGETABLEUPDATEMODE v29; // eax
  void *v30; // rdi
  __int64 v31; // r8
  VIDMM_PAGE_DIRECTORY *v33; // rcx
  __int64 v34; // rax
  unsigned __int64 v35; // [rsp+78h] [rbp-70h]
  unsigned int v36; // [rsp+90h] [rbp-58h] BYREF
  void *v37; // [rsp+98h] [rbp-50h] BYREF
  unsigned __int64 v38; // [rsp+A0h] [rbp-48h] BYREF

  v5 = a3;
  v6 = a2;
  if ( !VIDMM_PAGE_TABLE_BASE::IsResident((VIDMM_PAGE_TABLE_BASE *)this) )
    return 0LL;
  v11 = *v8;
  v12 = (_QWORD *)*((_QWORD *)v6 + 10);
  v13 = ((unsigned int)*v8 >> 7) & 0x1F;
  v14 = *v8 & 7;
  v15 = v12[5023] + 1560LL * v13;
  v37 = v12;
  v38 = v15;
  if ( (v11 & 0x10) != 0 )
    v16 = *(unsigned int *)(32LL * v13 + *((_QWORD *)v6 + 14) + 16);
  else
    v16 = *(unsigned int *)(v15 + 48 * v14 + 88);
  v36 = v16;
  v17 = 0LL;
  v18 = v9;
  v19 = *(_QWORD *)(v15 + 48 * v14 + 128);
  if ( (_DWORD)v16 )
  {
    v20 = v16;
    v21 = 0LL;
    do
    {
      if ( v10 )
      {
        v22 = this[4];
        if ( (*(_DWORD *)this & 0x20) != 0 )
        {
          v23 = *(void **)((char *)v22 + v17);
          if ( (*(_DWORD *)((_BYTE *)this[3] + v21) & 0x400LL) != 0 )
          {
            if ( v23 )
            {
              ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)v37 + 314, v23);
              *(_QWORD *)((char *)this[4] + v17) = 0LL;
            }
          }
          else if ( v23 )
          {
            VIDMM_PAGE_TABLE::EvictPageTable((struct VIDMM_ALLOC **)v23, v6);
          }
          if ( (*(_DWORD *)this & 0x1000) != 0 )
          {
            v24 = 8LL * v20;
            v25 = *(_QWORD *)((char *)this[4] + v24);
            if ( (*((_DWORD *)this[3] + 4 * v20) & 0x400LL) != 0 )
            {
              if ( v25 )
              {
                ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)v37 + 314, *(PVOID *)((char *)this[4] + v24));
                *(_QWORD *)((char *)this[4] + v24) = 0LL;
              }
            }
            else if ( v25 )
            {
              VIDMM_PAGE_TABLE::EvictPageTable(*(struct VIDMM_ALLOC ***)((char *)this[4] + v24), a2);
            }
          }
        }
        else
        {
          v33 = *(VIDMM_PAGE_DIRECTORY **)((char *)v22 + v17);
          if ( v33 )
            VIDMM_PAGE_DIRECTORY::EvictPageDirectory(v33, v6, v18, v10, a5);
        }
      }
      *(_QWORD *)((char *)this[3] + v21) = 0LL;
      if ( (*(_DWORD *)this & 0x1020) == 0x1020 )
        *((_QWORD *)this[3] + 2 * v20) = 0LL;
      v10 = a4;
      v18 += v19;
      v6 = a2;
      ++v20;
      v17 += 8LL;
      v21 += 16LL;
      --v16;
    }
    while ( v16 );
    v15 = v38;
    v12 = v37;
    LODWORD(v16) = v36;
    v5 = a3;
  }
  if ( (**(_DWORD **)(v15 + 440) & 8) == 0 || !a5 )
  {
LABEL_25:
    *((_DWORD *)this[1] + 19) |= 0x100000u;
    *((_BYTE *)this[1] + 97) = 0;
    VIDMM_GLOBAL::EvictOneAllocation((struct VIDMM_ALLOC **)v12, this[2], 0LL);
    *((_DWORD *)this[1] + 19) &= ~0x100000u;
    return 0LL;
  }
  if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress((VIDMM_PAGE_TABLE_BASE *)this, v6, &v36, &v38, &v37) >= 0 )
  {
    if ( (v12[5109] & 0x10) != 0 )
      v29 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
    else
      v29 = (__int16)*(_DWORD *)this >> 13;
    v35 = v5;
    v30 = (void *)v38;
    VIDMM_GLOBAL::UpdatePageTable(
      (VIDMM_GLOBAL *)v12,
      *(_DWORD *)this & 7,
      *((struct VIDMM_PROCESS **)v6 + 11),
      0LL,
      0LL,
      0LL,
      0LL,
      0,
      v16,
      0LL,
      0LL,
      (*(_DWORD *)this >> 7) & 0x1F,
      v36,
      v38,
      v29,
      v35,
      4,
      0LL);
    VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress((VIDMM_PAGE_TABLE_BASE *)this, v6, v31, v30, (struct _MDL *)v37);
    goto LABEL_25;
  }
  v34 = WdLogNewEntry5_WdError(v27, v26, v28);
  *(_QWORD *)(v34 + 24) = 6383LL;
  WdLogEvent5_WdError(v34);
  return 3221225473LL;
}
