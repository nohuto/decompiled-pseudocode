/*
 * XREFs of RtlInitAnsiString @ 0x180021100
 * Callers:
 *     LdrpLogDelayLoadTrigger @ 0x18002105C (LdrpLogDelayLoadTrigger.c)
 *     LdrpGetDelayloadExportDll @ 0x18002113C (LdrpGetDelayloadExportDll.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180021B60 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpGetShimEngineInterface @ 0x180069660 (LdrpGetShimEngineInterface.c)
 *     LdrpReportError @ 0x18006F5D8 (LdrpReportError.c)
 *     AVrfpDetectVerifiedExports @ 0x1800D9A64 (AVrfpDetectVerifiedExports.c)
 *     AVrfpVerifierStopInitialize @ 0x1800DA8F4 (AVrfpVerifierStopInitialize.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlInitAnsiString(PSTRING DestinationString, PCSZ SourceString)
{
  unsigned __int64 v2; // rax

  *(_QWORD *)&DestinationString->Length = 0LL;
  DestinationString->Buffer = (char *)SourceString;
  if ( SourceString )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( SourceString[v2] );
    if ( v2 >= 0xFFFF )
      LOWORD(v2) = -2;
    DestinationString->Length = v2;
    DestinationString->MaximumLength = v2 + 1;
  }
}
