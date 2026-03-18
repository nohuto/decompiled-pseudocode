/*
 * XREFs of KeLeaveGuardedRegion @ 0x140004580
 * Callers:
 *     ExSaFree @ 0x14016E310 (ExSaFree.c)
 *     WbDecryptEncryptionSegment @ 0x1405B35EC (WbDecryptEncryptionSegment.c)
 *     WbReEncryptEncryptionSegment @ 0x1405B36BC (WbReEncryptEncryptionSegment.c)
 *     sub_1405B378C @ 0x1405B378C (sub_1405B378C.c)
 *     WbGetWarbirdEncryptionSegment @ 0x1405B390C (WbGetWarbirdEncryptionSegment.c)
 *     WbGetHeapExecutedBlock @ 0x1405CA3C8 (WbGetHeapExecutedBlock.c)
 *     WbGetWarbirdThread @ 0x1405CA698 (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x1405CAA80 (WbGetWarbirdProcess.c)
 *     WbHeapExecutionUnloadModule @ 0x1406D5CF4 (WbHeapExecutionUnloadModule.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x1406D5E08 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 */

void KeLeaveGuardedRegion(void)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->SpecialApcDisable++ == -1
    && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
  {
    KiCheckForKernelApcDelivery();
  }
}
