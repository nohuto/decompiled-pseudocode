/*
 * XREFs of ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006F510
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001BE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001C40 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0010570 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_KW4_VIDMM_OPERATION@@@Z @ 0x1C00106E0 (-VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_K.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppq @ 0x1C0026554 (McTemplateK0ppq.c)
 *     ?NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006E428 (-NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C006E674 (-ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006EF9C (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006F4CC (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006F8B0 (-MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0070160 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0070330 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z @ 0x1C0070920 (-GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0070FCC (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?GetPriorityClass@VIDMM_SEGMENT@@SA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C007D9CC (-GetPriorityClass@VIDMM_SEGMENT@@SA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C007E954 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?IoMmuUnmapAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00A9824 (-IoMmuUnmapAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_SYSMEM_SEGMENT::EvictResource(
        VIDMM_SYSMEM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        char a3,
        char a4,
        unsigned __int8 a5,
        struct _VIDMM_LOCAL_ALLOC *a6)
{
  struct _VIDMM_LOCAL_ALLOC *v10; // rsi
  VIDMM_GLOBAL *v11; // rcx
  VIDMM_GLOBAL *v12; // rcx
  __int64 v13; // rax
  bool v14; // bp
  __int64 v15; // rcx
  __int64 v16; // r8
  _QWORD *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rdx
  unsigned int PriorityClass; // eax
  _QWORD **v21; // rsi
  _QWORD **v22; // r10
  struct _VIDMM_PROCESS_COMMITMENT_INFO *CommitmentInformation; // rax
  __int64 v24; // r9
  __int64 v25; // rdx
  _QWORD *i; // r9
  __int64 v27; // rcx
  __int64 v28; // rcx
  const GUID *v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // r9
  signed __int32 v35[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v36; // [rsp+28h] [rbp-20h]

  if ( g_IsInternalReleaseOrDbg )
  {
    v31 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v31 + 24) = a2;
    *(_QWORD *)(v31 + 32) = *((int *)a2 + 87);
  }
  if ( *((_DWORD *)a2 + 40) && (*((_DWORD *)a2 + 19) & 0x20000000) == 0 && g_IsInternalRelease )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v32[3] = 270LL;
    v32[4] = 9LL;
    v32[5] = 0LL;
    v32[6] = 0LL;
    v32[7] = 0LL;
    WdLogEvent5_WdCriticalError(v32);
  }
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(*((VIDMM_GLOBAL **)this + 1), a2, 0);
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 40));
  v10 = a6;
  if ( !a6 )
    v10 = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a2 + 13);
  v11 = (VIDMM_GLOBAL *)*((unsigned int *)a2 + 19);
  if ( *(_DWORD *)(*((_QWORD *)this + 1) + 40128LL) )
  {
    if ( ((unsigned int)v11 & 0x8000000) != 0 )
      VIDMM_GLOBAL::NotifyContextAllocationEviction(v11, a2);
    if ( a3 )
      (*(void (__fastcall **)(VIDMM_SYSMEM_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *))(*(_QWORD *)this + 64LL))(this, a2);
    VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
    if ( a4 )
    {
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40));
      return;
    }
  }
  else
  {
    *((_DWORD *)a2 + 19) = (unsigned int)v11 | 0x100000;
  }
  VIDMM_GLOBAL::MakeVirtualAddressRangeNotResident(*((VIDMM_GLOBAL **)this + 1), a2, 1u);
  v12 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  if ( *((_BYTE *)v12 + 40139) )
    VIDMM_GLOBAL::IoMmuUnmapAllocation(v12, a2, v10);
  v13 = *((_QWORD *)a2 + 63);
  v14 = *(_WORD *)(v13 + 4) == 2;
  v15 = *(_DWORD *)v13 & 0x8000000;
  if ( (*(_DWORD *)v13 & 0x8000000) == 0 || (*((_DWORD *)a2 + 21) & 2) == 0 )
  {
    if ( (_DWORD)v15
      && (int)VIDMM_GLOBAL::ChargePinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1)) >= 0 )
    {
      *((_DWORD *)a2 + 21) |= 2u;
    }
    else
    {
      v14 = 1;
    }
  }
  if ( v14 )
  {
    if ( (**((_DWORD **)a2 + 63) & 0x4000) != 0 )
      *((_QWORD *)a2 + 46) = 0LL;
    VIDMM_SEGMENT::UnlockAllocationBackingStore(*((struct VIDMM_GLOBAL **)this + 1), a2, v10);
    if ( (*((_DWORD *)a2 + 21) & 2) != 0 )
    {
      VIDMM_GLOBAL::ReturnPinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1));
      *((_DWORD *)a2 + 21) &= ~2u;
    }
  }
  v16 = *((_QWORD *)a2 + 19);
  if ( v16 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdTrace(v15);
      v33[3] = *((_QWORD *)a2 + 19);
      v33[4] = *((int *)a2 + 37);
      v33[5] = *((unsigned int *)a2 + 36);
      v16 = *((_QWORD *)a2 + 19);
    }
    (*(void (__fastcall **)(VIDMM_SYSMEM_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, __int64, _QWORD))(*(_QWORD *)this
                                                                                                  + 24LL))(
      this,
      a2,
      v16,
      *((_QWORD *)a2 + 2));
    *((_QWORD *)a2 + 19) = 0LL;
  }
  else if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(v15);
  }
  v17 = (_QWORD *)((char *)a2 + 384);
  v18 = *((_QWORD *)a2 + 48);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v18 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 384)
    || (v19 = (_QWORD *)*((_QWORD *)a2 + 49), (_QWORD *)*v19 != v17) )
  {
    __fastfail(3u);
  }
  *v19 = v18;
  *(_QWORD *)(v18 + 8) = v19;
  *v17 = 0LL;
  *((_QWORD *)a2 + 49) = 0LL;
  if ( v10 && *((_QWORD *)v10 + 1) )
    VidMmRecordAlloc(*((VIDMM_GLOBAL **)this + 1), (__int64)a2, (__int64)v10, (__int64)this, *((_QWORD *)a2 + 2), 1);
  *(_QWORD *)(*((_QWORD *)a2 + 17) + 312LL) += *((_QWORD *)a2 + 2);
  PriorityClass = VIDMM_SEGMENT::GetPriorityClass(*((unsigned int *)a2 + 94));
  v21 = (_QWORD **)((char *)a2 + 296);
  *(_QWORD *)(*((_QWORD *)a2 + 17) + 8LL * PriorityClass + 328) += *((_QWORD *)a2 + 2);
  v22 = (_QWORD **)*((_QWORD *)a2 + 37);
  while ( v22 != v21 )
  {
    CommitmentInformation = VIDMM_PROCESS::GetCommitmentInformation(
                              (VIDMM_PROCESS *)*(v22 - 6),
                              *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 208LL),
                              *((_DWORD *)this + 5));
    VidMmRecordEviction(v24 + 7168, (__int64)CommitmentInformation + 56, *((_QWORD *)a2 + 2), *(_DWORD *)(v24 + 8));
  }
  *((_DWORD *)a2 + 19) &= ~0x800000u;
  *((_QWORD *)a2 + 17) = 0LL;
  *((_DWORD *)a2 + 32) = 0;
  if ( !a5 && (unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(*((VIDMM_GLOBAL **)this + 1), a2) )
  {
    VIDMM_GLOBAL::ResetBackingStore(*((VIDMM_GLOBAL **)this + 1), a2);
    *((_DWORD *)a2 + 21) |= 0x10u;
    *((_QWORD *)a2 + 55) = *(_QWORD *)(*((_QWORD *)this + 1) + 4608LL);
  }
  v25 = 1560LL * (*((_DWORD *)a2 + 19) & 0x3F);
  *(_QWORD *)(v25 + *(_QWORD *)(*((_QWORD *)this + 1) + 40184LL) + 1544) -= *((_QWORD *)a2 + 2);
  for ( i = *v21; i != v21; i = (_QWORD *)*i )
  {
    v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(i - 6) + 16LL)
                                + 8LL * *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 208LL))
                    + 48LL)
        + 296LL * (*((_DWORD *)a2 + 19) & 0x3F);
    *(_QWORD *)(v27 + 240) -= *((_QWORD *)a2 + 2);
  }
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40));
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
  {
    v34 = *((_QWORD *)this + 1);
    LODWORD(v36) = *((_DWORD *)this + 4) + 1;
    McTemplateK0ppq(v28, &EventPagingOpSysmemUncommit, v29, *(_QWORD *)(v34 + 24), a2, v36);
  }
  v30 = *((_QWORD *)this + 1);
  _InterlockedOr(v35, 0);
  ++*(_QWORD *)(v30 + 40);
}
