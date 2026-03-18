/*
 * XREFs of ?EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00805D4
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0066E20 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0071660 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z @ 0x1C0075F44 (-EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z.c)
 *     ?EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C007DDC8 (-EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_A.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A7930 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@@Z @ 0x1C00AB0A4 (-PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_GLOBAL::EvictTemporaryAllocation(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rdx
  __int64 v6; // rcx

  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(this);
  v3 = (_QWORD *)((char *)a2 + 232);
  v4 = *((_QWORD *)a2 + 29);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v4 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 232)
    || (v5 = (_QWORD *)*((_QWORD *)a2 + 30), (_QWORD *)*v5 != v3) )
  {
    __fastfail(3u);
  }
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  *v3 = 0LL;
  v6 = *((_QWORD *)a2 + 33);
  *((_QWORD *)a2 + 30) = 0LL;
  (*(void (__fastcall **)(__int64, struct _VIDMM_GLOBAL_ALLOC *))(*(_QWORD *)v6 + 88LL))(v6, a2);
}
