/*
 * XREFs of ?Destroy@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x1800EB61C
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x1800F15F0 (wil--details--_dynamic_atexit_destructor_for__g_enabledStateManager__.c)
 * Callees:
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x1800867FC (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
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
