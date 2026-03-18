/*
 * XREFs of ?ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z @ 0x1C00BA2E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C006BA84 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C0077444 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C007CB4C (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C007F7C8 (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@Z @ 0x1C00AA1CC (-MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@.c)
 *     ?UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTEGER@@H@Z @ 0x1C00ACDE8 (-UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTE.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::ValidateApertureUnmapToDummyPage(
        VIDMM_APERTURE_SEGMENT *this,
        struct VIDMM_SEGMENT *a2,
        union _LARGE_INTEGER a3)
{
  struct _VIDMM_POOL_BLOCK *v4; // rbx
  void *v5; // rdi
  PHYSICAL_ADDRESS v6; // rdx
  int v7; // r12d
  void *v8; // r13
  struct _MDL *PagesForMdl; // r15
  struct _MDL *v10; // r14
  void *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  PHYSICAL_ADDRESS PhysicalAddress; // rdi
  _DWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  void *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  UINT v26; // r9d
  union _LARGE_INTEGER v27; // rbx
  SIZE_T v28; // r13
  UINT v29; // r9d
  VIDMM_GLOBAL *v30; // rcx
  VIDMM_GLOBAL *v31; // rcx
  _DWORD *v32; // rax
  unsigned int v33; // ecx
  UINT v34; // r9d
  UINT v35; // r9d
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned int v39; // [rsp+38h] [rbp-51h]
  unsigned int v40; // [rsp+38h] [rbp-51h]
  union _LARGE_INTEGER v41; // [rsp+60h] [rbp-29h] BYREF
  union _LARGE_INTEGER v42; // [rsp+68h] [rbp-21h] BYREF
  struct _VIDMM_POOL_BLOCK *v43; // [rsp+70h] [rbp-19h] BYREF
  union _LARGE_INTEGER v44; // [rsp+78h] [rbp-11h]
  struct _DXGK_TRANSFERFLAGS v45[2]; // [rsp+80h] [rbp-9h]
  _DWORD *v46; // [rsp+88h] [rbp-1h]
  __int64 v47; // [rsp+90h] [rbp+7h]
  union _LARGE_INTEGER v48; // [rsp+98h] [rbp+Fh] BYREF
  PVOID BaseAddress; // [rsp+F0h] [rbp+67h]
  PVOID v52; // [rsp+108h] [rbp+7Fh]

  v4 = 0LL;
  v44.QuadPart = 0LL;
  v5 = 0LL;
  v43 = 0LL;
  v6 = *(PHYSICAL_ADDRESS *)((char *)this + 120);
  v47 = 0LL;
  v7 = 0;
  *(_QWORD *)&v45[0].0 = 0LL;
  v8 = 0LL;
  PagesForMdl = MmAllocatePagesForMdl(gs_PhysicalAddressZero, v6, gs_PhysicalAddressZero, 0x1000uLL);
  v10 = MmAllocatePagesForMdl(
          gs_PhysicalAddressZero,
          *(PHYSICAL_ADDRESS *)((char *)this + 120),
          gs_PhysicalAddressZero,
          0x1000uLL);
  v11 = (void *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))MmAllocateContiguousNodeMemory)(
                  4096LL,
                  (const PHYSICAL_ADDRESS)gs_PhysicalAddressZero.QuadPart,
                  *((_QWORD *)this + 15),
                  (const PHYSICAL_ADDRESS)gs_PhysicalAddressZero.QuadPart,
                  516,
                  0x80000000);
  v52 = v11;
  if ( !PagesForMdl || !v11 || !v10 )
  {
    v7 = -1073741801;
    v37 = WdLogNewEntry5_WdWarning(v13, v12);
    WdLogEvent5_WdWarning(v37);
LABEL_31:
    if ( v4 )
      VIDMM_LINEAR_POOL::Free(*((VIDMM_LINEAR_POOL **)this + 19), v4);
    goto LABEL_33;
  }
  PhysicalAddress = MmGetPhysicalAddress(v11);
  BaseAddress = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmWriteCombined, 0LL, 0, 0x40000010u);
  v15 = MmMapLockedPagesSpecifyCache(v10, 0, MmWriteCombined, 0LL, 0, 0x40000010u);
  v46 = v15;
  v8 = v15;
  if ( BaseAddress && v15 )
  {
    memset(BaseAddress, 18, 0x1000uLL);
    v18 = v52;
    memset(v52, 171, 0x1000uLL);
    memset(v8, 205, 0x1000uLL);
    v7 = (*(__int64 (__fastcall **)(VIDMM_APERTURE_SEGMENT *, __int64, struct _MDL *))(*(_QWORD *)this + 200LL))(
           this,
           1LL,
           v10);
    if ( v7 < 0 )
    {
      v22 = WdLogNewEntry5_WdWarning(v20, v19);
      WdLogEvent5_WdWarning(v22);
      v5 = BaseAddress;
      goto LABEL_34;
    }
    LOBYTE(v21) = 1;
    v7 = VIDMM_LINEAR_POOL::Allocate(
           *((VIDMM_LINEAR_POOL **)this + 19),
           4096LL,
           0LL,
           v21,
           0LL,
           0LL,
           0,
           0,
           0LL,
           &v48,
           (void **)&v43);
    if ( v7 >= 0 )
    {
      if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
        v26 = 0;
      else
        v26 = *((_DWORD *)this + 4) + 1;
      v27 = v48;
      v28 = (unsigned __int64)v48.QuadPart >> 12;
      VIDMM_GLOBAL::MapVideoApertureSegmentInternal(
        *((ADAPTER_RENDER ***)this + 1),
        0,
        0LL,
        v26,
        1uLL,
        (unsigned __int64)v48.QuadPart >> 12,
        PagesForMdl,
        v39,
        0,
        0);
      if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
        v29 = 0;
      else
        v29 = *((_DWORD *)this + 4) + 1;
      VIDMM_GLOBAL::UnmapVideoApertureSegmentInternal(
        *((ADAPTER_RENDER ***)this + 1),
        0,
        0LL,
        v29,
        1uLL,
        v28,
        PhysicalAddress,
        0);
      v42 = v27;
      v30 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
      v41 = a3;
      VIDMM_GLOBAL::MemoryTransferInternal(v30, 0, 0LL, 0x1000uLL, 0LL, this, &v42, 0LL, a2, &v41, 0LL, v45[0]);
      v31 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
      v41 = v44;
      v42 = a3;
      VIDMM_GLOBAL::MemoryTransferInternal(v31, 0, 0LL, 0x1000uLL, 0LL, a2, &v42, 0LL, this, &v41, 0LL, v45[0]);
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), 0xFFFFFFFF);
      (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *))(*(_QWORD *)this + 72LL))(this);
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), 0xFFFFFFFF);
      v32 = v46;
      v33 = 0;
      while ( *v32 == -1414812757 )
      {
        ++v33;
        ++v32;
        if ( v33 >= 0x400 )
          goto LABEL_21;
      }
      v7 = -1073741823;
LABEL_21:
      if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
        v34 = 0;
      else
        v34 = *((_DWORD *)this + 4) + 1;
      VIDMM_GLOBAL::MapVideoApertureSegmentInternal(
        *((ADAPTER_RENDER ***)this + 1),
        0,
        0LL,
        v34,
        1uLL,
        v28,
        PagesForMdl,
        v40,
        0,
        0);
      if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
        v35 = 0;
      else
        v35 = *((_DWORD *)this + 4) + 1;
      VIDMM_GLOBAL::UnmapVideoApertureSegmentInternal(
        *((ADAPTER_RENDER ***)this + 1),
        0,
        0LL,
        v35,
        1uLL,
        v28,
        *(union _LARGE_INTEGER *)((char *)this + 504),
        0);
      v8 = v46;
    }
    else
    {
      v25 = WdLogNewEntry5_WdWarning(v24, v23);
      WdLogEvent5_WdWarning(v25);
    }
    v4 = v43;
    v5 = BaseAddress;
    goto LABEL_31;
  }
  v36 = WdLogNewEntry5_WdWarning(v17, v16);
  WdLogEvent5_WdWarning(v36);
  v5 = BaseAddress;
LABEL_33:
  v18 = v52;
LABEL_34:
  if ( v47 )
    (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, __int64, struct _MDL *))(*(_QWORD *)this + 208LL))(this, 1LL, v10);
  if ( v5 )
    MmUnmapLockedPages(v5, PagesForMdl);
  if ( v8 )
    MmUnmapLockedPages(v8, v10);
  if ( v10 )
  {
    MmFreePagesFromMdl(v10);
    ExFreePoolWithTag(v10, 0);
  }
  if ( PagesForMdl )
  {
    MmFreePagesFromMdl(PagesForMdl);
    ExFreePoolWithTag(PagesForMdl, 0);
  }
  if ( v18 )
    MmFreeContiguousMemory(v18);
  return (unsigned int)v7;
}
