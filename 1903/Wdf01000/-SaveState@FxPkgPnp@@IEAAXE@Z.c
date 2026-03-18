/*
 * XREFs of ?SaveState@FxPkgPnp@@IEAAXE@Z @ 0x1C001023C
 * Callers:
 *     ?_PowerStateCallback@FxPowerPolicyOwnerSettings@@KAXPEAX00@Z @ 0x1C0010150 (-_PowerStateCallback@FxPowerPolicyOwnerSettings@@KAXPEAX00@Z.c)
 *     ?PowerPolStartingDecideS0Wake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0010350 (-PowerPolStartingDecideS0Wake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z @ 0x1C007D0D0 (-PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z.c)
 *     ?PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z @ 0x1C0085D94 (-PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z.c)
 * Callees:
 *     ?OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z @ 0x1C000D544 (-OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 */

void __fastcall FxPkgPnp::SaveState(FxPkgPnp *this, unsigned __int8 UseCanSaveState)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _IRP *m_PendingDevicePowerIrp; // rax
  FxPowerPolicyOwnerSettings *v6; // rax
  FxPowerPolicyOwnerSettings *v7; // rcx
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rdx
  _UNICODE_STRING name; // [rsp+30h] [rbp-10h] BYREF
  int Data; // [rsp+50h] [rbp+10h] BYREF
  FxAutoRegKey hKey; // [rsp+60h] [rbp+20h] BYREF

  *(_QWORD *)&name.Length = 0LL;
  name.Buffer = 0LL;
  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  hKey.m_Key = 0LL;
  if ( m_Owner )
  {
    if ( UseCanSaveState && !m_Owner->m_CanSaveState )
    {
      m_Globals = this->m_Globals;
      if ( !m_Globals->FxVerboseOn )
        return;
      m_DeviceBase = this->m_DeviceBase;
      m_ObjectSize = m_DeviceBase->m_ObjectSize;
      _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x50u, WPP_FxPkgPnp_cpp_Traceguids, _a1);
    }
    else if ( (m_Owner->m_IdleSettings.Dirty || m_Owner->m_WakeSettings.Dirty)
           && (m_Owner->m_IdleSettings.Overridable || m_Owner->m_WakeSettings.Overridable)
           && (!this->m_SpecialSupport[0]
            || (m_PendingDevicePowerIrp = this->m_PendingDevicePowerIrp) == 0LL
            || m_PendingDevicePowerIrp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 1)
           && (int)FxDevice::OpenSettingsKey(this->m_Device, &hKey.m_Key, 0x20000u) >= 0 )
    {
      v6 = this->m_PowerPolicyMachine.m_Owner;
      v7 = v6;
      if ( v6->m_IdleSettings.Overridable && v6->m_IdleSettings.Dirty )
      {
        RtlInitUnicodeString(&name, L"IdleInWorkingState");
        Data = this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Enabled;
        ZwSetValueKey(hKey.m_Key, &name, 0, 4u, &Data, 4u);
        this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Dirty = 0;
        v7 = this->m_PowerPolicyMachine.m_Owner;
      }
      if ( v7->m_WakeSettings.Overridable && v7->m_WakeSettings.Dirty )
      {
        RtlInitUnicodeString(&name, L"WakeFromSleepState");
        Data = this->m_PowerPolicyMachine.m_Owner->m_WakeSettings.Enabled;
        ZwSetValueKey(hKey.m_Key, &name, 0, 4u, &Data, 4u);
        this->m_PowerPolicyMachine.m_Owner->m_WakeSettings.Dirty = 0;
      }
    }
    if ( hKey.m_Key )
      ZwClose(hKey.m_Key);
  }
}
