/*
 * XREFs of ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0071020
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001BE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001C40 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0010570 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_KW4_VIDMM_OPERATION@@@Z @ 0x1C00106E0 (-VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_K.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0017FE8 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00182D8 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0070330 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0070390 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z @ 0x1C0070920 (-GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z.c)
 *     ?MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0071E24 (-MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?GetPriorityClass@VIDMM_SEGMENT@@SA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C007D9CC (-GetPriorityClass@VIDMM_SEGMENT@@SA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::EvictResource(
        VIDMM_MEMORY_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        char a3,
        __int64 a4,
        unsigned __int8 a5,
        struct _VIDMM_LOCAL_ALLOC *a6)
{
  struct _VIDMM_LOCAL_ALLOC *v9; // rsi
  int v10; // r12d
  __int64 v11; // r8
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  __int64 v15; // rdx
  unsigned int PriorityClass; // eax
  _QWORD **v17; // r14
  _QWORD **v18; // r11
  struct _VIDMM_PROCESS_COMMITMENT_INFO *CommitmentInformation; // rax
  __int64 v20; // r9
  __int64 v21; // r10
  __int64 v22; // rcx
  VIDMM_GLOBAL *v23; // rbp
  _QWORD *i; // rdi
  _QWORD *j; // rsi
  _QWORD *v26; // rax

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  if ( *((_DWORD *)a2 + 40) && g_IsInternalRelease )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v26[3] = 270LL;
    v26[4] = 9LL;
    v26[5] = 0LL;
    v26[6] = 0LL;
    v26[7] = 0LL;
    WdLogEvent5_WdCriticalError(v26);
  }
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 40));
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)a2 + 480, 0LL);
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
  VIDMM_MEMORY_SEGMENT::TransferToSystem(this, a2, a3, (PRKPROCESS **)v9, 0);
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
  v17 = (_QWORD **)((char *)a2 + 296);
  *((_QWORD *)this + PriorityClass + 41) += *((_QWORD *)a2 + 2);
  v18 = (_QWORD **)*((_QWORD *)a2 + 37);
  while ( v18 != v17 )
  {
    CommitmentInformation = VIDMM_PROCESS::GetCommitmentInformation(
                              (VIDMM_PROCESS *)*(v18 - 6),
                              *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 208LL),
                              *((_DWORD *)this + 5));
    VidMmRecordEviction(v20 + 7168, (__int64)CommitmentInformation + 56, *((_QWORD *)a2 + 2), *(_DWORD *)(v20 + 8));
    v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 - 48) + 16LL)
                                + 8LL * *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 208LL))
                    + 48LL)
        + 296LL * (*((_DWORD *)a2 + 19) & 0x3F);
    *(_QWORD *)(v22 + 232) -= *((_QWORD *)a2 + 2);
  }
  *(_QWORD *)(*((_QWORD *)this + 1) + 40176LL) -= *((_QWORD *)a2 + 2) >> 12;
  *((_DWORD *)a2 + 19) &= ~0x800000u;
  *((_DWORD *)a2 + 32) = 0;
  v23 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  if ( (*((_BYTE *)v23 + 40872) & 2) != 0 )
  {
    for ( i = *v17; i != v17; i = (_QWORD *)*i )
    {
      for ( j = (_QWORD *)*(i - 2); j != i - 2; j = (_QWORD *)*j )
        VIDMM_GLOBAL::MakeOneVirtualAddressRangeNotResident(v23, (struct VIDMM_ALLOC *)(j - 5));
    }
  }
  if ( !v10 )
  {
    *((_DWORD *)a2 + 21) &= ~8u;
    *((_BYTE *)a2 + 98) = 0;
  }
  ExReleasePushLockExclusiveEx((char *)a2 + 480, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40));
}
