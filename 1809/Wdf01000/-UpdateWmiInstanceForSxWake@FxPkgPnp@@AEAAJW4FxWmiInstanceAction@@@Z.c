/*
 * XREFs of ?UpdateWmiInstanceForSxWake@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x1C008867C
 * Callers:
 *     ?PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z @ 0x1C0084A24 (-PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z.c)
 * Callees:
 *     memset @ 0x1C001C1C0 (memset.c)
 *     ?AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z @ 0x1C003FF58 (-AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z.c)
 *     ?RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z @ 0x1C00402E8 (-RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z.c)
 *     ?RegisterPowerPolicyWmiInstance@FxPkgPnp@@QEAAJPEBU_GUID@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C00850C0 (-RegisterPowerPolicyWmiInstance@FxPkgPnp@@QEAAJPEBU_GUID@@PEAUFxWmiInstanceInternalCallbacks@@PE.c)
 */

__int64 __fastcall FxPkgPnp::UpdateWmiInstanceForSxWake(FxPkgPnp *this, FxWmiInstanceAction Action, unsigned __int8 a3)
{
  int v4; // edx
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  FxWmiInstanceInternal *WmiInstance; // rcx
  FxPowerPolicyOwnerSettings *v7; // rdi
  FxWmiInstanceInternal *v8; // rcx
  __int64 result; // rax
  FxWmiInstanceInternalCallbacks cb; // [rsp+20h] [rbp-28h] BYREF

  v4 = Action - 1;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      m_Owner = this->m_PowerPolicyMachine.m_Owner;
      WmiInstance = m_Owner->m_WakeSettings.WmiInstance;
      if ( WmiInstance )
        FxWmiProvider::RemoveInstance(WmiInstance->m_Provider, m_Owner->m_WakeSettings.WmiInstance, a3);
    }
    return 0LL;
  }
  v7 = this->m_PowerPolicyMachine.m_Owner;
  v8 = v7->m_WakeSettings.WmiInstance;
  if ( v8 )
  {
    FxWmiProvider::AddInstance(v8->m_Provider, v7->m_WakeSettings.WmiInstance, 1u);
    return 0LL;
  }
  memset(&cb, 0, sizeof(cb));
  cb.SetInstance = (int (__fastcall *)(FxDevice *, FxWmiInstanceInternal *, unsigned int, void *))FxPkgPnp::_SxWakeSetInstance;
  cb.QueryInstance = (int (__fastcall *)(FxDevice *, FxWmiInstanceInternal *, unsigned int, void *, unsigned int *))FxPkgPnp::_SxWakeQueryInstance;
  cb.SetItem = (int (__fastcall *)(FxDevice *, FxWmiInstanceInternal *, unsigned int, unsigned int, void *))FxPkgPnp::_SxWakeSetItem;
  result = FxPkgPnp::RegisterPowerPolicyWmiInstance(
             this,
             &GUID_POWER_DEVICE_WAKE_ENABLE,
             &cb,
             &v7->m_WakeSettings.WmiInstance);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
