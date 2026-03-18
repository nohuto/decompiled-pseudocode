/*
 * XREFs of ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C007E9B8
 * Callers:
 *     ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1C007E530 (-ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@.c)
 *     ?MapPagesIntoAperture@VIDMM_APERTURE_SEGMENT@@UEAAJKPEAU_MDL@@HPEAPEAXPEA_K@Z @ 0x1C00BC240 (-MapPagesIntoAperture@VIDMM_APERTURE_SEGMENT@@UEAAJKPEAU_MDL@@HPEAPEAXPEA_K@Z.c)
 *     ?ReserveTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00BC700 (-ReserveTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z @ 0x1C00BCE70 (-ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z.c)
 *     ?AllocateScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAJKPEAPEAXPEA_K@Z @ 0x1C00BD460 (-AllocateScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAJKPEAPEAXPEA_K@Z.c)
 *     ?AttemptToGrowVPRForAllocation@VIDMM_SEGMENT@@QEAAJ_KPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00BEB10 (-AttemptToGrowVPRForAllocation@VIDMM_SEGMENT@@QEAAJ_KPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z.c)
 *     ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00C16DC (-ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z.c)
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C00C5F90 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAE.c)
 *     ?AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAXPEAPEAX@Z @ 0x1C00C7CF0 (-AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAXPEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     ?SplitBlock@VIDMM_LINEAR_POOL@@IEAAJPEAU_VIDMM_POOL_BLOCK@@_K1PEAPEAU2@E@Z @ 0x1C007EBC8 (-SplitBlock@VIDMM_LINEAR_POOL@@IEAAJPEAU_VIDMM_POOL_BLOCK@@_K1PEAPEAU2@E@Z.c)
 *     ?FindBlockRun@VIDMM_LINEAR_POOL@@IEAAJ_KKE00W4_VIDMM_BLOCK_RUN_CONSTRAINT@@PEAPEAU_VIDMM_POOL_BLOCK@@2PEA_K3@Z @ 0x1C007EDF0 (-FindBlockRun@VIDMM_LINEAR_POOL@@IEAAJ_KKE00W4_VIDMM_BLOCK_RUN_CONSTRAINT@@PEAPEAU_VIDMM_POOL_BL.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C007F9F8 (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::Allocate(
        VIDMM_LINEAR_POOL *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        char a7,
        char a8,
        void *a9,
        union _LARGE_INTEGER *a10,
        void **a11)
{
  int BlockRun; // edi
  __int64 v13; // rsi
  __int64 v14; // r12
  __int64 v15; // rdi
  _QWORD *v16; // r15
  bool v17; // zf
  _QWORD *v18; // rdi
  __int64 *v19; // rsi
  _QWORD *v20; // rsi
  _QWORD *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct _VIDMM_POOL_BLOCK *v24; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rdx
  _QWORD *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rdx
  _QWORD *v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // rdx
  _QWORD *v48; // rcx
  unsigned __int8 v49; // [rsp+28h] [rbp-58h]
  struct _VIDMM_POOL_BLOCK *v50; // [rsp+68h] [rbp-18h] BYREF
  unsigned __int64 v51; // [rsp+70h] [rbp-10h]
  unsigned __int64 v52; // [rsp+78h] [rbp-8h]

  v50 = 0LL;
  v52 = 0LL;
  v51 = 0LL;
  BlockRun = -1073741811;
  if ( a8 )
    goto LABEL_58;
  v49 = a6;
  BlockRun = VIDMM_LINEAR_POOL::FindBlockRun(this);
  if ( BlockRun >= 0 )
    goto LABEL_3;
  if ( *((_DWORD *)this + 4) && !a7 )
  {
LABEL_58:
    if ( *((_QWORD *)this + 4) )
    {
      v49 = a6;
      BlockRun = VIDMM_LINEAR_POOL::FindBlockRun(this);
    }
    if ( BlockRun >= 0 )
      goto LABEL_3;
    v49 = a6;
    BlockRun = VIDMM_LINEAR_POOL::FindBlockRun(this);
  }
  if ( BlockRun < 0 )
    return (unsigned int)BlockRun;
LABEL_3:
  v13 = 24LL;
  v14 = *((_QWORD *)v50 + 3);
  if ( v14 != 24 )
  {
    do
    {
      v15 = v13 - 24;
      v16 = (_QWORD *)v13;
      v17 = *(_BYTE *)(v13 - 24 + 56) == 4;
      v13 = *(_QWORD *)v13;
      if ( v17 )
      {
        if ( g_IsInternalReleaseOrDbg )
          *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = v15;
        (*((void (__fastcall **)(_QWORD))this + 3))(*(_QWORD *)(v15 + 16));
        *(_QWORD *)(v15 + 16) = 0LL;
        *(_BYTE *)(v15 + 56) = 2;
        v29 = *((_DWORD *)this + 4);
        if ( !v29 )
        {
          v30 = WdLogNewEntry5_WdAssertion(this, v28);
          *(_QWORD *)(v30 + 24) = 464LL;
          WdLogEvent5_WdAssertion(v30);
          v29 = *((_DWORD *)this + 4);
        }
        *((_DWORD *)this + 4) = v29 - 1;
      }
      if ( v15 )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          v31 = WdLogNewEntry5_WdTrace(this);
          *(_QWORD *)(v31 + 24) = v15;
          *(_QWORD *)(v31 + 32) = 0LL;
        }
        MEMORY[8] += *(_QWORD *)(v15 + 8);
        v32 = *v16;
        if ( *(_QWORD **)(*v16 + 8LL) != v16 )
          goto LABEL_53;
        v33 = (_QWORD *)v16[1];
        if ( (_QWORD *)*v33 != v16 )
          goto LABEL_53;
        *v33 = v32;
        *(_QWORD *)(v32 + 8) = v33;
        v34 = (_QWORD *)(v15 + 40);
        *v16 = 0LL;
        *(_QWORD *)(v15 + 32) = 0LL;
        v35 = *(_QWORD *)(v15 + 40);
        if ( *(_QWORD *)(v35 + 8) != v15 + 40 )
          goto LABEL_53;
        v36 = *(_QWORD **)(v15 + 48);
        if ( (_QWORD *)*v36 != v34 )
          goto LABEL_53;
        *v36 = v35;
        *(_QWORD *)(v35 + 8) = v36;
        *v34 = 0LL;
        *(_QWORD *)(v15 + 48) = 0LL;
        VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)v15);
      }
    }
    while ( v13 != v14 );
  }
  v18 = (_QWORD *)MEMORY[0x20];
  if ( (VIDMM_LINEAR_POOL *)MEMORY[0x20] != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
  {
    v19 = (__int64 *)(MEMORY[0x20] - 24LL);
    if ( *(_BYTE *)(MEMORY[0x20] + 32LL) == 2 )
    {
      v26 = *v19;
      v27 = *v19 + *(_QWORD *)(MEMORY[0x20] - 16LL);
      if ( v27 == MEMORY[0] )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          v37 = WdLogNewEntry5_WdTrace(v27);
          *(_QWORD *)(v37 + 24) = 0LL;
          *(_QWORD *)(v37 + 32) = v19;
          v26 = *v19;
        }
        MEMORY[0] = v26;
        MEMORY[8] += *(v18 - 2);
        v38 = *v18;
        if ( *(_QWORD **)(*v18 + 8LL) != v18 )
          goto LABEL_53;
        v39 = (_QWORD *)v18[1];
        if ( (_QWORD *)*v39 != v18 )
          goto LABEL_53;
        *v39 = v38;
        *(_QWORD *)(v38 + 8) = v39;
        v40 = v18 + 2;
        *v18 = 0LL;
        v18[1] = 0LL;
        v41 = v18[2];
        if ( *(_QWORD **)(v41 + 8) != v18 + 2 )
          goto LABEL_53;
        v42 = (_QWORD *)v18[3];
        if ( (_QWORD *)*v42 != v40 )
          goto LABEL_53;
        *v42 = v41;
        *(_QWORD *)(v41 + 8) = v42;
        *v40 = 0LL;
        v18[3] = 0LL;
        VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)(v18 - 3));
      }
    }
  }
  v20 = (_QWORD *)MEMORY[0x18];
  if ( (VIDMM_LINEAR_POOL *)MEMORY[0x18] != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
  {
    v21 = (_QWORD *)(MEMORY[0x18] - 24LL);
    if ( *(_BYTE *)(MEMORY[0x18] - 24LL + 56) == 2 )
    {
      v22 = MEMORY[8];
      if ( *v21 == MEMORY[8] + MEMORY[0] )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          v43 = WdLogNewEntry5_WdTrace(MEMORY[8] + MEMORY[0]);
          *(_QWORD *)(v43 + 24) = 0LL;
          *(_QWORD *)(v43 + 32) = v21;
          v22 = MEMORY[8];
        }
        MEMORY[8] = v22 + v21[1];
        v44 = *v20;
        if ( *(_QWORD **)(*v20 + 8LL) == v20 )
        {
          v45 = (_QWORD *)v20[1];
          if ( (_QWORD *)*v45 == v20 )
          {
            *v45 = v44;
            *(_QWORD *)(v44 + 8) = v45;
            v46 = v21 + 5;
            *v20 = 0LL;
            v21[4] = 0LL;
            v47 = v21[5];
            if ( *(_QWORD **)(v47 + 8) == v21 + 5 )
            {
              v48 = (_QWORD *)v21[6];
              if ( (_QWORD *)*v48 == v46 )
              {
                *v48 = v47;
                *(_QWORD *)(v47 + 8) = v48;
                *v46 = 0LL;
                v21[6] = 0LL;
                VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)(v20 - 3));
                goto LABEL_12;
              }
            }
          }
        }
LABEL_53:
        __fastfail(3u);
      }
    }
  }
LABEL_12:
  BlockRun = VIDMM_LINEAR_POOL::SplitBlock(this, 0LL, v52, v51, &v50, v49);
  if ( BlockRun < 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v23);
  }
  else
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v23);
    v24 = v50;
    *((_QWORD *)v50 + 2) = a9;
    *a10 = *(union _LARGE_INTEGER *)v24;
    *a11 = v24;
  }
  return (unsigned int)BlockRun;
}
