/*
 * XREFs of ?Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z @ 0x1C00BAB60
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ?GetMoveableResourceCallback@VIDMM_GLOBAL@@QEAAP6A_NPEAU_VIDMM_GLOBAL_ALLOC@@@ZXZ @ 0x1C00A8F78 (-GetMoveableResourceCallback@VIDMM_GLOBAL@@QEAAP6A_NPEAU_VIDMM_GLOBAL_ALLOC@@@ZXZ.c)
 *     ?MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z @ 0x1C00BB09C (-MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z.c)
 *     ?DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z @ 0x1C00C5098 (-DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1C00C54AC (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 *     ?PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z @ 0x1C00C60B8 (-PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z.c)
 *     ?RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6A_NPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z@Z @ 0x1C00C6444 (-RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::Defragment(VIDMM_MEMORY_SEGMENT *this, unsigned __int64 a2, unsigned __int64 a3)
{
  VIDMM_GLOBAL *v6; // r9
  unsigned __int64 v7; // rdi
  __int64 v8; // r9
  VIDMM_LINEAR_POOL *v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r14
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  _QWORD v16[20]; // [rsp+50h] [rbp-49h] BYREF
  char v17; // [rsp+100h] [rbp+67h] BYREF
  char v18; // [rsp+108h] [rbp+6Fh] BYREF

  memset(v16, 0, 0x78uLL);
  v6 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  LODWORD(v16[2]) = 0;
  v16[3] = VIDMM_SEGMENT::UpdatePendingResourceReserveCB;
  v16[4] = VIDMM_GLOBAL::GetMoveableResourceCallback(v6);
  v7 = a2;
  v16[5] = VIDMM_SEGMENT::IsNonOverlappingResourceCB;
  v16[6] = VIDMM_SEGMENT::IsDisplayingResourceCB;
  v16[7] = VIDMM_SEGMENT::GetAlignmentCB;
  LODWORD(v16[8]) = LODWORD(v16[8]) ^ (LOBYTE(v16[8]) ^ (unsigned __int8)(*(_DWORD *)(v8 + 7040) >> 17)) & 2 | 1;
  if ( a2 != a3 )
  {
    while ( 1 )
    {
      v9 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 19);
      v16[0] = v7;
      v16[1] = a3;
      VIDMM_LINEAR_POOL::DefragmentRange(v9, (struct VIDMM_DEFRAGMENT_ARGS *)v16);
      if ( *((_BYTE *)this + 472) )
      {
        v10 = VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
                *((_QWORD *)this + 19),
                v7,
                v16[1],
                0,
                (__int64)VIDMM_SEGMENT::MoveOneResource,
                (__int64)this,
                0LL,
                (__int64)&v18,
                (__int64)&v17);
        v13 = v10;
        *((_BYTE *)this + 472) = 0;
        if ( v10 < 0 )
          break;
      }
      v7 = v16[10];
      if ( v16[11] )
      {
        v14 = VIDMM_MEMORY_SEGMENT::MoveDisplayingResource(
                this,
                a2,
                a3,
                (const struct VIDMM_DISPLAYING_BLOCK *)&v16[11]);
        v16[11] = 0LL;
        v7 = v14;
      }
      if ( v7 == a3 )
        goto LABEL_9;
    }
    v15 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v15 + 24) = v13;
    WdLogEvent5_WdAssertion(v15);
    VIDMM_LINEAR_POOL::RollbackPlacementOfPendingResources(*((_QWORD *)this + 19), v7, a3, 0LL);
  }
LABEL_9:
  VIDMM_LINEAR_POOL::PatchGapsWithFreeBlocks(*((VIDMM_LINEAR_POOL **)this + 19), 0LL, *((_QWORD *)this + 6));
}
