/*
 * XREFs of KeQueryPriorityThread @ 0x1400E1740
 * Callers:
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x1400E10F4 (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 *     FsRtlpWaitForIoAtEof @ 0x1400E1488 (FsRtlpWaitForIoAtEof.c)
 *     LZNT1DecompressChunkNewThread @ 0x1400E1664 (LZNT1DecompressChunkNewThread.c)
 *     PoNotifyMediaBuffering @ 0x14013F0C0 (PoNotifyMediaBuffering.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14014E9B0 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14014ECF0 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x140153B84 (-SmStWorkItemGet@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@PEAU1@P.c)
 *     MiModifiedPageWriter @ 0x140188720 (MiModifiedPageWriter.c)
 *     PfSnPrefetchSections @ 0x140662F70 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x14066321C (PfSnPrefetchSectionsCleanup.c)
 *     PfSnPrefetchScenario @ 0x1406C0F20 (PfSnPrefetchScenario.c)
 *     MiInSwapStore @ 0x1406D0DEC (MiInSwapStore.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x140933DD4 (ViPendingQueuePassiveLevelCompletion.c)
 * Callees:
 *     <none>
 */

KPRIORITY __stdcall KeQueryPriorityThread(PKTHREAD Thread)
{
  if ( Thread->Process == (_KPROCESS *)&KiInitialProcess )
    return 1;
  else
    return Thread->Priority;
}
