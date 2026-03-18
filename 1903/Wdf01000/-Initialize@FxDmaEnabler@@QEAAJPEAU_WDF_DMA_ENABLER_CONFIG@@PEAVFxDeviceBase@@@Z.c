/*
 * XREFs of ?Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z @ 0x1C0032FA0
 * Callers:
 *     imp_WdfDmaEnablerCreate @ 0x1C002FFE0 (imp_WdfDmaEnablerCreate.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0014164 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     memset @ 0x1C001B300 (memset.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C002F8AC (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_dd @ 0x1C002F9E8 (WPP_IFR_SF_dd.c)
 *     ?ConfigureBusMasterAdapters@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@PEAU_WDF_DMA_ENABLER_CONFIG@@@Z @ 0x1C0032A78 (-ConfigureBusMasterAdapters@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@PEAU_WDF_DMA_ENABLER_CON.c)
 *     ?ReleaseResources@FxDmaEnabler@@AEAAXXZ @ 0x1C003374C (-ReleaseResources@FxDmaEnabler@@AEAAXXZ.c)
 *     WPP_IFR_SF_ @ 0x1C0033794 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_dLd @ 0x1C003385C (WPP_IFR_SF_dLd.c)
 */

__int64 __fastcall FxDmaEnabler::Initialize(FxDmaEnabler *this, _WDF_DMA_ENABLER_CONFIG *Config, FxDeviceBase *Device)
{
  _FX_DRIVER_GLOBALS **p_m_Globals; // r14
  FxDeviceBase_vtbl *v7; // rax
  unsigned int v8; // r13d
  signed int _a2; // eax
  unsigned int v10; // r8d
  int v11; // edi
  unsigned __int16 v12; // r8
  const void *_a1; // rsi
  char v14; // dl
  unsigned __int8 v15; // r9
  _WDF_DMA_PROFILE Profile; // ecx
  __int32 v17; // ecx
  __int32 v18; // ecx
  __int32 v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  __int64 v25; // rdx
  FxDeviceBase_vtbl *v26; // rax
  unsigned __int8 v27; // di
  char v28; // dl
  char v29; // dl
  char v30; // cl
  unsigned int AddressWidthOverride; // edx
  unsigned __int16 v32; // r9
  unsigned int WdmDmaVersionOverride; // eax
  _FX_DRIVER_GLOBALS *v34; // rcx
  __int16 v35; // r8
  const void *v36; // r10
  unsigned __int16 v37; // r9
  unsigned __int16 m_ObjectSize; // ax
  const void *v39; // rbx
  bool v40; // zf
  FxDeviceBase *m_DeviceBase; // rcx
  FxDeviceBase *v42; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-60h]
  int v44; // [rsp+38h] [rbp-48h]
  _DEVICE_DESCRIPTION deviceDescription; // [rsp+40h] [rbp-40h] BYREF
  _FX_DRIVER_GLOBALS *globals; // [rsp+B0h] [rbp+30h]
  char globalsa; // [rsp+B0h] [rbp+30h]

  p_m_Globals = &this->m_Globals;
  globals = this->m_Globals;
  memset(&deviceDescription, 0, sizeof(deviceDescription));
  v7 = Device->FxNonPagedObject::FxObject::__vftable;
  v8 = 2;
  deviceDescription.Version = 2;
  _a2 = v7->AllocateDmaEnablerList(Device);
  v11 = _a2;
  if ( _a2 >= 0 )
  {
    v14 = *((_BYTE *)this + 380);
    v15 = 1;
    this->m_DeviceBase = Device;
    Profile = Config->Profile;
    LOBYTE(v10) = v14 | 4;
    this->m_Profile = Profile;
    deviceDescription.Master = 1;
    globalsa = 1;
    deviceDescription.Dma32BitAddresses = 1;
    deviceDescription.InterfaceType = PCIBus;
    *((_BYTE *)this + 380) = v14 | 4;
    v17 = Profile - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( !v19 )
        {
          deviceDescription.ScatterGather = 0;
          goto LABEL_23;
        }
        v20 = v19 - 1;
        if ( !v20 )
        {
          v28 = v14 | 0xC;
LABEL_18:
          deviceDescription.ScatterGather = 1;
          *((_BYTE *)this + 380) = v28;
LABEL_23:
          v27 = 1;
          deviceDescription.Dma64BitAddresses = 1;
          v30 = 1;
          goto LABEL_28;
        }
        v21 = v20 - 1;
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( v22 )
          {
            v23 = v22 - 1;
            if ( v23 )
            {
              if ( v23 != 1 )
                return 3221225485LL;
              v25 = 128LL;
              *((_BYTE *)this + 380) = v10 & 0xEB | 0x10;
            }
            else
            {
              *((_BYTE *)this + 380) = v14 & 0xFB;
              v25 = 64LL;
            }
            deviceDescription.Dma64BitAddresses = 0;
            globalsa = 0;
            v8 = 3;
            deviceDescription.Dma32BitAddresses = 0;
            v26 = Device->FxNonPagedObject::FxObject::__vftable;
            v27 = 0;
            deviceDescription.Version = 3;
            *(_WORD *)&deviceDescription.Master = 0;
            v26->SetDeviceTelemetryInfoFlags(Device, (FxDeviceInfoFlags)v25);
            v15 = 0;
            goto LABEL_27;
          }
          v28 = v14 | 0x1C;
          goto LABEL_18;
        }
        v29 = v14 | 0x1C;
      }
      else
      {
        v29 = v14 | 0xC;
      }
      deviceDescription.ScatterGather = 1;
      *((_BYTE *)this + 380) = v29;
    }
    else
    {
      deviceDescription.ScatterGather = 0;
    }
    v27 = 0;
    deviceDescription.Dma64BitAddresses = 0;
