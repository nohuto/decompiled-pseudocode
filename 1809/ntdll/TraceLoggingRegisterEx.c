/*
 * XREFs of TraceLoggingRegisterEx @ 0x180075FFC
 * Callers:
 *     LdrpLogRelativePathWithAlteredSearchError @ 0x18005479C (LdrpLogRelativePathWithAlteredSearchError.c)
 *     RtlInitializeHeapLogging @ 0x180084D28 (RtlInitializeHeapLogging.c)
 *     LdrpResReportResourceAccessInternalInitOnce @ 0x180086B80 (LdrpResReportResourceAccessInternalInitOnce.c)
 *     RtlpCapChkTelemetryRunOnce @ 0x1800880D0 (RtlpCapChkTelemetryRunOnce.c)
 *     LibLoaderTelemetryInitOnce @ 0x180088CB0 (LibLoaderTelemetryInitOnce.c)
 *     VsmEnclaveTelemetryInitOnce @ 0x1800D2430 (VsmEnclaveTelemetryInitOnce.c)
 * Callees:
 *     EtwEventRegister @ 0x180021AD0 (EtwEventRegister.c)
 *     EtwEventSetInformation @ 0x180076090 (EtwEventSetInformation.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 */

TLG_STATUS __stdcall TraceLoggingRegisterEx(
        TraceLoggingHProvider hProvider,
        TLG_PENABLECALLBACK pEnableCallback,
        PVOID pCallbackContext)
{
  __int128 v4; // xmm0
  int v5; // eax
  TLG_STATUS v6; // ebx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_OWORD *)(*((_QWORD *)hProvider + 1) - 16LL);
  *((_QWORD *)hProvider + 5) = 0LL;
  *((_QWORD *)hProvider + 6) = 0LL;
  v8 = v4;
  v5 = EtwEventRegister(&v8, (__int64)TlgEnableCallback, (__int64)hProvider, (unsigned __int64 *)hProvider + 4);
  v6 = v5;
  if ( v5 )
  {
    if ( v5 > 0 )
      return (unsigned __int16)v5 | 0x80070000;
  }
  else
  {
    EtwEventSetInformation(
      *((_QWORD *)hProvider + 4),
      2LL,
      *((_QWORD *)hProvider + 1),
      **((unsigned __int16 **)hProvider + 1));
  }
  return v6;
}
