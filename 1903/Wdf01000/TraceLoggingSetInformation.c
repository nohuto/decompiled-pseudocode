/*
 * XREFs of TraceLoggingSetInformation @ 0x1C00C80A0
 * Callers:
 *     RegisterTelemetryProvider @ 0x1C0062DCC (RegisterTelemetryProvider.c)
 *     InitializeTelemetryAssertsKMByName @ 0x1C0092A04 (InitializeTelemetryAssertsKMByName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TraceLoggingSetInformation(
        const _TlgProvider_t *hProvider,
        _EVENT_INFO_CLASS pvInformation,
        void *cbInformation,
        unsigned int a4)
{
  unsigned int v7; // ebx
  unsigned int (__fastcall *SystemRoutineAddress)(unsigned __int64, __int64, void *, _QWORD); // rax

  v7 = -1073741637;
  SystemRoutineAddress = (unsigned int (__fastcall *)(unsigned __int64, __int64, void *, _QWORD))MmGetSystemRoutineAddress(&`TraceLoggingSetInformation'::`2'::strEtwSetInformation);
  if ( SystemRoutineAddress )
    return SystemRoutineAddress(hProvider->RegHandle, 2LL, cbInformation, a4);
  return v7;
}
