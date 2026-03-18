/*
 * XREFs of imp_WdfWmiInstanceCreate @ 0x1C003EA70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C002F8AC (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_qqqd @ 0x1C002FD20 (WPP_IFR_SF_qqqd.c)
 *     WPP_IFR_SF_ @ 0x1C0033794 (WPP_IFR_SF_.c)
 *     FxIsEqualGuid @ 0x1C003AEB0 (FxIsEqualGuid.c)
 *     ?AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z @ 0x1C003F1B8 (-AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C003F61C (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x1C00402B0 (-_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTA.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B850 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C490 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

int __fastcall imp_WdfWmiInstanceCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_WMI_INSTANCE_CONFIG *InstanceConfig,
        _WDF_OBJECT_ATTRIBUTES *InstanceAttributes,
        WDFWMIPROVIDER__ **Instance)
{
  _FX_DRIVER_GLOBALS *DriverName; // rdi
  int result; // eax
  WDFWMIPROVIDER__ *Provider; // rdx
  _WDF_WMI_PROVIDER_CONFIG *ProviderConfig; // rax
  int v12; // esi
  FxPowerPolicyOwnerSettings *m_Owner; // rsi
  int v14; // eax
  FxWmiInstanceExternal *v15; // rdi
  __int64 v16; // rcx
  FxDevice *pDevice; // [rsp+50h] [rbp-10h] BYREF
  WDFWMIPROVIDER__ *hProvider; // [rsp+58h] [rbp-8h] BYREF
  void *retaddr; // [rsp+88h] [rbp+28h]
  FxWmiProvider *pProvider; // [rsp+90h] [rbp+30h] BYREF
  FxWmiInstanceExternal *pInstance; // [rsp+A0h] [rbp+40h] BYREF

  pInstance = 0LL;
  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  if ( !InstanceConfig )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, retaddr);
  if ( InstanceConfig->Size != 64 )
  {
    WPP_IFR_SF_DDd(
      DriverName,
      (unsigned __int8)Device,
      0x12u,
      0xBu,
      WPP_FxWmiAPI_cpp_Traceguids,
      InstanceConfig->Size,
      64,
      -1073741820);
    return -1073741820;
  }
  Provider = InstanceConfig->Provider;
  ProviderConfig = InstanceConfig->ProviderConfig;
  if ( Provider )
  {
    if ( ProviderConfig )
    {
      v12 = -1073741811;
      WPP_IFR_SF_qqqd(
        DriverName,
        2u,
        0x12u,
        0xDu,
        WPP_FxWmiAPI_cpp_Traceguids,
        InstanceConfig,
        Provider,
        (__int64)ProviderConfig,
        -1073741811);
      return v12;
    }
    FxObjectHandleGetPtr(DriverName, (unsigned __int64)Provider, 0x1004u, (void **)&pProvider);
LABEL_19:
    v14 = FxWmiInstanceExternal::_Create(
            pProvider->m_Globals,
            pProvider,
            InstanceConfig,
            InstanceAttributes,
            (WDFWMIINSTANCE__ **)&hProvider,
            &pInstance);
    v15 = pInstance;
    v12 = v14;
    if ( v14 < 0 )
      goto LABEL_25;
    if ( InstanceConfig->Register )
      v12 = FxWmiProvider::AddInstance(pProvider, pInstance, 0);
    if ( v12 < 0 )
    {
LABEL_25:
      if ( v15 )
      {
        FxObject::ClearEvtCallbacks(v15);
        ((void (*)(void))v15->DeleteObject)();
      }
      if ( InstanceConfig->ProviderConfig )
      {
        FxObject::ClearEvtCallbacks(pProvider);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 48LL))(v16);
      }
    }
    else if ( Instance )
    {
      *Instance = hProvider;
    }
    return v12;
  }
  if ( !ProviderConfig )
  {
    v12 = -1073741811;
    WPP_IFR_SF_qL(DriverName, 2u, 0x12u, 0xCu, WPP_FxWmiAPI_cpp_Traceguids, InstanceConfig, 0xC000000D);
    return v12;
  }
  hProvider = 0LL;
  FxObjectHandleGetPtr(DriverName, (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_Owner = pDevice->m_PkgPnp->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner
    && (FxIsEqualGuid(&InstanceConfig->ProviderConfig->Guid, &GUID_POWER_DEVICE_ENABLE)
     && m_Owner->m_IdleSettings.WmiInstance
     || FxIsEqualGuid(&InstanceConfig->ProviderConfig->Guid, &GUID_POWER_DEVICE_WAKE_ENABLE)
     && m_Owner->m_WakeSettings.WmiInstance) )
  {
    WPP_IFR_SF_(DriverName, 2u, 0x12u, 0xEu, WPP_FxWmiAPI_cpp_Traceguids);
    return -1073741055;
  }
  result = FxWmiProvider::_Create(DriverName, Device, 0LL, InstanceConfig->ProviderConfig, &hProvider, &pProvider);
  if ( result >= 0 )
    goto LABEL_19;
  return result;
}
