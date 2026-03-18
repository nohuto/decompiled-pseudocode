/*
 * XREFs of ?PowerGotoDxIoStopped@FxPkgPnp@@IEAAEXZ @ 0x1C000EE60
 * Callers:
 *     ?PowerGotoDNotZeroIoStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C000EE40 (-PowerGotoDNotZeroIoStopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDxIoStoppedArmedForWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00811A0 (-PowerGotoDxIoStoppedArmedForWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C000CE54 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?PowerDown@FxDmaEnabler@@QEAAJXZ @ 0x1C000CEA4 (-PowerDown@FxDmaEnabler@@QEAAJXZ.c)
 *     ?Disconnect@FxInterrupt@@QEAAJK@Z @ 0x1C000D394 (-Disconnect@FxInterrupt@@QEAAJK@Z.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00105C0 (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0011470 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0012380 (-ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C0019AA0 (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 *     WPP_IFR_SF_qqLd @ 0x1C006CF68 (WPP_IFR_SF_qqLd.c)
 *     ?IssuePostCxCallbacks@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C00899EC (-IssuePostCxCallbacks@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z.c)
 *     ?IssuePreCxCallbacksStateless@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C0089B1C (-IssuePreCxCallbacksStateless@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z.c)
 */

unsigned __int8 __fastcall FxPkgPnp::PowerGotoDxIoStopped(FxPkgPnp *this)
{
  char v2; // r15
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  int EaLength; // eax
  int _a4; // ebx
  FxSpinLockTransactionedList *m_DmaEnablerList; // rcx
  WDFDEVICE__ *v7; // rsi
  char v8; // bp
  unsigned __int64 v9; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE); // rax
  char v11; // r12
  _LIST_ENTRY *Blink; // rbp
  int v13; // r13d
  FxPnpDeviceD0Exit *p_m_DeviceD0Exit; // r14
  FxPkgPnp *m_PkgPnp; // rax
  FxPnpDeviceD0Exit *v16; // rcx
  FxDevice *m_Device; // r13
  FxCompanionTarget *m_CompanionTarget; // rbp
  int v19; // esi
  unsigned __int8 v20; // r8
  FxPowerPolicyOwnerSettings *m_Owner; // rbp
  KIRQL v22; // bl
  __int64 v23; // rdx
  signed int v25; // eax
  FxTransactionedEntry *v26; // r14
  FxTransactionedEntry *NextEntryLocked; // rax
  unsigned __int8 v28; // dl
  FxTransactionedList *v29; // r8
  int globals; // eax
  FxDeviceBase *m_DeviceBase; // r8
  const void *_a2; // rdx
  const void *v33; // rdx
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // [rsp+90h] [rbp+8h]
  signed int v38; // [rsp+98h] [rbp+10h]
  _LIST_ENTRY **p_Blink; // [rsp+A0h] [rbp+18h]

  v2 = 0;
  CurrentStackLocation = this->m_PendingDevicePowerIrp->Tail.Overlay.CurrentStackLocation;
  EaLength = CurrentStackLocation->Parameters.Create.EaLength;
  if ( EaLength < 4 || (_a4 = 5, EaLength > 6) )
    _a4 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v37 = _a4;
  if ( this->m_SystemPowerState == 5 && this->m_SpecialFileCount[1] )
  {
    _a4 = 6;
    v37 = 6;
  }
  m_DmaEnablerList = this->m_DmaEnablerList;
  v7 = 0LL;
  v8 = 1;
  if ( m_DmaEnablerList )
  {
    FxTransactionedList::LockForEnum(m_DmaEnablerList, this->m_Globals);
    v26 = 0LL;
    while ( 1 )
    {
      NextEntryLocked = FxTransactionedList::GetNextEntryLocked(this->m_DmaEnablerList, v26);
      v26 = NextEntryLocked;
      if ( !NextEntryLocked )
        break;
      if ( (int)FxDmaEnabler::PowerDown((FxDmaEnabler *)NextEntryLocked->m_TransactionedObject, v28, (unsigned int)v29) < 0 )
        v8 = 0;
    }
    FxTransactionedList::UnlockFromEnum(v29, this->m_Globals);
    if ( !v8 )
      v2 = 1;
  }
  v9 = 0LL;
  m_Method = this->m_DeviceD0ExitPreInterruptsDisabled.m_Method;
  if ( this->m_DeviceBase->m_ObjectSize )
    v9 = (unsigned __int64)this->m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( m_Method )
  {
    globals = m_Method((WDFDEVICE__ *)v9, (_WDF_POWER_DEVICE_STATE)_a4);
    m_DeviceBase = this->m_DeviceBase;
    if ( globals < 0 )
    {
      v2 = 1;
      _a2 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_DeviceBase->m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_qqLd(
        this->m_Globals,
        (unsigned __int8)_a2,
        0xCu,
        0x14u,
        WPP_PowerStateMachine_cpp_Traceguids,
        _a2,
        m_DeviceBase->m_DeviceObject.m_DeviceObject,
        _a4,
        globals);
    }
  }
  v11 = 16;
  if ( this->m_SharedPower.m_WaitWakeIrp || this->m_WakeInterruptsKeepConnected == 1 )
  {
    v11 = 80;
    this->m_WakeInterruptsKeepConnected = 0;
  }
  Blink = this->m_InterruptListHead.Blink;
  v13 = 0;
  if ( Blink != &this->m_InterruptListHead )
  {
    do
    {
      p_Blink = &Blink[-28].Blink;
      v25 = FxInterrupt::Disconnect((FxInterrupt *)&Blink[-28].Blink, v11);
      v38 = v25;
      if ( v25 < 0 )
      {
        v33 = (const void *)((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !*((_WORD *)p_Blink + 5) )
          v33 = 0LL;
        WPP_IFR_SF_qL(this->m_Globals, 2u, 0xCu, 0x52u, WPP_FxPkgPnp_cpp_Traceguids, v33, v25);
        v13 = v38;
      }
      Blink = Blink->Blink;
    }
    while ( Blink != &this->m_InterruptListHead );
    _a4 = v37;
    if ( v13 < 0 )
      v2 = 1;
  }
  p_m_DeviceD0Exit = &this->m_DeviceD0Exit;
  m_PkgPnp = this->m_DeviceD0Exit.m_PkgPnp;
  if ( this->m_DeviceBase->m_ObjectSize )
    v7 = (WDFDEVICE__ *)((unsigned __int64)this->m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  this->m_DeviceD0Exit.m_TargetState = _a4;
  this->m_DeviceD0Exit.m_Device = v7;
  v16 = &this->m_DeviceD0Exit;
  m_Device = m_PkgPnp->m_Device;
  m_CompanionTarget = m_PkgPnp->m_CompanionTarget;
  if ( m_Device->m_CxDeviceInfoListHead.Flink == &m_Device->m_CxDeviceInfoListHead )
  {
    v19 = p_m_DeviceD0Exit->InvokeClient(v16);
    if ( !m_CompanionTarget )
      goto LABEL_17;
    v34 = p_m_DeviceD0Exit->InvokeCompanionCallback(&this->m_DeviceD0Exit, m_CompanionTarget);
    if ( v19 < 0 )
      goto LABEL_48;
    goto LABEL_55;
  }
  v19 = FxPrePostCallback::IssuePreCxCallbacksStateless(v16, m_Device);
  v35 = p_m_DeviceD0Exit->InvokeClient(&this->m_DeviceD0Exit);
  if ( v19 >= 0 )
    v19 = v35;
  v36 = FxPrePostCallback::IssuePostCxCallbacks(&this->m_DeviceD0Exit, m_Device);
  if ( v19 >= 0 )
    v19 = v36;
  if ( m_CompanionTarget )
  {
    v34 = p_m_DeviceD0Exit->InvokeCompanionCallback(&this->m_DeviceD0Exit, m_CompanionTarget);
    if ( v19 < 0 )
      goto LABEL_48;
LABEL_55:
    v19 = v34;
  }
LABEL_17:
  if ( v19 < 0 )
LABEL_48:
    v2 = 1;
  this->PowerParentPowerDereference(this);
  this->m_DevicePowerStateOld = this->m_DevicePowerState;
  this->m_DevicePowerState = _a4;
  if ( _a4 < 2 || _a4 >= 5 )
  {
    if ( _a4 == 1 )
    {
      this->m_SystemPowerAction = 0;
    }
    else if ( (unsigned int)(_a4 - 5) <= 1 )
    {
      _a4 = 4;
    }
  }
  PoSetPowerState(this->m_DeviceBase->m_DeviceObject.m_DeviceObject, DevicePowerState, (POWER_STATE)_a4);
  if ( this->m_PowerMachine.m_IoCallbackFailure )
  {
    this->m_PowerMachine.m_IoCallbackFailure = 0;
    goto LABEL_61;
  }
  if ( v2 )
  {
LABEL_61:
    this->m_PowerMachine.m_PowerDownFailure = 1;
    return 0;
  }
  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner )
  {
    v22 = KeAcquireSpinLockRaiseToDpc(&m_Owner->m_PowerIdleMachine.m_Lock.m_Lock);
    FxPowerIdleMachine::ProcessEventLocked(&m_Owner->m_PowerIdleMachine, PowerIdleEventPowerDown);
    KeReleaseSpinLock(&m_Owner->m_PowerIdleMachine.m_Lock.m_Lock, v22);
  }
  else
  {
    FxPkgPnp::PowerPolicyProcessEvent(this, PwrPolPowerDown, v20);
  }
  LOBYTE(v23) = 1;
  this->PowerReleasePendingDeviceIrp(this, v23);
  return 1;
}
