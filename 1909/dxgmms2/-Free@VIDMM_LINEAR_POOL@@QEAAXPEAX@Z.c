/*
 * XREFs of ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C007F7F0
 * Callers:
 *     ?ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C007F6C0 (-ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z.c)
 *     ?ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00BC590 (-ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapPagesFromAperture@VIDMM_APERTURE_SEGMENT@@UEAAXKPEAU_MDL@@PEAX_K@Z @ 0x1C00BCBF0 (-UnmapPagesFromAperture@VIDMM_APERTURE_SEGMENT@@UEAAXKPEAU_MDL@@PEAX_K@Z.c)
 *     ?ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z @ 0x1C00BCE70 (-ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z.c)
 *     ?FreeScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAXPEAX@Z @ 0x1C00BD870 (-FreeScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAXPEAX@Z.c)
 *     ?FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00BF8D8 (-FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C00C5F90 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAE.c)
 *     ?FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00C67D4 (-FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ??1VIDMM_LINEAR_POOL@@QEAA@XZ @ 0x1C00C7BF0 (--1VIDMM_LINEAR_POOL@@QEAA@XZ.c)
 *     ?FreeMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1C00C855C (-FreeMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z.c)
 * Callees:
 *     ?FindAdjacentBlocksOnFreeList@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@PEAPEAU2@1@Z @ 0x1C0060AEC (-FindAdjacentBlocksOnFreeList@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@PEAPEAU2@1@Z.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C007F9F8 (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 */

