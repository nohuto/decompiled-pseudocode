/*
 * XREFs of TraceLoggingSetInformation @ 0x1C00C40A0
 * Callers:
 *     FxLibraryCommonCommission @ 0x1C0043830 (FxLibraryCommonCommission.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TraceLoggingSetInformation(
        const _TlgProvider_t *pvInformation,
        _EVENT_INFO_CLASS cbInformation,
        void *hProvider,
        unsigned int informationClass)
{
  unsigned int v6; // ebx
  unsigned int (__fastcall *SystemRoutineAddress)(unsigned __int64, __int64, void *, _QWORD); // rax

  v6 = -1073741637;
  SystemRoutineAddress = (unsigned int (__fastcall *)(unsigned __int64, __int64, void *, _QWORD))MmGetSystemRoutineAddress(&`TraceLoggingSetInformation'::`2'::strEtwSetInformation);
  if ( SystemRoutineAddress )
    return SystemRoutineAddress(Tlgg_TelemetryProviderProv.RegHandle, 2LL, hProvider, informationClass);
  return v6;
}
