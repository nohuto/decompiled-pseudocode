/*
 * XREFs of ?ConfigureBusMasterAdapters@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@PEAU_WDF_DMA_ENABLER_CONFIG@@@Z @ 0x1C0032A78
 * Callers:
 *     ?Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z @ 0x1C0032FA0 (-Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0014164 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?ConfigureDmaAdapter@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C0032C18 (-ConfigureDmaAdapter@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@W4_WDF_DMA_DIRECTION@@@Z.c)
 */

__int64 __fastcall FxDmaEnabler::ConfigureBusMasterAdapters(
        FxDmaEnabler *this,
        _DEVICE_DESCRIPTION *DeviceDescription,
        _WDF_DMA_ENABLER_CONFIG *Config)
{
  bool v3; // zf
  int v7; // esi
  _WDF_DMA_DIRECTION v8; // r8d
  char v9; // bp
  __int64 (*GetDmaAlignment)(void); // rax
  char v11; // bp
  unsigned int v12; // eax
  unsigned int v13; // edx
  __int64 v14; // r9
  unsigned int AlignmentRequirement; // ecx
  unsigned __int64 Size; // rdx
  __int64 v17; // rax
  unsigned int v18; // eax
  unsigned int v19; // edx
  unsigned int v20; // ecx

  v3 = (*((_BYTE *)this + 380) & 0x10) == 0;
  DeviceDescription->MaximumLength = this->m_MaximumLength;
  if ( v3 )
  {
    v8 = WdfDmaDirectionReadFromDevice;
  }
  else
  {
    v7 = FxDmaEnabler::ConfigureDmaAdapter(this, DeviceDescription, WdfDmaDirectionReadFromDevice);
    if ( v7 < 0 )
      return (unsigned int)v7;
    v8 = WdfDmaDirectionWriteToDevice;
  }
  v7 = FxDmaEnabler::ConfigureDmaAdapter(this, DeviceDescription, v8);
  if ( v7 >= 0 )
  {
    v9 = *((_BYTE *)this + 380);
    if ( (v9 & 8) != 0 )
    {
      GetDmaAlignment = (__int64 (*)(void))this->m_SimplexAdapterInfo.AdapterObject->DmaOperations->GetDmaAlignment;
      v11 = v9 & 0x10;
      if ( v11 )
      {
        v12 = GetDmaAlignment();
        if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, v12, 0xBu) && v13 )
          --v13;
        AlignmentRequirement = this->m_FDO->AlignmentRequirement;
        if ( AlignmentRequirement <= v13 )
          AlignmentRequirement = v13;
        this->m_CommonBufferAlignment = AlignmentRequirement;
        Size = this->m_SimplexAdapterInfo.PreallocatedSGListSize;
        v17 = v11 != 0 ? 0x60 : 0;
        if ( Size <= *(unsigned __int64 *)((char *)&this->m_SimplexAdapterInfo.PreallocatedSGListSize + v17) )
          Size = *(unsigned __int64 *)((char *)&this->m_SimplexAdapterInfo.PreallocatedSGListSize + v17);
      }
      else
      {
        v18 = GetDmaAlignment();
        if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, v18, 0xBu) && v19 )
          --v19;
        v20 = this->m_FDO->AlignmentRequirement;
        if ( v20 <= v19 )
          v20 = v19;
        this->m_CommonBufferAlignment = v20;
        Size = this->m_SimplexAdapterInfo.PreallocatedSGListSize;
      }
      if ( (Config->Flags & 1) == 0 )
      {
        this->m_SGListSize = Size;
        ExInitializeNPagedLookasideList(
          &this->m_SGList.ScatterGatherProfile.Lookaside,
          0LL,
          0LL,
          ExDefaultNonPagedPoolType,
          Size,
          *(_DWORD *)(v14 + 68),
          0);
        *((_BYTE *)this + 380) |= 0x20u;
      }
    }
    *((_BYTE *)this + 380) |= 2u;
  }
  return (unsigned int)v7;
}
