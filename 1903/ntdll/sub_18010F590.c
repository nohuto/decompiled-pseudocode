/*
 * XREFs of sub_18010F590 @ 0x18010F590
 * Callers:
 *     sub_1800327D4 @ 0x1800327D4 (sub_1800327D4.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 */

NTSTATUS __fastcall sub_18010F590(__int64 a1)
{
  __int64 v1; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v4; // [rsp+26h] [rbp-32h]
  __int64 v5; // [rsp+40h] [rbp-18h]

  v5 = a1;
  v4 = 7213;
  if ( RtlGetCurrentServiceSessionId() )
    v1 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  else
    v1 = 2147353478LL;
  return ZwTraceEvent((HANDLE)*(unsigned __int8 *)v1, 0x402u, 0xFFFFFFE4, Fields);
}
