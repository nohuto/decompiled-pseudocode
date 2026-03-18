/*
 * XREFs of KeGenericCallDpc @ 0x1400F9170
 * Callers:
 *     MiSwapStackPage @ 0x1401345A4 (MiSwapStackPage.c)
 *     KeSetSystemTime @ 0x140181E60 (KeSetSystemTime.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x14019AE8C (MiInitializeWorkingSetManagerParameters.c)
 *     MiFreeUnusedPfnPages @ 0x14019CAD0 (MiFreeUnusedPfnPages.c)
 *     KeSwapDirectoryTableBase @ 0x14019D44C (KeSwapDirectoryTableBase.c)
 *     MiJumpStack @ 0x1402C44A0 (MiJumpStack.c)
 *     MiDbgCopyMemory @ 0x1402D08E8 (MiDbgCopyMemory.c)
 *     MiStartDpcGang @ 0x1402E897C (MiStartDpcGang.c)
 *     KiInitializeDynamicProcessor @ 0x1405AB0E8 (KiInitializeDynamicProcessor.c)
 *     EtwpUpdateFilterData @ 0x14066524C (EtwpUpdateFilterData.c)
 *     ExGetPoolTagInfo @ 0x1406AA600 (ExGetPoolTagInfo.c)
 *     KeConfigureHeteroProcessors @ 0x14087E4E8 (KeConfigureHeteroProcessors.c)
 *     MmSetPermanentCacheAttribute @ 0x14088AFB0 (MmSetPermanentCacheAttribute.c)
 *     MiApplyImageHotPatch @ 0x14088DB44 (MiApplyImageHotPatch.c)
 *     EtwpSynchronizeWithElevatedIrqlLogging @ 0x1408FB0D4 (EtwpSynchronizeWithElevatedIrqlLogging.c)
 *     ExpAeThresholdInitialization @ 0x140A161F0 (ExpAeThresholdInitialization.c)
 * Callees:
 *     KeGenericProcessorCallback @ 0x1400F820C (KeGenericProcessorCallback.c)
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
