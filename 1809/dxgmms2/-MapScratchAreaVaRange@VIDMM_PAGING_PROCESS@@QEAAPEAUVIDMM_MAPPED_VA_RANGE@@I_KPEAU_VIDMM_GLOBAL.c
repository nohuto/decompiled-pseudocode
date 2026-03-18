/*
 * XREFs of ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C007132C
 * Callers:
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C006FA30 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C00757A0 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C007F918 (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 * Callees:
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C0059008 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00735B0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 */

struct VIDMM_MAPPED_VA_RANGE *__fastcall VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
        VIDMM_PAGING_PROCESS *this,
        unsigned int a2,
        unsigned __int64 a3,
        struct _VIDMM_GLOBAL_ALLOC *a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned __int64 a7,
        struct _MDL *a8,
        struct VIDMM_ALLOC *a9,
        unsigned __int64 a10)
{
  __int64 v11; // rbp
  _QWORD *v14; // r10
  unsigned int v15; // ecx
  unsigned __int8 v16; // dl
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r8
  struct VIDMM_VAD **v19; // r14
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v27; // rax
  _QWORD *v28; // rax

  v11 = a2;
  if ( a6
    && (v14 = (_QWORD *)*((_QWORD *)this + 2),
        *(_DWORD *)(*(_QWORD *)(v14[464] + 8LL * (a6 + *(_DWORD *)(1560LL * a2 + v14[5023] + 20) - 1)) + 376LL) == 0x10000)
    && !(_WORD)a3
    && (v15 = *((_DWORD *)a4 + 8)) != 0
    && !(_WORD)v15 )
  {
    v16 = 1;
  }
  else
  {
    v15 = *((_DWORD *)a4 + 8);
    v16 = 0;
    v14 = (_QWORD *)*((_QWORD *)this + 2);
  }
  *(_BYTE *)a9 = v16;
  if ( v16 )
  {
    v17 = v14[5112];
    v18 = v14[5113];
  }
  else
  {
    v17 = v14[5110];
    v18 = v14[5111];
  }
  v19 = (struct VIDMM_VAD **)*((_QWORD *)this + v11 + 4);
  v20 = CVirtualAddressAllocator::MapVirtualAddressRange(
          v19,
          (__int64)a4,
          a5,
          3u,
          a3,
          0LL,
          v17,
          v18,
          v15,
          (_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE)1LL,
          a10,
          v11,
          0LL,
          0);
  v23 = v20;
  if ( v20 )
  {
    *(_DWORD *)(v20 + 64) |= 0x1000u;
    *(_QWORD *)(v20 + 40) = 0LL;
    if ( (int)CVirtualAddressAllocator::CommitVirtualAddressRange(
                (CVirtualAddressAllocator *)v19,
                (struct VIDMM_MAPPED_VA_RANGE *)v20,
                v11,
                a6,
                a7,
                a8,
                0,
                &a9) < 0 )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v24);
      v28[3] = 270LL;
      v28[4] = 48LL;
      v28[5] = this;
      v28[6] = 0LL;
      v28[7] = 0LL;
      WdLogEvent5_WdCriticalError(v28);
    }
    return (struct VIDMM_MAPPED_VA_RANGE *)v23;
  }
  else
  {
    v27 = WdLogNewEntry5_WdEvent(v22, v21);
    WdLogEvent5_WdEvent(v27);
    return 0LL;
  }
}
