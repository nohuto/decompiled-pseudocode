/*
 * XREFs of ?PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C00116B0
 * Callers:
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C0010B10 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     ?_PowerProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C0010DC0 (-_PowerProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z.c)
 *     ?PowerPolSystemWakeDeviceToD0CompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0015480 (-PowerPolSystemWakeDeviceToD0CompletePowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEA.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0011A10 (WPP_IFR_SF_qqLL.c)
 *     ?Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z @ 0x1C0014290 (-Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z.c)
 *     ?PowerCompletePendedWakeIrp@FxPkgPnp@@IEAAXXZ @ 0x1C00197FC (-PowerCompletePendedWakeIrp@FxPkgPnp@@IEAAXXZ.c)
 *     ?Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z @ 0x1C0019F20 (-Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z.c)
 *     ?Stop@MxTimer@@QEAAEXZ @ 0x1C001A360 (-Stop@MxTimer@@QEAAEXZ.c)
 *     __security_check_cookie @ 0x1C001A980 (__security_check_cookie.c)
 *     WPP_IFR_SF_qqLLL @ 0x1C007EEF0 (WPP_IFR_SF_qqLLL.c)
 *     ?Invoke@FxPowerStateCallback@@QEAAXW4_WDF_DEVICE_POWER_STATE@@W4_WDF_STATE_NOTIFICATION_TYPE@@PEAUWDFDEVICE__@@PEBU_WDF_DEVICE_POWER_NOTIFICATION_DATA@@@Z @ 0x1C007F0E8 (-Invoke@FxPowerStateCallback@@QEAAXW4_WDF_DEVICE_POWER_STATE@@W4_WDF_STATE_NOTIFICATION_TYPE@@PE.c)
 */

