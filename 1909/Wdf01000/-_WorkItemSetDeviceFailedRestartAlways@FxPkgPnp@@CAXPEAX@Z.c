/*
 * XREFs of ?_WorkItemSetDeviceFailedRestartAlways@FxPkgPnp@@CAXPEAX@Z @ 0x1C0087160
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDeviceFailedAttemptRestart@FxPkgPnp@@AEAAXE@Z @ 0x1C0086490 (-SetDeviceFailedAttemptRestart@FxPkgPnp@@AEAAXE@Z.c)
 */

void __fastcall FxPkgPnp::_WorkItemSetDeviceFailedRestartAlways(FxPkgPnp *Parameter, __int64 a2, __int64 a3)
{
  LOBYTE(a2) = 1;
  FxPkgPnp::SetDeviceFailedAttemptRestart(Parameter, a2, a3);
}
