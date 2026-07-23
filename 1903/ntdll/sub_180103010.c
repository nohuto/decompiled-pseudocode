/*
 * XREFs of sub_180103010 @ 0x180103010
 * Callers:
 *     sub_1800797B8 @ 0x1800797B8 (sub_1800797B8.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

NTSTATUS __fastcall sub_180103010(__int64 a1, __int64 a2, int a3)
{
  __int64 UserModeGlobalLogger; // rcx
  _QWORD Fields[7]; // [rsp+20h] [rbp-58h] BYREF

  memset(Fields, 0, 0x34uLL);
  Fields[4] = a1;
  HIWORD(Fields[0]) = 4153;
  Fields[5] = a2;
  LODWORD(Fields[6]) = a3;
  if ( RtlGetCurrentServiceSessionId() )
    UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    UserModeGlobalLogger = 2147353472LL;
  return ZwTraceEvent((HANDLE)*(unsigned __int8 *)UserModeGlobalLogger, 0x20402u, 0x14u, Fields);
}
