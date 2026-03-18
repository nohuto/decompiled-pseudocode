/*
 * XREFs of ?ConfigureSystemAdapter@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_SYSTEM_PROFILE_CONFIG@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C0032C5C
 * Callers:
 *     imp_WdfDmaEnablerConfigureSystemProfile @ 0x1C002FEA0 (imp_WdfDmaEnablerConfigureSystemProfile.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     memset @ 0x1C001B300 (memset.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C0030628 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?ConfigureDmaAdapter@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C0032C18 (-ConfigureDmaAdapter@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     WPP_IFR_SF_qLLd @ 0x1C0033948 (WPP_IFR_SF_qLLd.c)
 */

__int64 __fastcall FxDmaEnabler::ConfigureSystemAdapter(
        FxDmaEnabler *this,
        _WDF_DMA_SYSTEM_PROFILE_CONFIG *Config,
        unsigned __int32 ConfigDirection)
{
  __int64 v6; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // r8
  int v8; // esi
  const void *_a2; // rdx
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *DmaDescriptor; // rcx
  unsigned int Vector; // eax
  SIZE_T PreallocatedSGListSize; // rdi
  _FX_DRIVER_GLOBALS **p_m_Globals; // r14
  PVOID PoolWithTag; // rax
  __int64 m_ObjectSize; // rax
  const void *v16; // rbx
  char v17; // r8
  FxDmaEnabler *v18; // rcx
  char v19; // r8
  _DEVICE_DESCRIPTION deviceDescription; // [rsp+50h] [rbp-48h] BYREF

  if ( FxDmaEnabler::GetDmaDescription(this, (_WDF_DMA_DIRECTION)ConfigDirection)->m_SimplexAdapterInfo.AdapterObject )
  {
    m_Globals = *(_FX_DRIVER_GLOBALS **)(v6 + 16);
    v8 = -1073741811;
    if ( m_Globals->FxVerboseOn )
    {
      _a2 = (const void *)(v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !*(_WORD *)(v6 + 10) )
        _a2 = 0LL;
      WPP_IFR_SF_qLLd(
        m_Globals,
        5u,
        (unsigned int)m_Globals,
        0x12u,
        WPP_FxDmaEnabler_cpp_Traceguids,
        _a2,
        *(_DWORD *)(v6 + 376),
        ConfigDirection,
        -1073741811);
      m_Globals = this->m_Globals;
    }
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    memset(&deviceDescription, 0, sizeof(deviceDescription));
    DmaDescriptor = Config->DmaDescriptor;
    deviceDescription.MaximumLength = this->m_MaximumLength;
    deviceDescription.DemandMode = Config->DemandMode;
    deviceDescription.AutoInitialize = Config->LoopedTransfer;
    deviceDescription.DmaWidth = Config->DmaWidth;
    deviceDescription.DeviceAddress.QuadPart = Config->DeviceAddress.QuadPart;
    deviceDescription.DmaChannel = DmaDescriptor->u.Generic.Start.LowPart;
    Vector = DmaDescriptor->u.Interrupt.Vector;
    deviceDescription.Version = 3;
    deviceDescription.InterfaceType = Internal;
    deviceDescription.DmaRequestLine = Vector;
    v8 = FxDmaEnabler::ConfigureDmaAdapter(this, &deviceDescription, (_WDF_DMA_DIRECTION)ConfigDirection);
    if ( v8 >= 0 )
    {
      PreallocatedSGListSize = this->m_SimplexAdapterInfo.PreallocatedSGListSize;
      if ( (*((_BYTE *)this + 380) & 0x10) != 0
        && PreallocatedSGListSize <= this->m_DuplexAdapterInfo[1].PreallocatedSGListSize )
      {
        PreallocatedSGListSize = this->m_DuplexAdapterInfo[1].PreallocatedSGListSize;
      }
      p_m_Globals = &this->m_Globals;
      PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, PreallocatedSGListSize, this->m_Globals->Tag);
      this->m_SGList.ScatterGatherProfile.Lookaside.L.ListHead.Alignment = (unsigned __int64)PoolWithTag;
      if ( PoolWithTag )
      {
        v17 = *((_BYTE *)this + 380) | 0x20;
        this->m_SGListSize = PreallocatedSGListSize;
        *((_BYTE *)this + 380) = v17;
        if ( FxDmaEnabler::GetDmaDescription(this, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.AdapterObject
          && FxDmaEnabler::GetDmaDescription(v18, WdfDmaDirectionWriteToDevice)->m_SimplexAdapterInfo.AdapterObject )
        {
          *((_BYTE *)this + 380) = v19 | 2;
        }
      }
      else
      {
        v8 = -1073741670;
        m_ObjectSize = this->m_ObjectSize;
        v16 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !(_WORD)m_ObjectSize )
          v16 = 0LL;
        WPP_IFR_SF_qL(*p_m_Globals, 2u, 0xFu, 0x13u, WPP_FxDmaEnabler_cpp_Traceguids, v16, 0xC000009A);
      }
    }
  }
  return (unsigned int)v8;
}
