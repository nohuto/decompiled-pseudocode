/*
 * XREFs of McTemplateK0x @ 0x1C010F528
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C00136C0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C00667F4 (-DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     EtwTraceFlipManagerStartCompleteToken @ 0x1C010B440 (EtwTraceFlipManagerStartCompleteToken.c)
 *     EtwTraceFlipManagerStartTokenReleaseToFrame @ 0x1C010B470 (EtwTraceFlipManagerStartTokenReleaseToFrame.c)
 *     EtwTraceFlipManagerStopCompleteToken @ 0x1C010B4A0 (EtwTraceFlipManagerStopCompleteToken.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0058898 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

ULONG McTemplateK0x(struct _MCGEN_TRACE_CONTEXT *a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
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
  return McGenEventWrite(a1, a2, (LPCGUID)&Context.Flags, 2u, &v4);
}
