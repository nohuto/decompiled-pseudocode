/*
 * XREFs of ?StageTransfer@FxDmaScatterGatherTransaction@@UEAAJXZ @ 0x1C0036700
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     ?BuildScatterGatherList@FxDmaScatterGatherTransaction@@AEAAJPEAU_MDL@@_KKP6AXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z55K@Z @ 0x1C00360D0 (-BuildScatterGatherList@FxDmaScatterGatherTransaction@@AEAAJPEAU_MDL@@_KKP6AXPEAU_DEVICE_OBJECT@.c)
 *     ?GetScatterGatherList@FxDmaScatterGatherTransaction@@AEAAJPEAU_MDL@@_KKP6AXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z5@Z @ 0x1C0036334 (-GetScatterGatherList@FxDmaScatterGatherTransaction@@AEAAJPEAU_MDL@@_KKP6AXPEAU_DEVICE_OBJECT@@P.c)
 *     WPP_IFR_SF_qqdid @ 0x1C0036CC8 (WPP_IFR_SF_qqdid.c)
 *     ?_CalculateRequiredMapRegisters@FxDmaTransactionBase@@SAJPEAU_MDL@@_KKKPEAK2@Z @ 0x1C003866C (-_CalculateRequiredMapRegisters@FxDmaTransactionBase@@SAJPEAU_MDL@@_KKKPEAK2@Z.c)
 *     ?_ComputeNextTransferAddress@FxDmaTransactionBase@@SAXPEAU_MDL@@_KKPEAPEAU2@PEA_K@Z @ 0x1C0038738 (-_ComputeNextTransferAddress@FxDmaTransactionBase@@SAXPEAU_MDL@@_KKPEAPEAU2@PEA_K@Z.c)
 */

__int64 __fastcall FxDmaScatterGatherTransaction::StageTransfer(FxDmaScatterGatherTransaction *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  const void *v3; // rsi
  unsigned __int64 *p_m_CurrentFragmentOffset; // rbp
  const void **p_m_CurrentFragmentMdl; // r15
  unsigned int *p_m_CurrentFragmentLength; // r14
  unsigned __int64 m_Remaining; // rax
  unsigned int v8; // r8d
  __int64 flags; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // r8
  _MDL *v13; // rdx
  signed int ScatterGatherList; // eax
  unsigned int v15; // ebp
  unsigned __int64 *NextOffset; // [rsp+20h] [rbp-58h]
  int v17; // [rsp+48h] [rbp-30h]
  unsigned int mapRegistersRequired; // [rsp+80h] [rbp+8h] BYREF

  mapRegistersRequired = -1;
  m_Globals = this->m_Globals;
  v3 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !this->m_ObjectSize )
    v3 = 0LL;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0xEu, WPP_FxDmaTransactionScatterGather_cpp_Traceguids, v3);
  p_m_CurrentFragmentOffset = &this->m_CurrentFragmentOffset;
  p_m_CurrentFragmentMdl = (const void **)&this->m_CurrentFragmentMdl;
  p_m_CurrentFragmentLength = (unsigned int *)&this->m_CurrentFragmentLength;
  FxDmaTransactionBase::_ComputeNextTransferAddress(
    this->m_CurrentFragmentMdl,
    this->m_CurrentFragmentOffset,
    this->m_CurrentFragmentLength,
    &this->m_CurrentFragmentMdl,
    &this->m_CurrentFragmentOffset);
  m_Remaining = this->m_Remaining;
  if ( m_Remaining >= this->m_MaxFragmentLength )
    m_Remaining = this->m_MaxFragmentLength;
  *(_QWORD *)p_m_CurrentFragmentLength = m_Remaining;
  if ( this->m_RequireSingleTransfer
    || (FxDmaTransactionBase::_CalculateRequiredMapRegisters(
          (_MDL *)*p_m_CurrentFragmentMdl,
          *p_m_CurrentFragmentOffset,
          *p_m_CurrentFragmentLength,
          this->m_AdapterInfo->NumberOfMapRegisters,
          (unsigned int *)&this->m_CurrentFragmentLength,
          &mapRegistersRequired),
        flags = this->m_DmaEnabler->m_MaxSGElements,
        mapRegistersRequired <= (unsigned int)flags) )
  {
    v11 = *(_QWORD *)p_m_CurrentFragmentLength;
    this->m_Remaining -= *(_QWORD *)p_m_CurrentFragmentLength;
    v12 = *p_m_CurrentFragmentOffset;
    v13 = (_MDL *)*p_m_CurrentFragmentMdl;
    if ( (*((_BYTE *)this->m_DmaEnabler + 380) & 0x20) != 0 )
      ScatterGatherList = FxDmaScatterGatherTransaction::BuildScatterGatherList(
                            this,
                            v13,
                            v12,
                            v11,
                            (void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *))NextOffset,
                            this,
                            this->m_SGListBuffer,
                            this->m_SgListBufferSize);
    else
      ScatterGatherList = FxDmaScatterGatherTransaction::GetScatterGatherList(
                            this,
                            v13,
                            v12,
                            v11,
                            (void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *))NextOffset,
                            this);
    v15 = ScatterGatherList;
    if ( ScatterGatherList >= 0 )
    {
      if ( m_Globals->FxVerifierOn )
      {
        if ( m_Globals->FxVerboseOn )
          WPP_IFR_SF_qL(
            m_Globals,
            5u,
            0xFu,
            0x11u,
            WPP_FxDmaTransactionScatterGather_cpp_Traceguids,
            v3,
            ScatterGatherList);
      }
    }
    else
    {
      WPP_IFR_SF_qL(m_Globals, 2u, 0xFu, 0x10u, WPP_FxDmaTransactionScatterGather_cpp_Traceguids, v3, ScatterGatherList);
      this->m_Remaining += *(_QWORD *)p_m_CurrentFragmentLength;
    }
    return v15;
  }
  else
  {
    WPP_IFR_SF_qqdid(
      m_Globals,
      mapRegistersRequired,
      v8,
      0xFu,
      (const _GUID *)NextOffset,
      v3,
      *p_m_CurrentFragmentMdl,
      mapRegistersRequired,
      flags,
      v17);
    return 3223323146LL;
  }
}
