/*
 * XREFs of WPP_SF_D @ 0x180025EC0
 * Callers:
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x180026B20 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 *     ?TS_ServiceStart@@YAXXZ @ 0x18002AC94 (-TS_ServiceStart@@YAXXZ.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_D(TRACEHANDLE a1, USHORT a2, __int64 a3, int a4)
{
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  return TraceMessage(a1, 0x2Bu, &WPP_d9c0975e425e34466e12797867bc6fac_Traceguids, a2, &v5, 4LL, 0LL);
}
