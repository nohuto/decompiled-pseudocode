/*
 * XREFs of ?PnpProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C007E62C
 * Callers:
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C007E428 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?_PnpProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C007EE80 (-_PnpProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0011A10 (WPP_IFR_SF_qqLL.c)
 *     ?GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C00152E8 (-GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?PnpEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_PNP_STATE@@@Z @ 0x1C007C8DC (-PnpEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_PNP_STATE@@@Z.c)
 *     ?PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z @ 0x1C007DC44 (-PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z.c)
 *     WPP_IFR_SF_qqLLL @ 0x1C007EEF0 (WPP_IFR_SF_qqLLL.c)
 */

void __fastcall FxPkgPnp::PnpProcessEventInner(FxPkgPnp *this, FxPostProcessInfo *Info)
{
  unsigned __int64 *p_m_Lock; // rbp
  FxPnpMachine *p_m_PnpMachine; // r15
  __int64 v6; // rdi
  KIRQL v7; // r9
  unsigned __int8 m_QueueHead; // al
  FxPnpEvent _a4; // esi
  __int64 v10; // rdx
  const PNP_EVENT_TARGET_STATE *OtherTargetStates; // rcx
  FxPnpEvent PnpEvent; // eax
  __int64 v13; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxDeviceBase *m_DeviceBase; // r8
  const void *_a1; // rdx
  unsigned int globals; // r8d
  FxDeviceBase *v18; // rdx
  const void *v19; // rcx
  _IRP *m_PendingPnPIrp; // rax

  p_m_Lock = &this->m_PnpMachine.m_QueueLock.m_Lock;
  p_m_PnpMachine = &this->m_PnpMachine;
  while ( 1 )
  {
    v6 = ((__int64)this->m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable & 0xFFFF7FFF) - 256;
    v7 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
    m_QueueHead = p_m_PnpMachine->m_QueueHead;
    if ( p_m_PnpMachine->m_QueueHead == p_m_PnpMachine->m_QueueTail )
      break;
    _a4 = this->m_PnpMachine.m_Queue[m_QueueHead];
    if ( (_a4 & 0x3C3000) == 0 && (*(_DWORD *)&FxPkgPnp::m_WdfPnpStates[v6].StateInfo.Bits & 1) == 0 )
      goto LABEL_28;
    p_m_PnpMachine->m_QueueHead = ((unsigned int)m_QueueHead + 1) % p_m_PnpMachine->m_QueueDepth;
    KeReleaseSpinLock(p_m_Lock, v7);
    if ( FxPkgPnp::m_WdfPnpStates[v6].FirstTargetState.PnpEvent == _a4 )
    {
      LODWORD(v10) = FxPkgPnp::m_WdfPnpStates[v6].FirstTargetState.TargetState;
      goto LABEL_23;
    }
    OtherTargetStates = FxPkgPnp::m_WdfPnpStates[v6].OtherTargetStates;
    if ( !OtherTargetStates
      || (PnpEvent = OtherTargetStates->PnpEvent, LODWORD(v13) = 0, OtherTargetStates->PnpEvent == PnpEventNull) )
    {
LABEL_12:
      m_Globals = this->m_Globals;
      if ( m_Globals->FxVerboseOn )
      {
        m_DeviceBase = this->m_DeviceBase;
        _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_DeviceBase->m_ObjectSize )
          _a1 = 0LL;
        WPP_IFR_SF_qqLL(
          m_Globals,
          5u,
          0xCu,
          0xCu,
          WPP_PnpStateMachine_cpp_Traceguids,
          _a1,
          m_DeviceBase->m_DeviceObject.m_DeviceObject,
          (unsigned int)m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable,
          _a4);
      }
      globals = *(_DWORD *)&FxPkgPnp::m_WdfPnpStates[v6].StateInfo.Bits >> 1;
      if ( (globals & _a4) == 0 )
      {
        v18 = this->m_DeviceBase;
        v19 = (const void *)((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v18->m_ObjectSize )
          v19 = 0LL;
        WPP_IFR_SF_qqLLL(
          this->m_Globals,
          3u,
          globals,
          0xDu,
          WPP_PnpStateMachine_cpp_Traceguids,
          v19,
          v18->m_DeviceObject.m_DeviceObject,
          (unsigned int)v18[1].FxNonPagedObject::FxObject::__vftable,
          _a4,
          globals);
      }
      if ( (_a4 & 0xDF4) != 0 )
        FxPkgPnp::PnpFinishProcessingIrp(this, v10);
    }
    else
    {
      v10 = 0LL;
      while ( PnpEvent != _a4 )
      {
        v13 = (unsigned int)(v13 + 1);
        v10 = (unsigned int)v13;
        PnpEvent = OtherTargetStates[v13].PnpEvent;
        if ( PnpEvent == PnpEventNull )
          goto LABEL_12;
      }
      LODWORD(v10) = OtherTargetStates[v10].TargetState;
LABEL_23:
      if ( (_DWORD)v10 == 314 )
        goto LABEL_12;
      FxPkgPnp::PnpEnterNewState(this, (_WDF_DEVICE_PNP_STATE)v10);
    }
  }
  FxEventQueue::GetFinishedState(p_m_PnpMachine, Info);
  if ( this->m_PnpMachine.m_FireAndForget )
  {
    m_PendingPnPIrp = this->m_PendingPnPIrp;
    this->m_PendingPnPIrp = 0LL;
    this->m_PnpMachine.m_FireAndForget = 0;
    Info->m_FireAndForgetIrp = m_PendingPnPIrp;
  }
  Info->m_SetRemovedEvent = this->m_SetDeviceRemoveProcessed;
  this->m_SetDeviceRemoveProcessed = 0;
LABEL_28:
  KeReleaseSpinLock(p_m_Lock, v7);
}
