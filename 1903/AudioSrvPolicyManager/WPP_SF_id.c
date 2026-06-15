/*
 * XREFs of WPP_SF_id @ 0x180008BD8
 * Callers:
 *     ?Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z @ 0x18000A0A0 (-Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_id(TRACEHANDLE a1, USHORT a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  return TraceMessage(a1, 0x2Bu, &WPP_2f08ed43560a3dfd6165ccd158e2df11_Traceguids, a2, va, 8LL, va1, 4LL, 0LL);
}
