/*
 * XREFs of KeGenericCallDpc @ 0x1400FCC10
 * Callers:
 *     MiSwapStackPage @ 0x140134EA4 (MiSwapStackPage.c)
 *     KeSetSystemTime @ 0x140182550 (KeSetSystemTime.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x14019B4EC (MiInitializeWorkingSetManagerParameters.c)
 *     MiFreeUnusedPfnPages @ 0x14019D250 (MiFreeUnusedPfnPages.c)
 *     KeSwapDirectoryTableBase @ 0x14019DBCC (KeSwapDirectoryTableBase.c)
 *     MiJumpStack @ 0x1402C4200 (MiJumpStack.c)
 *     MiDbgCopyMemory @ 0x1402D0648 (MiDbgCopyMemory.c)
 *     MiStartDpcGang @ 0x1402E86DC (MiStartDpcGang.c)
 *     KiInitializeDynamicProcessor @ 0x1405AB0C8 (KiInitializeDynamicProcessor.c)
 *     EtwpUpdateFilterData @ 0x140692660 (EtwpUpdateFilterData.c)
 *     ExGetPoolTagInfo @ 0x1406C7CF8 (ExGetPoolTagInfo.c)
 *     KeConfigureHeteroProcessors @ 0x14087DBE8 (KeConfigureHeteroProcessors.c)
 *     MmSetPermanentCacheAttribute @ 0x14088A7D0 (MmSetPermanentCacheAttribute.c)
 *     MiApplyImageHotPatch @ 0x14088D364 (MiApplyImageHotPatch.c)
 *     EtwpSynchronizeWithElevatedIrqlLogging @ 0x1408FAAB4 (EtwpSynchronizeWithElevatedIrqlLogging.c)
 *     ExpAeThresholdInitialization @ 0x140A16388 (ExpAeThresholdInitialization.c)
 * Callees:
 *     KeGenericProcessorCallback @ 0x1400FBCAC (KeGenericProcessorCallback.c)
 */

char __fastcall KeGenericCallDpc(__int64 a1, __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return KeGenericProcessorCallback(
           0LL,
           (void (__fastcall *)(struct _KPRCB *, __int64))KiGenericCallDpcWorker,
           (__int64)v3,
           1);
}
