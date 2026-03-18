/*
 * XREFs of ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00C1A3C
 * Callers:
 *     ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1C007D400 (-ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@.c)
 * Callees:
 *     memset @ 0x1C0018980 (memset.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C007D888 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 *     ?EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00AB918 (-EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?GetMoveableResourceCallback@VIDMM_GLOBAL@@QEAAP6A_NPEAU_VIDMM_GLOBAL_ALLOC@@@ZXZ @ 0x1C00AC694 (-GetMoveableResourceCallback@VIDMM_GLOBAL@@QEAAP6A_NPEAU_VIDMM_GLOBAL_ALLOC@@@ZXZ.c)
 *     ?AttemptToGrowVPRForAllocation@VIDMM_SEGMENT@@QEAAJ_KPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00BEE70 (-AttemptToGrowVPRForAllocation@VIDMM_SEGMENT@@QEAAJ_KPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z.c)
 *     ?TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z @ 0x1C00C25F4 (-TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z.c)
 *     ?DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z @ 0x1C00C80E8 (-DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z.c)
 *     ?RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6A_NPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z@Z @ 0x1C00C94A8 (-RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6.c)
 */

__int64 __fastcall VIDMM_SEGMENT::ReserveVPRResource(
        VIDMM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        char a3,
        char a4)
{
  unsigned __int64 v4; // r15
  unsigned __int64 v6; // r12
  __int64 v9; // rsi
  VIDMM_GLOBAL *v10; // rcx
  VIDMM_GLOBAL *v11; // rcx
  bool (__fastcall *v12)(struct _VIDMM_GLOBAL_ALLOC *); // rax
  VIDMM_LINEAR_POOL *v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  VIDMM_GLOBAL *v18; // r9
  VIDMM_GLOBAL *v19; // rcx
  bool (__fastcall *MoveableResourceCallback)(struct _VIDMM_GLOBAL_ALLOC *); // rax
  VIDMM_LINEAR_POOL *v21; // rcx
  int v22; // eax
  int v23; // eax
  __int64 v24; // rax
  unsigned __int64 v26; // [rsp+60h] [rbp-69h]
  _QWORD v27[22]; // [rsp+70h] [rbp-59h] BYREF
  char v28; // [rsp+130h] [rbp+67h]
  unsigned int v29; // [rsp+138h] [rbp+6Fh]

  v4 = *((_QWORD *)this + 52);
  v6 = *((_QWORD *)this + 53);
  v29 = *((_DWORD *)a2 + 8);
  v26 = *((_QWORD *)a2 + 2);
  LODWORD(v9) = VIDMM_LINEAR_POOL::Allocate(
                  *((VIDMM_LINEAR_POOL **)this + 19),
                  v26,
                  v29,
                  0LL,
                  v4,
                  v6,
                  a3,
                  a4,
                  a2,
                  (union _LARGE_INTEGER *)a2 + 27,
                  (void **)a2 + 26);
  if ( (int)v9 < 0 )
  {
    VIDMM_SEGMENT::TrimOfferLists(this, 1LL, v26, *((unsigned int *)a2 + 8));
    LODWORD(v9) = VIDMM_LINEAR_POOL::Allocate(
                    *((VIDMM_LINEAR_POOL **)this + 19),
                    v26,
                    v29,
                    0LL,
                    v4,
                    v6,
                    a3,
                    a4,
                    a2,
                    (union _LARGE_INTEGER *)a2 + 27,
                    (void **)a2 + 26);
    if ( (int)v9 < 0 )
    {
      if ( *((_QWORD *)this + 55) + v26 < (unsigned __int64)(unsigned int)dword_1C004E438
                                        * *((_QWORD *)this + 54)
                                        / (unsigned int)dword_1C004E43C )
      {
        v17 = v4;
        v18 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
        v28 = 0;
        if ( (*(_DWORD *)(352LL * *((unsigned int *)this + 95) + *(_QWORD *)(*((_QWORD *)v18 + 3) + 2440LL) + 16) & 4) != 0 )
        {
          VIDMM_GLOBAL::EnsureFlipQueuesSuspendedForMove(v18);
          memset(v27, 0, 0x78uLL);
          v19 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
          v27[3] = VIDMM_SEGMENT::UpdatePendingResourceReserveCB;
          v27[0] = v4;
          v27[1] = v6;
          LODWORD(v27[2]) = 1;
          MoveableResourceCallback = VIDMM_GLOBAL::GetMoveableResourceCallback(v19);
          v21 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 19);
          LODWORD(v27[8]) |= 4u;
          v27[4] = MoveableResourceCallback;
          v27[5] = VIDMM_SEGMENT::IsNonOverlappingResourceCB;
          v27[7] = VIDMM_SEGMENT::GetAlignmentCB;
          VIDMM_LINEAR_POOL::DefragmentRange(v21, (struct VIDMM_DEFRAGMENT_ARGS *)v27);
          v22 = VIDMM_LINEAR_POOL::Allocate(
                  *((VIDMM_LINEAR_POOL **)this + 19),
                  v26,
                  v29,
                  0LL,
                  v4,
                  v6,
                  a3,
                  a4,
                  a2,
                  (union _LARGE_INTEGER *)a2 + 27,
                  (void **)a2 + 26);
          v17 = v27[9];
          LODWORD(v9) = v22;
          v28 = 1;
        }
        if ( (int)v9 < 0 )
        {
          v23 = VIDMM_SEGMENT::AttemptToGrowVPRForAllocation(this, v17, a2, a3, a4);
          v9 = v23;
          if ( v23 < 0 )
          {
            if ( v28 )
              goto LABEL_13;
          }
        }
      }
      else
      {
        LODWORD(v9) = VIDMM_SEGMENT::AttemptToGrowVPRForAllocation(this, *((_QWORD *)this + 52), a2, a3, a4);
        if ( (int)v9 < 0 )
        {
          v10 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
          if ( (*(_DWORD *)(352LL * *((unsigned int *)this + 95) + *(_QWORD *)(*((_QWORD *)v10 + 3) + 2440LL) + 16) & 4) != 0 )
          {
            VIDMM_GLOBAL::EnsureFlipQueuesSuspendedForMove(v10);
            memset(v27, 0, 0x78uLL);
            v11 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
            v27[3] = VIDMM_SEGMENT::UpdatePendingResourceReserveCB;
            v27[0] = v4;
            v27[1] = v6;
            LODWORD(v27[2]) = 1;
            v12 = VIDMM_GLOBAL::GetMoveableResourceCallback(v11);
            v13 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 19);
            LODWORD(v27[8]) |= 4u;
            v27[4] = v12;
            v27[5] = VIDMM_SEGMENT::IsNonOverlappingResourceCB;
            v27[7] = VIDMM_SEGMENT::GetAlignmentCB;
            VIDMM_LINEAR_POOL::DefragmentRange(v13, (struct VIDMM_DEFRAGMENT_ARGS *)v27);
            v14 = VIDMM_LINEAR_POOL::Allocate(
                    *((VIDMM_LINEAR_POOL **)this + 19),
                    v26,
                    v29,
                    0LL,
                    v4,
                    v6,
                    a3,
                    a4,
                    a2,
                    (union _LARGE_INTEGER *)a2 + 27,
                    (void **)a2 + 26);
            v9 = v14;
            if ( v14 < 0 )
            {
LABEL_13:
              v24 = WdLogNewEntry5_WdWarning(v16, v15);
              *(_QWORD *)(v24 + 24) = v9;
              WdLogEvent5_WdWarning(v24);
              VIDMM_LINEAR_POOL::RollbackPlacementOfPendingResources(*((_QWORD *)this + 19), v4, v6, 1LL);
            }
          }
        }
      }
    }
  }
  return (unsigned int)v9;
}
