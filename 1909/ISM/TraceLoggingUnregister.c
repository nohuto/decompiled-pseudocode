/*
 * XREFs of TraceLoggingUnregister @ 0x180052ED4
 * Callers:
 *     ??1OneCoreUAPInputHost@@MEAA@XZ @ 0x18004E850 (--1OneCoreUAPInputHost@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __stdcall TraceLoggingUnregister(TraceLoggingHProvider hProvider)
{
  EventUnregister(*((_QWORD *)hProvider + 4));
  *((_QWORD *)hProvider + 4) = 0LL;
  *(_DWORD *)hProvider = 0;
}
