/*
 * XREFs of FxLibraryCommonCommission @ 0x1C0043830
 * Callers:
 *     LibraryCommission @ 0x1C002FF90 (LibraryCommission.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A980 (__security_check_cookie.c)
 *     ?FxTraceInitialize@@YAJXZ @ 0x1C003BB64 (-FxTraceInitialize@@YAJXZ.c)
 *     ?GetTriageInfo@@YAXXZ @ 0x1C00434FC (-GetTriageInfo@@YAXXZ.c)
 *     FxLibraryGlobalsCommission @ 0x1C00594FC (FxLibraryGlobalsCommission.c)
 *     TraceLoggingSetInformation @ 0x1C00C40A0 (TraceLoggingSetInformation.c)
 */

__int64 __fastcall FxLibraryCommonCommission()
{
  int v0; // ebx
  _GUID v2; // xmm0
  _EVENT_INFO_CLASS v3; // edx
  const _TlgProvider_t *v4; // rcx
  void (__fastcall *SystemRoutineAddress)(_OSVERSIONINFOW *); // rax
  _UNICODE_STRING usName; // [rsp+30h] [rbp-58h] BYREF
  _GUID ProviderId; // [rsp+40h] [rbp-48h] BYREF
  wchar_t usName_buffer[16]; // [rsp+50h] [rbp-38h] BYREF

  wcscpy(usName_buffer, L"RtlGetVersion");
  usName.Buffer = usName_buffer;
  *(_DWORD *)&usName.Length = 1835034;
  if ( WdfLdrDbgPrintOn )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryCommission\n");
  }
  v0 = FxLibraryGlobalsCommission();
  if ( v0 >= 0 )
  {
    v2 = (_GUID)*((_OWORD *)Tlgg_TelemetryProviderProv.ProviderMetadataPtr - 1);
    *(_OWORD *)&Tlgg_TelemetryProviderProv.EnableCallback = 0LL;
    ProviderId = v2;
    if ( !EtwRegister(
            &ProviderId,
            TlgEnableCallback,
            &Tlgg_TelemetryProviderProv,
            &Tlgg_TelemetryProviderProv.RegHandle) )
      TraceLoggingSetInformation(
        v4,
        v3,
        (void *)Tlgg_TelemetryProviderProv.ProviderMetadataPtr,
        *Tlgg_TelemetryProviderProv.ProviderMetadataPtr);
    if ( (int)FxTraceInitialize() < 0 )
    {
      if ( WdfLdrDbgPrintOn )
      {
        DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
        DbgPrintEx(0x65u, 0, "Failed to initialize tracing for WDF\n");
      }
    }
    else
    {
      unk_1C00ABE51 = 1;
    }
    SystemRoutineAddress = (void (__fastcall *)(_OSVERSIONINFOW *))MmGetSystemRoutineAddress(&usName);
    if ( SystemRoutineAddress )
      SystemRoutineAddress(&gOsVersion);
    if ( WdfLdrDbgPrintOn )
    {
      DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
      DbgPrintEx(0x65u, 0, "OsVersion(%d.%d)\n", gOsVersion.dwMajorVersion, gOsVersion.dwMinorVersion);
    }
    GetTriageInfo();
    return 0LL;
  }
  else
  {
    if ( WdfLdrDbgPrintOn )
    {
      DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
      DbgPrintEx(0x65u, 0, "FxLibraryGlobalsCommission failed %X\n", v0);
    }
    return (unsigned int)v0;
  }
}
