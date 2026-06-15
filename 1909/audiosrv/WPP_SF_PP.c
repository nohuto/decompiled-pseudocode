/*
 * XREFs of WPP_SF_PP @ 0x18013BEDC
 * Callers:
 *     ?IncreaseProcessWorkingSet@@YAJ_K@Z @ 0x18013BC38 (-IncreaseProcessWorkingSet@@YAJ_K@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_PP(TRACEHANDLE a1, __int64 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  return TraceMessage(a1, 0x2Bu, &WPP_c24c675c748835426e52a853535e2bbd_Traceguids, 0x14u, va, 8LL, va1, 8LL, 0LL);
}
