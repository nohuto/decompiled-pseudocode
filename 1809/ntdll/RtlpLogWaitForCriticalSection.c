/*
 * XREFs of RtlpLogWaitForCriticalSection @ 0x1800E9884
 * Callers:
 *     RtlpWaitOnCriticalSection @ 0x18005EA34 (RtlpWaitOnCriticalSection.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0EB0 (NtTraceEvent.c)
 */

NTSTATUS __fastcall RtlpLogWaitForCriticalSection(__int64 a1)
{
  __int64 v1; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v4; // [rsp+26h] [rbp-42h]
  int v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+44h] [rbp-24h]
  __int64 v7; // [rsp+48h] [rbp-20h]
  __int64 v8; // [rsp+50h] [rbp-18h]

  v8 = a1;
  v4 = 5922;
  v6 = *(_DWORD *)(a1 + 32) & 0xFFFFFF;
  v5 = *(_DWORD *)(a1 + 8);
  v7 = *(_QWORD *)(a1 + 16);
  if ( RtlGetCurrentServiceSessionId() )
    v1 = (__int64)NtCurrentPeb()->SharedData + 552;
  else
    v1 = 2147353474LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v1, 0x20402u, 0x18u, Fields);
}
