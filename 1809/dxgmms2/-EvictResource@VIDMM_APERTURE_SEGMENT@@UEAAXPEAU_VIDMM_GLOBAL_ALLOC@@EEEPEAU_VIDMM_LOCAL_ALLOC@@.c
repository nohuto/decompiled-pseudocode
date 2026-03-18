/*
 * XREFs of ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00B8CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001BE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001C40 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0010570 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_KW4_VIDMM_OPERATION@@@Z @ 0x1C00106E0 (-VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_K.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     ?NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006E428 (-NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C006E674 (-ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006EF9C (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006F4CC (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006F8B0 (-MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006FCE8 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0070160 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0070330 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z @ 0x1C0070920 (-GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0070FCC (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0077F68 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?GetPriorityClass@VIDMM_SEGMENT@@SA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C007D9CC (-GetPriorityClass@VIDMM_SEGMENT@@SA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C007E954 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?IoMmuUnmapAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00A9824 (-IoMmuUnmapAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::EvictResource(
        VIDMM_APERTURE_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        char a3,
        char a4,
        unsigned __int8 a5,
        struct _VIDMM_LOCAL_ALLOC *a6)
{
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // r8
  struct _VIDMM_LOCAL_ALLOC *v13; // rbp
  VIDMM_GLOBAL *v14; // rcx
  __int64 v15; // r9
  VIDMM_GLOBAL *v16; // rdi
  __int64 v17; // rbx
  struct _MDL *FullMDL; // rax
  VIDMM_GLOBAL *v19; // rcx
  _DWORD *v20; // rax
  _DWORD *v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // r8
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rdx
  unsigned int PriorityClass; // eax
  _QWORD **v29; // rdi
  _QWORD **v30; // r10
  struct _VIDMM_PROCESS_COMMITMENT_INFO *CommitmentInformation; // rax
  __int64 v32; // r9
  __int64 v33; // rdx
  _QWORD *i; // r9
  __int64 v35; // rcx
  __int64 v36; // rcx
  signed __int32 v37[8]; // [rsp+0h] [rbp-58h] BYREF

  if ( g_IsInternalReleaseOrDbg )
  {
    v10 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v10 + 24) = a2;
    *(_QWORD *)(v10 + 32) = *((int *)a2 + 87);
  }
  if ( *((_DWORD *)a2 + 40) && (*((_DWORD *)a2 + 19) & 0x20000000) == 0 && g_IsInternalRelease )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v11[3] = 270LL;
    v11[4] = 9LL;
    v11[5] = 0LL;
    v11[6] = 0LL;
    v11[7] = 0LL;
    WdLogEvent5_WdCriticalError(v11);
  }
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(*((VIDMM_GLOBAL **)this + 1), a2, 0);
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 40));
  v13 = a6;
  if ( !a6 )
    v13 = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a2 + 13);
  v14 = (VIDMM_GLOBAL *)*((unsigned int *)a2 + 19);
  if ( ((unsigned int)v14 & 0x100000) != 0 || (*((_DWORD *)a2 + 20) & 0x400) != 0 )
    a3 = 0;
  v15 = *((_QWORD *)this + 1);
  if ( *(_DWORD *)(v15 + 40128) )
  {
    if ( ((unsigned int)v14 & 0x8000000) != 0 )
    {
      VIDMM_GLOBAL::NotifyContextAllocationEviction(v14, a2);
      v15 = *((_QWORD *)this + 1);
    }
    if ( (**((_DWORD **)a2 + 63) & 0x10000) != 0 )
      VIDMM_GLOBAL::NotifyResidency((ADAPTER_RENDER **)v15, a2, 0LL);
    if ( a3 )
      (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, __int64, __int64))(*(_QWORD *)this + 64LL))(
        this,
        a2,
        v12,
        v15);
    if ( (*((_DWORD *)a2 + 19) & 0x400000) == 0 )
    {
      v16 = *(VIDMM_GLOBAL **)this;
      v17 = *((_QWORD *)a2 + 18) / 4096LL;
      FullMDL = VidMmGetFullMDL(a2, v13);
      (*((void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64, __int64, struct _MDL *, _DWORD))v16
       + 28))(
        this,
        a2,
        *((_QWORD *)a2 + 1) >> 12,
        v17,
        v17,
        FullMDL,
        0);
    }
    VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
    if ( a4 )
    {
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40));
      return;
    }
  }
  else
  {
    *((_DWORD *)a2 + 19) = (unsigned int)v14 | 0x100000;
  }
  VIDMM_GLOBAL::MakeVirtualAddressRangeNotResident(*((VIDMM_GLOBAL **)this + 1), a2, 1);
  v19 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  if ( *((_BYTE *)v19 + 40139) )
    VIDMM_GLOBAL::IoMmuUnmapAllocation(v19, a2, v13);
  v20 = (_DWORD *)*((_QWORD *)a2 + 63);
  v21 = (_DWORD *)((char *)a2 + 84);
  v22 = *v20 & 0x8000000;
  if ( (*v20 & 0x8000000) == 0 || (*v21 & 2) == 0 )
  {
    if ( (_DWORD)v22
      && (int)VIDMM_GLOBAL::ChargePinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1)) >= 0 )
    {
      *v21 |= 2u;
    }
    else
    {
      if ( (**((_DWORD **)a2 + 63) & 0x4000) != 0 )
        *((_QWORD *)a2 + 46) = 0LL;
      VIDMM_SEGMENT::UnlockAllocationBackingStore(*((struct VIDMM_GLOBAL **)this + 1), a2, v13);
      v21 = (_DWORD *)((char *)a2 + 84);
      if ( (*((_DWORD *)a2 + 21) & 2) != 0 )
      {
        VIDMM_GLOBAL::ReturnPinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1));
        *v21 &= ~2u;
      }
    }
  }
  v23 = *((_QWORD *)a2 + 19);
  if ( v23 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v22);
      v24[3] = *((_QWORD *)a2 + 19);
      v24[4] = *((int *)a2 + 37);
      v24[5] = *((unsigned int *)a2 + 36);
      v23 = *((_QWORD *)a2 + 19);
    }
    (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, __int64, _QWORD))(*(_QWORD *)this + 24LL))(
      this,
      a2,
      v23,
      *((_QWORD *)a2 + 2));
    *((_QWORD *)a2 + 19) = 0LL;
  }
  else if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(v22);
  }
  v25 = (_QWORD *)((char *)a2 + 384);
  v26 = *((_QWORD *)a2 + 48);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v26 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 384)
    || (v27 = (_QWORD *)*((_QWORD *)a2 + 49), (_QWORD *)*v27 != v25) )
  {
    __fastfail(3u);
  }
  *v27 = v26;
  *(_QWORD *)(v26 + 8) = v27;
  *v25 = 0LL;
  *((_QWORD *)a2 + 49) = 0LL;
  if ( v13 && *((_QWORD *)v13 + 1) && (*v21 & 4) == 0 )
    VidMmRecordAlloc(*((VIDMM_GLOBAL **)this + 1), (__int64)a2, (__int64)v13, (__int64)this, *((_QWORD *)a2 + 2), 1);
  *(_QWORD *)(*((_QWORD *)a2 + 17) + 312LL) += *((_QWORD *)a2 + 2);
  PriorityClass = VIDMM_SEGMENT::GetPriorityClass(*((_DWORD *)a2 + 94));
  v29 = (_QWORD **)((char *)a2 + 296);
  *(_QWORD *)(*((_QWORD *)a2 + 17) + 8LL * PriorityClass + 328) += *((_QWORD *)a2 + 2);
  v30 = (_QWORD **)*((_QWORD *)a2 + 37);
  while ( v30 != v29 )
  {
    CommitmentInformation = VIDMM_PROCESS::GetCommitmentInformation(
                              (VIDMM_PROCESS *)*(v30 - 6),
                              *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 208LL),
                              *((_DWORD *)this + 5));
    VidMmRecordEviction(v32 + 7168, (__int64)CommitmentInformation + 56, *((_QWORD *)a2 + 2), *(_DWORD *)(v32 + 8));
  }
  *(_WORD *)(*((_QWORD *)a2 + 63) + 6LL) = 0;
  *(_QWORD *)(*((_QWORD *)a2 + 63) + 32LL) = 0LL;
  *((_DWORD *)a2 + 19) &= ~0x800000u;
  *((_QWORD *)a2 + 17) = 0LL;
  *((_DWORD *)a2 + 32) = 0;
  if ( !a5 && (unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(*((VIDMM_GLOBAL **)this + 1), a2) )
  {
    VIDMM_GLOBAL::ResetBackingStore(*((VIDMM_GLOBAL **)this + 1), a2);
    *v21 |= 0x10u;
    *((_QWORD *)a2 + 55) = *(_QWORD *)(*((_QWORD *)this + 1) + 4608LL);
  }
  v33 = 1560LL * (*((_DWORD *)a2 + 19) & 0x3F);
  *(_QWORD *)(v33 + *(_QWORD *)(*((_QWORD *)this + 1) + 40184LL) + 1544) -= *((_QWORD *)a2 + 2);
  for ( i = *v29; i != v29; i = (_QWORD *)*i )
  {
    v35 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(i - 6) + 16LL)
                                + 8LL * *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 208LL))
                    + 48LL)
        + 296LL * (*((_DWORD *)a2 + 19) & 0x3F);
    *(_QWORD *)(v35 + 240) -= *((_QWORD *)a2 + 2);
  }
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40));
  v36 = *((_QWORD *)this + 1);
  _InterlockedOr(v37, 0);
  ++*(_QWORD *)(v36 + 40);
}
