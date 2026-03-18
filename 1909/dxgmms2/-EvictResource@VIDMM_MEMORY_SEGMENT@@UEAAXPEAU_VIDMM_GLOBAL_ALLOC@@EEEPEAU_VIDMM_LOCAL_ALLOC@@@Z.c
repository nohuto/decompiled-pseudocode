/*
 * XREFs of ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005A870
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C000253C (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_KW4_VIDMM_OPERATION@@@Z @ 0x1C000269C (-VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_K.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B50 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002BD0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0017500 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C001782C (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     ?MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C005AB50 (-MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C005ABF8 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005B548 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z @ 0x1C006AF00 (-GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z.c)
 *     ?GetPriorityClass@VIDMM_SEGMENT@@SA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C0080F5C (-GetPriorityClass@VIDMM_SEGMENT@@SA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::EvictResource(
        VIDMM_MEMORY_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned __int8 a5,
        struct _VIDMM_LOCAL_ALLOC *a6)
{
  struct _VIDMM_LOCAL_ALLOC *v9; // rsi
  int v10; // r15d
  __int64 v11; // r8
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  __int64 v15; // rdx
  unsigned int PriorityClass; // eax
  char *v17; // r11
  char *v18; // rsi
  VIDMM_PROCESS *v19; // rcx
  struct _VIDMM_PROCESS_COMMITMENT_INFO *CommitmentInformation; // rax
  __int64 v21; // r9
  __int64 v22; // r10
  __int64 v23; // rcx
  _QWORD *v24; // rax

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  if ( *((_DWORD *)a2 + 40) && g_IsInternalRelease )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v24[3] = 270LL;
    v24[4] = 9LL;
    v24[5] = 0LL;
    v24[6] = 0LL;
    v24[7] = 0LL;
    WdLogEvent5_WdCriticalError(v24);
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)a2 + 480, 0LL);
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 40));
  v9 = a6;
  if ( !a6 )
    v9 = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a2 + 13);
  v10 = 0;
  if ( (unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(*((VIDMM_GLOBAL **)this + 1), a2) )
  {
    v10 = 1;
    if ( *((_BYTE *)a2 + 98) )
      *((_BYTE *)a2 + 97) = 0;
    a3 = 0;
  }
  VIDMM_MEMORY_SEGMENT::TransferToSystem(this, a2, a3, v9, 0);
  if ( *((_QWORD *)a2 + 56) )
  {
    VIDMM_CPU_HOST_APERTURE::UnmapRange(*((VIDMM_CPU_HOST_APERTURE **)this + 61), a2);
    VIDMM_CPU_HOST_APERTURE::ReleaseRange(*((VIDMM_CPU_HOST_APERTURE **)this + 61), a2);
  }
  v11 = *((_QWORD *)a2 + 19);
  if ( v11 )
  {
    (*(void (__fastcall **)(VIDMM_MEMORY_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, __int64, _QWORD))(*(_QWORD *)this
                                                                                                  + 24LL))(
      this,
      a2,
      v11,
      *((_QWORD *)a2 + 2));
    *((_QWORD *)a2 + 19) = 0LL;
  }
  v12 = (_QWORD *)((char *)a2 + 384);
  v13 = *((_QWORD *)a2 + 48);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v13 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 384)
    || (v14 = (_QWORD *)*((_QWORD *)a2 + 49), (_QWORD *)*v14 != v12) )
  {
    __fastfail(3u);
  }
  *v14 = v13;
  *(_QWORD *)(v13 + 8) = v14;
  *v12 = 0LL;
  *((_QWORD *)a2 + 49) = 0LL;
  if ( v9 && *((_QWORD *)v9 + 1) )
    VidMmRecordAlloc(*((VIDMM_GLOBAL **)this + 1), (__int64)a2, (__int64)v9, (__int64)this, *((_QWORD *)a2 + 2), 1);
  v15 = 1560LL * (*((_DWORD *)a2 + 19) & 0x3F);
  *(_QWORD *)(v15 + *(_QWORD *)(*((_QWORD *)this + 1) + 40184LL) + 1536) -= *((_QWORD *)a2 + 2);
  *((_QWORD *)this + 39) += *((_QWORD *)a2 + 2);
  PriorityClass = VIDMM_SEGMENT::GetPriorityClass(*((unsigned int *)a2 + 94));
  v17 = (char *)a2 + 296;
  *((_QWORD *)this + PriorityClass + 41) += *((_QWORD *)a2 + 2);
  v18 = (char *)*((_QWORD *)a2 + 37);
  while ( v18 != v17 )
  {
    v19 = (VIDMM_PROCESS *)*((_QWORD *)v18 - 6);
    v18 = *(char **)v18;
    CommitmentInformation = VIDMM_PROCESS::GetCommitmentInformation(
                              v19,
                              *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 208LL),
                              *((_DWORD *)this + 5));
    VidMmRecordEviction(v21 + 7168, (__int64)CommitmentInformation + 56, *((_QWORD *)a2 + 2), *(_DWORD *)(v21 + 8));
    v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 - 48) + 16LL)
                                + 8LL * *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 208LL))
                    + 48LL)
        + 296LL * (*((_DWORD *)a2 + 19) & 0x3F);
    *(_QWORD *)(v23 + 232) -= *((_QWORD *)a2 + 2);
  }
  *(_QWORD *)(*((_QWORD *)this + 1) + 40176LL) -= *((_QWORD *)a2 + 2) >> 12;
  *((_DWORD *)a2 + 19) &= ~0x800000u;
  *((_DWORD *)a2 + 32) = 0;
  VIDMM_GLOBAL::MakeVirtualAddressRangeNotResident(*((VIDMM_GLOBAL **)this + 1), a2, 0);
  if ( !v10 )
  {
    *((_DWORD *)a2 + 21) &= ~8u;
    *((_BYTE *)a2 + 98) = 0;
  }
  ExReleasePushLockExclusiveEx((char *)a2 + 480, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40));
}
