/*
 * XREFs of sub_180103570 @ 0x180103570
 * Callers:
 *     sub_180043550 @ 0x180043550 (sub_180043550.c)
 *     sub_180044EDC @ 0x180044EDC (sub_180044EDC.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 */

NTSTATUS __fastcall sub_180103570(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 UserModeGlobalLogger; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-68h] BYREF
  __int16 v9; // [rsp+26h] [rbp-62h]
  __int64 v10; // [rsp+40h] [rbp-48h]
  __int64 v11; // [rsp+48h] [rbp-40h]
  __int64 v12; // [rsp+50h] [rbp-38h]
  __int64 v13; // [rsp+58h] [rbp-30h]
  __int64 v14; // [rsp+60h] [rbp-28h]
  int v15; // [rsp+68h] [rbp-20h]

  v13 = a5;
  v11 = a2;
  if ( a3 )
    a2 = a3;
  v12 = a2;
  v10 = a1;
  v14 = a4;
  v15 = a6;
  v9 = 4130;
  if ( RtlGetCurrentServiceSessionId() )
    UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    UserModeGlobalLogger = 2147353472LL;
  return ZwTraceEvent((HANDLE)*(unsigned __int8 *)UserModeGlobalLogger, 0x20402u, 0x2Cu, Fields);
}
