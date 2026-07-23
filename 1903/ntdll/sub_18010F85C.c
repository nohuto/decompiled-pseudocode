/*
 * XREFs of sub_18010F85C @ 0x18010F85C
 * Callers:
 *     sub_1800327D4 @ 0x1800327D4 (sub_1800327D4.c)
 *     sub_180035FA0 @ 0x180035FA0 (sub_180035FA0.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 */

NTSTATUS __fastcall sub_18010F85C(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v6; // [rsp+26h] [rbp-42h]
  __int64 v7; // [rsp+40h] [rbp-28h]
  __int64 v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+50h] [rbp-18h]

  v8 = a1;
  v6 = 7212;
  v7 = a2;
  v9 = a3;
  if ( RtlGetCurrentServiceSessionId() )
    v3 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  else
    v3 = 2147353478LL;
  return ZwTraceEvent((HANDLE)*(unsigned __int8 *)v3, 0x402u, 0x14u, Fields);
}
