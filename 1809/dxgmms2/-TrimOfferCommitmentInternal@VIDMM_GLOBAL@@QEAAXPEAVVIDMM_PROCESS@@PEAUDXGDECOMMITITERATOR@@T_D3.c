/*
 * XREFs of ?TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x1C00AC908
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0071660 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00029E0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002A3C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0010A40 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A7930 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C00A9880 (-IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::TrimOfferCommitmentInternal(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct DXGDECOMMITITERATOR *a3,
        union _D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  char v6; // bl
  unsigned __int64 v7; // r15
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rdi
  _QWORD *v14; // rax
  _QWORD *v15; // rdi
  char v16; // bl
  bool v17; // r14
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // [rsp+20h] [rbp-58h]
  _BYTE v24[80]; // [rsp+28h] [rbp-50h] BYREF
  struct _VIDMM_GLOBAL_ALLOC *v25; // [rsp+80h] [rbp+8h]
  _QWORD *v26; // [rsp+88h] [rbp+10h]

  v6 = (char)a4.0;
  v7 = a5;
  v11 = 0LL;
  v12 = WdLogNewEntry5_WdEvent(this, a2);
  v23 = v6 & 1;
  *(_QWORD *)(v12 + 24) = v23;
  WdLogEvent5_WdEvent(v12);
  if ( (v6 & 1) != 0 )
  {
    v7 = (unsigned int)(dword_1C004D428 << 20);
    if ( a5 < v7 )
      v7 = a5;
  }
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v24, (VIDMM_GLOBAL *)((char *)this + 40968));
  v13 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 208LL));
  if ( v13 && *(_QWORD *)(v13 + 512) == *(_QWORD *)a3 )
  {
    DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)this + 39952));
    v14 = (_QWORD *)(v13 + 416);
    v15 = (_QWORD *)*((_QWORD *)a3 + 3);
    v26 = v14;
    if ( v15 != v14 )
    {
      v16 = (v6 & 2) != 0;
      do
      {
        v25 = (struct _VIDMM_GLOBAL_ALLOC *)(v15 - 52);
        *((_QWORD *)a3 + 3) = *v15;
        v17 = 0;
        if ( VIDMM_GLOBAL::IsAllocationDecommitCandidate(this, (struct _VIDMM_GLOBAL_ALLOC *)(v15 - 52), v16) )
        {
          *((_QWORD *)this + 5182) = v15 - 52;
          v18 = *v15;
          if ( *(_QWORD **)(*v15 + 8LL) != v15 || (v19 = (_QWORD *)v15[1], (_QWORD *)*v19 != v15) )
            __fastfail(3u);
          *v19 = v18;
          *(_QWORD *)(v18 + 8) = v19;
          *v15 = 0LL;
          *((_QWORD *)this + 4995) = 0LL;
          ExReleasePushLockExclusiveEx((char *)this + 39952, 0LL);
          KeLeaveCriticalRegion();
          if ( VIDMM_GLOBAL::DecommitGlobalAllocation(this, (DXGFASTMUTEX **)v25) )
          {
            v11 += *((_QWORD *)v25 + 1);
            v17 = v11 >= v7;
          }
          DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)this + 39952));
          *((_QWORD *)this + 5182) = 0LL;
          if ( v17 )
            break;
        }
        v15 = (_QWORD *)*((_QWORD *)a3 + 3);
      }
      while ( v15 != v26 );
    }
    *((_QWORD *)this + 4995) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 39952, 0LL);
    KeLeaveCriticalRegion();
    *a6 = v11;
    v22 = (_QWORD *)WdLogNewEntry5_WdEvent(v21, v20);
    v22[3] = a5;
    v22[5] = v23;
    v22[4] = v11;
    WdLogEvent5_WdEvent(v22);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v24);
}
