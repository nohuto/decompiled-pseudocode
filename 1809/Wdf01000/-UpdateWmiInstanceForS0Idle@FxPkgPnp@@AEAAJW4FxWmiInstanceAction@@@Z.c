/*
 * XREFs of ?UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x1C0017414
 * Callers:
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x1C0017188 (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 * Callees:
 *     memset @ 0x1C001C1C0 (memset.c)
 *     ?AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z @ 0x1C003FF58 (-AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z.c)
 *     ?RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z @ 0x1C00402E8 (-RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z.c)
 *     ?RegisterPowerPolicyWmiInstance@FxPkgPnp@@QEAAJPEBU_GUID@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C00850C0 (-RegisterPowerPolicyWmiInstance@FxPkgPnp@@QEAAJPEBU_GUID@@PEAUFxWmiInstanceInternalCallbacks@@PE.c)
 */

int __fastcall FxPkgPnp::UpdateWmiInstanceForS0Idle(FxPkgPnp *this, FxWmiInstanceAction Action)
{
  int v3; // edx
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  FxWmiInstanceInternal *WmiInstance; // rcx
  int result; // eax
  FxPowerPolicyOwnerSettings *v7; // rdi
  FxWmiInstanceInternal *v8; // rcx
  FxWmiInstanceInternalCallbacks cb; // [rsp+20h] [rbp-28h] BYREF

  v3 = Action - 1;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      m_Owner = this->m_PowerPolicyMachine.m_Owner;
      WmiInstance = m_Owner->m_IdleSettings.WmiInstance;
      if ( WmiInstance )
        FxWmiProvider::RemoveInstance(WmiInstance->m_Provider, m_Owner->m_IdleSettings.WmiInstance);
    }
    return 0;
  }
  v7 = this->m_PowerPolicyMachine.m_Owner;
  v8 = v7->m_IdleSettings.WmiInstance;
  if ( v8 )
  {
    FxWmiProvider::AddInstance(v8->m_Provider, v7->m_IdleSettings.WmiInstance, 1u);
    return 0;
  }
  memset(&cb, 0, sizeof(cb));
  cb.SetInstance = FxPkgPnp::_S0IdleSetInstance;
  cb.QueryInstance = (int (__fastcall *)(FxDevice *, FxWmiInstanceInternal *, unsigned int, void *, unsigned int *))FxPkgPnp::_S0IdleQueryInstance;
  cb.SetItem = FxPkgPnp::_S0IdleSetItem;
  result = FxPkgPnp::RegisterPowerPolicyWmiInstance(
             this,
             &GUID_POWER_DEVICE_ENABLE,
             &cb,
             &v7->m_IdleSettings.WmiInstance);
  if ( result >= 0 )
    return 0;
  return result;
}
