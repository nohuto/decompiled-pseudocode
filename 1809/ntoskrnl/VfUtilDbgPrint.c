/*
 * XREFs of VfUtilDbgPrint @ 0x14030994C
 * Callers:
 *     VfClearVerifierSettings @ 0x1403096A8 (VfClearVerifierSettings.c)
 *     VfReportIssueWithOptions @ 0x14030AD18 (VfReportIssueWithOptions.c)
 *     ViErrorReport1 @ 0x14030AE3C (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x14030AEC0 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x14030AF54 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x14030AFF8 (ViErrorReport6.c)
 *     VfNotifyVerifierOfEvent @ 0x140925D20 (VfNotifyVerifierOfEvent.c)
 *     VfUtilPrintCheckinString @ 0x140926214 (VfUtilPrintCheckinString.c)
 *     ViGenericDumpIrpStack @ 0x140926D00 (ViGenericDumpIrpStack.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140926DB0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140927080 (ViGenericVerifyNewIrp.c)
 *     ViCiPreprocessOptions @ 0x1409276E0 (ViCiPreprocessOptions.c)
 *     ViXdvBindXdvDDIWrappers @ 0x140928350 (ViXdvBindXdvDDIWrappers.c)
 *     ViXdvBindXdvDriverEntryWrappers @ 0x140928410 (ViXdvBindXdvDriverEntryWrappers.c)
 *     ViXdvDriverLoadImage @ 0x140928510 (ViXdvDriverLoadImage.c)
 *     ViAdapterCallback @ 0x14092C3B0 (ViAdapterCallback.c)
 *     ViFlushDoubleBuffer @ 0x14092D374 (ViFlushDoubleBuffer.c)
 *     ViHalPreprocessOptions @ 0x14092DD28 (ViHalPreprocessOptions.c)
 *     ViSpecialAllocateCommonBuffer @ 0x14092E78C (ViSpecialAllocateCommonBuffer.c)
 *     VfIoDeleteDevice @ 0x140934128 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x14093429C (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x140935FB8 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140936050 (VfErrorReport8.c)
 *     ViErrorDisplayDescription @ 0x140936124 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140936178 (ViErrorFinishReport.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x1409392B0 (ViShutdownWatchdogExecuteDpc.c)
 *     ViDeadlockPreprocessOptions @ 0x14093D718 (ViDeadlockPreprocessOptions.c)
 *     ViWdIrpTimedOut @ 0x14093E9B8 (ViWdIrpTimedOut.c)
 *     VfPnpDumpIrpStack @ 0x140940180 (VfPnpDumpIrpStack.c)
 *     VfPowerDumpIrpStack @ 0x140940C40 (VfPowerDumpIrpStack.c)
 *     VfWmiDumpIrpStack @ 0x140940F20 (VfWmiDumpIrpStack.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x140941CD8 (ViCtxCheckAndReleaseIsrState.c)
 *     VerifierNtCreateFile @ 0x140945530 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x1409456E0 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140945830 (VerifierNtWriteFile.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140126330 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 VfUtilDbgPrint(const char *a1, ...)
{
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, a1);
  return vDbgPrintExWithPrefixInternal(&File, 0x65u, 0, a1, va, 1);
}
