/*
 * XREFs of RtlStringCbPrintfA @ 0x14017DFF4
 * Callers:
 *     RtlpVerCompare @ 0x140174A20 (RtlpVerCompare.c)
 *     KiDumpParameterImages @ 0x140292AC4 (KiDumpParameterImages.c)
 *     ViErrorReport1 @ 0x14030B12C (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x14030B1B0 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x14030B244 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x14030B2E8 (ViErrorReport6.c)
 *     ExpSystemErrorHandler2 @ 0x14057F930 (ExpSystemErrorHandler2.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140927DB0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140928080 (ViGenericVerifyNewIrp.c)
 *     VfIoDeleteDevice @ 0x140935128 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x14093529C (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x140936FB8 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140937050 (VfErrorReport8.c)
 *     VerifierNtCreateFile @ 0x140946530 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x1409466E0 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140946830 (VerifierNtWriteFile.c)
 *     Phase1InitializationDiscard @ 0x1409B4E10 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x1409B5EDC (InitBootProcessor.c)
 *     RamdiskStart @ 0x1409FAD4C (RamdiskStart.c)
 * Callees:
 *     RtlStringVPrintfWorkerA @ 0x14017E048 (RtlStringVPrintfWorkerA.c)
 */

NTSTATUS RtlStringCbPrintfA(NTSTRSAFE_PSTR pszDest, size_t cbDest, NTSTRSAFE_PCSTR pszFormat, ...)
{
  NTSTATUS v3; // r9d
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  v3 = 0;
  if ( cbDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 >= 0 )
    return RtlStringVPrintfWorkerA(pszDest, cbDest, 0LL, pszFormat, va);
  if ( cbDest )
    *pszDest = 0;
  return v3;
}
