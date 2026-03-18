/*
 * XREFs of ?HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_GPUMMUCAPS@@PEBUCOMMIT_VA_STATE@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@III_KPEAE@Z @ 0x1C0083CFC
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006E2C0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ExAllocateFromPagedLookasideList @ 0x1C0027800 (ExAllocateFromPagedLookasideList.c)
 *     ?DestroyPdePageTableData@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I_K@Z @ 0x1C0083DD8 (-DestroyPdePageTableData@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I_K@Z.c)
 */

unsigned __int8 __fastcall VIDMM_PAGE_DIRECTORY::HandleFullPageTableCoverage(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        const struct _DXGK_GPUMMUCAPS *a3,
        const struct COMMIT_VA_STATE *a4,
        const struct VIDMM_PAGE_TABLE_LEVEL_DESC *a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        unsigned __int8 *a10)
{
  __int64 v10; // r10
  unsigned __int8 v11; // si
  char v12; // bl
  char v13; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r8
  _DWORD *v24; // [rsp+68h] [rbp+10h]

  v10 = *((_QWORD *)a2 + 10);
  v24 = 0LL;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  if ( (*(_QWORD *)a4 & 1) != 0 )
  {
    if ( (*(_QWORD *)a4 & 2) != 0 )
    {
      v11 = *(_BYTE *)(v10 + 40872) >> 7;
    }
    else if ( (*(_DWORD *)this & 0x20) != 0
           && *((_BYTE *)a4 + 59)
           && ((a3->Value & 0x100) != 0 || (((*((_QWORD *)a5 + 5) << 12) - 1LL) & a9) == 0) )
    {
      v24 = ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)(v10 + 40192));
      if ( v24 )
      {
        v12 = 1;
      }
      else
      {
        v19 = WdLogNewEntry5_WdWarning(v18, v17);
        WdLogEvent5_WdWarning(v19);
      }
    }
  }
  else
  {
    v13 = 1;
  }
  if ( !(v11 | (unsigned __int8)(v12 | v13)) )
    return 0;
  if ( (*(_BYTE *)(*((_QWORD *)this + 3) + 16LL * a6) & 1) != 0 )
  {
    VIDMM_PAGE_DIRECTORY::DestroyPdePageTableData(this, a2, a6, a8);
    *a10 = 1;
  }
  if ( a7 != a6 && (*(_BYTE *)(*((_QWORD *)this + 3) + 16LL * a7) & 1) != 0 )
  {
    VIDMM_PAGE_DIRECTORY::DestroyPdePageTableData(this, a2, a7, a8);
    *a10 = 1;
  }
  if ( !v13 )
  {
    v20 = *((_QWORD *)this + 3);
    *a10 = 1;
    *(_QWORD *)(v20 + 16LL * a6) |= 1uLL;
    ++*((_DWORD *)this + 1);
    v21 = *((_QWORD *)this + 3);
    v22 = *(_QWORD *)(v21 + 16LL * a6);
    if ( v11 )
    {
      *(_QWORD *)(v21 + 16LL * a6) = v22 | 2;
    }
    else
    {
      *(_QWORD *)(v21 + 16LL * a6) = v22 | 0x400;
      v23 = *(_QWORD *)a4;
      *(_QWORD *)(*((_QWORD *)this + 3) + 16LL * a6 + 8) = a9 >> 12;
      *(_QWORD *)(*((_QWORD *)this + 3) + 16LL * a6) ^= (*(_DWORD *)(*((_QWORD *)this + 3) + 16LL * a6) ^ (32 * *((_DWORD *)a4 + 13))) & 0x3E0;
      *(_QWORD *)(*((_QWORD *)this + 3) + 16LL * a6) ^= (*(_DWORD *)(*((_QWORD *)this + 3) + 16LL * a6) ^ (unsigned int)v23) & 8;
      *(_QWORD *)(*((_QWORD *)this + 3) + 16LL * a6) ^= (*(_DWORD *)(*((_QWORD *)this + 3) + 16LL * a6) ^ (unsigned int)v23) & 0x10;
      *(_QWORD *)(*((_QWORD *)this + 3) + 16LL * a6) ^= (*(_DWORD *)(*((_QWORD *)this + 3) + 16LL * a6) ^ (unsigned int)v23) & 4;
      *(_QWORD *)(*((_QWORD *)this + 3) + 16LL * a6) ^= (*(_DWORD *)(*((_QWORD *)this + 3) + 16LL * a6) ^ (unsigned int)v23) & 0x1F800;
      v24[2] = *((_DWORD *)a4 + 12);
      *(_QWORD *)v24 = *((_QWORD *)a4 + 5);
      *((_QWORD *)v24 + 2) = *((_QWORD *)a4 + 2);
      *(_QWORD *)(*((_QWORD *)this + 4) + 8LL * a6) = v24;
    }
  }
  return 1;
}
