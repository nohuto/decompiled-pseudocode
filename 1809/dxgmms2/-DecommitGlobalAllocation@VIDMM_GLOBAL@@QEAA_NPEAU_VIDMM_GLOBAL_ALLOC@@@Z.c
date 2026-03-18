/*
 * XREFs of ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A7930
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0066E20 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x1C00AC908 (-TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001BE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001C40 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C005FD80 (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0065BEC (-UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006F4CC (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0070100 (-IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0070330 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C007A060 (-MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00805D4 (-EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

bool __fastcall VIDMM_GLOBAL::DecommitGlobalAllocation(VIDMM_GLOBAL *this, DXGFASTMUTEX **a2)
{
  bool v2; // bl
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  VIDMM_GLOBAL *v9; // rcx
  DXGFASTMUTEX *v10; // rax
  bool v11; // bp
  struct _VIDMM_GLOBAL_ALLOC *i; // r14
  __int64 v13; // rax
  char v15; // [rsp+20h] [rbp-88h]
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  v2 = 0;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  DXGFASTMUTEX::Acquire(a2[40]);
  if ( *((_WORD *)a2[63] + 2) == 2 && (*((_DWORD *)a2 + 23) & 2) != 0 )
  {
    if ( a2[17] )
    {
      VIDMM_GLOBAL::MarkGlobalAllocation(this, a2, 0LL, 0LL);
      v15 = 0;
      (*(void (__fastcall **)(DXGFASTMUTEX *, DXGFASTMUTEX **, _QWORD, _QWORD, char, _QWORD))(*(_QWORD *)a2[17] + 48LL))(
        a2[17],
        a2,
        0LL,
        0LL,
        v15,
        0LL);
    }
    else if ( !(unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(this, (struct _VIDMM_GLOBAL_ALLOC *)a2) )
    {
      v7 = WdLogNewEntry5_WdWarning(v6, v5);
      *(_QWORD *)(v7 + 24) = a2;
      WdLogEvent5_WdWarning(v7);
      goto LABEL_20;
    }
  }
  if ( VIDMM_GLOBAL::IsPagingOperationPending(this, (struct _VIDMM_GLOBAL_ALLOC *)a2, 0) )
  {
    DXGFASTMUTEX::Release((struct _KTHREAD **)a2[40]);
    VIDMM_GLOBAL::WaitForAllPagingEngines(this, (struct _VIDMM_GLOBAL_ALLOC *)a2);
    DXGFASTMUTEX::Acquire(a2[40]);
  }
  v10 = a2[63];
  v11 = *((_WORD *)v10 + 2) == 3;
  if ( *((_WORD *)v10 + 2) == 3 )
  {
    if ( a2[33] )
      VIDMM_GLOBAL::EvictTemporaryAllocation(v9, (struct _VIDMM_GLOBAL_ALLOC *)a2);
    for ( i = a2[37]; i != (struct _VIDMM_GLOBAL_ALLOC *)(a2 + 37); i = *(struct _VIDMM_GLOBAL_ALLOC **)i )
    {
      KeStackAttachProcess(**((PRKPROCESS **)i - 6), &ApcState);
      VIDMM_GLOBAL::UncommitLocalBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)((char *)i - 56), 1);
      KeUnstackDetachProcess(&ApcState);
    }
    VIDMM_GLOBAL::UncommitGlobalBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)a2, 0LL);
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)a2[13] + 1) + 32LL) + 352LL),
      -(__int64)a2[1]);
  }
  else
  {
    v13 = WdLogNewEntry5_WdWarning(v9, v8);
    *(_QWORD *)(v13 + 24) = a2;
    WdLogEvent5_WdWarning(v13);
  }
  v2 = v11;
LABEL_20:
  DXGFASTMUTEX::Release((struct _KTHREAD **)a2[40]);
  return v2;
}
