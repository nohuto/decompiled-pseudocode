/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x180006560
 * Callers:
 *     IsWaitForInputIdlePresent @ 0x180005C78 (IsWaitForInputIdlePresent.c)
 *     IsEnumDisplayDevicesWPresent @ 0x180005D58 (IsEnumDisplayDevicesWPresent.c)
 *     IsDwmLockScreenUpdatesPresent @ 0x180005E38 (IsDwmLockScreenUpdatesPresent.c)
 *     IsDwmMonitorExtDwmProcessCreatedPresent @ 0x180005FA4 (IsDwmMonitorExtDwmProcessCreatedPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
