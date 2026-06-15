/*
 * XREFs of WPP_SF_di @ 0x18000BE6C
 * Callers:
 *     ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x18000D220 (-DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_di(TRACEHANDLE a1, __int64 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  return TraceMessage(a1, 0x2Bu, &WPP_2f08ed43560a3dfd6165ccd158e2df11_Traceguids, 0x1Fu, &v5, 4LL, va, 8LL, 0LL);
}
