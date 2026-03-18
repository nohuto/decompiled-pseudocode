/*
 * XREFs of imp_WdfDmaEnablerCreate @ 0x1C002FFE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0004F20 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B6A0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000BB38 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C000DA90 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00133A4 (WPP_IFR_SF_qq.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0014164 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0017908 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     memset @ 0x1C001B300 (memset.c)
 *     memmove @ 0x1C001B400 (memmove.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C002F8AC (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_dd @ 0x1C002F9E8 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qqqd @ 0x1C002FD20 (WPP_IFR_SF_qqqd.c)
 *     ??0FxDmaEnabler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00326B4 (--0FxDmaEnabler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z @ 0x1C0032FA0 (-Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B850 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C490 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall imp_WdfDmaEnablerCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DMA_ENABLER_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFDMAENABLER__ **DmaEnablerHandle)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  WDFDMAENABLER__ **v11; // r12
  void *ParentObject; // rdx
  unsigned int v13; // edx
  FxDeviceBase *v14; // rax
  FxDmaEnabler *v15; // rdi
  unsigned int _a1; // edi
  const void *_a2; // rcx
  bool IsVersionGreaterThanOrEqualTo; // al
  __int16 v19; // r8
  size_t Size; // rdx
  int v21; // ecx
  _WDF_DMA_PROFILE Profile; // ecx
  unsigned __int16 v23; // r9
  FxDmaEnabler *v24; // rax
  FxDmaEnabler *v25; // rax
  int v26; // ebx
  FxObject *pParent; // [rsp+50h] [rbp-41h] BYREF
  WDFDMAENABLER__ *handle; // [rsp+58h] [rbp-39h] BYREF
  _WDF_DMA_ENABLER_CONFIG dmaConfig; // [rsp+60h] [rbp-31h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+57h]
  FxDeviceBase *pDevice; // [rsp+F0h] [rbp+5Fh] BYREF
  __int64 _a3; // [rsp+F8h] [rbp+67h]

  _a3 = (__int64)Device;
  memset(&dmaConfig, 0, sizeof(dmaConfig));
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Device,
    0x1030u,
    (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result < 0 )
    return result;
  v11 = DmaEnablerHandle;
  if ( !DmaEnablerHandle )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( !Config )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *DmaEnablerHandle = 0LL;
  result = FxValidateObjectAttributes(m_Globals, Attributes, 0);
  if ( (int)result < 0 )
    return result;
  if ( !Attributes )
    goto LABEL_19;
  ParentObject = Attributes->ParentObject;
  if ( !ParentObject )
    goto LABEL_19;
  FxObjectHandleGetPtr(m_Globals, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParent);
  if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v13, 0xBu) )
  {
    v14 = FxDeviceBase::_SearchForDevice((unsigned __int64)pParent, 0LL);
    v15 = 0LL;
    if ( !v14 )
    {
      _a1 = -1071644151;
      WPP_IFR_SF_qL(m_Globals, 2u, 0xFu, 0xAu, WPP_FxDmaEnablerAPI_cpp_Traceguids, Attributes->ParentObject, 0xC0200209);
      return _a1;
    }
    if ( v14 != pDevice )
    {
      _a2 = (const void *)((unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v14->m_ObjectSize )
        _a2 = 0LL;
      _a1 = -1071644151;
      WPP_IFR_SF_qqqd(
        m_Globals,
        2u,
        0xFu,
        0xBu,
        WPP_FxDmaEnablerAPI_cpp_Traceguids,
        Attributes->ParentObject,
        _a2,
        _a3,
        -1071644151);
      return _a1;
    }
    goto LABEL_21;
  }
  if ( pParent != pDevice )
  {
    WPP_IFR_SF_qq(m_Globals, 3u, 0xFu, 0xCu, WPP_FxDmaEnablerAPI_cpp_Traceguids, Attributes->ParentObject, Device);
    v15 = 0LL;
    if ( m_Globals->FxVerifyDownlevel )
      FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
LABEL_19:
    v15 = 0LL;
  }
  pParent = pDevice;
LABEL_21:
  IsVersionGreaterThanOrEqualTo = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(
                                    m_Globals,
                                    (unsigned int)ParentObject,
                                    0xBu);
  Size = Config->Size;
  v21 = IsVersionGreaterThanOrEqualTo ? 80 : 64;
  if ( (_DWORD)Size != v21 )
  {
    _a1 = -1073741820;
    WPP_IFR_SF_DDd(m_Globals, Size, 0xFu, v19 + 2, WPP_FxDmaEnablerAPI_cpp_Traceguids, Size, v21, -1073741820);
    return _a1;
  }
  if ( (unsigned int)Size < 0x50 )
  {
    dmaConfig.Profile = Config->Profile;
    dmaConfig.MaximumLength = Config->MaximumLength;
    memmove(&dmaConfig, Config, Size);
    dmaConfig.Size = 80;
    Config = &dmaConfig;
  }
  Profile = Config->Profile;
  if ( (unsigned int)(Profile - 1) > 7 )
  {
    _a1 = -1073741811;
    WPP_IFR_SF_dd(m_Globals, 2u, 0xFu, 0xEu, WPP_FxDmaEnablerAPI_cpp_Traceguids, Profile, -1073741811);
    return _a1;
  }
  if ( !Config->MaximumLength )
  {
    v23 = 15;
    _a1 = -1073741811;
LABEL_28:
    WPP_IFR_SF_d(m_Globals, 2u, 0xFu, v23, WPP_FxDmaEnablerAPI_cpp_Traceguids, _a1);
    return _a1;
  }
  v24 = (FxDmaEnabler *)FxObjectHandleAlloc(
                          m_Globals,
                          ExDefaultNonPagedPoolType,
                          0x2C0uLL,
                          0,
                          Attributes,
                          0,
                          FxObjectTypeExternal);
  if ( v24 )
  {
    FxDmaEnabler::FxDmaEnabler(v24, m_Globals);
    v15 = v25;
  }
  if ( !v15 )
  {
    _a1 = -1073741670;
    v23 = 16;
    goto LABEL_28;
  }
  v26 = FxObject::Commit(v15, (_FX_DRIVER_GLOBALS *)Attributes, (void **)&handle, pParent, 1u);
  if ( v26 < 0 || (v26 = FxDmaEnabler::Initialize(v15, Config, pDevice), v26 < 0) )
  {
    FxObject::ClearEvtCallbacks(v15);
    v15->DeleteObject(v15);
  }
  else
  {
    *v11 = handle;
  }
  return (unsigned int)v26;
}
