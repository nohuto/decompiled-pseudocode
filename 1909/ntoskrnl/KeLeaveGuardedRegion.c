/*
 * XREFs of KeLeaveGuardedRegion @ 0x140004610
 * Callers:
 *     ExSaFree @ 0x14016EA00 (ExSaFree.c)
 *     WbDecryptEncryptionSegment @ 0x1405B39C8 (WbDecryptEncryptionSegment.c)
 *     WbReEncryptEncryptionSegment @ 0x1405B3A98 (WbReEncryptEncryptionSegment.c)
 *     sub_1405B3B68 @ 0x1405B3B68 (sub_1405B3B68.c)
 *     WbGetWarbirdEncryptionSegment @ 0x1405B3CE8 (WbGetWarbirdEncryptionSegment.c)
 *     WbGetHeapExecutedBlock @ 0x1405CA8C8 (WbGetHeapExecutedBlock.c)
 *     WbGetWarbirdThread @ 0x1405CAB98 (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x1405CAF80 (WbGetWarbirdProcess.c)
 *     WbHeapExecutionUnloadModule @ 0x1406D5528 (WbHeapExecutionUnloadModule.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x1406D563C (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 */

void KeLeaveGuardedRegion(void)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->SpecialApcDisable++ == -1
    && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
  {
    KiCheckForKernelApcDelivery();
  }
}
