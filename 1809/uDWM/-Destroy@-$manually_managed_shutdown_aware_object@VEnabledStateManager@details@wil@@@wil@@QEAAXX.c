/*
 * XREFs of ?Destroy@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18004BE30
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x18004EB60 (wil--details--_dynamic_atexit_destructor_for__g_enabledStateManager__.c)
 * Callees:
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180034394 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 */

void __fastcall wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::Destroy(wil *a1)
{
  __int64 v1; // rdx
  void (*v2)(unsigned int, unsigned int, unsigned int, const char *); // r8

  if ( wil::ProcessShutdownInProgress(a1) )
  {
    wil::details::g_enabledStateManager = 0;
    wil::details::EnabledStateManager::RecordCachedUsageUnderLock(
      (wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager,
      v1,
      v2);
  }
  else
  {
    wil::details::EnabledStateManager::`scalar deleting destructor'(
      (wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager,
      v1);
  }
}
