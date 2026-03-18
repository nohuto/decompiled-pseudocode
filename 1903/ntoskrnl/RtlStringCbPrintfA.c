/*
 * XREFs of RtlStringCbPrintfA @ 0x14018BBD4
 * Callers:
 *     RtlpVerCompare @ 0x14017DB30 (RtlpVerCompare.c)
 *     KiDumpParameterImages @ 0x1402A9390 (KiDumpParameterImages.c)
 *     ViErrorReport1 @ 0x140328C2C (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x140328CB0 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x140328D44 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x140328DE8 (ViErrorReport6.c)
 *     WheaTelemetryLogErrorRecord @ 0x140341D1C (WheaTelemetryLogErrorRecord.c)
 *     ExpSystemErrorHandler2 @ 0x1405AE830 (ExpSystemErrorHandler2.c)
 *     ViGenericVerifyIrpStackDownward @ 0x1409652E0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x1409655B0 (ViGenericVerifyNewIrp.c)
 *     VfIoDetachDevice @ 0x140973840 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x1409755F8 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140975690 (VfErrorReport8.c)
 *     VfErrorReport9 @ 0x140975718 (VfErrorReport9.c)
 *     VerifierNtCreateFile @ 0x140984F00 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x1409850B0 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140985200 (VerifierNtWriteFile.c)
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140A0816C (InitBootProcessor.c)
 *     RamdiskStart @ 0x140A3F940 (RamdiskStart.c)
 * Callees:
 *     RtlStringVPrintfWorkerA @ 0x14018BC28 (RtlStringVPrintfWorkerA.c)
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
