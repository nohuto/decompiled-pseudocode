/*
 * XREFs of RtlpHeapLogRangeCreate @ 0x180103D3C
 * Callers:
 *     RtlCreateHeap @ 0x18005F7E0 (RtlCreateHeap.c)
 *     RtlpHpHeapCreate @ 0x180063D90 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0EB0 (NtTraceEvent.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

NTSTATUS __fastcall RtlpHeapLogRangeCreate(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rcx
  _QWORD Fields[7]; // [rsp+20h] [rbp-58h] BYREF

  memset(Fields, 0, sizeof(Fields));
  Fields[4] = a1;
  HIWORD(Fields[0]) = 613;
  Fields[5] = a2;
  LODWORD(Fields[6]) = a3;
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v6 = 2147353480LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v6, 0x20402u, 0x18u, Fields);
}
