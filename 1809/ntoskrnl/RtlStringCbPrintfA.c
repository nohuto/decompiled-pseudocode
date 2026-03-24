/*
 * XREFs of RtlStringCbPrintfA @ 0x14017DEB4
 * Callers:
 *     RtlpVerCompare @ 0x140174920 (RtlpVerCompare.c)
 *     KiDumpParameterImages @ 0x1402928D4 (KiDumpParameterImages.c)
 *     ViErrorReport1 @ 0x14030AF3C (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x14030AFC0 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x14030B054 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x14030B0F8 (ViErrorReport6.c)
 *     ExpSystemErrorHandler2 @ 0x14057E930 (ExpSystemErrorHandler2.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140926DB0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140927080 (ViGenericVerifyNewIrp.c)
 *     VfIoDeleteDevice @ 0x140934128 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x14093429C (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x140935FB8 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140936050 (VfErrorReport8.c)
 *     VerifierNtCreateFile @ 0x140945530 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x1409456E0 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140945830 (VerifierNtWriteFile.c)
 *     Phase1InitializationDiscard @ 0x1409B3E10 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x1409B4EDC (InitBootProcessor.c)
 *     RamdiskStart @ 0x1409F9D4C (RamdiskStart.c)
 * Callees:
 *     RtlStringVPrintfWorkerA @ 0x14017DF08 (RtlStringVPrintfWorkerA.c)
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
