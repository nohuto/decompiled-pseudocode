/*
 * XREFs of ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x1800831C4
 * Callers:
 *     ??_ETrayNotificationAreaLogging@@UEAAPEAXI@Z @ 0x180083190 (--_ETrayNotificationAreaLogging@@UEAAPEAXI@Z.c)
 *     ??_ECustomShellHostTelemetry@@UEAAPEAXI@Z @ 0x18008F8C0 (--_ECustomShellHostTelemetry@@UEAAPEAXI@Z.c)
 *     ??_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z @ 0x1801006C0 (--_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z.c)
 *     ??_EImmersiveIconsLogging@@UEAAPEAXI@Z @ 0x180170600 (--_EImmersiveIconsLogging@@UEAAPEAXI@Z.c)
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
