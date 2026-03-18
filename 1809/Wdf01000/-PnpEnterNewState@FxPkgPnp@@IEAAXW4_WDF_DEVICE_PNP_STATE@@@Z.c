/*
 * XREFs of ?PnpEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_PNP_STATE@@@Z @ 0x1C007C8DC
 * Callers:
 *     ?PnpProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C007E62C (-PnpProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0011A10 (WPP_IFR_SF_qqLL.c)
 *     __security_check_cookie @ 0x1C001A980 (__security_check_cookie.c)
 *     ?Invoke@FxPnpStateCallback@@QEAAXW4_WDF_DEVICE_PNP_STATE@@W4_WDF_STATE_NOTIFICATION_TYPE@@PEAUWDFDEVICE__@@PEBU_WDF_DEVICE_PNP_NOTIFICATION_DATA@@@Z @ 0x1C007F030 (-Invoke@FxPnpStateCallback@@QEAAXW4_WDF_DEVICE_PNP_STATE@@W4_WDF_STATE_NOTIFICATION_TYPE@@PEAUWD.c)
 */

void __fastcall FxPkgPnp::PnpEnterNewState(FxPkgPnp *this, _WDF_DEVICE_PNP_STATE State)
{
  _WDF_DEVICE_PNP_STATE _a3; // edi
  _WDF_DEVICE_PNP_STATE _a4; // esi
  FxDeviceBase *m_DeviceBase; // rdx
  const void *_a1; // rcx
  FxPnpStateCallback *m_PnpStateCallbacks; // rcx
  FxDeviceBase *v8; // r9
  unsigned __int16 m_ObjectSize; // ax
  WDFDEVICE__ *v10; // r9
  __int64 m_HistoryIndex; // r8
  FxPnpStateCallback *v12; // rcx
  FxDeviceBase *v13; // r9
  unsigned __int16 v14; // ax
  WDFDEVICE__ *v15; // r9
  _WDF_DEVICE_PNP_STATE (__fastcall *StateFunc)(FxPkgPnp *); // rax
  FxPnpStateCallback *v17; // rcx
  FxDeviceBase *v18; // r9
  unsigned __int16 v19; // ax
  WDFDEVICE__ *v20; // r9
  _WDF_DEVICE_PNP_NOTIFICATION_DATA NotificationData; // [rsp+50h] [rbp-20h] BYREF

  if ( State != WdfDevStatePnpNull )
  {
    _a3 = State;
    _a4 = (_WDF_DEVICE_PNP_STATE)this->m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable;
    do
    {
      m_DeviceBase = this->m_DeviceBase;
      _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_DeviceBase->m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_qqLL(
        this->m_Globals,
        4u,
        0x15u,
        0xEu,
        WPP_PnpStateMachine_cpp_Traceguids,
        _a1,
        m_DeviceBase->m_DeviceObject.m_DeviceObject,
        _a3,
        _a4);
      m_PnpStateCallbacks = this->m_PnpStateCallbacks;
      if ( m_PnpStateCallbacks )
      {
        v8 = this->m_DeviceBase;
        NotificationData.Type = StateNotificationLeaveState;
        NotificationData.Data = (_WDF_DEVICE_PNP_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
        m_ObjectSize = v8->m_ObjectSize;
        v10 = (WDFDEVICE__ *)((unsigned __int64)v8 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_ObjectSize )
          v10 = 0LL;
        FxPnpStateCallback::Invoke(m_PnpStateCallbacks, _a4, StateNotificationLeaveState, v10, &NotificationData);
      }
      m_HistoryIndex = this->m_PnpMachine.m_HistoryIndex;
      this->m_PnpMachine.m_HistoryIndex = ((int)m_HistoryIndex + 1) % (unsigned int)this->m_PnpMachine.m_QueueDepth;
      this->m_PnpMachine.m_States.History[m_HistoryIndex] = _a3;
      v12 = this->m_PnpStateCallbacks;
      if ( v12 )
      {
        v13 = this->m_DeviceBase;
        NotificationData.Type = StateNotificationEnterState;
        NotificationData.Data = (_WDF_DEVICE_PNP_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
        v14 = v13->m_ObjectSize;
        v15 = (WDFDEVICE__ *)((unsigned __int64)v13 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v14 )
          v15 = 0LL;
        FxPnpStateCallback::Invoke(v12, _a3, StateNotificationEnterState, v15, &NotificationData);
      }
      _a4 = _a3;
      LODWORD(this->m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable) = _a3;
      StateFunc = FxPkgPnp::m_WdfPnpStates[(_a3 & 0xFFFF7FFF) - 256].StateFunc;
      if ( StateFunc )
        _a3 = StateFunc(this);
      else
        _a3 = WdfDevStatePnpNull;
      v17 = this->m_PnpStateCallbacks;
      if ( v17 )
      {
        v18 = this->m_DeviceBase;
        NotificationData.Data = (_WDF_DEVICE_PNP_NOTIFICATION_DATA::<unnamed_type_Data>)(unsigned int)_a4;
        NotificationData.Type = StateNotificationPostProcessState;
        v19 = v18->m_ObjectSize;
        v20 = (WDFDEVICE__ *)((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v19 )
          v20 = 0LL;
        FxPnpStateCallback::Invoke(v17, _a4, StateNotificationPostProcessState, v20, &NotificationData);
      }
    }
    while ( _a3 != WdfDevStatePnpNull );
  }
}
