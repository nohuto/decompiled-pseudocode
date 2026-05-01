/*
 * XREFs of ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x180085E04
 * Callers:
 *     ??_ETrayNotificationAreaLogging@@UEAAPEAXI@Z @ 0x180085DD0 (--_ETrayNotificationAreaLogging@@UEAAPEAXI@Z.c)
 *     ??_ECustomShellHostTelemetry@@UEAAPEAXI@Z @ 0x180092D20 (--_ECustomShellHostTelemetry@@UEAAPEAXI@Z.c)
 *     ??_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z @ 0x18011F6E0 (--_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z.c)
 *     ??_EImmersiveIconsLogging@@UEAAPEAXI@Z @ 0x18018F9E0 (--_EImmersiveIconsLogging@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::TraceLoggingProvider::~TraceLoggingProvider(wil::TraceLoggingProvider *this)
{
  bool v1; // zf
  __int64 v2; // rbx

  v1 = *((_BYTE *)this + 16) == 0;
  *(_QWORD *)this = &IamTraceLogging::`vftable';
  if ( !v1 )
  {
    v2 = *((_QWORD *)this + 1);
    EventUnregister(*(_QWORD *)(v2 + 32));
    *(_QWORD *)(v2 + 32) = 0LL;
    *(_DWORD *)v2 = 0;
  }
}
