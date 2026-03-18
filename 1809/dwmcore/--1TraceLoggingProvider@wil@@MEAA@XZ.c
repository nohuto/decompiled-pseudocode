/*
 * XREFs of ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x1801E90FC
 * Callers:
 *     ??_ECompositorTracing@@UEAAPEAXI@Z @ 0x1801E9270 (--_ECompositorTracing@@UEAAPEAXI@Z.c)
 *     ??_ETraceLoggingProvider@wil@@MEAAPEAXI@Z @ 0x1801E92B0 (--_ETraceLoggingProvider@wil@@MEAAPEAXI@Z.c)
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
