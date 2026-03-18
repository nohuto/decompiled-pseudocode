/*
 * XREFs of imp_WdfDmaEnablerCreate @ 0x1C0030BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00079C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000B6F4 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C000D9E0 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000DD0C (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000E230 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C0012FB4 (WPP_IFR_SF_qq.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C00142E8 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     memmove @ 0x1C001BE80 (memmove.c)
 *     memset @ 0x1C001C1C0 (memset.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C0030484 (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_dd @ 0x1C00305C0 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qqqd @ 0x1C00308F8 (WPP_IFR_SF_qqqd.c)
 *     ??0FxDmaEnabler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0033284 (--0FxDmaEnabler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z @ 0x1C0033BB0 (-Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B41C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C030 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
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
  WDFDMAENABLER__ **v10; // r12
  void *ParentObject; // rdx
  unsigned int v12; // edx
  FxDeviceBase *v13; // rax
  unsigned int _a1; // edi
  const void *_a2; // rcx
  bool IsVersionGreaterThanOrEqualTo; // al
  __int64 v17; // rdx
  __int16 v18; // r8
  size_t Size; // rdi
  int v20; // ecx
  _WDF_DMA_PROFILE Profile; // ecx
  unsigned __int16 v22; // r9
  FxDmaEnabler *v23; // rax
  FxDmaEnabler *v24; // rax
  FxDmaEnabler *v25; // rdi
  int v26; // ebx
  FxObject *pParent; // [rsp+50h] [rbp-41h] BYREF
  WDFDMAENABLER__ *handle; // [rsp+58h] [rbp-39h] BYREF
  _WDF_DMA_ENABLER_CONFIG dmaConfig; // [rsp+60h] [rbp-31h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+57h]
  FxDeviceBase *pDevice; // [rsp+F0h] [rbp+5Fh] BYREF
  __int64 _a3; // [rsp+F8h] [rbp+67h]

  _a3 = (__int64)Device;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Device,
    0x1030u,
    (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result < 0 )
    return result;
  v10 = DmaEnablerHandle;
  if ( !DmaEnablerHandle )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( !Config )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *DmaEnablerHandle = 0LL;
  result = FxValidateObjectAttributes(m_Globals, Attributes, 0);
  if ( (int)result < 0 )
    return result;
  if ( Attributes )
  {
    ParentObject = Attributes->ParentObject;
    if ( ParentObject )
    {
      FxObjectHandleGetPtr(m_Globals, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParent);
      if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v12, 0xBu) )
      {
        v13 = FxDeviceBase::_SearchForDevice((unsigned __int64)pParent, 0LL);
        if ( !v13 )
        {
          _a1 = -1071644151;
          WPP_IFR_SF_qL(
            m_Globals,
            2u,
            0xFu,
            0xAu,
            WPP_FxDmaEnablerAPI_cpp_Traceguids,
            Attributes->ParentObject,
            0xC0200209);
          return _a1;
        }
        if ( v13 != pDevice )
        {
          _a2 = (const void *)((unsigned __int64)v13 ^ 0xFFFFFFFFFFFFFFF8uLL);
          _a1 = -1071644151;
          if ( !v13->m_ObjectSize )
            _a2 = 0LL;
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
        goto LABEL_20;
      }
      if ( pParent != pDevice )
      {
        WPP_IFR_SF_qq(m_Globals, 3u, 0xFu, 0xCu, WPP_FxDmaEnablerAPI_cpp_Traceguids, Attributes->ParentObject, Device);
        if ( m_Globals->FxVerifyDownlevel )
          FxVerifierDbgBreakPoint(m_Globals);
      }
    }
  }
  pParent = pDevice;
LABEL_20:
  IsVersionGreaterThanOrEqualTo = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, 0, 0xBu);
  Size = Config->Size;
  v20 = IsVersionGreaterThanOrEqualTo ? 80 : 64;
  if ( (_DWORD)Size != v20 )
  {
    WPP_IFR_SF_DDd(m_Globals, v17, 0xFu, v18 + 2, WPP_FxDmaEnablerAPI_cpp_Traceguids, Size, v20, -1073741820);
    return 3221225476LL;
  }
  if ( (unsigned int)Size < 0x50 )
  {
    memset(&dmaConfig, 0, sizeof(dmaConfig));
    dmaConfig.Profile = Config->Profile;
    dmaConfig.MaximumLength = Config->MaximumLength;
    memmove(&dmaConfig, Config, Size);
    v17 = 0LL;
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
  if ( Config->MaximumLength == v17 )
  {
    v22 = 15;
    _a1 = -1073741811;
LABEL_27:
    WPP_IFR_SF_d(m_Globals, 2u, 0xFu, v22, WPP_FxDmaEnablerAPI_cpp_Traceguids, _a1);
    return _a1;
  }
  v23 = (FxDmaEnabler *)FxObjectHandleAlloc(
                          m_Globals,
                          ExDefaultNonPagedPoolType,
                          0x2C0uLL,
                          0,
                          Attributes,
                          v17,
                          FxObjectTypeExternal);
  if ( v23 )
  {
    FxDmaEnabler::FxDmaEnabler(v23, m_Globals);
    v25 = v24;
  }
  else
  {
    v25 = 0LL;
  }
  if ( !v25 )
  {
    _a1 = -1073741670;
    v22 = 16;
    goto LABEL_27;
  }
  v26 = FxObject::Commit(v25, (_FX_DRIVER_GLOBALS *)Attributes, (void **)&handle, pParent, 1u);
  if ( v26 < 0 || (v26 = FxDmaEnabler::Initialize(v25, Config, pDevice), v26 < 0) )
  {
    FxObject::ClearEvtCallbacks(v25);
    v25->DeleteObject(v25);
  }
  else
  {
    *v10 = handle;
  }
  return (unsigned int)v26;
}
