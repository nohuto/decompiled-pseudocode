/*
 * XREFs of ?GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ @ 0x1C008F570
 * Callers:
 *     ?InitializeComponents@FxPoxInterface@@QEAAJXZ @ 0x1C008F5A8 (-InitializeComponents@FxPoxInterface@@QEAAJXZ.c)
 *     ?UninitializeComponents@FxPoxInterface@@QEAAXXZ @ 0x1C008F770 (-UninitializeComponents@FxPoxInterface@@QEAAXXZ.c)
 *     ?ComponentActiveCallback@FxPoxInterface@@CAXPEAXK@Z @ 0x1C008F860 (-ComponentActiveCallback@FxPoxInterface@@CAXPEAXK@Z.c)
 *     ?ComponentIdleCallback@FxPoxInterface@@CAXPEAXK@Z @ 0x1C008F970 (-ComponentIdleCallback@FxPoxInterface@@CAXPEAXK@Z.c)
 *     ?PowerControlCallback@FxPoxInterface@@CAJPEAXPEBU_GUID@@0_K02PEA_K@Z @ 0x1C008FA90 (-PowerControlCallback@FxPoxInterface@@CAJPEAXPEBU_GUID@@0_K02PEA_K@Z.c)
 *     ?PoxRegisterDevice@FxPoxInterface@@AEAAJXZ @ 0x1C008FC08 (-PoxRegisterDevice@FxPoxInterface@@AEAAJXZ.c)
 *     ?StateCallback@FxPoxInterface@@CAXPEAXKK@Z @ 0x1C008FDA0 (-StateCallback@FxPoxInterface@@CAXPEAXKK@Z.c)
 * Callees:
 *     <none>
 */

_POX_SETTINGS *__fastcall FxPoxInterface::GetPowerFrameworkSettings(FxPoxInterface *this)
{
  __int64 v1; // r8

  v1 = 0LL;
  if ( (this->m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 4) != 0 )
    return this->m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_PoxSettings;
  return (_POX_SETTINGS *)v1;
}