LABEL_27:
    v30 = 0;
LABEL_28:
    this->m_MaximumLength = Config->MaximumLength;
    AddressWidthOverride = Config->AddressWidthOverride;
    if ( AddressWidthOverride )
    {
      if ( (*((_BYTE *)this + 380) & 4) == 0 )
      {
        v32 = 11;
LABEL_31:
        WPP_IFR_SF_dLd(
          *p_m_Globals,
          AddressWidthOverride,
          v10,
          v32,
          traceGuid,
          AddressWidthOverride,
          Config->Profile,
          v44);
LABEL_32:
        FxVerifierDbgBreakPoint(*p_m_Globals);
        return 3221225485LL;
      }
      if ( !v30 && AddressWidthOverride > 0x20 )
      {
        v32 = 12;
        goto LABEL_31;
      }
      if ( HIDWORD(WPP_GLOBAL_WDF_Control.Dpc.SystemArgument1) > 6
        || HIDWORD(WPP_GLOBAL_WDF_Control.Dpc.SystemArgument1) == 6
        && LODWORD(WPP_GLOBAL_WDF_Control.Dpc.SystemArgument2) >= 2 )
      {
        v8 = 3;
        deviceDescription.DmaAddressWidth = Config->AddressWidthOverride;
        deviceDescription.Version = 3;
      }
      else
      {
        if ( AddressWidthOverride < 0x40 )
          v27 = 0;
        deviceDescription.Dma64BitAddresses = v27;
        if ( AddressWidthOverride < 0x20 )
          v15 = 0;
        globalsa = v15;
        deviceDescription.Dma32BitAddresses = v15;
        if ( AddressWidthOverride < 0x18 )
        {
          WPP_IFR_SF_(*p_m_Globals, 2u, 0xFu, 0xDu, WPP_FxDmaEnabler_cpp_Traceguids);
          return 3221225473LL;
        }
        if ( ((AddressWidthOverride - 32) & 0xFFFFFFDF) != 0 )
          WPP_IFR_SF_dd(
            *p_m_Globals,
            3u,
            0xFu,
            0xEu,
            WPP_FxDmaEnabler_cpp_Traceguids,
            AddressWidthOverride,
            v15 != 0 ? 32 : 24);
      }
    }
    WdmDmaVersionOverride = Config->WdmDmaVersionOverride;
    if ( WdmDmaVersionOverride )
    {
      if ( WdmDmaVersionOverride < v8 )
      {
        WPP_IFR_SF_DDd(
          *p_m_Globals,
          AddressWidthOverride,
          0xFu,
          0xFu,
          WPP_FxDmaEnabler_cpp_Traceguids,
          WdmDmaVersionOverride,
          v8,
          -1073741811);
        goto LABEL_32;
      }
      v8 = Config->WdmDmaVersionOverride;
      deviceDescription.Version = v8;
    }
    if ( v8 >= 3 && !deviceDescription.DmaAddressWidth )
    {
      if ( v27 )
        deviceDescription.DmaAddressWidth = 64;
      else
        deviceDescription.DmaAddressWidth = globalsa != 0 ? 32 : 24;
    }
    if ( (Config->Flags & 2) != 0 )
    {
      if ( !_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(*p_m_Globals, AddressWidthOverride, 0x13u) )
      {
        v37 = 17;
        goto LABEL_61;
      }
      if ( v8 != 3 )
      {
        v37 = v35 - 3;
LABEL_61:
        m_ObjectSize = this->m_ObjectSize;
        v39 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_ObjectSize )
          v39 = v36;
        WPP_IFR_SF_qL(v34, 2u, 0xFu, v37, WPP_FxDmaEnabler_cpp_Traceguids, v39, 0xC000000D);
        goto LABEL_32;
      }
      *((_BYTE *)this + 380) |= 0x40u;
    }
    v40 = (*((_BYTE *)this + 380) & 4) == 0;
    m_DeviceBase = this->m_DeviceBase;
    this->m_FDO = m_DeviceBase->m_DeviceObject.m_DeviceObject;
    this->m_PDO = m_DeviceBase->m_PhysicalDevice.m_DeviceObject;
    if ( v40 || (v11 = FxDmaEnabler::ConfigureBusMasterAdapters(this, &deviceDescription, Config), v11 >= 0) )
    {
      v42 = this->m_DeviceBase;
      this->m_EvtDmaEnablerFill.m_Method = Config->EvtDmaEnablerFill;
      this->m_EvtDmaEnablerFlush.m_Method = Config->EvtDmaEnablerFlush;
      this->m_EvtDmaEnablerEnable.m_Method = Config->EvtDmaEnablerEnable;
      this->m_EvtDmaEnablerDisable.m_Method = Config->EvtDmaEnablerDisable;
      this->m_EvtDmaEnablerSelfManagedIoStart.m_Method = Config->EvtDmaEnablerSelfManagedIoStart;
      this->m_EvtDmaEnablerSelfManagedIoStop.m_Method = Config->EvtDmaEnablerSelfManagedIoStop;
      v42->AddDmaEnabler(v42, this);
      *((_BYTE *)this + 380) |= 1u;
      if ( (*((_BYTE *)this + 380) & 4) != 0 )
        this->m_DeviceBase->SetDeviceTelemetryInfoFlags(this->m_DeviceBase, DeviceInfoDmaBusMaster);
      return 0;
    }
    else
    {
      FxDmaEnabler::ReleaseResources(this);
    }
    return (unsigned int)v11;
  }
  v12 = Device->m_ObjectSize;
  _a1 = (const void *)((unsigned __int64)Device ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v12 )
    _a1 = 0LL;
  WPP_IFR_SF_qL(globals, 2u, 0xFu, 0xAu, WPP_FxDmaEnabler_cpp_Traceguids, _a1, _a2);
  return (unsigned int)v11;
}
