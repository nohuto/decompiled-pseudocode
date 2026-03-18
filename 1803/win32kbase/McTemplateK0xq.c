/*
 * XREFs of McTemplateK0xq @ 0x1C00AE774
 * Callers:
 *     EtwTraceCompositionSurfaceObjectUpdateEvent @ 0x1C0011C90 (EtwTraceCompositionSurfaceObjectUpdateEvent.c)
 *     NtDCompositionBeginFrame @ 0x1C0045BE0 (NtDCompositionBeginFrame.c)
 *     EtwTraceKillTimer @ 0x1C00636F0 (EtwTraceKillTimer.c)
 *     EtwUpdateEvent @ 0x1C0064970 (EtwUpdateEvent.c)
 *     EtwLogicalSurfCreateEvent @ 0x1C006AD30 (EtwLogicalSurfCreateEvent.c)
 *     EtwLogicalSurfDestroyEvent @ 0x1C006AD70 (EtwLogicalSurfDestroyEvent.c)
 *     ?UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ @ 0x1C006CB64 (-UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ.c)
 *     EtwTraceCompletePowerRequest @ 0x1C006CBDC (EtwTraceCompletePowerRequest.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C00A2118 (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     ?CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x1C00A22F0 (-CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z.c)
 *     EtwTraceDCompBeginFrameEvent @ 0x1C00AB9E0 (EtwTraceDCompBeginFrameEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     McGenEventWriteKM @ 0x1C00AD480 (McGenEventWriteKM.c)
 */

NTSTATUS McTemplateK0xq(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-48h] BYREF
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
  return McGenEventWriteKM(a1, a2, &W32kControlGuid, 3u, &v4);
}
