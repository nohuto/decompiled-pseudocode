/*
 * XREFs of ?HampSlsBlockerTreeDeleteCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x18006E654
 * Callers:
 *     ?HampSlsEventWriteWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18006E980 (-HampSlsEventWriteWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampSlsRundown@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x18006EC70 (-HampSlsRundown@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z.c)
 *     ?HampSlsScenarioChangeCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18006EE80 (-HampSlsScenarioChangeCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180011FDC (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 */

void __fastcall HampSlsBlockerTreeDeleteCallback(struct _RTL_BALANCED_NODE *a1, void *a2)
{
  struct _RTL_BALANCED_NODE *v2; // rbx

  v2 = a1[1].Children[0];
  if ( v2 )
  {
    RmpAcquireGlobalLock();
    if ( v2[24].Children[0]-- == (struct _RTL_BALANCED_NODE *)1 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)&v2[-3].Right);
    RmpReleaseGlobalLock();
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
