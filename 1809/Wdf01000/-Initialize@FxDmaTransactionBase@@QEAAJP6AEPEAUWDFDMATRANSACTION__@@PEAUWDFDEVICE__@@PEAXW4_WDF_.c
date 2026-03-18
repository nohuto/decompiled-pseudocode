/*
 * XREFs of ?Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z3PEAU_MDL@@_KK@Z @ 0x1C0038AA0
 * Callers:
 *     imp_WdfDmaTransactionInitialize @ 0x1C0032300 (imp_WdfDmaTransactionInitialize.c)
 *     imp_WdfDmaTransactionInitializeUsingRequest @ 0x1C0032560 (imp_WdfDmaTransactionInitializeUsingRequest.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C00311F8 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     WPP_IFR_SF_ql @ 0x1C0031874 (WPP_IFR_SF_ql.c)
 *     ?InitializeTransferContext@FxDmaEnabler@@QEAAXPEAXW4_WDF_DMA_DIRECTION@@@Z @ 0x1C00342A4 (-InitializeTransferContext@FxDmaEnabler@@QEAAXPEAXW4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?PrepareForSingleTransfer@FxDmaTransactionBase@@AEAAJXZ @ 0x1C0038CD4 (-PrepareForSingleTransfer@FxDmaTransactionBase@@AEAAJXZ.c)
 *     ?ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z @ 0x1C0038FEC (-ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B3B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

__int64 __fastcall FxDmaTransactionBase::Initialize(
        FxDmaTransactionBase *this,
        unsigned __int8 (__fastcall *ProgramDmaFunction)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _WDF_DMA_DIRECTION, _SCATTER_GATHER_LIST *),
        _WDF_DMA_DIRECTION DmaDirection,
        _MDL *Mdl,
        unsigned __int64 Offset,
        unsigned int Length)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  const void *v11; // rdi
  const void *_a1; // rax
  FxDmaTransactionState _a2; // ecx
  const void *v14; // rax
  FxDmaEnabler *m_DmaEnabler; // rdx
  __int64 v16; // rax
  _FxDmaDescription *v17; // rax
  FxDmaEnabler *v18; // rcx
  FxDmaEnabler *v19; // rcx
  unsigned __int64 m_MaximumLength; // rcx
  signed int v21; // esi

  m_Globals = this->m_Globals;
  v11 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(this->m_Globals, 5u, 0xFu, 0xBu, WPP_FxDmaTransactionBase_cpp_Traceguids, _a1);
  }
  _a2 = this->m_State;
  if ( (unsigned int)(_a2 - 1) > 1 && _a2 != FxDmaTransactionStateReleased )
  {
    v14 = v11;
    if ( !this->m_ObjectSize )
      v14 = 0LL;
    WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0xCu, WPP_FxDmaTransactionBase_cpp_Traceguids, v14, _a2);
    if ( !this->m_ObjectSize )
      v11 = 0LL;
    FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, (unsigned __int64)v11, this->m_State);
  }
  m_DmaEnabler = this->m_DmaEnabler;
  if ( DmaDirection )
    v16 = (*((_BYTE *)m_DmaEnabler + 380) & 0x10) != 0 ? 280LL : 184LL;
  else
    v16 = 184LL;
  v17 = (_FxDmaDescription *)((char *)m_DmaEnabler + v16);
  v18 = this->m_DmaEnabler;
  this->m_AdapterInfo = v17;
  this->m_MaxFragmentLength = v17->MaximumFragmentLength;
  this->m_StartOffset = Offset;
  this->m_CurrentFragmentOffset = Offset;
  this->m_Remaining = Length;
  this->m_TransactionLength = Length;
  this->m_DmaDirection = DmaDirection;
  this->m_StartMdl = Mdl;
  this->m_CurrentFragmentMdl = Mdl;
  this->m_DmaAcquiredFunction.Method.ProgramDma = ProgramDmaFunction;
  if ( FxDmaEnabler::GetDmaDescription(v18, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
    FxDmaEnabler::InitializeTransferContext(v19, this->m_TransferContext, DmaDirection);
  if ( this->m_RequireSingleTransfer )
  {
    m_MaximumLength = this->m_DmaEnabler->m_MaximumLength;
    if ( this->m_MaxFragmentLength < m_MaximumLength )
      this->m_MaxFragmentLength = m_MaximumLength;
    v21 = FxDmaTransactionBase::PrepareForSingleTransfer(this);
    if ( v21 < 0 )
      goto LABEL_23;
  }
  v21 = this->InitializeResources(this);
  if ( v21 < 0 )
LABEL_23:
    FxDmaTransactionBase::ReleaseForReuse(this, 0);
  else
    this->m_State = FxDmaTransactionStateInitialized;
  if ( m_Globals->FxVerboseOn )
  {
    if ( !this->m_ObjectSize )
      v11 = 0LL;
    WPP_IFR_SF_qL(m_Globals, 5u, 0xFu, 0xDu, WPP_FxDmaTransactionBase_cpp_Traceguids, v11, v21);
  }
  return (unsigned int)v21;
}
