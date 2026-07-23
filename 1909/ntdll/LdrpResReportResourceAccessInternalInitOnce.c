/*
 * XREFs of LdrpResReportResourceAccessInternalInitOnce @ 0x180082E70
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx @ 0x180007DE8 (TraceLoggingRegisterEx.c)
 */

__int64 __fastcall LdrpResReportResourceAccessInternalInitOnce(
        PRTL_RUN_ONCE a1,
        void (__cdecl *a2)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID),
        PVOID *a3)
{
  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_18015F450, a2, a3);
  dword_180166010 = (unsigned __int16)(__rdtsc() >> 4);
  return 1LL;
}