void __fastcall VIDMM_LINEAR_POOL::Free(VIDMM_LINEAR_POOL *this, struct _VIDMM_POOL_BLOCK *a2)
{
  struct _VIDMM_POOL_BLOCK *v2; // r14
  struct _VIDMM_POOL_BLOCK *v3; // rdi
  VIDMM_LINEAR_POOL *v6; // rax
  char *v7; // rbx
  char *v8; // rax
  char **v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdx
  struct _VIDMM_POOL_BLOCK **v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  struct _VIDMM_POOL_BLOCK **v17; // rcx
  struct _VIDMM_POOL_BLOCK *v18; // rdx
  char *v19; // r14
  __int64 v20; // rax
  __int64 v21; // rdx
  struct _VIDMM_POOL_BLOCK **v22; // rcx
  __int64 v23; // rdx
  struct _VIDMM_POOL_BLOCK **v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  char **v27; // rcx
  char **v28; // rax
  char *v29; // rdi
  char **v30; // rax
  __int64 v31; // rcx
  struct _VIDMM_POOL_BLOCK *v32; // [rsp+48h] [rbp+10h] BYREF
  struct _VIDMM_POOL_BLOCK *v33; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  if ( *((_BYTE *)a2 + 56) == 4 )
  {
    v6 = (VIDMM_LINEAR_POOL *)*((_QWORD *)a2 + 4);
    if ( v6 != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
      v2 = (VIDMM_LINEAR_POOL *)((char *)v6 - 24);
    v7 = (char *)a2 + 24;
    v8 = (char *)*((_QWORD *)a2 + 3);
    if ( v8 != (char *)this + 40 )
      v3 = (struct _VIDMM_POOL_BLOCK *)(v8 - 24);
    if ( *((char **)v8 + 1) != v7 )
      goto LABEL_37;
    v9 = (char **)*((_QWORD *)a2 + 4);
    if ( *v9 != v7 )
      goto LABEL_37;
    *v9 = v8;
    *((_QWORD *)v8 + 1) = v9;
    *(_QWORD *)v7 = 0LL;
    *((_QWORD *)a2 + 4) = 0LL;
    v10 = *((_DWORD *)this + 4);
    if ( !v10 )
    {
      v25 = WdLogNewEntry5_WdAssertion(v9, a2);
      *(_QWORD *)(v25 + 24) = 1574LL;
      WdLogEvent5_WdAssertion(v25);
      v10 = *((_DWORD *)this + 4);
    }
    *((_DWORD *)this + 4) = v10 - 1;
  }
  else
  {
    v7 = (char *)a2 + 24;
    v26 = *((_QWORD *)a2 + 3);
    if ( *(struct _VIDMM_POOL_BLOCK **)(v26 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 24) )
      goto LABEL_37;
    v27 = (char **)*((_QWORD *)a2 + 4);
    if ( *v27 != v7 )
      goto LABEL_37;
    *v27 = (char *)v26;
    *(_QWORD *)(v26 + 8) = v27;
    *(_QWORD *)v7 = 0LL;
    *((_QWORD *)a2 + 4) = 0LL;
    VIDMM_LINEAR_POOL::FindAdjacentBlocksOnFreeList(this, a2, &v32, &v33);
    v2 = v32;
    v3 = v33;
  }
  if ( v2 && (v11 = *((_QWORD *)v2 + 1), v11 + *(_QWORD *)v2 == *(_QWORD *)a2) && *((_BYTE *)v2 + 56) == 2 )
  {
    *((_QWORD *)v2 + 1) = v11 + *((_QWORD *)a2 + 1);
    v12 = *((_QWORD *)a2 + 5);
    if ( *(struct _VIDMM_POOL_BLOCK **)(v12 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 40) )
      goto LABEL_37;
    v13 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)a2 + 6);
    if ( *v13 != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 40) )
      goto LABEL_37;
    *v13 = (struct _VIDMM_POOL_BLOCK *)v12;
    *(_QWORD *)(v12 + 8) = v13;
    VIDMM_LINEAR_POOL::FreeBlock(this, a2);
    if ( v3 )
    {
      v14 = *((_QWORD *)v2 + 1);
      if ( *(_QWORD *)v3 == v14 + *(_QWORD *)v2 && *((_BYTE *)v3 + 56) == 2 )
      {
        *((_QWORD *)v2 + 1) = v14 + *((_QWORD *)v3 + 1);
        v21 = *((_QWORD *)v3 + 3);
        if ( *(struct _VIDMM_POOL_BLOCK **)(v21 + 8) == (struct _VIDMM_POOL_BLOCK *)((char *)v3 + 24) )
        {
          v22 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)v3 + 4);
          if ( *v22 == (struct _VIDMM_POOL_BLOCK *)((char *)v3 + 24) )
          {
            *v22 = (struct _VIDMM_POOL_BLOCK *)v21;
            *(_QWORD *)(v21 + 8) = v22;
            v23 = *((_QWORD *)v3 + 5);
            if ( *(struct _VIDMM_POOL_BLOCK **)(v23 + 8) == (struct _VIDMM_POOL_BLOCK *)((char *)v3 + 40) )
            {
              v24 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)v3 + 6);
              if ( *v24 == (struct _VIDMM_POOL_BLOCK *)((char *)v3 + 40) )
              {
                *v24 = (struct _VIDMM_POOL_BLOCK *)v23;
                *(_QWORD *)(v23 + 8) = v24;
                v18 = v3;
                goto LABEL_27;
              }
            }
          }
        }
        goto LABEL_37;
      }
    }
  }
  else
  {
    if ( v3 )
    {
      v15 = *((_QWORD *)a2 + 1);
      if ( *(_QWORD *)v3 == v15 + *(_QWORD *)a2 && *((_BYTE *)v3 + 56) == 2 )
      {
        *((_QWORD *)v3 + 1) += v15;
        *(_QWORD *)v3 = *(_QWORD *)a2;
        v16 = *((_QWORD *)a2 + 5);
        if ( *(struct _VIDMM_POOL_BLOCK **)(v16 + 8) == (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 40) )
        {
          v17 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)a2 + 6);
          if ( *v17 == (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 40) )
          {
            *v17 = (struct _VIDMM_POOL_BLOCK *)v16;
            *(_QWORD *)(v16 + 8) = v17;
            v18 = a2;
LABEL_27:
            VIDMM_LINEAR_POOL::FreeBlock(this, v18);
            return;
          }
        }
LABEL_37:
        __fastfail(3u);
      }
    }
    *((_QWORD *)a2 + 2) = 0LL;
    *((_BYTE *)a2 + 56) = 2;
    if ( v2 )
    {
      v19 = (char *)v2 + 24;
      v20 = *(_QWORD *)v19;
      if ( *(char **)(*(_QWORD *)v19 + 8LL) != v19 )
        goto LABEL_37;
      *(_QWORD *)v7 = v20;
      *((_QWORD *)v7 + 1) = v19;
      *(_QWORD *)(v20 + 8) = v7;
      *(_QWORD *)v19 = v7;
    }
    else if ( v3 )
    {
      v28 = (char **)*((_QWORD *)v3 + 4);
      v29 = (char *)v3 + 24;
      if ( *v28 != v29 )
        goto LABEL_37;
      *(_QWORD *)v7 = v29;
      *((_QWORD *)v7 + 1) = v28;
      *v28 = v7;
      *((_QWORD *)v29 + 1) = v7;
    }
    else
    {
      v30 = (char **)((char *)this + 40);
      v31 = *((_QWORD *)this + 5);
      if ( *(VIDMM_LINEAR_POOL **)(v31 + 8) != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
        goto LABEL_37;
      *(_QWORD *)v7 = v31;
      *((_QWORD *)v7 + 1) = v30;
      *(_QWORD *)(v31 + 8) = v7;
      *v30 = v7;
    }
  }
}
