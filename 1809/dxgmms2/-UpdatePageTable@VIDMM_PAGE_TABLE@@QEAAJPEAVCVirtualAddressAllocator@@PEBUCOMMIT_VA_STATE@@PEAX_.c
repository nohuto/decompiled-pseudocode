/*
 * XREFs of ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C00B7374
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0075870 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 * Callees:
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C00751C0 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C00757A0 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C0077F18 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::UpdatePageTable(
        VIDMM_PAGE_TABLE_BASE *a1,
        VIDMM_GLOBAL **a2,
        __int64 a3,
        struct _VIDMM_GLOBAL_ALLOC ***a4,
        unsigned __int64 a5,
        int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        struct _DXGK_UPDATEPAGETABLEFLAGS a10)
{
  VIDMM_GLOBAL *v10; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  struct VIDMM_ALLOC *v20; // rbp
  struct _VIDMM_GLOBAL_ALLOC *v21; // rdx
  enum _DXGK_PAGETABLEUPDATEMODE v22; // ecx
  void *v23; // rbx
  __int64 v24; // r8
  unsigned __int64 v25; // [rsp+90h] [rbp-28h] BYREF
  void *v26; // [rsp+98h] [rbp-20h] BYREF
  unsigned int v27; // [rsp+C8h] [rbp+10h] BYREF

  v10 = a2[10];
  if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(a1, (struct CVirtualAddressAllocator *)a2, &v27, &v25, &v26) >= 0 )
  {
    v20 = 0LL;
    if ( a6 == 1 )
    {
      v20 = (struct VIDMM_ALLOC *)a4;
      v21 = **a4;
    }
    else
    {
      v21 = 0LL;
      if ( a6 == 3 )
        v21 = (struct _VIDMM_GLOBAL_ALLOC *)a4;
    }
    if ( (*((_BYTE *)v10 + 40872) & 0x10) != 0 )
      v22 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
    else
      v22 = (__int16)*(_DWORD *)a1 >> 13;
    v23 = (void *)v25;
    VIDMM_GLOBAL::UpdatePageTable(
      v10,
      *(_DWORD *)a1 & 7,
      a2[11],
      *(_QWORD *)(a3 + 16),
      v20,
      v21,
      a5,
      a7,
      a8,
      (struct _DXGK_PTE *)(*((_QWORD *)a1 + 3) + 16LL * a7),
      0LL,
      (*(_DWORD *)a1 >> 7) & 0x1F,
      v27,
      v25,
      v22,
      a9,
      *(_DWORD *)&a10,
      *(_QWORD *)(a3 + 64));
    VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(
      a1,
      (struct CVirtualAddressAllocator *)a2,
      v24,
      v23,
      (struct _MDL *)v26);
    return 0LL;
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v16, v15, v17);
    *(_QWORD *)(v18 + 24) = 3768LL;
    WdLogEvent5_WdError(v18);
    return 3221225473LL;
  }
}
