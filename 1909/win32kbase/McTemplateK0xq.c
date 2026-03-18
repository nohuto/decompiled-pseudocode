/*
 * XREFs of McTemplateK0xq @ 0x1C010DEC0
 * Callers:
 *     ?UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ @ 0x1C0065760 (-UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ.c)
 *     EtwTraceCompletePowerRequest @ 0x1C00657E0 (EtwTraceCompletePowerRequest.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C0066970 (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     NtDCompositionBeginFrame @ 0x1C006EEA0 (NtDCompositionBeginFrame.c)
 *     EtwTraceKillTimer @ 0x1C007C9F0 (EtwTraceKillTimer.c)
 *     EtwUpdateEvent @ 0x1C0087540 (EtwUpdateEvent.c)
 *     EtwTraceCompositionSurfaceObjectUpdateEvent @ 0x1C0095370 (EtwTraceCompositionSurfaceObjectUpdateEvent.c)
 *     EtwLogicalSurfCreateEvent @ 0x1C009A430 (EtwLogicalSurfCreateEvent.c)
 *     EtwLogicalSurfDestroyEvent @ 0x1C009C000 (EtwLogicalSurfDestroyEvent.c)
 *     ?CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x1C0104780 (-CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z.c)
 *     EtwTraceDCompBeginFrameEvent @ 0x1C010AEA0 (EtwTraceDCompBeginFrameEvent.c)
 *     EtwTraceFlipManagerStopTokenReleaseToFrame @ 0x1C010B4D0 (EtwTraceFlipManagerStopTokenReleaseToFrame.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0058898 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

ULONG McTemplateK0xq(struct _MCGEN_TRACE_CONTEXT *a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-48h] BYREF
  va_list v5; // [rsp+40h] [rbp-38h]
  int v6; // [rsp+48h] [rbp-30h]
  int v7; // [rsp+4Ch] [rbp-2Ch]
  va_list v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+5Ch] [rbp-1Ch]
  __int64 v11; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  va_list va1; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  va_copy(v5, va);
  v7 = 0;
  v6 = 8;
  va_copy(v8, va1);
  v10 = 0;
  v9 = 4;
  return McGenEventWrite(a1, a2, (LPCGUID)&Context.Flags, 3u, &v4);
}
