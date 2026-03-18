/*
 * XREFs of ZwSetSystemPowerState @ 0x1401BB5F0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 *     PopIssueActionRequest @ 0x1406DE870 (PopIssueActionRequest.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetSystemPowerState(POWER_ACTION SystemAction, SYSTEM_POWER_STATE MinSystemState, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&SystemAction, *(_QWORD *)&MinSystemState, *(_QWORD *)&Flags);
}