void __fastcall FxPkgPnp::PowerProcessEventInner(FxPkgPnp *this, FxPostProcessInfo *Info)
{
  FxPostProcessInfo *v2; // r12
  unsigned __int64 *p_m_Lock; // r15
  __int64 v5; // rsi
  KIRQL v6; // r8
  unsigned __int8 m_QueueHead; // al
  unsigned int v8; // r14d
  unsigned __int16 m_SingularEventsPresent; // cx
  __int64 v10; // rdx
  _WDF_DEVICE_POWER_STATE _a3; // edi
  FxDeviceBase *v12; // rax
  _WDF_DEVICE_POWER_STATE _a4; // r14d
  FxDeviceBase *v14; // rdx
  const void *_a1; // rcx
  FxPowerStateCallback *m_PowerStateCallbacks; // rcx
  __int64 m_HistoryIndex; // r8
  __int64 v18; // rdx
  FxPowerStateCallback *v19; // rcx
  __int64 v20; // rdi
  _WDF_DEVICE_POWER_STATE (__fastcall *StateFunc)(FxPkgPnp *); // rax
  _WDF_DEVICE_POWER_STATE v22; // eax
  FxPowerStateCallback *v23; // rcx
  unsigned __int8 m_QueueFlags; // al
  const POWER_EVENT_TARGET_STATE *OtherTargetStates; // rcx
  FxPowerEvent PowerEvent; // eax
  __int64 v27; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned int globals; // r8d
  FxDeviceBase *v30; // r9
  unsigned __int16 m_ObjectSize; // ax
  WDFDEVICE__ *v32; // r9
  FxDeviceBase *v33; // r9
  unsigned __int16 v34; // ax
  WDFDEVICE__ *v35; // r9
  _LARGE_INTEGER v36; // rdx
  FxDeviceBase *v37; // r9
  unsigned __int16 v38; // ax
  WDFDEVICE__ *v39; // r9
  FxDeviceBase *m_DeviceBase; // r8
  const void *v41; // rdx
  FxDeviceBase *v42; // rdx
  const void *v43; // rcx
  MxTimer TimerContext; // [rsp+60h] [rbp-A0h] BYREF
  FxPkgPnp *v46; // [rsp+F8h] [rbp-8h]
  struct _KTHREAD *CurrentThread; // [rsp+100h] [rbp+0h]
  _WDF_DEVICE_POWER_NOTIFICATION_DATA NotificationData; // [rsp+110h] [rbp+10h] BYREF

  v2 = Info;
  p_m_Lock = &this->m_PowerMachine.m_QueueLock.m_Lock;
  while ( 1 )
  {
    v5 = (HIDWORD(this->m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable) & 0xFFFF7FFF) - 768;
    v6 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
    m_QueueHead = this->m_PowerMachine.m_QueueHead;
    if ( m_QueueHead == this->m_PowerMachine.m_QueueTail )
      break;
    v8 = this->m_PowerMachine.m_Queue.Events[m_QueueHead];
    if ( (v8 & 0x3900) == 0 && (*(_DWORD *)&FxPkgPnp::m_WdfPowerStates[v5].StateInfo.Bits & 1) == 0 )
      goto LABEL_26;
    m_SingularEventsPresent = this->m_PowerMachine.m_SingularEventsPresent;
    if ( (m_SingularEventsPresent & (unsigned __int16)v8) != 0 )
      this->m_PowerMachine.m_SingularEventsPresent = m_SingularEventsPresent & ~(_WORD)v8;
    this->m_PowerMachine.m_QueueHead = ((unsigned int)this->m_PowerMachine.m_QueueHead + 1)
                                     % this->m_PowerMachine.m_QueueDepth;
    KeReleaseSpinLock(p_m_Lock, v6);
    if ( FxPkgPnp::m_WdfPowerStates[v5].FirstTargetState.PowerEvent == v8 )
    {
      _a3 = FxPkgPnp::m_WdfPowerStates[v5].FirstTargetState.TargetState;
      goto LABEL_8;
    }
    OtherTargetStates = FxPkgPnp::m_WdfPowerStates[v5].OtherTargetStates;
    if ( !OtherTargetStates
      || (PowerEvent = OtherTargetStates->PowerEvent, v10 = 0LL, OtherTargetStates->PowerEvent == PowerEventMaximum) )
    {
LABEL_35:
      m_Globals = this->m_Globals;
      if ( m_Globals->FxVerboseOn )
      {
        m_DeviceBase = this->m_DeviceBase;
        v41 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_DeviceBase->m_ObjectSize )
          v41 = 0LL;
        WPP_IFR_SF_qqLL(
          m_Globals,
          5u,
          0xCu,
          0xCu,
          WPP_PowerStateMachine_cpp_Traceguids,
          v41,
          m_DeviceBase->m_DeviceObject.m_DeviceObject,
          HIDWORD(m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable),
          v8);
      }
      globals = *(_DWORD *)&FxPkgPnp::m_WdfPowerStates[v5].StateInfo.Bits >> 1;
      if ( (globals & v8) == 0 )
      {
        v42 = this->m_DeviceBase;
        v43 = (const void *)((unsigned __int64)v42 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v42->m_ObjectSize )
          v43 = 0LL;
        WPP_IFR_SF_qqLLL(
          this->m_Globals,
          3u,
          globals,
          0xDu,
          WPP_PowerStateMachine_cpp_Traceguids,
          v43,
          v42->m_DeviceObject.m_DeviceObject,
          HIDWORD(v42[1].FxNonPagedObject::FxObject::__vftable),
          v8,
          globals);
      }
      if ( v8 <= 0x20 && (_WORD)v8 )
      {
        if ( v8 <= 2 )
        {
          LOBYTE(v10) = 1;
          this->PowerReleasePendingDeviceIrp(this, v10);
        }
        else if ( v8 == 8 || v8 == 16 || v8 == 32 )
        {
          FxPkgPnp::PowerCompletePendedWakeIrp(this);
        }
      }
    }
    else
    {
      v27 = 0LL;
      while ( PowerEvent != v8 )
      {
        v10 = (unsigned int)(v10 + 1);
        v27 = (unsigned int)v10;
        PowerEvent = OtherTargetStates[v10].PowerEvent;
        if ( PowerEvent == PowerEventMaximum )
          goto LABEL_35;
      }
      _a3 = OtherTargetStates[v27].TargetState;
LABEL_8:
      if ( _a3 == WdfDevStatePowerNull )
        goto LABEL_35;
      v12 = this->m_DeviceBase;
      TimerContext.m_Timer.m_TimerContext = 0LL;
      TimerContext.m_Timer.m_TimerCallback = 0LL;
      TimerContext.m_Timer.m_Period = 0;
      TimerContext.m_Timer.m_KernelExTimer = 0LL;
      v46 = this;
      _a4 = HIDWORD(v12[1].FxNonPagedObject::FxObject::__vftable);
      do
      {
        v14 = this->m_DeviceBase;
        _a1 = 0LL;
        if ( v14->m_ObjectSize )
          _a1 = (const void *)((unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
        WPP_IFR_SF_qqLL(
          this->m_Globals,
          4u,
          0x15u,
          0xEu,
          WPP_PowerStateMachine_cpp_Traceguids,
          _a1,
          v14->m_DeviceObject.m_DeviceObject,
          _a3,
          _a4);
        m_PowerStateCallbacks = this->m_PowerStateCallbacks;
        if ( m_PowerStateCallbacks )
        {
          v30 = this->m_DeviceBase;
          NotificationData.Type = StateNotificationLeaveState;
          NotificationData.Data = (_WDF_DEVICE_POWER_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
          m_ObjectSize = v30->m_ObjectSize;
          v32 = (WDFDEVICE__ *)((unsigned __int64)v30 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !m_ObjectSize )
            v32 = 0LL;
          FxPowerStateCallback::Invoke(m_PowerStateCallbacks, _a4, StateNotificationLeaveState, v32, &NotificationData);
        }
        m_HistoryIndex = this->m_PowerMachine.m_HistoryIndex;
        v18 = ((int)m_HistoryIndex + 1) % (unsigned int)this->m_PowerMachine.m_QueueDepth;
        this->m_PowerMachine.m_HistoryIndex = v18;
        this->m_PowerMachine.m_States.History[m_HistoryIndex] = _a3;
        v19 = this->m_PowerStateCallbacks;
        if ( v19 )
        {
          v33 = this->m_DeviceBase;
          NotificationData.Type = StateNotificationEnterState;
          NotificationData.Data = (_WDF_DEVICE_POWER_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
          v34 = v33->m_ObjectSize;
          v35 = (WDFDEVICE__ *)((unsigned __int64)v33 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v34 )
            v35 = 0LL;
          FxPowerStateCallback::Invoke(v19, _a3, StateNotificationEnterState, v35, &NotificationData);
        }
        _a4 = _a3;
        HIDWORD(this->m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable) = _a3;
        v20 = (_a3 & 0xFFFF7FFF) - 768;
        StateFunc = FxPkgPnp::m_WdfPowerStates[v20].StateFunc;
        if ( StateFunc )
        {
          if ( (_a4 & 0x8000) != 0 )
          {
            MxTimer::Initialize(&TimerContext, &TimerContext, FxWatchdog::_WatchdogDpc, 0);
            CurrentThread = KeGetCurrentThread();
            v36.QuadPart = -864000000000LL;
            if ( !v46->m_SharedPower.m_ExtendWatchDogTimer )
              v36.QuadPart = -6000000000LL;
            MxTimer::Start(&TimerContext, v36, 0);
            v22 = FxPkgPnp::m_WdfPowerStates[v20].StateFunc(this);
          }
          else
          {
            v22 = StateFunc(this);
          }
          _a3 = v22;
          if ( (_a4 & 0x8000) != 0 )
            MxTimer::Stop(&TimerContext);
        }
        else
        {
          _a3 = WdfDevStatePowerNull;
        }
        v23 = this->m_PowerStateCallbacks;
        if ( v23 )
        {
          v37 = this->m_DeviceBase;
          NotificationData.Type = StateNotificationPostProcessState;
          NotificationData.Data = (_WDF_DEVICE_POWER_NOTIFICATION_DATA::<unnamed_type_Data>)(unsigned int)_a4;
          v38 = v37->m_ObjectSize;
          v39 = (WDFDEVICE__ *)((unsigned __int64)v37 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v38 )
            v39 = 0LL;
          FxPowerStateCallback::Invoke(v23, _a4, StateNotificationPostProcessState, v39, &NotificationData);
        }
      }
      while ( _a3 != WdfDevStatePowerNull );
      p_m_Lock = &this->m_PowerMachine.m_QueueLock.m_Lock;
      v2 = Info;
      if ( TimerContext.m_Timer.m_IsExtTimer )
      {
        if ( TimerContext.m_Timer.m_KernelExTimer )
        {
          LOBYTE(v18) = 1;
          ExDeleteTimer(TimerContext.m_Timer.m_KernelExTimer, v18, 0LL, 0LL);
        }
      }
    }
  }
  m_QueueFlags = this->m_PowerMachine.m_QueueFlags;
  if ( (m_QueueFlags & 1) == 0 && !this->m_PowerMachine.m_WorkItemRunningCount )
  {
    if ( (m_QueueFlags & 4) != 0 )
    {
      this->m_PowerMachine.m_QueueFlags = m_QueueFlags & 0xFB;
      v2->m_DeleteObject = 1;
      m_QueueFlags = this->m_PowerMachine.m_QueueFlags;
    }
    if ( (m_QueueFlags & 2) != 0 )
    {
      v2->m_Event = this->m_PowerMachine.m_WorkItemFinished;
      this->m_PowerMachine.m_WorkItemFinished = 0LL;
    }
  }
LABEL_26:
  KeReleaseSpinLock(p_m_Lock, v6);
}
