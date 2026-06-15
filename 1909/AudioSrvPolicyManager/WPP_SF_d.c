/*
 * XREFs of WPP_SF_D @ 0x180022560
 * Callers:
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18002326C (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 *     ?TS_ServiceStart@@YAXXZ @ 0x1800275C4 (-TS_ServiceStart@@YAXXZ.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_D(TRACEHANDLE a1, USHORT a2, __int64 a3, int a4)
{
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  return TraceMessage(a1, 0x2Bu, &WPP_0e5291d43ab738b4f1647aff6bbf1d9a_Traceguids, a2, &v5, 4LL, 0LL);
}
