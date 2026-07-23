/*
 * XREFs of LibLoaderTelemetryInitOnce @ 0x180088CC0
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx @ 0x18007600C (TraceLoggingRegisterEx.c)
 */

__int64 __fastcall LibLoaderTelemetryInitOnce(
        PRTL_RUN_ONCE a1,
        void (__cdecl *a2)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID),
        PVOID *a3)
{
  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_18015F4E8, a2, a3);
  return 1LL;
}
