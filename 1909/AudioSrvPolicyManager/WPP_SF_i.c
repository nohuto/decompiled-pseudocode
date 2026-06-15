/*
 * XREFs of WPP_SF_i @ 0x180008BB4
 * Callers:
 *     ?Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z @ 0x18000A0C0 (-Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_i(TRACEHANDLE a1, USHORT a2, __int64 a3, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  return TraceMessage(a1, 0x2Bu, &WPP_2f08ed43560a3dfd6165ccd158e2df11_Traceguids, a2, va, 8LL, 0LL);
}
