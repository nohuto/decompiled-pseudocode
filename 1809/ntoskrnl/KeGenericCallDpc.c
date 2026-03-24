/*
 * XREFs of KeGenericCallDpc @ 0x1401203F0
 * Callers:
 *     MiSwapStackPage @ 0x14012D180 (MiSwapStackPage.c)
 *     KeSetSystemTime @ 0x1401433EC (KeSetSystemTime.c)
 *     KeSwapDirectoryTableBase @ 0x140160EB0 (KeSwapDirectoryTableBase.c)
 *     MiJumpStack @ 0x14016A1B0 (MiJumpStack.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x140190DFC (MiInitializeWorkingSetManagerParameters.c)
 *     MiInitializeDynamicPfns @ 0x1402A6704 (MiInitializeDynamicPfns.c)
 *     MiDbgCopyMemory @ 0x1402BA750 (MiDbgCopyMemory.c)
 *     KiInitializeDynamicProcessor @ 0x14057B1F8 (KiInitializeDynamicProcessor.c)
 *     EtwpUpdateFilterData @ 0x140657014 (EtwpUpdateFilterData.c)
 *     ExGetPoolTagInfo @ 0x1406A497C (ExGetPoolTagInfo.c)
 *     EtwpFreeLoggerContext @ 0x1406C08A0 (EtwpFreeLoggerContext.c)
 *     KeConfigureHeteroProcessors @ 0x140842AA8 (KeConfigureHeteroProcessors.c)
 *     MmSetPermanentCacheAttribute @ 0x14084EF00 (MmSetPermanentCacheAttribute.c)
 *     MiApplyImageHotPatch @ 0x140854688 (MiApplyImageHotPatch.c)
 *     ExpAeThresholdInitialization @ 0x1409D21FC (ExpAeThresholdInitialization.c)
 * Callees:
 *     KeGenericProcessorCallback @ 0x1400D8690 (KeGenericProcessorCallback.c)
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
