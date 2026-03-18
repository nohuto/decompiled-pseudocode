/*
 * XREFs of VidSchiResumeFlipQueues @ 0x1C00C71E0
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0066E20 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C006E6F4 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0071660 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AA58C (-MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 *     VidSchResumeSchedulerForSource @ 0x1C00C93D0 (VidSchResumeSchedulerForSource.c)
 * Callees:
 *     VidSchiMarkFlipQueuesRunningStateOnPresentInfo @ 0x1C002E33C (VidSchiMarkFlipQueuesRunningStateOnPresentInfo.c)
 *     VidSchiUnwaitFlipQueueUnderSchedulerSpinLock @ 0x1C0030B0C (VidSchiUnwaitFlipQueueUnderSchedulerSpinLock.c)
 */

void __fastcall VidSchiResumeFlipQueues(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  int i; // esi

  v3 = 0LL;
  for ( i = a2; (unsigned int)v3 < *(_DWORD *)(a1 + 40); v3 = (unsigned int)(v3 + 1) )
  {
    if ( _bittest(&i, v3) )
    {
      a2 = *(_QWORD *)(a1 + 8 * v3 + 2576);
      if ( a2 )
        VidSchiMarkFlipQueuesRunningStateOnPresentInfo(a1, a2, 1u);
    }
  }
  VidSchiUnwaitFlipQueueUnderSchedulerSpinLock(a1, a2, a3);
}
