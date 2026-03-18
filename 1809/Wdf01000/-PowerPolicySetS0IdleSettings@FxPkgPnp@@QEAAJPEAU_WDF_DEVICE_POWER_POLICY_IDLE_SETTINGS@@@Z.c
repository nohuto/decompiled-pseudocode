/*
 * XREFs of ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x1C0017188
 * Callers:
 *     imp_WdfDeviceAssignS0IdleSettings @ 0x1C0017020 (imp_WdfDeviceAssignS0IdleSettings.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     ?PowerPolicySetS0IdleState@FxPkgPnp@@QEAAXE@Z @ 0x1C00173D8 (-PowerPolicySetS0IdleState@FxPkgPnp@@QEAAXE@Z.c)
 *     ?UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x1C0017414 (-UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z.c)
 *     __security_check_cookie @ 0x1C001A980 (__security_check_cookie.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C00343B4 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_DD @ 0x1C0039CC0 (WPP_IFR_SF_DD.c)
 *     WPP_IFR_SF_sd @ 0x1C003F69C (WPP_IFR_SF_sd.c)
 *     ?RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z @ 0x1C00402E8 (-RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z.c)
 *     ?PowerPolicyGetDeviceDeepestDeviceWakeState@FxPkgPnp@@IEAA?AW4_DEVICE_POWER_STATE@@W4_SYSTEM_POWER_STATE@@@Z @ 0x1C00848EC (-PowerPolicyGetDeviceDeepestDeviceWakeState@FxPkgPnp@@IEAA-AW4_DEVICE_POWER_STATE@@W4_SYSTEM_POW.c)
 *     ?QueryForCapabilities@FxPkgPnp@@IEAAJXZ @ 0x1C0084DFC (-QueryForCapabilities@FxPkgPnp@@IEAAJXZ.c)
 *     WPP_IFR_SF_LLd @ 0x1C008628C (WPP_IFR_SF_LLd.c)
 *     ?ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z @ 0x1C0087E4C (-ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z.c)
 *     ?InitUsbSS@FxPowerPolicyMachine@@QEAAJXZ @ 0x1C0089338 (-InitUsbSS@FxPowerPolicyMachine@@QEAAJXZ.c)
 *     ?UseSystemManagedIdleTimeout@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C008B354 (-UseSystemManagedIdleTimeout@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
int __fastcall FxPkgPnp::PowerPolicySetS0IdleSettings(FxPkgPnp *this, _WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS *Settings)
{
  _WDF_TRI_STATE v2; // eax
  _DEVICE_POWER_STATE _a2; // r14d
  unsigned __int8 v4; // r13
  unsigned __int8 v5; // r15
  unsigned __int8 Set; // r12
  _WDF_POWER_POLICY_S0_IDLE_CAPABILITIES IdleCaps; // eax
  _DEVICE_POWER_STATE DxState; // eax
  unsigned int IdleTimeout; // esi
  _WDF_POWER_POLICY_S0_IDLE_USER_CONTROL UserControlOfIdleSettings; // eax
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  FxWmiInstanceInternal *WmiInstance; // rcx
  int v15; // edx
  _WDF_TRI_STATE PowerUpIdleDeviceOnSystemWake; // ecx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxPowerPolicyOwnerSettings *v18; // rcx
  _WDF_POWER_POLICY_S0_IDLE_CAPABILITIES v19; // eax
  _WDF_TRI_STATE ExcludeD3Cold; // ecx
  unsigned __int8 v21; // dl
  void (__fastcall *SetD3ColdSupport)(void *, unsigned __int8); // rax
  int result; // eax
  _DEVICE_POWER_STATE DeviceDeepestDeviceWakeState; // eax
  unsigned __int8 v25; // dl
  unsigned int v26; // r8d
  unsigned __int16 v27; // r9
  int inited; // eax
  int v29; // esi
  const char *v30; // rcx
  unsigned __int16 v31; // r9
  __int64 i; // rcx
  const _GUID *traceGuid; // [rsp+28h] [rbp-89h]
  int enabled; // [rsp+40h] [rbp-71h]
  _UNICODE_STRING valueName; // [rsp+48h] [rbp-69h] BYREF
  _BYTE *v36; // [rsp+58h] [rbp-59h]
  _UNICODE_STRING ValueName; // [rsp+60h] [rbp-51h] BYREF
  _BYTE v38[96]; // [rsp+70h] [rbp-41h] OVERLAPPED BYREF
  wchar_t v39; // [rsp+D0h] [rbp+1Fh]

  v2 = Settings->Enabled;
  _a2 = PowerDeviceD3;
  v4 = 0;
  v5 = 0;
  if ( v2 == WdfTrue )
  {
    LOBYTE(valueName.Length) = 1;
  }
  else if ( v2 == WdfUseDefault )
  {
    LOBYTE(valueName.Length) = 1;
    if ( KeGetCurrentIrql() )
    {
      WPP_IFR_SF_(this->m_Globals, 3u, 0xCu, 0x2Fu, WPP_FxPkgPnp_cpp_Traceguids);
    }
    else
    {
      v39 = aWdfdefaultidle[28];
      *(_OWORD *)&v38[40] = *(_OWORD *)L"WdfDefaultIdleInWorkingState";
      LODWORD(valueName.Buffer) = 3801144;
      *(_OWORD *)&v38[56] = *(_OWORD *)L"ltIdleInWorkingState";
      v36 = &v38[40];
      *(_OWORD *)&v38[72] = *(_OWORD *)L"WorkingState";
      *(_QWORD *)&v38[88] = *(_QWORD *)L"tate";
      FxPkgPnp::ReadRegistryS0Idle(this, (const _UNICODE_STRING *)&valueName.Buffer, (unsigned __int8 *)&valueName);
    }
  }
  else
  {
    LOBYTE(valueName.Length) = 0;
  }
  Set = this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Set;
  if ( !this->m_CapsQueried && !KeGetCurrentIrql() )
  {
    result = FxPkgPnp::QueryForCapabilities(this);
    if ( result < 0 )
      return result;
  }
  IdleCaps = Settings->IdleCaps;
  if ( IdleCaps == IdleCannotWakeFromS0 )
  {
    DxState = Settings->DxState;
    v4 = 0;
    if ( DxState == PowerDeviceMaximum )
      DxState = PowerDeviceD3;
    _a2 = DxState;
    goto LABEL_8;
  }
  if ( (unsigned int)(IdleCaps - 2) > 1 )
    goto LABEL_8;
  _a2 = Settings->DxState;
  v4 = 1;
  DeviceDeepestDeviceWakeState = FxPkgPnp::PowerPolicyGetDeviceDeepestDeviceWakeState(this, PowerSystemWorking);
  if ( _a2 == PowerDeviceMaximum )
  {
    _a2 = DeviceDeepestDeviceWakeState;
    if ( (unsigned int)(DeviceDeepestDeviceWakeState - 2) > 2 )
    {
LABEL_51:
      v27 = 48;
LABEL_52:
      WPP_IFR_SF_DD(this->m_Globals, v25, 0xCu, v27, WPP_FxPkgPnp_cpp_Traceguids, _a2, -1073741101);
      return -1073741101;
    }
    if ( DeviceDeepestDeviceWakeState > PowerDeviceD2 )
    {
      if ( Settings->IdleCaps != IdleUsbSelectiveSuspend )
        goto LABEL_8;
      goto LABEL_51;
    }
  }
  else
  {
    if ( _a2 > DeviceDeepestDeviceWakeState )
    {
      WPP_IFR_SF_LLd(this->m_Globals, v25, v26, 0x31u, traceGuid, _a2, DeviceDeepestDeviceWakeState, enabled);
      return -1073741101;
    }
    if ( _a2 > PowerDeviceD2 )
    {
      if ( Settings->IdleCaps != IdleUsbSelectiveSuspend )
        goto LABEL_8;
      v27 = 50;
      goto LABEL_52;
    }
  }
  if ( Settings->IdleCaps == IdleUsbSelectiveSuspend )
  {
    inited = FxPowerPolicyMachine::InitUsbSS(&this->m_PowerPolicyMachine);
    v29 = inited;
    if ( inited < 0 )
    {
      WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, 0x33u, WPP_FxPkgPnp_cpp_Traceguids, inited);
      return v29;
    }
  }
LABEL_8:
  IdleTimeout = Settings->IdleTimeout;
  if ( !IdleTimeout )
    IdleTimeout = 5000;
  UserControlOfIdleSettings = Settings->UserControlOfIdleSettings;
  if ( UserControlOfIdleSettings == IdleAllowUserControl )
  {
    result = FxPkgPnp::UpdateWmiInstanceForS0Idle(this, AddInstance);
    if ( result < 0 )
      return result;
    if ( Settings->Enabled == WdfUseDefault )
    {
      if ( Set || KeGetCurrentIrql() )
      {
        LOBYTE(valueName.Length) = this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Enabled;
      }
      else
      {
        ValueName.Buffer = (wchar_t *)v38;
        wcscpy((wchar_t *)v38, L"IdleInWorkingState");
        *(_DWORD *)&ValueName.Length = 2490404;
        FxPkgPnp::ReadRegistryS0Idle(this, &ValueName, (unsigned __int8 *)&valueName);
      }
    }
    v5 = 1;
  }
  else if ( UserControlOfIdleSettings == IdleDoNotAllowUserControl )
  {
    m_Owner = this->m_PowerPolicyMachine.m_Owner;
    v5 = 0;
    WmiInstance = m_Owner->m_IdleSettings.WmiInstance;
    if ( WmiInstance )
      FxWmiProvider::RemoveInstance(WmiInstance->m_Provider, m_Owner->m_IdleSettings.WmiInstance);
  }
  if ( !Set )
  {
    this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Set = 1;
    this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Overridable = v5;
  }
  if ( Settings->Size > 0x1C )
  {
    if ( Set )
    {
      v15 = this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2;
      if ( (unsigned int)(Settings->IdleTimeoutType - 1) <= 1 != (v15 != 0)
        && WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceObject )
      {
        v30 = "should";
        if ( !v15 )
          v30 = "should not";
        WPP_IFR_SF_sd(this->m_Globals, v15, 0xCu, 0x34u, WPP_FxPkgPnp_cpp_Traceguids, v30, -1073741808);
        FxVerifierDbgBreakPoint(this->m_Globals);
        return -1073741808;
      }
    }
    else if ( (unsigned int)(Settings->IdleTimeoutType - 1) <= 1 )
    {
      result = IdleTimeoutManagement::UseSystemManagedIdleTimeout(
                 &this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt,
                 this->m_Globals);
      if ( result < 0 )
        return result;
    }
  }
  if ( Settings->IdleCaps == IdleCannotWakeFromS0 )
  {
    if ( Settings->Size <= 0x18 )
      PowerUpIdleDeviceOnSystemWake = WdfUseDefault;
    else
      PowerUpIdleDeviceOnSystemWake = Settings->PowerUpIdleDeviceOnSystemWake;
    if ( PowerUpIdleDeviceOnSystemWake )
    {
      if ( PowerUpIdleDeviceOnSystemWake != WdfTrue )
        goto LABEL_24;
      this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.PowerUpIdleDeviceOnSystemWake = 1;
      m_Globals = this->m_Globals;
      if ( !m_Globals->FxVerboseOn )
        goto LABEL_24;
      v31 = 53;
    }
    else
    {
      this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.PowerUpIdleDeviceOnSystemWake = 0;
      m_Globals = this->m_Globals;
      if ( !m_Globals->FxVerboseOn )
        goto LABEL_24;
      v31 = 54;
    }
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, v31, WPP_FxPkgPnp_cpp_Traceguids);
  }
LABEL_24:
  v18 = this->m_PowerPolicyMachine.m_Owner;
  if ( !v18->m_IdleSettings.UsbSSCapabilityKnown )
  {
    v19 = Settings->IdleCaps;
    if ( v19 == IdleUsbSelectiveSuspend )
    {
      for ( i = 0LL; i < 2; ++i )
        *(&this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.UsbSSCapable + i) = 1;
    }
    else if ( v19 == IdleCanWakeFromS0 )
    {
      v18->m_IdleSettings.UsbSSCapabilityKnown = 1;
    }
  }
  this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.WakeFromS0Capable = v4;
  this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.DxState = _a2;
  if ( (this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2) != 0 )
  {
    if ( !Set )
      this->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine.m_PowerTimeout = (_LARGE_INTEGER)-1LL;
    if ( Settings->IdleTimeoutType == SystemManagedIdleTimeoutWithHint )
      this->m_PowerPolicyMachine.m_Owner->m_PoxInterface.m_NextIdleTimeoutHint = IdleTimeout;
  }
  else
  {
    this->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine.m_PowerTimeout = (_LARGE_INTEGER)(-10000LL * IdleTimeout);
  }
  if ( Settings->Size > 0x1C )
  {
    ExcludeD3Cold = Settings->ExcludeD3Cold;
    if ( ExcludeD3Cold != WdfUseDefault )
    {
      if ( ExcludeD3Cold )
      {
        if ( ExcludeD3Cold != WdfTrue )
          WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, 0x37u, WPP_FxPkgPnp_cpp_Traceguids, ExcludeD3Cold);
        v21 = 0;
      }
      else
      {
        v21 = 1;
      }
      this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.D3ColdCapabilityKnown = 1;
      this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.D3ColdSupported = v21;
      SetD3ColdSupport = this->m_D3ColdInterface.SetD3ColdSupport;
      if ( SetD3ColdSupport )
        ((void (__fastcall *)(void *))SetD3ColdSupport)(this->m_D3ColdInterface.Context);
    }
  }
  FxPkgPnp::PowerPolicySetS0IdleState(this, valueName.Length);
  return 0;
}
