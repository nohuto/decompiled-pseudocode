/*
 * XREFs of EtwpPsProvCaptureState @ 0x1408FBFB8
 * Callers:
 *     EtwpCrimsonProvEnableCallback @ 0x1406C39C0 (EtwpCrimsonProvEnableCallback.c)
 *     EtwpTraceLoggingProvEnableCallback @ 0x1406F4F80 (EtwpTraceLoggingProvEnableCallback.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x1400EA080 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     PsEnumProcesses @ 0x140638AD8 (PsEnumProcesses.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1408FC040 (EtwpPsProvProcessEnumCallback.c)
 */

BOOLEAN __fastcall EtwpPsProvCaptureState(void *a1, __int64 a2)
{
  BOOLEAN v2; // bl
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h]

  v4 = a2;
  v5 = 0LL;
  *(_DWORD *)((char *)&v5 + 1) = a1 == &PsProvTraceLoggingGuid;
  v2 = IoSetThreadHardErrorMode(0);
  EtwpPsProvProcessEnumCallback((PEPROCESS)PsIdleProcess);
  PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))EtwpPsProvProcessEnumCallback, (__int64)&v4);
  return IoSetThreadHardErrorMode(v2);
}
