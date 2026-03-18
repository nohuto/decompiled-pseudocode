/*
 * XREFs of ?StageTransfer@FxDmaPacketTransaction@@UEAAJXZ @ 0x1C0035570
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0013F08 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     __security_check_cookie @ 0x1C001A980 (__security_check_cookie.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C00311F8 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C0034A5C (WPP_IFR_SF_qqq.c)
 *     ?InvokeProgramDma@FxDmaTransactionProgramOrReserveDma@@QEAAEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z @ 0x1C0034FCC (-InvokeProgramDma@FxDmaTransactionProgramOrReserveDma@@QEAAEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVI.c)
 *     WPP_IFR_SF_dqd @ 0x1C0036304 (WPP_IFR_SF_dqd.c)
 *     WPP_IFR_SF_qqiDq @ 0x1C0036540 (WPP_IFR_SF_qqiDq.c)
 *     WPP_IFR_SF_qqqD @ 0x1C00368A8 (WPP_IFR_SF_qqqD.c)
 *     WPP_IFR_SF_sqqii @ 0x1C0036AEC (WPP_IFR_SF_sqqii.c)
 */

__int64 __fastcall FxDmaPacketTransaction::StageTransfer(FxDmaPacketTransaction *this, __int64 a2, unsigned __int8 a3)
{
  int v4; // edi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a1; // r14
  unsigned __int8 v7; // r8
  _FX_DRIVER_GLOBALS *v8; // rcx
  char v9; // si
  unsigned __int64 m_Remaining; // r11
  unsigned __int64 flags; // rdi
  unsigned __int64 m_MaxFragmentLength; // rdx
  unsigned __int64 v13; // r10
  __int64 id; // r8
  unsigned int m_MapRegistersReserved; // r9d
  _MDL *m_CurrentFragmentMdl; // rcx
  unsigned __int64 ByteCount; // rax
  unsigned int v18; // r9d
  __int64 v19; // rcx
  _FX_DRIVER_GLOBALS *v20; // r9
  const char *v21; // rcx
  const void *globals; // rdx
  FxDmaEnabler *m_DmaEnabler; // rcx
  unsigned __int8 *Alignment; // r12
  unsigned __int8 v25; // dl
  unsigned int v26; // r8d
  unsigned __int16 v27; // r9
  _FX_DRIVER_GLOBALS *v28; // rsi
  unsigned int m_CurrentFragmentLength; // ecx
  const void *v30; // r15
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  const void *ProgramDma; // rdx
  const void *v34; // rcx
  FxDeviceBase *m_DeviceBase; // r8
  unsigned __int16 m_ObjectSize; // ax
  WDFDEVICE__ *v37; // r8
  WDFDMATRANSACTION__ *v38; // rdx
  unsigned __int8 v39; // r8
  DMA_COMPLETION_STATUS CompletionStatus; // esi
  unsigned __int8 v41; // dl
  unsigned __int8 v42; // dl
  const void *v43; // rcx
  unsigned __int8 v44; // r8
  const _GUID *traceGuid; // [rsp+28h] [rbp-59h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+68h] [rbp-19h] BYREF
  unsigned __int8 sgListBuffer[40]; // [rsp+70h] [rbp-11h] BYREF

  v4 = 0;
  m_Globals = this->m_Globals;
  _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)sgListBuffer = m_Globals;
  if ( !this->m_ObjectSize )
    _a1 = 0LL;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0x1Au, WPP_FxDmaTransactionPacket_cpp_Traceguids, _a1);
  FxNonPagedObject::Lock(this, (unsigned __int8 *)&pFxDriverGlobals, a3);
  if ( this->m_TransferState.CurrentStagingThread )
  {
    v8 = *(_FX_DRIVER_GLOBALS **)sgListBuffer;
    v9 = 0;
    this->m_TransferState.RerunStaging = 1;
    if ( v8->FxVerifierOn && v8->FxVerboseOn )
      WPP_IFR_SF_q(v8, 5u, 0xFu, 0x1Bu, WPP_FxDmaTransactionPacket_cpp_Traceguids, _a1);
  }
  else
  {
    v9 = 1;
    this->m_TransferState.CurrentStagingThread = KeGetCurrentThread();
  }
  FxNonPagedObject::Unlock(this, (unsigned __int8)pFxDriverGlobals, v7);
  FxObject::AddRef(this, sgListBuffer, 0, 0LL);
  while ( v9 )
  {
    m_Remaining = this->m_Remaining;
    flags = this->m_Transferred;
    m_MaxFragmentLength = m_Remaining;
    if ( m_Remaining >= this->m_MaxFragmentLength )
      m_MaxFragmentLength = this->m_MaxFragmentLength;
    v13 = flags + this->m_StartOffset;
    id = m_MaxFragmentLength;
    this->m_CurrentFragmentLength = m_MaxFragmentLength;
    this->m_CurrentFragmentOffset = v13;
    if ( !this->m_RequireSingleTransfer )
    {
      m_MapRegistersReserved = this->m_MapRegistersReserved;
      if ( m_MapRegistersReserved )
      {
        if ( this->m_MapRegistersNeeded > m_MapRegistersReserved )
        {
          m_CurrentFragmentMdl = this->m_CurrentFragmentMdl;
          while ( m_CurrentFragmentMdl )
          {
            ByteCount = m_CurrentFragmentMdl->ByteCount;
            if ( ByteCount >= v13 )
              break;
            m_CurrentFragmentMdl = m_CurrentFragmentMdl->Next;
            v13 -= ByteCount;
          }
          v18 = m_MapRegistersReserved << 12;
          v19 = ((_WORD)v13 + (unsigned __int16)m_CurrentFragmentMdl->ByteOffset) & 0xFFF;
          if ( m_MaxFragmentLength >= (unsigned __int64)(v18 - 4096) - v19 + 4096 )
            id = v18 - 4096 - v19 + 4096;
          this->m_CurrentFragmentLength = id;
        }
      }
    }
    v20 = *(_FX_DRIVER_GLOBALS **)sgListBuffer;
    this->m_Remaining = m_Remaining - id;
    if ( v20->FxVerifierOn && v20->FxVerboseOn )
    {
      v21 = "first";
      globals = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        globals = 0LL;
      if ( flags )
        v21 = "next";
      WPP_IFR_SF_sqqii(
        v20,
        (unsigned __int8)globals,
        id,
        (unsigned __int16)v20,
        traceGuid,
        v21,
        globals,
        this->m_CurrentFragmentMdl,
        flags,
        id);
    }
    if ( this->m_IsCancelled == 1 )
    {
      v4 = -1073741536;
    }
    else if ( this->PreMapTransfer(this) )
    {
      m_DmaEnabler = this->m_DmaEnabler;
      if ( (*((_BYTE *)m_DmaEnabler + 380) & 4) != 0 )
        Alignment = &sgListBuffer[8];
      else
        Alignment = (unsigned __int8 *)m_DmaEnabler->m_SGList.ScatterGatherProfile.Lookaside.L.ListHead.Alignment;
      this->GetTransferCompletionRoutine(this);
      v28 = this->m_Globals;
      m_CurrentFragmentLength = this->m_CurrentFragmentLength;
      v30 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      HIDWORD(pFxDriverGlobals) = m_CurrentFragmentLength;
      if ( !this->m_ObjectSize )
        v30 = 0LL;
      if ( v28->FxVerifierOn && v28->FxVerboseOn )
        WPP_IFR_SF_qqiDq(
          v28,
          v25,
          v26,
          v27,
          traceGuid,
          v30,
          this->m_CurrentFragmentMdl,
          this->m_CurrentFragmentOffset,
          m_CurrentFragmentLength,
          this->m_MapRegisterBase);
      if ( FxDmaEnabler::GetDmaDescription(this->m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
      {
        LODWORD(traceGuid) = this->m_DeviceAddressOffset;
        v4 = ((__int64 (__fastcall *)(_DMA_ADAPTER *, _MDL *, void *, unsigned __int64))this->m_AdapterInfo->AdapterObject->DmaOperations->MapTransferEx)(
               this->m_AdapterInfo->AdapterObject,
               this->m_CurrentFragmentMdl,
               this->m_MapRegisterBase,
               this->m_CurrentFragmentOffset);
      }
      else
      {
        *(_DWORD *)Alignment = 1;
        *((_QWORD *)Alignment + 1) = 0LL;
        traceGuid = (const _GUID *)((char *)&pFxDriverGlobals + 4);
        *((_QWORD *)Alignment + 2) = ((__int64 (__fastcall *)(_DMA_ADAPTER *, _MDL *, void *, char *))this->m_AdapterInfo->AdapterObject->DmaOperations->MapTransfer)(
                                       this->m_AdapterInfo->AdapterObject,
                                       this->m_CurrentFragmentMdl,
                                       this->m_MapRegisterBase,
                                       (char *)this->m_CurrentFragmentMdl->StartVa
                                     + this->m_CurrentFragmentMdl->ByteOffset
                                     + this->m_CurrentFragmentOffset);
        v4 = 0;
        *((_DWORD *)Alignment + 6) = HIDWORD(pFxDriverGlobals);
      }
      if ( v28->FxVerifierOn && v28->FxVerboseOn )
        WPP_IFR_SF_dqd(
          v28,
          5u,
          0xFu,
          0xEu,
          WPP_FxDmaTransactionPacket_hpp_Traceguids,
          SHIDWORD(pFxDriverGlobals),
          v30,
          v4);
      if ( v4 >= 0 )
      {
        v31 = this->m_CurrentFragmentLength;
        if ( HIDWORD(pFxDriverGlobals) < v31 )
        {
          v32 = v31 - HIDWORD(pFxDriverGlobals);
          this->m_CurrentFragmentLength = HIDWORD(pFxDriverGlobals);
          this->m_Remaining += v32;
        }
        ProgramDma = this->m_DmaAcquiredFunction.Method.ProgramDma;
        if ( ProgramDma )
        {
          if ( *(_BYTE *)(*(_QWORD *)sgListBuffer + 316LL) && *(_BYTE *)(*(_QWORD *)sgListBuffer + 324LL) )
          {
            v34 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !this->m_ObjectSize )
              v34 = 0LL;
            WPP_IFR_SF_qqq(
              *(_FX_DRIVER_GLOBALS **)sgListBuffer,
              5u,
              0xFu,
              0x1Du,
              WPP_FxDmaTransactionPacket_cpp_Traceguids,
              ProgramDma,
              this->m_DmaAcquiredContext,
              v34);
          }
          m_DeviceBase = this->m_DmaEnabler->FxDmaTransactionBase::m_DeviceBase;
          m_ObjectSize = m_DeviceBase->m_ObjectSize;
          v37 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !m_ObjectSize )
            v37 = 0LL;
          v38 = (WDFDMATRANSACTION__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !this->m_ObjectSize )
            v38 = 0LL;
          FxDmaTransactionProgramOrReserveDma::InvokeProgramDma(
            &this->m_DmaAcquiredFunction,
            v38,
            v37,
            this->m_DmaAcquiredContext,
            this->m_DmaDirection,
            (_SCATTER_GATHER_LIST *)Alignment);
        }
      }
    }
    else
    {
      v4 = 0;
    }
    FxNonPagedObject::Lock(this, (unsigned __int8 *)&pFxDriverGlobals, id);
    if ( this->m_TransferState.RerunCompletion == 1 )
    {
      CompletionStatus = this->m_TransferState.CompletionStatus;
      v41 = (unsigned __int8)pFxDriverGlobals;
      this->m_TransferState.CompletionStatus = -1;
      this->m_TransferState.RerunCompletion = 0;
      FxNonPagedObject::Unlock(this, v41, v39);
      if ( *(_BYTE *)(*(_QWORD *)sgListBuffer + 316LL) && *(_BYTE *)(*(_QWORD *)sgListBuffer + 324LL) )
      {
        v43 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v43 = 0LL;
        WPP_IFR_SF_qqqD(
          *(_FX_DRIVER_GLOBALS **)sgListBuffer,
          v42,
          *(unsigned int *)sgListBuffer,
          0x1Eu,
          WPP_FxDmaTransactionPacket_cpp_Traceguids,
          this[1].m_Globals,
          *(const void **)&this[1].m_ObjectFlags,
          v43,
          CompletionStatus);
      }
      this->CallEvtDmaCompleted(this, CompletionStatus);
      FxNonPagedObject::Lock(this, (unsigned __int8 *)&pFxDriverGlobals, v44);
    }
    if ( this->m_TransferState.RerunStaging == 1 )
    {
      v9 = 1;
      this->m_TransferState.RerunStaging = 0;
    }
    else
    {
      this->m_TransferState.CurrentStagingThread = 0LL;
      v9 = 0;
    }
    FxNonPagedObject::Unlock(this, (unsigned __int8)pFxDriverGlobals, v39);
  }
  this->Release(this, sgListBuffer, 0, 0LL);
  if ( *(_BYTE *)(*(_QWORD *)sgListBuffer + 316LL) && *(_BYTE *)(*(_QWORD *)sgListBuffer + 324LL) )
    WPP_IFR_SF_qL(
      *(_FX_DRIVER_GLOBALS **)sgListBuffer,
      5u,
      0xFu,
      0x1Fu,
      WPP_FxDmaTransactionPacket_cpp_Traceguids,
      _a1,
      v4);
  return (unsigned int)v4;
}
