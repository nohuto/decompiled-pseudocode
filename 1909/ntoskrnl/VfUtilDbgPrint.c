/*
 * XREFs of VfUtilDbgPrint @ 0x140327014
 * Callers:
 *     VfClearVerifierSettings @ 0x140326CD8 (VfClearVerifierSettings.c)
 *     ViSetRequestedOrderDependentAPIs @ 0x1403275A8 (ViSetRequestedOrderDependentAPIs.c)
 *     VfReportIssueWithOptions @ 0x140328558 (VfReportIssueWithOptions.c)
 *     ViErrorReport1 @ 0x14032867C (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x140328700 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x140328794 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x140328838 (ViErrorReport6.c)
 *     VfNotifyVerifierOfEvent @ 0x1409641B0 (VfNotifyVerifierOfEvent.c)
 *     VfUtilPrintCheckinString @ 0x1409646B4 (VfUtilPrintCheckinString.c)
 *     ViGenericDumpIrpStack @ 0x140965230 (ViGenericDumpIrpStack.c)
 *     ViGenericVerifyIrpStackDownward @ 0x1409652E0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x1409655B0 (ViGenericVerifyNewIrp.c)
 *     ViCiPreprocessOptions @ 0x140965BFC (ViCiPreprocessOptions.c)
 *     ViSetRequestedAPIs @ 0x14096688C (ViSetRequestedAPIs.c)
 *     ViXdvBindXdvDDIWrappers @ 0x140966908 (ViXdvBindXdvDDIWrappers.c)
 *     ViXdvBindXdvDriverEntryWrappers @ 0x1409669D4 (ViXdvBindXdvDriverEntryWrappers.c)
 *     ViXdvDriverLoadImage @ 0x140966AD4 (ViXdvDriverLoadImage.c)
 *     ViAdapterCallback @ 0x14096AC20 (ViAdapterCallback.c)
 *     ViFlushDoubleBuffer @ 0x14096BBE4 (ViFlushDoubleBuffer.c)
 *     ViHalPreprocessOptions @ 0x14096C598 (ViHalPreprocessOptions.c)
 *     ViSpecialAllocateCommonBuffer @ 0x14096CFFC (ViSpecialAllocateCommonBuffer.c)
 *     VfIoDetachDevice @ 0x140973840 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x1409755F8 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140975690 (VfErrorReport8.c)
 *     VfErrorReport9 @ 0x140975718 (VfErrorReport9.c)
 *     ViErrorDisplayDescription @ 0x1409757DC (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140975830 (ViErrorFinishReport.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x1409778E0 (ViShutdownWatchdogExecuteDpc.c)
 *     ViDeadlockPreprocessOptions @ 0x14097CB68 (ViDeadlockPreprocessOptions.c)
 *     ViWdIrpTimedOut @ 0x14097E24C (ViWdIrpTimedOut.c)
 *     VfPnpDumpIrpStack @ 0x14097FA30 (VfPnpDumpIrpStack.c)
 *     VfPowerDumpIrpStack @ 0x1409804E0 (VfPowerDumpIrpStack.c)
 *     VfWmiDumpIrpStack @ 0x1409807C0 (VfWmiDumpIrpStack.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x1409815AC (ViCtxCheckAndReleaseIsrState.c)
 *     VerifierNtCreateFile @ 0x140984F00 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x1409850B0 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140985200 (VerifierNtWriteFile.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140126BD0 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 VfUtilDbgPrint(const char *a1, ...)
{
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, a1);
  return vDbgPrintExWithPrefixInternal(&Src, 0x65u, 0, a1, va, 1);
}
