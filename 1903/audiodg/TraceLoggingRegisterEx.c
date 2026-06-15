/*
 * XREFs of TraceLoggingRegisterEx @ 0x140025E90
 * Callers:
 *     _dynamic_initializer_for__g_AudioEngineUtilTelemetryProviderRegistration__ @ 0x140001250 (_dynamic_initializer_for__g_AudioEngineUtilTelemetryProviderRegistration__.c)
 *     _dynamic_initializer_for__g_CrossProcessTelemetryProviderRegistration__ @ 0x140001270 (_dynamic_initializer_for__g_CrossProcessTelemetryProviderRegistration__.c)
 *     _dynamic_initializer_for__g_SpatialCrossProcessProviderRegistration__ @ 0x140001290 (_dynamic_initializer_for__g_SpatialCrossProcessProviderRegistration__.c)
 *     ?GetLatency@CPipeInstance@@QEBAJPEA_J@Z @ 0x14000BAA0 (-GetLatency@CPipeInstance@@QEBAJPEA_J@Z.c)
 *     ?Pause@CAudioDeviceGraph@@UEAAJXZ @ 0x14000F6A0 (-Pause@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x140029E0C (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x14002B8C4 (-RunMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?AudioDGUnhandledExceptionFilter@@YAJPEAU_EXCEPTION_POINTERS@@@Z @ 0x14002F700 (-AudioDGUnhandledExceptionFilter@@YAJPEAU_EXCEPTION_POINTERS@@@Z.c)
 *     ??1CAudioDeviceGraph@@QEAA@XZ @ 0x140037070 (--1CAudioDeviceGraph@@QEAA@XZ.c)
 *     ?Resume@CAudioDeviceGraph@@UEAAJXZ @ 0x140038A50 (-Resume@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14003CB48 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
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
  v5 = ((__int64 (__fastcall *)(__int128 *, void (__stdcall *)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID), TraceLoggingHProvider, char *))EtwEventRegister)(
         &v8,
         TlgEnableCallback,
         hProvider,
         (char *)hProvider + 32);
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
