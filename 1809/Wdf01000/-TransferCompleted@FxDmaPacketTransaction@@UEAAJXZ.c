/*
 * XREFs of ?TransferCompleted@FxDmaPacketTransaction@@UEAAJXZ @ 0x1C0035E50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C00311F8 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     WPP_IFR_SF_qqii @ 0x1C0036670 (WPP_IFR_SF_qqii.c)
 *     WPP_IFR_SF_qqiid @ 0x1C0036778 (WPP_IFR_SF_qqiid.c)
 */

__int64 __fastcall FxDmaPacketTransaction::TransferCompleted(FxDmaPacketTransaction *this, __int64 a2, unsigned int a3)
{
  _FX_DRIVER_GLOBALS **p_m_Globals; // r14
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  _DMA_ADAPTER *AdapterObject; // rdx
  _DMA_OPERATIONS *DmaOperations; // rdi
  const void *v8; // rcx
  $FD12C6E5D97FBF1457EB8C1089047E2C *DmaDescription; // rax
  _MDL **p_m_CurrentFragmentMdl; // r15
  __int64 *p_m_CurrentFragmentOffset; // r12
  __int64 *p_m_CurrentFragmentLength; // r13
  _DMA_ADAPTER *v13; // rcx
  int id; // edi
  unsigned int v15; // r8d
  unsigned __int16 v16; // r9
  unsigned __int16 *p_m_ObjectSize; // rbp
  const void *v18; // rbx
  const void *_a5; // rdx
  const _GUID *_a4; // [rsp+20h] [rbp-58h]
  unsigned __int64 flags; // [rsp+40h] [rbp-38h]

  p_m_Globals = &this->m_Globals;
  m_Globals = this->m_Globals;
  AdapterObject = this->m_AdapterInfo->AdapterObject;
  DmaOperations = AdapterObject->DmaOperations;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
  {
    flags = this->m_CurrentFragmentLength;
    v8 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v8 = 0LL;
    WPP_IFR_SF_qqii(
      m_Globals,
      (unsigned __int8)AdapterObject,
      a3,
      0xFu,
      WPP_FxDmaTransactionPacket_hpp_Traceguids,
      v8,
      this->m_CurrentFragmentMdl,
      this->m_CurrentFragmentOffset,
      flags);
  }
  DmaDescription = FxDmaEnabler::GetDmaDescription(this->m_DmaEnabler, WdfDmaDirectionReadFromDevice);
  p_m_CurrentFragmentMdl = &this->m_CurrentFragmentMdl;
  p_m_CurrentFragmentOffset = (__int64 *)&this->m_CurrentFragmentOffset;
  p_m_CurrentFragmentLength = (__int64 *)&this->m_CurrentFragmentLength;
  v13 = this->m_AdapterInfo->AdapterObject;
  if ( DmaDescription->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
  {
    LODWORD(_a4) = *(_DWORD *)p_m_CurrentFragmentLength;
    id = ((__int64 (__fastcall *)(_DMA_ADAPTER *, _MDL *, void *, __int64))DmaOperations->FlushAdapterBuffersEx)(
           v13,
           *p_m_CurrentFragmentMdl,
           this->m_MapRegisterBase,
           *p_m_CurrentFragmentOffset);
    goto LABEL_11;
  }
  LODWORD(_a4) = *(_DWORD *)p_m_CurrentFragmentLength;
  if ( ((unsigned __int8 (__fastcall *)(_DMA_ADAPTER *, _MDL *, void *, char *))DmaOperations->FlushAdapterBuffers)(
         v13,
         *p_m_CurrentFragmentMdl,
         this->m_MapRegisterBase,
         (char *)(*p_m_CurrentFragmentMdl)->StartVa + (*p_m_CurrentFragmentMdl)->ByteOffset + *p_m_CurrentFragmentOffset) )
  {
    id = 0;
LABEL_11:
    if ( id >= 0 )
      return (unsigned int)id;
    goto LABEL_12;
  }
  id = -1073741823;
LABEL_12:
  p_m_ObjectSize = &this->m_ObjectSize;
  v18 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  _a5 = v18;
  if ( !*p_m_ObjectSize )
    _a5 = 0LL;
  WPP_IFR_SF_qqiid(
    *p_m_Globals,
    (unsigned __int8)_a5,
    v15,
    v16,
    _a4,
    _a5,
    *p_m_CurrentFragmentMdl,
    *p_m_CurrentFragmentOffset,
    *p_m_CurrentFragmentLength,
    id);
  if ( !*p_m_ObjectSize )
    v18 = 0LL;
  WPP_IFR_SF_qL(m_Globals, 2u, 0xFu, 0x20u, WPP_FxDmaTransactionPacket_cpp_Traceguids, v18, id);
  FxVerifierDbgBreakPoint(m_Globals);
  return (unsigned int)id;
}
