/*
 * XREFs of ?ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0076DEC
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0066E20 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C0072EDC (-ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAE@Z.c)
 * Callees:
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C0077360 (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 *     ?ReclaimBlock@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C0077D8C (-ReclaimBlock@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 */

void __fastcall VIDMM_SEGMENT::ReclaimResource(VIDMM_LINEAR_POOL **this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v4; // rcx
  __int16 v5; // cx
  __int64 v6; // rbx
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v7; // r8d
  unsigned int v8; // edx
  struct VIDMM_PARTITION *v9; // r9
  VIDMM_GLOBAL *v10; // rcx
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rax
  char *v12; // rdi
  __int64 v13; // rcx
  char **v14; // rax
  char *v15; // rsi
  char **v16; // rax
  __int64 v17; // rcx

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  if ( ((_DWORD)this[10] & 0x1000) == 0 )
    VIDMM_LINEAR_POOL::ReclaimBlock(this[19], *((void **)a2 + 19));
  v4 = *((_QWORD *)a2 + 17);
  *((_DWORD *)a2 + 32) = 2;
  if ( (*(_DWORD *)(v4 + 80) & 0x1000) != 0 )
    v5 = 0;
  else
    v5 = *(_DWORD *)(v4 + 16) + 1;
  *(_WORD *)(*((_QWORD *)a2 + 63) + 6LL) = v5;
  *(_QWORD *)(*((_QWORD *)a2 + 63) + 32LL) = *((_QWORD *)a2 + 18) + *(_QWORD *)(*((_QWORD *)a2 + 17) + 24LL);
  v6 = *((_QWORD *)a2 + 2);
  v7 = *((_DWORD *)this + 119);
  v8 = *((_DWORD *)this + 95);
  v9 = (struct VIDMM_PARTITION *)**((_QWORD **)a2 + 61);
  v10 = this[1];
  this[27] = (VIDMM_LINEAR_POOL *)((char *)this[27] + v6);
  SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(v10, v8, v7, v9);
  *((_QWORD *)SegmentGroupState + 14) += v6;
  ++*((_DWORD *)this + 80);
  if ( ((_DWORD)this[10] & 0x1001) != 0 )
  {
    v17 = *((_QWORD *)a2 + 62);
    if ( !v17 || _InterlockedIncrement((volatile signed __int32 *)(v17 + 44)) == 1 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(**((_QWORD **)a2 + 61) + 48LL), *((_QWORD *)a2 + 2));
  }
  v12 = (char *)a2 + 384;
  v13 = *(_QWORD *)v12;
  if ( *(char **)(*(_QWORD *)v12 + 8LL) != v12
    || (v14 = (char **)*((_QWORD *)v12 + 1), *v14 != v12)
    || (*v14 = (char *)v13,
        v15 = (char *)(this + 20),
        *(_QWORD *)(v13 + 8) = v14,
        v16 = (char **)*((_QWORD *)v15 + 1),
        *v16 != v15) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v12 = v15;
  *((_QWORD *)v12 + 1) = v16;
  *v16 = v12;
  *((_QWORD *)v15 + 1) = v12;
}
