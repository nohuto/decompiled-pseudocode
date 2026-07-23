/*
 * XREFs of sub_1800DD9A8 @ 0x1800DD9A8
 * Callers:
 *     sub_180009EE8 @ 0x180009EE8 (sub_180009EE8.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 */

NTSTATUS __fastcall sub_1800DD9A8(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, int a6)
{
  __int64 v6; // rcx
  _BYTE Fields[6]; // [rsp+30h] [rbp-19h] BYREF
  __int16 v9; // [rsp+36h] [rbp-13h]
  __int64 v10; // [rsp+50h] [rbp+7h]
  __int64 v11; // [rsp+58h] [rbp+Fh]
  __int64 v12; // [rsp+60h] [rbp+17h]
  __int64 v13; // [rsp+68h] [rbp+1Fh]
  int v14; // [rsp+70h] [rbp+27h]
  int v15; // [rsp+74h] [rbp+2Bh]

  v9 = 3360;
  v10 = a1;
  v15 = a6;
  v11 = a2;
  v12 = a3;
  v14 = a4;
  v13 = a5;
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[7];
  else
    v6 = 2147353486LL;
  return ZwTraceEvent((HANDLE)*(unsigned __int8 *)v6, 0x20402u, 0x28u, Fields);
}
