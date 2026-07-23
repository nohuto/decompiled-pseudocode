/*
 * XREFs of TraceLoggingRegisterEx @ 0x18007600C
 * Callers:
 *     LdrpLogRelativePathWithAlteredSearchError @ 0x18005479C (LdrpLogRelativePathWithAlteredSearchError.c)
 *     RtlInitializeHeapLogging @ 0x180084D38 (RtlInitializeHeapLogging.c)
 *     LdrpResReportResourceAccessInternalInitOnce @ 0x180086B90 (LdrpResReportResourceAccessInternalInitOnce.c)
 *     RtlpCapChkTelemetryRunOnce @ 0x1800880E0 (RtlpCapChkTelemetryRunOnce.c)
 *     LibLoaderTelemetryInitOnce @ 0x180088CC0 (LibLoaderTelemetryInitOnce.c)
 *     VsmEnclaveTelemetryInitOnce @ 0x1800D2430 (VsmEnclaveTelemetryInitOnce.c)
 * Callees:
 *     EtwEventRegister @ 0x180021AD0 (EtwEventRegister.c)
 *     EtwEventSetInformation @ 0x1800760A0 (EtwEventSetInformation.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
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
