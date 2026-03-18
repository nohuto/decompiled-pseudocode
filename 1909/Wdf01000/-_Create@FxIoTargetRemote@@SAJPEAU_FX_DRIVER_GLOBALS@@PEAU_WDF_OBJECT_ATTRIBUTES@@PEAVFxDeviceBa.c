/*
 * XREFs of ?_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBase@@PEAPEAV1@@Z @ 0x1C0069EA4
 * Callers:
 *     imp_WdfIoTargetCreate @ 0x1C0065C50 (imp_WdfIoTargetCreate.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B6A0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C000DA90 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0017908 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     WPP_IFR_SF_qqqd @ 0x1C002FD20 (WPP_IFR_SF_qqqd.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C490 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ??0FxIoTargetRemote@@IEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C006919C (--0FxIoTargetRemote@@IEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxIoTargetRemote::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxDeviceBase *Device,
        FxIoTargetRemote **Target)
{
  void *ParentObject; // rdx
  FxDeviceBase *v9; // rax
  FxDeviceBase *v10; // rcx
  unsigned int v11; // ebx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 _a3; // rdi
  bool v15; // zf
  unsigned __int16 v16; // ax
  const void *_a2; // rcx
  FxIoTargetRemote *v18; // rax
  FxIoTargetRemote *v19; // rax
  FxIoTargetRemote *v20; // rbx
  int _a1; // eax
  unsigned int v22; // edi
  FxObject *pParent; // [rsp+88h] [rbp+10h] BYREF
  void *hTarget; // [rsp+98h] [rbp+20h] BYREF

  *Target = 0LL;
  if ( Attributes && (ParentObject = Attributes->ParentObject) != 0LL )
  {
    FxObjectHandleGetPtr(FxDriverGlobals, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParent);
    v9 = FxDeviceBase::_SearchForDevice((unsigned __int64)pParent, 0LL);
    v10 = v9;
    if ( !v9 )
    {
      v11 = -1073741808;
      WPP_IFR_SF_qL(
        FxDriverGlobals,
        2u,
        0xEu,
        0xAu,
        WPP_FxIoTargetRemote_cpp_Traceguids,
        Attributes->ParentObject,
        0xC0000010);
      return v11;
    }
    if ( v9 != Device )
    {
      m_ObjectSize = Device->m_ObjectSize;
      _a3 = (unsigned __int64)Device ^ 0xFFFFFFFFFFFFFFF8uLL;
      v11 = -1073741808;
      v15 = m_ObjectSize == 0;
      v16 = v10->m_ObjectSize;
      if ( v15 )
        _a3 = 0LL;
      _a2 = (const void *)((unsigned __int64)v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v16 )
        _a2 = 0LL;
      WPP_IFR_SF_qqqd(
        FxDriverGlobals,
        2u,
        0xEu,
        0xBu,
        WPP_FxIoTargetRemote_cpp_Traceguids,
        Attributes->ParentObject,
        _a2,
        _a3,
        -1073741808);
      return v11;
    }
  }
  else
  {
    pParent = Device;
  }
  v18 = (FxIoTargetRemote *)FxObjectHandleAlloc(
                              FxDriverGlobals,
                              ExDefaultNonPagedPoolType,
                              0x1F8uLL,
                              0,
                              Attributes,
                              0,
                              FxObjectTypeExternal);
  if ( v18 )
  {
    FxIoTargetRemote::FxIoTargetRemote(v18, FxDriverGlobals);
    v20 = v19;
  }
  else
  {
    v20 = 0LL;
  }
  if ( !v20 )
  {
    v11 = -1073741670;
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 0xEu, 0xCu, WPP_FxIoTargetRemote_cpp_Traceguids, -1073741670);
    return v11;
  }
  v20->m_Driver = Device->m_Driver;
  v20->m_DeviceBase = Device;
  v20->m_InStackDevice = Device->m_DeviceObject.m_DeviceObject;
  Device->AddIoTarget(Device, v20);
  _a1 = FxObject::Commit(v20, (_FX_DRIVER_GLOBALS *)Attributes, &hTarget, pParent, 1u);
  v22 = _a1;
  if ( _a1 < 0 )
  {
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 0xEu, 0xDu, WPP_FxIoTargetRemote_cpp_Traceguids, _a1);
    FxObject::ClearEvtCallbacks(v20);
    v20->DeleteObject(v20);
  }
  else
  {
    *Target = v20;
  }
  return v22;
}
