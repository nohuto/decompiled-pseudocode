/*
 * XREFs of sub_180103318 @ 0x180103318
 * Callers:
 *     sub_180045188 @ 0x180045188 (sub_180045188.c)
 *     sub_180047490 @ 0x180047490 (sub_180047490.c)
 *     sub_180047F94 @ 0x180047F94 (sub_180047F94.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

NTSTATUS __fastcall sub_180103318(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v8; // rcx
  _QWORD Fields[8]; // [rsp+20h] [rbp-78h] BYREF

  memset(Fields, 0, sizeof(Fields));
  Fields[4] = a1;
  HIWORD(Fields[0]) = 4148;
  Fields[5] = a2;
  Fields[6] = a3;
  LODWORD(Fields[7]) = a4;
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[4];
  else
    v8 = 2147353480LL;
  return ZwTraceEvent((HANDLE)*(unsigned __int8 *)v8, 0x20402u, 0x20u, Fields);
}
