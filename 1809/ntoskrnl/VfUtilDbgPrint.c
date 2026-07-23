/*
 * XREFs of VfUtilDbgPrint @ 0x140309C3C
 * Callers:
 *     VfClearVerifierSettings @ 0x140309998 (VfClearVerifierSettings.c)
 *     VfReportIssueWithOptions @ 0x14030B008 (VfReportIssueWithOptions.c)
 *     ViErrorReport1 @ 0x14030B12C (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x14030B1B0 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x14030B244 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x14030B2E8 (ViErrorReport6.c)
 *     VfNotifyVerifierOfEvent @ 0x140926D20 (VfNotifyVerifierOfEvent.c)
 *     VfUtilPrintCheckinString @ 0x140927214 (VfUtilPrintCheckinString.c)
 *     ViGenericDumpIrpStack @ 0x140927D00 (ViGenericDumpIrpStack.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140927DB0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140928080 (ViGenericVerifyNewIrp.c)
 *     ViCiPreprocessOptions @ 0x1409286E0 (ViCiPreprocessOptions.c)
 *     ViXdvBindXdvDDIWrappers @ 0x140929350 (ViXdvBindXdvDDIWrappers.c)
 *     ViXdvBindXdvDriverEntryWrappers @ 0x140929410 (ViXdvBindXdvDriverEntryWrappers.c)
 *     ViXdvDriverLoadImage @ 0x140929510 (ViXdvDriverLoadImage.c)
 *     ViAdapterCallback @ 0x14092D3B0 (ViAdapterCallback.c)
 *     ViFlushDoubleBuffer @ 0x14092E374 (ViFlushDoubleBuffer.c)
 *     ViHalPreprocessOptions @ 0x14092ED28 (ViHalPreprocessOptions.c)
 *     ViSpecialAllocateCommonBuffer @ 0x14092F78C (ViSpecialAllocateCommonBuffer.c)
 *     VfIoDeleteDevice @ 0x140935128 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x14093529C (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x140936FB8 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140937050 (VfErrorReport8.c)
 *     ViErrorDisplayDescription @ 0x140937124 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140937178 (ViErrorFinishReport.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x14093A2B0 (ViShutdownWatchdogExecuteDpc.c)
 *     ViDeadlockPreprocessOptions @ 0x14093E718 (ViDeadlockPreprocessOptions.c)
 *     ViWdIrpTimedOut @ 0x14093F9B8 (ViWdIrpTimedOut.c)
 *     VfPnpDumpIrpStack @ 0x140941180 (VfPnpDumpIrpStack.c)
 *     VfPowerDumpIrpStack @ 0x140941C40 (VfPowerDumpIrpStack.c)
 *     VfWmiDumpIrpStack @ 0x140941F20 (VfWmiDumpIrpStack.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x140942CD8 (ViCtxCheckAndReleaseIsrState.c)
 *     VerifierNtCreateFile @ 0x140946530 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x1409466E0 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140946830 (VerifierNtWriteFile.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140126420 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 VfUtilDbgPrint(const char *a1, ...)
{
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, a1);
  return vDbgPrintExWithPrefixInternal(&File, 0x65u, 0, a1, va, 1);
}
