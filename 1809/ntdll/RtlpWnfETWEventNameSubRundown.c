/*
 * XREFs of RtlpWnfETWEventNameSubRundown @ 0x1800DFD88
 * Callers:
 *     RtlpDecRefWnfNameSubscription @ 0x18005E718 (RtlpDecRefWnfNameSubscription.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0EB0 (NtTraceEvent.c)
 */

NTSTATUS __fastcall RtlpWnfETWEventNameSubRundown(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  _BYTE Fields[6]; // [rsp+28h] [rbp-40h] BYREF
  __int16 v5; // [rsp+2Eh] [rbp-3Ah]
  __int64 v6; // [rsp+48h] [rbp-20h]
  __int64 v7; // [rsp+50h] [rbp-18h]

  v5 = 3364;
  v6 = a1;
  v7 = a2;
  if ( RtlGetCurrentServiceSessionId() )
    v2 = (__int64)NtCurrentPeb()->SharedData + 564;
  else
    v2 = 2147353486LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v2, 0x20402u, 0x10u, Fields);
}
