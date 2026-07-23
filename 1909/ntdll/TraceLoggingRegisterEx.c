/*
 * XREFs of TraceLoggingRegisterEx @ 0x180007DE8
 * Callers:
 *     RtlInitializeHeapLogging @ 0x1800098D0 (RtlInitializeHeapLogging.c)
 *     LdrpLogRelativePathWithAlteredSearchError @ 0x18007DB34 (LdrpLogRelativePathWithAlteredSearchError.c)
 *     LdrpResReportResourceAccessInternalInitOnce @ 0x180082E70 (LdrpResReportResourceAccessInternalInitOnce.c)
 *     RtlpCapChkTelemetryRunOnce @ 0x1800844E0 (RtlpCapChkTelemetryRunOnce.c)
 *     LibLoaderTelemetryInitOnce @ 0x180085210 (LibLoaderTelemetryInitOnce.c)
 *     VsmEnclaveTelemetryInitOnce @ 0x1800D0C00 (VsmEnclaveTelemetryInitOnce.c)
 * Callees:
 *     EtwEventSetInformation @ 0x18000A3E0 (EtwEventSetInformation.c)
 *     EtwEventRegister @ 0x18000A640 (EtwEventRegister.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 */

TLG_STATUS __stdcall TraceLoggingRegisterEx(
        TraceLoggingHProvider hProvider,
        TLG_PENABLECALLBACK pEnableCallback,
        PVOID pCallbackContext)
{
  GUID v4; // xmm0
  NTSTATUS v5; // eax
  TLG_STATUS v6; // ebx
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(GUID *)(*((_QWORD *)hProvider + 1) - 16LL);
  *((_QWORD *)hProvider + 5) = 0LL;
  *((_QWORD *)hProvider + 6) = 0LL;
  ProviderId = v4;
  v5 = EtwEventRegister(&ProviderId, (PENABLECALLBACK)TlgEnableCallback, hProvider, (PREGHANDLE)hProvider + 4);
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
      (EVENT_INFO_CLASS)2,
      *((PVOID *)hProvider + 1),
      **((unsigned __int16 **)hProvider + 1));
  }
  return v6;
}
