/*
 * XREFs of VsmEnclaveTelemetryInitOnce @ 0x1800D0C00
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx @ 0x180007DE8 (TraceLoggingRegisterEx.c)
 */

__int64 __fastcall VsmEnclaveTelemetryInitOnce(
        PRTL_RUN_ONCE a1,
        void (__cdecl *a2)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID),
        PVOID *a3)
{
  __int64 result; // rax

  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_18015F4C0, a2, a3);
  result = 1LL;
  VSMEnclaveProvidersRegistered = 1;
  return result;
}
