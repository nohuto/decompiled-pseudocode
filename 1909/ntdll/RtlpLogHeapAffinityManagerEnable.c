/*
 * XREFs of RtlpLogHeapAffinityManagerEnable @ 0x18010304C
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x18003B6C0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpLocalInfoAllocFromCache @ 0x18004D7D0 (RtlpLocalInfoAllocFromCache.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DA40 (NtTraceEvent.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 */

NTSTATUS __fastcall RtlpLogHeapAffinityManagerEnable(__int64 a1, int a2)
{
  __int64 v4; // rcx
  _QWORD Fields[6]; // [rsp+20h] [rbp-48h] BYREF

  memset(Fields, 0, 0x2CuLL);
  Fields[4] = a1;
  HIWORD(Fields[0]) = 4150;
  LODWORD(Fields[5]) = a2;
  if ( RtlGetCurrentServiceSessionId() )
    v4 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v4 = 2147353472LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v4, 0x20402u, 0xCu, Fields);
}
