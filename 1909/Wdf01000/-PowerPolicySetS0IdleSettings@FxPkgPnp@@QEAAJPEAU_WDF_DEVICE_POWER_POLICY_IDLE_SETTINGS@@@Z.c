/*
 * XREFs of ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x1C0015DF4
 * Callers:
 *     imp_WdfDeviceAssignS0IdleSettings @ 0x1C0015D10 (imp_WdfDeviceAssignS0IdleSettings.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     ?PowerPolicySetS0IdleState@FxPkgPnp@@QEAAXE@Z @ 0x1C001606C (-PowerPolicySetS0IdleState@FxPkgPnp@@QEAAXE@Z.c)
 *     ?UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x1C00160A8 (-UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z.c)
 *     __security_check_cookie @ 0x1C001A3B0 (__security_check_cookie.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0033794 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_DD @ 0x1C0039070 (WPP_IFR_SF_DD.c)
 *     WPP_IFR_SF_sd @ 0x1C003E908 (WPP_IFR_SF_sd.c)
 *     ?RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z @ 0x1C003F548 (-RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z.c)
 *     ?PowerPolicyGetDeviceDeepestDeviceWakeState@FxPkgPnp@@IEAA?AW4_DEVICE_POWER_STATE@@W4_SYSTEM_POWER_STATE@@@Z @ 0x1C0085990 (-PowerPolicyGetDeviceDeepestDeviceWakeState@FxPkgPnp@@IEAA-AW4_DEVICE_POWER_STATE@@W4_SYSTEM_POW.c)
 *     ?QueryForCapabilities@FxPkgPnp@@IEAAJXZ @ 0x1C0085EA0 (-QueryForCapabilities@FxPkgPnp@@IEAAJXZ.c)
 *     WPP_IFR_SF_LLd @ 0x1C008739C (WPP_IFR_SF_LLd.c)
 *     ?ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z @ 0x1C0088F7C (-ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z.c)
 *     ?InitUsbSS@FxPowerPolicyMachine@@QEAAJXZ @ 0x1C008A528 (-InitUsbSS@FxPowerPolicyMachine@@QEAAJXZ.c)
 *     ?UseSystemManagedIdleTimeout@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C008C950 (-UseSystemManagedIdleTimeout@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
int __fastcall FxPkgPnp::PowerPolicySetS0IdleSettings(FxPkgPnp *this, _WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS *Settings)
{
  unsigned __int8 MaximumLength_high; // r14
  _WDF_TRI_STATE v4; // eax
  _DEVICE_POWER_STATE _a2; // esi
  unsigned __int8 v7; // r12
  unsigned __int8 Set; // r13
  _WDF_POWER_POLICY_S0_IDLE_CAPABILITIES IdleCaps; // eax
  _DEVICE_POWER_STATE DxState; // eax
  unsigned int IdleTimeout; // r15d
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
  int v29; // r14d
  unsigned __int8 MaximumLength; // cl
  const char *v31; // rcx
  unsigned __int16 v32; // r9
  __int64 i; // rcx
  const _GUID *traceGuid; // [rsp+28h] [rbp-E0h]
  int enabled; // [rsp+40h] [rbp-C8h]
  _UNICODE_STRING valueName; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE *v37; // [rsp+58h] [rbp-B0h]
  _UNICODE_STRING ValueName; // [rsp+60h] [rbp-A8h] BYREF
  _UNICODE_STRING v39; // [rsp+70h] [rbp-98h] BYREF
  _UNICODE_STRING v40; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v41[96]; // [rsp+90h] [rbp-78h] OVERLAPPED BYREF
  _WORD childrenOptionalName_buffer[44]; // [rsp+F0h] [rbp-18h] OVERLAPPED BYREF
  int v43; // [rsp+148h] [rbp+40h]
  wchar_t v44; // [rsp+14Ch] [rbp+44h]
  _OWORD v45[4]; // [rsp+158h] [rbp+50h] BYREF
  wchar_t v46; // [rsp+198h] [rbp+90h]

  MaximumLength_high = 0;
  *((_BYTE *)&valueName.MaximumLength + 2) = unk_1C00AEEF2;
  LOBYTE(valueName.MaximumLength) = unk_1C00AEEF2;
  v4 = Settings->Enabled;
  HIBYTE(valueName.Length) = 0;
  _a2 = PowerDeviceD3;
  v7 = 0;
  if ( v4 == WdfTrue )
  {
    LOBYTE(valueName.Length) = 1;
  }
  else if ( v4 == WdfUseDefault )
  {
    LOBYTE(valueName.Length) = 1;
    if ( KeGetCurrentIrql() )
    {
      WPP_IFR_SF_(this->m_Globals, 3u, 0xCu, 0x2Fu, WPP_FxPkgPnp_cpp_Traceguids);
    }
    else
    {
      childrenOptionalName_buffer[0] = aWdfdefaultidle[28];
      *(_OWORD *)&v41[40] = *(_OWORD *)L"WdfDefaultIdleInWorkingState";
      valueName.Buffer = (wchar_t *)3801144;
      *(_OWORD *)&v41[56] = *(_OWORD *)L"ltIdleInWorkingState";
      v37 = &v41[40];
      *(_OWORD *)&v41[72] = *(_OWORD *)L"WorkingState";
      *(_QWORD *)&v41[88] = *(_QWORD *)L"tate";
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
    HIBYTE(valueName.Length) = 0;
    if ( DxState == PowerDeviceMaximum )
      DxState = PowerDeviceD3;
    _a2 = DxState;
    goto LABEL_8;
  }
  if ( (unsigned int)(IdleCaps - 2) > 1 )
    goto LABEL_8;
  _a2 = Settings->DxState;
  HIBYTE(valueName.Length) = 1;
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
    MaximumLength_high = 0;
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
        ValueName.Buffer = (wchar_t *)v41;
        wcscpy((wchar_t *)v41, L"IdleInWorkingState");
        *(_QWORD *)&ValueName.Length = 2490404LL;
        FxPkgPnp::ReadRegistryS0Idle(this, &ValueName, (unsigned __int8 *)&valueName);
      }
    }
    v7 = 1;
  }
  else if ( UserControlOfIdleSettings == IdleDoNotAllowUserControl )
  {
    m_Owner = this->m_PowerPolicyMachine.m_Owner;
    v7 = 0;
    WmiInstance = m_Owner->m_IdleSettings.WmiInstance;
    if ( WmiInstance )
      FxWmiProvider::RemoveInstance(WmiInstance->m_Provider, m_Owner->m_IdleSettings.WmiInstance);
  }
  if ( !Set )
  {
    this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Set = 1;
    this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Overridable = v7;
  }
  if ( Settings->Size > 0x1C )
  {
    if ( Set )
    {
      v15 = this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2;
      if ( (unsigned int)(Settings->IdleTimeoutType - 1) <= 1 != (v15 != 0)
        && WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceObject )
      {
        v31 = "should";
        if ( !v15 )
          v31 = "should not";
        WPP_IFR_SF_sd(this->m_Globals, v15, 0xCu, 0x35u, WPP_FxPkgPnp_cpp_Traceguids, v31, -1073741808);
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
      HIBYTE(valueName.MaximumLength) = 0;
      if ( KeGetCurrentIrql() )
      {
        WPP_IFR_SF_(this->m_Globals, 3u, 0xCu, 0x34u, WPP_FxPkgPnp_cpp_Traceguids);
        MaximumLength = *((_BYTE *)&valueName.MaximumLength + 2);
      }
      else
      {
        v45[0] = *(_OWORD *)L"WdfDirectedPowerTransitionEnable";
        v45[1] = *(_OWORD *)L"tedPowerTransitionEnable";
        v46 = aWdfdirectedpow_0[32];
        v45[2] = *(_OWORD *)L"TransitionEnable";
        v45[3] = *(_OWORD *)L"onEnable";
        v39.Buffer = (wchar_t *)v45;
        *(_QWORD *)&v39.Length = 4325440LL;
        FxPkgPnp::ReadRegistryS0Idle(this, &v39, (unsigned __int8 *)&valueName.MaximumLength);
        *(_OWORD *)&childrenOptionalName_buffer[4] = *(_OWORD *)L"WdfDirectedPowerTransitionChildrenOptional";
        v43 = *(_DWORD *)L"al";
        *(_OWORD *)&childrenOptionalName_buffer[20] = *(_OWORD *)L"TransitionChildrenOptional";
        *(_OWORD *)&childrenOptionalName_buffer[12] = *(_OWORD *)L"tedPowerTransitionChildrenOptional";
        v44 = aWdfdirectedpow[42];
        *(_OWORD *)&childrenOptionalName_buffer[36] = *(_OWORD *)L"enOptional";
        *(_OWORD *)&childrenOptionalName_buffer[28] = *(_OWORD *)L"onChildrenOptional";
        *(_QWORD *)&v40.Length = 5636180LL;
        v40.Buffer = &childrenOptionalName_buffer[4];
        FxPkgPnp::ReadRegistryS0Idle(this, &v40, (unsigned __int8 *)&valueName.MaximumLength + 1);
        MaximumLength_high = HIBYTE(valueName.MaximumLength);
        MaximumLength = valueName.MaximumLength;
      }
      this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_DirectedTransitionsSupported = MaximumLength;
      this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_DirectedTransitionsChildrenOptional = MaximumLength_high;
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
      v32 = 54;
    }
    else
    {
      this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.PowerUpIdleDeviceOnSystemWake = 0;
      m_Globals = this->m_Globals;
      if ( !m_Globals->FxVerboseOn )
        goto LABEL_24;
      v32 = 55;
    }
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, v32, WPP_FxPkgPnp_cpp_Traceguids);
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
  this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.WakeFromS0Capable = HIBYTE(valueName.Length);
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
          WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, 0x38u, WPP_FxPkgPnp_cpp_Traceguids, ExcludeD3Cold);
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
