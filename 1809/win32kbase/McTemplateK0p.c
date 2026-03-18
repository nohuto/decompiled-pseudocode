/*
 * XREFs of McTemplateK0p @ 0x1C00E9DA0
 * Callers:
 *     EtwTraceDCompGetBatchEvent @ 0x1C00593E0 (EtwTraceDCompGetBatchEvent.c)
 *     EtwTraceWakeInputIdle @ 0x1C006AE20 (EtwTraceWakeInputIdle.c)
 *     EtwTraceSleepInputIdle @ 0x1C00746F0 (EtwTraceSleepInputIdle.c)
 *     EtwTraceDITSpeedHitTestFailedRevalidation @ 0x1C00E62B0 (EtwTraceDITSpeedHitTestFailedRevalidation.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0050EB8 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

ULONG McTemplateK0p(struct _MCGEN_TRACE_CONTEXT *a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, ...)
{
  EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF
  va_list v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  va_copy(v5, va);
  v7 = 0;
  v6 = 8;
  return McGenEventWrite(a1, a2, a3, 2u, &v4);
}
