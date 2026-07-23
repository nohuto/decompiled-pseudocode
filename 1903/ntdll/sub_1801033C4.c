/*
 * XREFs of sub_1801033C4 @ 0x1801033C4
 * Callers:
 *     sub_18003C350 @ 0x18003C350 (sub_18003C350.c)
 *     sub_18003F020 @ 0x18003F020 (sub_18003F020.c)
 *     sub_18003F9C0 @ 0x18003F9C0 (sub_18003F9C0.c)
 *     sub_180047214 @ 0x180047214 (sub_180047214.c)
 *     sub_18004B17C @ 0x18004B17C (sub_18004B17C.c)
 *     sub_18007013C @ 0x18007013C (sub_18007013C.c)
 * Callees:
 *     sub_180076E84 @ 0x180076E84 (sub_180076E84.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 *     sub_180100F8C @ 0x180100F8C (sub_180100F8C.c)
 */

NTSTATUS __fastcall sub_1801033C4(__int64 a1, __int64 a2, __int64 a3, __int64 a4, HANDLE TraceHandle)
{
  __int64 v6; // rax
  _BYTE Fields[6]; // [rsp+20h] [rbp-31h] BYREF
  __int16 v9; // [rsp+26h] [rbp-2Bh]
  __int64 v10; // [rsp+40h] [rbp-11h]
  __int64 v11; // [rsp+48h] [rbp-9h]
  __int64 v12; // [rsp+50h] [rbp-1h]
  __int64 v13; // [rsp+58h] [rbp+7h]
  __int64 v14; // [rsp+60h] [rbp+Fh]
  __int64 v15; // [rsp+68h] [rbp+17h] BYREF
  int v16; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v17; // [rsp+74h] [rbp+23h]

  v15 = 0LL;
  v14 = 0LL;
  v16 = 0;
  v10 = a1;
  v11 = a3;
  v12 = a2;
  v13 = a4;
  v17 = sub_180076E84(a1);
  v6 = sub_180100F8C(a1, &v15, &v16);
  v14 = v15 - *(_QWORD *)(a1 + 664) - v6;
  v9 = 4133;
  return ZwTraceEvent(TraceHandle, 0x403u, 0x3Cu, Fields);
}
