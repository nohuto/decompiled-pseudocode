/*
 * XREFs of sub_1801031E8 @ 0x1801031E8
 * Callers:
 *     sub_180041AB0 @ 0x180041AB0 (sub_180041AB0.c)
 *     sub_180045188 @ 0x180045188 (sub_180045188.c)
 *     sub_180047F94 @ 0x180047F94 (sub_180047F94.c)
 * Callees:
 *     sub_180076E84 @ 0x180076E84 (sub_180076E84.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 *     sub_180100F8C @ 0x180100F8C (sub_180100F8C.c)
 */

NTSTATUS __fastcall sub_1801031E8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        HANDLE TraceHandle)
{
  __int64 v8; // r8
  char v9; // r9
  __int64 v10; // rax
  _BYTE Fields[6]; // [rsp+20h] [rbp-41h] BYREF
  __int16 v13; // [rsp+26h] [rbp-3Bh]
  __int64 v14; // [rsp+40h] [rbp-21h]
  __int64 v15; // [rsp+48h] [rbp-19h]
  __int64 v16; // [rsp+50h] [rbp-11h]
  __int64 v17; // [rsp+58h] [rbp-9h]
  __int64 v18; // [rsp+60h] [rbp-1h]
  __int64 v19; // [rsp+68h] [rbp+7h] BYREF
  int v20; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v21; // [rsp+74h] [rbp+13h]

  v17 = a4;
  v19 = 0LL;
  v18 = 0LL;
  v20 = 0;
  v14 = a1;
  v16 = a2;
  v21 = sub_180076E84(a1);
  if ( a5 != v9 )
    v8 -= a6;
  v15 = v8;
  v10 = sub_180100F8C(a1, &v19, &v20);
  v18 = v19 - *(_QWORD *)(a1 + 664) - v10;
  v13 = 4138;
  return ZwTraceEvent(TraceHandle, 0x403u, 0x3Cu, Fields);
}
