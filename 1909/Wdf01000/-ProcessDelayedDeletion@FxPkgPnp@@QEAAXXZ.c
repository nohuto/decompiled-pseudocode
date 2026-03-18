/*
 * XREFs of ?ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ @ 0x1C0085E30
 * Callers:
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C0011100 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0011470 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z @ 0x1C0015BAC (-Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C00133A4 (WPP_IFR_SF_qq.c)
 *     ?CleanupStateMachines@FxPkgPnp@@QEAAXE@Z @ 0x1C00834BC (-CleanupStateMachines@FxPkgPnp@@QEAAXE@Z.c)
 *     ?DeleteDevice@FxPkgPnp@@IEAAXXZ @ 0x1C00839D0 (-DeleteDevice@FxPkgPnp@@IEAAXXZ.c)
 */

void __fastcall FxPkgPnp::ProcessDelayedDeletion(FxPkgPnp *this)
{
  FxDeviceBase *m_DeviceBase; // r8
  const void *_a1; // rdx

  m_DeviceBase = this->m_DeviceBase;
  _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_DeviceBase->m_ObjectSize )
    _a1 = 0LL;
  WPP_IFR_SF_qq(
    this->m_Globals,
    4u,
    0xCu,
    0x22u,
    WPP_FxPkgPnp_cpp_Traceguids,
    _a1,
    m_DeviceBase->m_DeviceObject.m_DeviceObject);
  FxPkgPnp::CleanupStateMachines(this, 0);
  FxPkgPnp::DeleteDevice(this);
}
