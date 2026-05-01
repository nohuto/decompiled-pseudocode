/*
 * XREFs of WPP_SF_lq @ 0x18016E138
 * Callers:
 *     ?SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z @ 0x180013DC0 (-SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_lq(TRACEHANDLE a1, __int64 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  return TraceMessage(a1, 0x2Bu, &WPP_ec79cc65924f314eb7ae55323d0afa97_Traceguids, 0xFu, &v5, 4LL, va, 8LL, 0LL);
}
