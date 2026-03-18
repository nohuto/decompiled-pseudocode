/*
 * XREFs of KeGenericCallDpc @ 0x1401203D0
 * Callers:
 *     MiSwapStackPage @ 0x14012D160 (MiSwapStackPage.c)
 *     KeSetSystemTime @ 0x1401433CC (KeSetSystemTime.c)
 *     KeSwapDirectoryTableBase @ 0x140160E90 (KeSwapDirectoryTableBase.c)
 *     MiJumpStack @ 0x14016A190 (MiJumpStack.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x140190DDC (MiInitializeWorkingSetManagerParameters.c)
 *     MiInitializeDynamicPfns @ 0x1402A6604 (MiInitializeDynamicPfns.c)
 *     MiDbgCopyMemory @ 0x1402BA650 (MiDbgCopyMemory.c)
 *     KiInitializeDynamicProcessor @ 0x14057B1F8 (KiInitializeDynamicProcessor.c)
 *     EtwpUpdateFilterData @ 0x140657034 (EtwpUpdateFilterData.c)
 *     ExGetPoolTagInfo @ 0x1406A499C (ExGetPoolTagInfo.c)
 *     EtwpFreeLoggerContext @ 0x1406C08C0 (EtwpFreeLoggerContext.c)
 *     KeConfigureHeteroProcessors @ 0x140842AC8 (KeConfigureHeteroProcessors.c)
 *     MmSetPermanentCacheAttribute @ 0x14084EF20 (MmSetPermanentCacheAttribute.c)
 *     MiApplyImageHotPatch @ 0x1408546A8 (MiApplyImageHotPatch.c)
 *     ExpAeThresholdInitialization @ 0x1409D21FC (ExpAeThresholdInitialization.c)
 * Callees:
 *     KeGenericProcessorCallback @ 0x1400D8670 (KeGenericProcessorCallback.c)
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
