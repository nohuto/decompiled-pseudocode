/*
 * XREFs of ?CleanupPowerCallback@FxPowerPolicyOwnerSettings@@QEAAXXZ @ 0x1C008A17C
 * Callers:
 *     ?CleanupStateMachines@FxPkgPnp@@QEAAXE@Z @ 0x1C00834BC (-CleanupStateMachines@FxPkgPnp@@QEAAXE@Z.c)
 *     ??1FxPowerPolicyOwnerSettings@@QEAA@XZ @ 0x1C008A09C (--1FxPowerPolicyOwnerSettings@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FxPowerPolicyOwnerSettings::CleanupPowerCallback(FxPowerPolicyOwnerSettings *this)
{
  void *m_PowerCallbackRegistration; // rcx
  struct _CALLBACK_OBJECT *m_PowerCallbackObject; // rcx

  m_PowerCallbackRegistration = this->m_PowerCallbackRegistration;
  if ( m_PowerCallbackRegistration )
  {
    ExUnregisterCallback(m_PowerCallbackRegistration);
    this->m_PowerCallbackRegistration = 0LL;
  }
  m_PowerCallbackObject = this->m_PowerCallbackObject;
  if ( m_PowerCallbackObject )
  {
    ObfDereferenceObject(m_PowerCallbackObject);
    this->m_PowerCallbackObject = 0LL;
  }
}
