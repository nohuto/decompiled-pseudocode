/*
 * XREFs of WPP_SF_q @ 0x1C0004854
 * Callers:
 *     CiDispatchCreateNotificationClient @ 0x1C000C230 (CiDispatchCreateNotificationClient.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00036F0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_q(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  return ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_afe1eb84e33d340bfb8547d758f773ef_Traceguids,
           14LL,
           (__int64 *)va,
           8LL,
           0LL);
}
