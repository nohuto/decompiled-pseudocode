/*
 * XREFs of ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C00403BC
 * Callers:
 *     imp_WdfWmiInstanceCreate @ 0x1C003F810 (imp_WdfWmiInstanceCreate.c)
 *     imp_WdfWmiProviderCreate @ 0x1C003FC30 (imp_WdfWmiProviderCreate.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00079C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000DD0C (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000E230 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     __security_check_cookie @ 0x1C001A980 (__security_check_cookie.c)
 *     WPP_IFR_SF_DDd @ 0x1C0030484 (WPP_IFR_SF_DDd.c)
 *     ??0FxWmiProvider@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAVFxDevice@@@Z @ 0x1C003FE34 (--0FxWmiProvider@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAVFxDevice@@@Z.c)
 *     ?DecrementUpdateCount@FxWmiIrpHandler@@AEAAXXZ @ 0x1C0040154 (-DecrementUpdateCount@FxWmiIrpHandler@@AEAAXXZ.c)
 *     WPP_IFR_SF_Dddd @ 0x1C0040650 (WPP_IFR_SF_Dddd.c)
 *     ?AddProvider@FxWmiIrpHandler@@QEAAJPEAVFxWmiProvider@@PEAE@Z @ 0x1C0041C00 (-AddProvider@FxWmiIrpHandler@@QEAAJPEAVFxWmiProvider@@PEAE@Z.c)
 *     ?RemoveProvider@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z @ 0x1C0042198 (-RemoveProvider@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z.c)
 *     ?UpdateGuids@FxWmiIrpHandler@@AEAAXXZ @ 0x1C0042200 (-UpdateGuids@FxWmiIrpHandler@@AEAAXXZ.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C030 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall FxWmiProvider::_Create(
        _FX_DRIVER_GLOBALS *CallersGlobals,
        WDFDEVICE__ *Device,
        _WDF_OBJECT_ATTRIBUTES *ProviderAttributes,
        _WDF_WMI_PROVIDER_CONFIG *WmiProviderConfig,
        WDFWMIPROVIDER__ **WmiProvider,
        FxWmiProvider **Provider)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  __int64 result; // rax
  unsigned int v10; // r8d
  unsigned __int16 v11; // r9
  unsigned int _a2; // ecx
  unsigned int v13; // ebx
  unsigned int Flags; // edx
  unsigned __int16 v15; // r9
  FxWmiProvider *v16; // rax
  FxWmiProvider *v17; // rax
  FxWmiProvider *v18; // rbx
  int v19; // edi
  const _GUID *_a1; // [rsp+20h] [rbp-60h]
  int _a3; // [rsp+30h] [rbp-50h]
  int globals; // [rsp+38h] [rbp-48h]
  int v23; // [rsp+40h] [rbp-40h]
  unsigned __int8 update[8]; // [rsp+50h] [rbp-30h] BYREF
  FxDevice *pDevice; // [rsp+58h] [rbp-28h] BYREF
  void *hProvider; // [rsp+60h] [rbp-20h] BYREF
  _GUID zeroGuid; // [rsp+68h] [rbp-18h] BYREF

  FxObjectHandleGetPtr(CallersGlobals, (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  update[0] = 0;
  m_Globals = pDevice->m_Globals;
  *Provider = 0LL;
  *WmiProvider = 0LL;
  result = FxValidateObjectAttributes(m_Globals, ProviderAttributes, 1);
  if ( (int)result >= 0 )
  {
    _a2 = WmiProviderConfig->Size;
    if ( WmiProviderConfig->Size != 40 )
    {
      v13 = -1073741820;
      WPP_IFR_SF_DDd(
        m_Globals,
        (unsigned __int8)WPP_FxWmiProvider_cpp_Traceguids,
        0xCu,
        0xAu,
        WPP_FxWmiProvider_cpp_Traceguids,
        _a2,
        40,
        -1073741820);
      return v13;
    }
    Flags = WmiProviderConfig->Flags;
    if ( (Flags & 0xFFFFFFF8) != 0 )
    {
      v13 = -1073741811;
      WPP_IFR_SF_DDd(
        m_Globals,
        (unsigned __int8)WPP_FxWmiProvider_cpp_Traceguids,
        0xCu,
        0xBu,
        WPP_FxWmiProvider_cpp_Traceguids,
        Flags,
        7,
        -1073741811);
      return v13;
    }
    if ( (Flags & 0xFFFFFFFB) != 0 && (Flags & 4) != 0 )
    {
      v15 = 12;
      v13 = -1073741811;
LABEL_9:
      WPP_IFR_SF_d(m_Globals, 2u, 0xCu, v15, WPP_FxWmiProvider_cpp_Traceguids, v13);
      return v13;
    }
    if ( !WmiProviderConfig->EvtWmiProviderFunctionControl || (Flags & 6) != 0 )
    {
      *(_QWORD *)&zeroGuid.Data1 = 0LL;
      *(_QWORD *)zeroGuid.Data4 = 0LL;
      if ( RtlCompareMemory(&WmiProviderConfig->Guid, &zeroGuid, 0x10uLL) == 16 )
      {
        v13 = -1073741811;
        v15 = 14;
        goto LABEL_9;
      }
      v16 = (FxWmiProvider *)FxObjectHandleAlloc(
                               m_Globals,
                               ExDefaultNonPagedPoolType,
                               0xD8uLL,
                               0,
                               ProviderAttributes,
                               0,
                               FxObjectTypeExternal);
      if ( v16 )
      {
        FxWmiProvider::FxWmiProvider(v16, m_Globals, WmiProviderConfig, pDevice);
        v18 = v17;
      }
      else
      {
        v18 = 0LL;
      }
      if ( !v18 )
      {
        v13 = -1073741670;
        v15 = 15;
        goto LABEL_9;
      }
      v19 = FxWmiIrpHandler::AddProvider(pDevice->m_PkgWmi, v18, update);
      if ( v19 < 0 )
        goto LABEL_27;
      v19 = FxObject::Commit(v18, (_FX_DRIVER_GLOBALS *)ProviderAttributes, &hProvider, pDevice, 1u);
      if ( v19 >= 0 )
        *WmiProvider = (WDFWMIPROVIDER__ *)hProvider;
      else
        FxWmiIrpHandler::RemoveProvider(pDevice->m_PkgWmi, v18);
      if ( v19 < 0 )
      {
LABEL_27:
        if ( update[0] )
          FxWmiIrpHandler::DecrementUpdateCount(pDevice->m_PkgWmi);
        FxObject::ClearEvtCallbacks(v18);
        v18->DeleteObject(v18);
      }
      else
      {
        *Provider = v18;
        if ( update[0] )
          FxWmiIrpHandler::UpdateGuids(pDevice->m_PkgWmi);
      }
      return (unsigned int)v19;
    }
    else
    {
      WPP_IFR_SF_Dddd(m_Globals, Flags, v10, v11, _a1, WmiProviderConfig->Flags, _a3, globals, v23);
      return 3221225485LL;
    }
  }
  return result;
}
