/*
 * XREFs of ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x1800EBC08
 * Callers:
 *     ??_ECustomShellHostTelemetry@@UEAAPEAXI@Z @ 0x180096F90 (--_ECustomShellHostTelemetry@@UEAAPEAXI@Z.c)
 *     ??_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z @ 0x1800EC4B0 (--_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z.c)
 *     ??_EImmersiveIconsLogging@@UEAAPEAXI@Z @ 0x180144B80 (--_EImmersiveIconsLogging@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::TraceLoggingProvider::~TraceLoggingProvider(wil::TraceLoggingProvider *this)
{
  bool v1; // zf
  __int64 v2; // rbx

  v1 = *((_BYTE *)this + 16) == 0;
  *(_QWORD *)this = &wil::TraceLoggingProvider::`vftable';
  if ( !v1 )
  {
    v2 = *((_QWORD *)this + 1);
    EventUnregister(*(_QWORD *)(v2 + 32));
    *(_QWORD *)(v2 + 32) = 0LL;
    *(_DWORD *)v2 = 0;
  }
}
