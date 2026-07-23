/*
 * XREFs of KeGenericCallDpc @ 0x140120460
 * Callers:
 *     MiSwapStackPage @ 0x14012D250 (MiSwapStackPage.c)
 *     KeSetSystemTime @ 0x1401434EC (KeSetSystemTime.c)
 *     KeSwapDirectoryTableBase @ 0x140160FB0 (KeSwapDirectoryTableBase.c)
 *     MiJumpStack @ 0x14016A2B0 (MiJumpStack.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x140190F3C (MiInitializeWorkingSetManagerParameters.c)
 *     MiInitializeDynamicPfns @ 0x1402A68F4 (MiInitializeDynamicPfns.c)
 *     MiDbgCopyMemory @ 0x1402BA940 (MiDbgCopyMemory.c)
 *     KiInitializeDynamicProcessor @ 0x14057C1F8 (KiInitializeDynamicProcessor.c)
 *     EtwpUpdateFilterData @ 0x1406581D4 (EtwpUpdateFilterData.c)
 *     ExGetPoolTagInfo @ 0x1406A5C1C (ExGetPoolTagInfo.c)
 *     EtwpFreeLoggerContext @ 0x1406C1B40 (EtwpFreeLoggerContext.c)
 *     KeConfigureHeteroProcessors @ 0x140843D08 (KeConfigureHeteroProcessors.c)
 *     MmSetPermanentCacheAttribute @ 0x140850160 (MmSetPermanentCacheAttribute.c)
 *     MiApplyImageHotPatch @ 0x1408558E8 (MiApplyImageHotPatch.c)
 *     ExpAeThresholdInitialization @ 0x1409D31FC (ExpAeThresholdInitialization.c)
 * Callees:
 *     KeGenericProcessorCallback @ 0x1400D8710 (KeGenericProcessorCallback.c)
 */

char __fastcall KeGenericCallDpc(struct _SINGLE_LIST_ENTRY *a1, struct _SINGLE_LIST_ENTRY *a2)
{
  _SINGLE_LIST_ENTRY v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0].Next = a1;
  v3[1].Next = a2;
  return KeGenericProcessorCallback(
           0LL,
           (void (__fastcall *)(struct _KPRCB *, _SINGLE_LIST_ENTRY *))KiGenericCallDpcWorker,
           v3,
           1uLL);
}
