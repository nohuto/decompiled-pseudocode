/*
 * XREFs of sub_18010F128 @ 0x18010F128
 * Callers:
 *     sub_180030680 @ 0x180030680 (sub_180030680.c)
 *     sub_180030770 @ 0x180030770 (sub_180030770.c)
 *     sub_180032D70 @ 0x180032D70 (sub_180032D70.c)
 *     sub_180082050 @ 0x180082050 (sub_180082050.c)
 *     sub_18010EC80 @ 0x18010EC80 (sub_18010EC80.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 */

NTSTATUS __fastcall sub_18010F128(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-68h] BYREF
  __int16 v8; // [rsp+26h] [rbp-62h]
  __int64 v9; // [rsp+40h] [rbp-48h]
  __int64 v10; // [rsp+48h] [rbp-40h]
  __int64 v11; // [rsp+50h] [rbp-38h]
  __int64 v12; // [rsp+58h] [rbp-30h]
  __int64 v13; // [rsp+60h] [rbp-28h]

  v8 = 7201;
  v13 = a5;
  v9 = a1;
  v10 = a2;
  v11 = a3;
  v12 = a4;
  if ( RtlGetCurrentServiceSessionId() )
    v5 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  else
    v5 = 2147353478LL;
  return ZwTraceEvent((HANDLE)*(unsigned __int8 *)v5, 0x403u, 0x28u, Fields);
}
