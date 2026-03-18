/*
 * XREFs of ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006B230
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C000257C (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_KW4_VIDMM_OPERATION@@@Z @ 0x1C00026DC (-VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_K.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B90 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     McTemplateK0ppq @ 0x1C0025CF0 (McTemplateK0ppq.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005B938 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005B998 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005C588 (-NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006A9D0 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006B144 (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006B198 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C006C184 (-MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z @ 0x1C00770E0 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0078D90 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?GetPriorityClass@VIDMM_SEGMENT@@SA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C007FE2C (-GetPriorityClass@VIDMM_SEGMENT@@SA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 *     ?ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C0080864 (-ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C0080A70 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?IoMmuUnmapAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00ACF68 (-IoMmuUnmapAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_SYSMEM_SEGMENT::EvictResource(
        VIDMM_GLOBAL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        char a3,
        char a4,
        unsigned __int8 a5,
        struct _VIDMM_LOCAL_ALLOC *a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _VIDMM_LOCAL_ALLOC *v12; // r15
  VIDMM_GLOBAL *v13; // rcx
  VIDMM_GLOBAL *v14; // rbp
  struct _VIDMM_GLOBAL_ALLOC *i; // rsi
  _QWORD *j; // r14
  unsigned int k; // esi
  VIDMM_GLOBAL *v18; // rcx
  __int64 v19; // rax
  bool v20; // si
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD *v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rdx
  unsigned int PriorityClass; // eax
  _QWORD **v27; // rsi
  _QWORD **v28; // r10
  VIDMM_GLOBAL *v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rdx
  _QWORD *m; // r9
  __int64 v34; // rcx
  __int64 v35; // rcx
  const GUID *v36; // r8
  VIDMM_GLOBAL *v37; // rcx
  __int64 v38; // rax
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  VIDMM_GLOBAL *v41; // r9
  signed __int32 v42[8]; // [rsp+0h] [rbp-98h] BYREF
  char v43[72]; // [rsp+28h] [rbp-70h] BYREF

  memset(&v43[24], 0, 0x30uLL);
  if ( g_IsInternalReleaseOrDbg )
  {
    v38 = WdLogNewEntry5_WdTrace(v11);
    *(_QWORD *)(v38 + 24) = a2;
    v11 = *((int *)a2 + 87);
    *(_QWORD *)(v38 + 32) = v11;
  }
  if ( *((_DWORD *)a2 + 40) && (*((_DWORD *)a2 + 19) & 0x20000000) == 0 && g_IsInternalRelease )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v10);
    v39[3] = 270LL;
    v39[4] = 9LL;
    v39[5] = 0LL;
    v39[6] = 0LL;
    v39[7] = 0LL;
    WdLogEvent5_WdCriticalError(v39);
  }
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(this[1], a2, 0);
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 40));
  v12 = a6;
  if ( !a6 )
    v12 = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a2 + 13);
  v13 = (VIDMM_GLOBAL *)*((unsigned int *)a2 + 19);
  if ( *((_DWORD *)this[1] + 10032) )
  {
    if ( ((unsigned int)v13 & 0x8000000) != 0 )
      VIDMM_GLOBAL::NotifyContextAllocationEviction(v13, a2);
    if ( a3 )
      (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *))*this + 8))(this, a2);
    VIDMM_GLOBAL::xWaitForAllPagingEngines(
      this[1],
      (struct _VIDSCH_SYNC_OBJECT **)this[1] + (*((_DWORD *)a2 + 19) & 0x3F) + 746,
      (const unsigned __int64 *)a2 + 22,
      1u,
      (const unsigned __int64 *)this[1] + (*((_DWORD *)a2 + 19) & 0x3F) + 682,
      *((_DWORD *)a2 + 19) & 0x3F);
    if ( a4 )
    {
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40));
      return;
    }
  }
  else
  {
    *((_DWORD *)a2 + 19) = (unsigned int)v13 | 0x100000;
  }
  v14 = this[1];
  if ( (*((_BYTE *)v14 + 40872) & 2) != 0 )
  {
    for ( i = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 37);
          i != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296);
          i = *(struct _VIDMM_GLOBAL_ALLOC **)i )
    {
      for ( j = (_QWORD *)*((_QWORD *)i - 2); j != (_QWORD *)((char *)i - 16); j = (_QWORD *)*j )
        VIDMM_GLOBAL::MakeOneVirtualAddressRangeNotResident(v14, (struct VIDMM_ALLOC *)(j - 5));
    }
    for ( k = 0; k < *((_DWORD *)v14 + 1748); ++k )
      VIDMM_GLOBAL::FlushPagingBufferInternal(v14, k, 0, 0LL, 0LL, 0, 0);
    VIDMM_GLOBAL::WaitForAllPagingEngines(v14, a2);
  }
  v18 = this[1];
  if ( *((_BYTE *)v18 + 40139) )
    VIDMM_GLOBAL::IoMmuUnmapAllocation(v18, a2, v12);
  v19 = *((_QWORD *)a2 + 63);
  v20 = *(_WORD *)(v19 + 4) == 2;
  v21 = *(_DWORD *)v19 & 0x8000000;
  if ( (*(_DWORD *)v19 & 0x8000000) == 0 || (*((_DWORD *)a2 + 21) & 2) == 0 )
  {
    if ( (_DWORD)v21 && (int)VIDMM_GLOBAL::ChargePinnedBackingStore(this[1], *((_QWORD *)a2 + 1)) >= 0 )
      *((_DWORD *)a2 + 21) |= 2u;
    else
      v20 = 1;
  }
  if ( v20 )
  {
    if ( (**((_DWORD **)a2 + 63) & 0x4000) != 0 )
      *((_QWORD *)a2 + 46) = 0LL;
    VIDMM_SEGMENT::UnlockAllocationBackingStore(this[1], a2, v12);
    if ( (*((_DWORD *)a2 + 21) & 2) != 0 )
    {
      VIDMM_GLOBAL::ReturnPinnedBackingStore(this[1], *((_QWORD *)a2 + 1));
      *((_DWORD *)a2 + 21) &= ~2u;
    }
  }
  v22 = *((_QWORD *)a2 + 19);
  if ( v22 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v40 = (_QWORD *)WdLogNewEntry5_WdTrace(v21);
      v40[3] = *((_QWORD *)a2 + 19);
      v40[4] = *((int *)a2 + 37);
      v40[5] = *((unsigned int *)a2 + 36);
      v22 = *((_QWORD *)a2 + 19);
    }
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, __int64, _QWORD))*this + 3))(
      this,
      a2,
      v22,
      *((_QWORD *)a2 + 2));
    *((_QWORD *)a2 + 19) = 0LL;
  }
  else if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(v21);
  }
  v23 = (_QWORD *)((char *)a2 + 384);
  v24 = *((_QWORD *)a2 + 48);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v24 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 384)
    || (v25 = (_QWORD *)*((_QWORD *)a2 + 49), (_QWORD *)*v25 != v23) )
  {
    __fastfail(3u);
  }
  *v25 = v24;
  *(_QWORD *)(v24 + 8) = v25;
  *v23 = 0LL;
  *((_QWORD *)a2 + 49) = 0LL;
  if ( v12 && *((_QWORD *)v12 + 1) )
    VidMmRecordAlloc(this[1], (__int64)a2, (__int64)v12, (__int64)this, *((_QWORD *)a2 + 2), 1);
  *(_QWORD *)(*((_QWORD *)a2 + 17) + 312LL) += *((_QWORD *)a2 + 2);
  PriorityClass = VIDMM_SEGMENT::GetPriorityClass(*((unsigned int *)a2 + 94));
  v27 = (_QWORD **)((char *)a2 + 296);
  *(_QWORD *)(*((_QWORD *)a2 + 17) + 8LL * PriorityClass + 328) += *((_QWORD *)a2 + 2);
  v28 = (_QWORD **)*((_QWORD *)a2 + 37);
  while ( v28 != v27 )
  {
    v29 = this[1];
    v30 = *(_QWORD *)((*(v28 - 6))[2] + 8LL * *(unsigned int *)(*((_QWORD *)v29 + 3) + 208LL));
    if ( v30 )
      v31 = *(_QWORD *)(v30 + 16) + 184LL * *((unsigned int *)this + 5);
    else
      v31 = 0LL;
    VidMmRecordEviction((__int64)v29 + 7168, v31 + 56, *((_QWORD *)a2 + 2), *((_DWORD *)v29 + 2));
  }
  *((_DWORD *)a2 + 19) &= ~0x800000u;
  *((_QWORD *)a2 + 17) = 0LL;
  *((_DWORD *)a2 + 32) = 0;
  if ( !a5 && (unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(this[1], a2) )
  {
    VIDMM_GLOBAL::ResetBackingStore(this[1], a2);
    *((_DWORD *)a2 + 21) |= 0x10u;
    *((_QWORD *)a2 + 55) = *((_QWORD *)this[1] + 576);
  }
  v32 = 1560LL * (*((_DWORD *)a2 + 19) & 0x3F);
  *(_QWORD *)(v32 + *((_QWORD *)this[1] + 5023) + 1544) -= *((_QWORD *)a2 + 2);
  for ( m = *v27; m != v27; m = (_QWORD *)*m )
  {
    v34 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(m - 6) + 16LL)
                                + 8LL * *(unsigned int *)(*((_QWORD *)this[1] + 3) + 208LL))
                    + 48LL)
        + 296LL * (*((_DWORD *)a2 + 19) & 0x3F);
    *(_QWORD *)(v34 + 240) -= *((_QWORD *)a2 + 2);
  }
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40));
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
  {
    v41 = this[1];
    *(_DWORD *)v43 = *((_DWORD *)this + 4) + 1;
    McTemplateK0ppq(v35, &EventPagingOpSysmemUncommit, v36, *((_QWORD *)v41 + 3), a2, *(_QWORD *)v43);
  }
  v37 = this[1];
  _InterlockedOr(v42, 0);
  ++*((_QWORD *)v37 + 5);
}
