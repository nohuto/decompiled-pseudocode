/*
 * XREFs of VsmEnclaveTelemetryInitOnce @ 0x1800D2430
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx @ 0x18007600C (TraceLoggingRegisterEx.c)
 */

__int64 __fastcall VsmEnclaveTelemetryInitOnce(
        PRTL_RUN_ONCE a1,
        void (__cdecl *a2)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID),
        PVOID *a3)
{
  __int64 result; // rax

  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_18015F590, a2, a3);
  result = 1LL;
  VSMEnclaveProvidersRegistered = 1;
  return result;
}
