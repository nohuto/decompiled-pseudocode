/*
 * XREFs of ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0011710
 * Callers:
 *     ?_PowerPolicyProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C0011050 (-_PowerPolicyProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0011470 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0012020 (WPP_IFR_SF_qqLL.c)
 *     ?Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z @ 0x1C001410C (-Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z.c)
 *     ?Stop@MxTimer@@QEAAEXZ @ 0x1C00199F0 (-Stop@MxTimer@@QEAAEXZ.c)
 *     ?Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z @ 0x1C0019C10 (-Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z.c)
 *     __security_check_cookie @ 0x1C001A3B0 (__security_check_cookie.c)
 *     WPP_IFR_SF_qqLLL @ 0x1C007F9C8 (WPP_IFR_SF_qqLLL.c)
 *     ?Invoke@FxPowerPolicyStateCallback@@QEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@W4_WDF_STATE_NOTIFICATION_TYPE@@PEAUWDFDEVICE__@@PEBU_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA@@@Z @ 0x1C007FB84 (-Invoke@FxPowerPolicyStateCallback@@QEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@W4_WDF_STATE_NOTIFICA.c)
 *     ?PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ @ 0x1C008C600 (-PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0092BD4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall FxPkgPnp::PowerPolicyProcessEventInner(FxPkgPnp *this, FxPostProcessInfo *Info)
{
  unsigned __int64 *p_m_Lock; // r13
  unsigned int v4; // r12d
  __int64 v5; // r14
  KIRQL v6; // r8
  unsigned __int8 v7; // al
  FxPowerPolicyEvent v8; // esi
  unsigned int v9; // ecx
  _WDF_DEVICE_POWER_POLICY_STATE _a3; // edi
  FxDeviceBase *v11; // rax
  _WDF_DEVICE_POWER_POLICY_STATE _a4; // r14d
  FxDeviceBase *v13; // rax
  _DEVICE_OBJECT *_a2; // rcx
  const void *_a1; // rax
  FxPowerPolicyStateCallback *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  FxPowerPolicyStateCallback *v19; // rcx
  const POWER_POLICY_STATE_TABLE *v20; // rdi
  _WDF_DEVICE_POWER_POLICY_STATE v21; // eax
  FxPowerPolicyStateCallback *v22; // rcx
  unsigned __int8 m_QueueFlags; // al
  int v24; // ecx
  const NOT_POWER_POLICY_OWNER_STATE_TABLE *v25; // rdi
  int CurrentTargetState; // eax
  unsigned __int8 m_QueueHead; // al
  FxPowerPolicyEvent v28; // esi
  unsigned int m_SingularEventsPresent; // ecx
  unsigned __int8 TargetStatesCount; // al
  const POWER_POLICY_EVENT_TARGET_STATE *TargetStates; // rdx
  int v32; // r8d
  _WDF_DEVICE_POWER_POLICY_STATE TargetState; // edi
  _WDF_DEVICE_POWER_POLICY_STATE v34; // esi
  FxDeviceBase *m_DeviceBase; // rax
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  const void *v37; // rax
  FxPowerPolicyStateCallback *m_PowerPolicyStateCallbacks; // rcx
  __int64 m_HistoryIndex; // r8
  FxPowerPolicyStateCallback *v40; // rcx
  int v41; // ecx
  const NOT_POWER_POLICY_OWNER_STATE_TABLE *v42; // rdx
  int v43; // eax
  _WDF_DEVICE_POWER_POLICY_STATE (__fastcall *StateFunc)(FxPkgPnp *); // rax
  FxPowerPolicyStateCallback *v45; // rcx
  const POWER_POLICY_EVENT_TARGET_STATE *OtherTargetStates; // r8
  FxPowerPolicyEvent PowerPolicyEvent; // eax
  __int64 v48; // rcx
  __int64 v49; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned int globals; // r8d
  FxDeviceBase *v52; // r9
  unsigned __int16 v53; // ax
  WDFDEVICE__ *v54; // r9
  FxDeviceBase *v55; // r9
  unsigned __int16 v56; // ax
  WDFDEVICE__ *v57; // r9
  _LARGE_INTEGER v58; // rdx
  FxDeviceBase *v59; // r9
  unsigned __int16 v60; // ax
  WDFDEVICE__ *v61; // r9
  FxDeviceBase *v62; // r8
  const void *v63; // rdx
  FxDeviceBase *v64; // rdx
  const void *v65; // rcx
  const char *v66; // rcx
  FxDeviceBase *v67; // r9
  unsigned __int16 m_ObjectSize; // ax
  WDFDEVICE__ *v69; // r9
  FxDeviceBase *v70; // r9
  unsigned __int16 v71; // ax
  WDFDEVICE__ *v72; // r9
  FxDeviceBase *v73; // r9
  unsigned __int16 v74; // ax
  WDFDEVICE__ *v75; // r9
  MxTimer TimerContext; // [rsp+60h] [rbp-A0h] BYREF
  FxPkgPnp *v78; // [rsp+F8h] [rbp-8h]
  struct _KTHREAD *CurrentThread; // [rsp+100h] [rbp+0h]
  _WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA NotificationData; // [rsp+110h] [rbp+10h] BYREF
  _WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA v81; // [rsp+120h] [rbp+20h] BYREF

  p_m_Lock = &this->m_PowerPolicyMachine.m_QueueLock.m_Lock;
  if ( !this->m_PowerPolicyMachine.m_Owner )
  {
    while ( 1 )
    {
LABEL_32:
      v24 = 0;
      v25 = FxPkgPnp::m_WdfNotPowerPolicyOwnerStates;
      CurrentTargetState = 1280;
      do
      {
        if ( CurrentTargetState == *(_DWORD *)&this->m_DeviceBase[1].m_Type )
          goto LABEL_36;
        v25 = &FxPkgPnp::m_WdfNotPowerPolicyOwnerStates[++v24];
        CurrentTargetState = v25->CurrentTargetState;
      }
      while ( v25->CurrentTargetState != WdfDevStatePwrPolNull );
      v25 = 0LL;
LABEL_36:
      v6 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
      m_QueueHead = this->m_PowerPolicyMachine.m_QueueHead;
      if ( m_QueueHead == this->m_PowerPolicyMachine.m_QueueTail )
        goto LABEL_29;
      v28 = this->m_PowerPolicyMachine.m_Queue[m_QueueHead];
      if ( (v28 & 0x60030) == 0 && !v25->QueueOpen )
        goto LABEL_29;
      m_SingularEventsPresent = this->m_PowerPolicyMachine.m_SingularEventsPresent;
      if ( (m_SingularEventsPresent & v28) != 0 )
        this->m_PowerPolicyMachine.m_SingularEventsPresent = m_SingularEventsPresent & ~v28;
      this->m_PowerPolicyMachine.m_QueueHead = ((unsigned int)this->m_PowerPolicyMachine.m_QueueHead + 1)
                                             % this->m_PowerPolicyMachine.m_QueueDepth;
      KeReleaseSpinLock(p_m_Lock, v6);
      if ( v25 )
      {
        TargetStatesCount = v25->TargetStatesCount;
        if ( TargetStatesCount )
        {
          TargetStates = v25->TargetStates;
          v32 = 0;
          while ( v28 != TargetStates[v32].PowerPolicyEvent )
          {
            if ( ++v32 >= (unsigned int)TargetStatesCount )
              goto LABEL_32;
          }
          TargetState = TargetStates[v32].TargetState;
          *(_QWORD *)&v81.Type = 0LL;
          v81.Data.EnterState.NewState = WdfDevStatePwrPolInvalid;
          v34 = *(_DWORD *)&this->m_DeviceBase[1].m_Type;
          while ( TargetState != WdfDevStatePwrPolNull )
          {
            m_DeviceBase = this->m_DeviceBase;
            m_DeviceObject = m_DeviceBase->m_DeviceObject.m_DeviceObject;
            if ( m_DeviceBase->m_ObjectSize )
              v37 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
            else
              v37 = 0LL;
            WPP_IFR_SF_qqLL(
              this->m_Globals,
              4u,
              0x15u,
              0xAu,
              WPP_NotPowerPolicyOwnerStateMachine_cpp_Traceguids,
              v37,
              m_DeviceObject,
              TargetState,
              v34);
            m_PowerPolicyStateCallbacks = this->m_PowerPolicyStateCallbacks;
            if ( m_PowerPolicyStateCallbacks )
            {
              v67 = this->m_DeviceBase;
              v81.Type = StateNotificationLeaveState;
              v81.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(TargetState, v34);
              m_ObjectSize = v67->m_ObjectSize;
              v69 = (WDFDEVICE__ *)((unsigned __int64)v67 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !m_ObjectSize )
                v69 = 0LL;
              FxPowerPolicyStateCallback::Invoke(
                m_PowerPolicyStateCallbacks,
                v34,
                StateNotificationLeaveState,
                v69,
                &v81);
            }
            m_HistoryIndex = this->m_PowerPolicyMachine.m_HistoryIndex;
            this->m_PowerPolicyMachine.m_HistoryIndex = ((int)m_HistoryIndex + 1)
                                                      % (unsigned int)this->m_PowerPolicyMachine.m_QueueDepth;
            this->m_PowerPolicyMachine.m_States.History[m_HistoryIndex] = TargetState;
            v40 = this->m_PowerPolicyStateCallbacks;
            if ( v40 )
            {
              v70 = this->m_DeviceBase;
              v81.Type = StateNotificationEnterState;
              v81.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(TargetState, v34);
              v71 = v70->m_ObjectSize;
              v72 = (WDFDEVICE__ *)((unsigned __int64)v70 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !v71 )
                v72 = 0LL;
              FxPowerPolicyStateCallback::Invoke(v40, TargetState, StateNotificationEnterState, v72, &v81);
            }
            v34 = TargetState;
            v41 = 0;
            v42 = FxPkgPnp::m_WdfNotPowerPolicyOwnerStates;
            *(_DWORD *)&this->m_DeviceBase[1].m_Type = TargetState;
            v43 = 1280;
            do
            {
              if ( v43 == TargetState )
                goto LABEL_53;
              v42 = &FxPkgPnp::m_WdfNotPowerPolicyOwnerStates[++v41];
              v43 = v42->CurrentTargetState;
            }
            while ( v42->CurrentTargetState != WdfDevStatePwrPolNull );
            v42 = 0LL;
LABEL_53:
            StateFunc = v42->StateFunc;
            if ( StateFunc )
              TargetState = StateFunc(this);
            else
              TargetState = WdfDevStatePwrPolNull;
            v45 = this->m_PowerPolicyStateCallbacks;
            if ( v45 )
            {
              v73 = this->m_DeviceBase;
              v81.Type = StateNotificationPostProcessState;
              v81.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)(unsigned int)v34;
              v74 = v73->m_ObjectSize;
              v75 = (WDFDEVICE__ *)((unsigned __int64)v73 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !v74 )
                v75 = 0LL;
              FxPowerPolicyStateCallback::Invoke(v45, v34, StateNotificationPostProcessState, v75, &v81);
            }
          }
        }
      }
    }
  }
  while ( 1 )
  {
    v4 = *(_DWORD *)&this->m_DeviceBase[1].m_Type;
    v5 = (v4 & 0xFFFF7FFF) - 1280;
    v6 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
    v7 = this->m_PowerPolicyMachine.m_QueueHead;
    if ( v7 == this->m_PowerPolicyMachine.m_QueueTail )
      break;
    v8 = this->m_PowerPolicyMachine.m_Queue[v7];
    if ( (v8 & 0x3A3F07F0) == 0 && (*(_DWORD *)&FxPkgPnp::m_WdfPowerPolicyStates[v5].StateInfo.Bits & 1) == 0 )
      goto LABEL_29;
    v9 = this->m_PowerPolicyMachine.m_SingularEventsPresent;
    if ( (v9 & v8) != 0 )
      this->m_PowerPolicyMachine.m_SingularEventsPresent = v9 & ~v8;
    this->m_PowerPolicyMachine.m_QueueHead = ((unsigned int)this->m_PowerPolicyMachine.m_QueueHead + 1)
                                           % this->m_PowerPolicyMachine.m_QueueDepth;
    KeReleaseSpinLock(p_m_Lock, v6);
    if ( FxPkgPnp::m_WdfPowerPolicyStates[v5].FirstTargetState.PowerPolicyEvent == v8 )
    {
      _a3 = FxPkgPnp::m_WdfPowerPolicyStates[v5].FirstTargetState.TargetState;
      goto LABEL_8;
    }
    OtherTargetStates = FxPkgPnp::m_WdfPowerPolicyStates[v5].OtherTargetStates;
    if ( !OtherTargetStates
      || (PowerPolicyEvent = OtherTargetStates->PowerPolicyEvent,
          LODWORD(v48) = 0,
          OtherTargetStates->PowerPolicyEvent == PwrPolNull) )
    {
LABEL_66:
      m_Globals = this->m_Globals;
      if ( m_Globals->FxVerboseOn )
      {
        v62 = this->m_DeviceBase;
        v63 = (const void *)((unsigned __int64)v62 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v62->m_ObjectSize )
          v63 = 0LL;
        WPP_IFR_SF_qqLL(
          m_Globals,
          5u,
          0xCu,
          0x13u,
          WPP_PowerPolicyStateMachine_cpp_Traceguids,
          v63,
          v62->m_DeviceObject.m_DeviceObject,
          v4,
          v8);
      }
      globals = *(_DWORD *)&FxPkgPnp::m_WdfPowerPolicyStates[v5].StateInfo.Bits >> 1;
      if ( (globals & v8) == 0 )
      {
        v64 = this->m_DeviceBase;
        v65 = (const void *)((unsigned __int64)v64 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v64->m_ObjectSize )
          v65 = 0LL;
        WPP_IFR_SF_qqLLL(
          this->m_Globals,
          2u,
          globals,
          0x14u,
          WPP_PowerPolicyStateMachine_cpp_Traceguids,
          v65,
          v64->m_DeviceObject.m_DeviceObject,
          v4,
          v8,
          globals);
        if ( v8 >= PwrPolDeviceDirectedPowerDown || (v4 & 0xFFFF7FFF) >= 0x599 )
          MicrosoftTelemetryAssertTriggeredArgsKM(v66, v4, v8);
      }
      if ( v8 >= PwrPolUsbSelectiveSuspendCallback || v8 < (PwrPolWakeFailed|PwrPolStart) )
      {
        switch ( v8 )
        {
          case PwrPolSx:
            FxPkgPnp::PowerPolicyCompleteSystemPowerIrp(this);
            break;
          case PwrPolWakeSuccess:
          case PwrPolWakeFailed:
            this->m_PowerPolicyMachine.m_Owner->m_WakeCompletionEventDropped = 1;
            break;
          case PwrPolUsbSelectiveSuspendCallback:
            KeSetEvent((PRKEVENT)this->m_PowerPolicyMachine.m_Owner->m_UsbIdle->m_IdleCallbackEvent, 0, 0);
            break;
          case PwrPolUsbSelectiveSuspendCompleted:
            this->m_PowerPolicyMachine.m_Owner->m_UsbIdle->m_EventDropped = 1;
            break;
        }
      }
    }
    else
    {
      v49 = 0LL;
      while ( PowerPolicyEvent != v8 )
      {
        v48 = (unsigned int)(v48 + 1);
        v49 = (unsigned int)v48;
        PowerPolicyEvent = OtherTargetStates[v48].PowerPolicyEvent;
        if ( PowerPolicyEvent == PwrPolNull )
          goto LABEL_66;
      }
      _a3 = OtherTargetStates[v49].TargetState;
LABEL_8:
      if ( _a3 == WdfDevStatePwrPolNull )
        goto LABEL_66;
      v78 = this;
      *(_QWORD *)&NotificationData.Type = 0LL;
      NotificationData.Data.EnterState.NewState = WdfDevStatePwrPolInvalid;
      v11 = this->m_DeviceBase;
      TimerContext.m_Timer.m_TimerContext = 0LL;
      TimerContext.m_Timer.m_TimerCallback = 0LL;
      TimerContext.m_Timer.m_Period = 0;
      TimerContext.m_Timer.m_KernelExTimer = 0LL;
      _a4 = *(_DWORD *)&v11[1].m_Type;
      do
      {
        v13 = this->m_DeviceBase;
        _a2 = v13->m_DeviceObject.m_DeviceObject;
        if ( v13->m_ObjectSize )
          _a1 = (const void *)((unsigned __int64)v13 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          _a1 = 0LL;
        WPP_IFR_SF_qqLL(
          this->m_Globals,
          4u,
          0x15u,
          0x15u,
          WPP_PowerPolicyStateMachine_cpp_Traceguids,
          _a1,
          _a2,
          _a3,
          _a4);
        v16 = this->m_PowerPolicyStateCallbacks;
        if ( v16 )
        {
          v52 = this->m_DeviceBase;
          NotificationData.Type = StateNotificationLeaveState;
          NotificationData.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
          v53 = v52->m_ObjectSize;
          v54 = (WDFDEVICE__ *)((unsigned __int64)v52 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v53 )
            v54 = 0LL;
          FxPowerPolicyStateCallback::Invoke(v16, _a4, StateNotificationLeaveState, v54, &NotificationData);
        }
        v17 = this->m_PowerPolicyMachine.m_HistoryIndex;
        v18 = ((int)v17 + 1) % (unsigned int)this->m_PowerPolicyMachine.m_QueueDepth;
        this->m_PowerPolicyMachine.m_HistoryIndex = v18;
        this->m_PowerPolicyMachine.m_States.History[v17] = _a3;
        v19 = this->m_PowerPolicyStateCallbacks;
        if ( v19 )
        {
          v55 = this->m_DeviceBase;
          NotificationData.Type = StateNotificationEnterState;
          NotificationData.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
          v56 = v55->m_ObjectSize;
          v57 = (WDFDEVICE__ *)((unsigned __int64)v55 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v56 )
            v57 = 0LL;
          FxPowerPolicyStateCallback::Invoke(v19, _a3, StateNotificationEnterState, v57, &NotificationData);
        }
        _a4 = _a3;
        *(_DWORD *)&this->m_DeviceBase[1].m_Type = _a3;
        v20 = &FxPkgPnp::m_WdfPowerPolicyStates[(_a3 & 0xFFFF7FFF) - 1280];
        if ( v20->StateFunc )
        {
          if ( (_a4 & 0x8000) != 0 )
          {
            MxTimer::Initialize(&TimerContext, &TimerContext, FxWatchdog::_WatchdogDpc, 0);
            CurrentThread = KeGetCurrentThread();
            v58.QuadPart = -864000000000LL;
            if ( !v78->m_SharedPower.m_ExtendWatchDogTimer )
              v58.QuadPart = -6000000000LL;
            MxTimer::Start(&TimerContext, v58, 0);
            v21 = v20->StateFunc(this);
          }
          else
          {
            v21 = v20->StateFunc(this);
          }
          _a3 = v21;
          if ( (_a4 & 0x8000) != 0 )
            MxTimer::Stop(&TimerContext);
        }
        else
        {
          _a3 = WdfDevStatePwrPolNull;
        }
        v22 = this->m_PowerPolicyStateCallbacks;
        if ( v22 )
        {
          v59 = this->m_DeviceBase;
          NotificationData.Type = StateNotificationPostProcessState;
          NotificationData.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)(unsigned int)_a4;
          v60 = v59->m_ObjectSize;
          v61 = (WDFDEVICE__ *)((unsigned __int64)v59 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v60 )
            v61 = 0LL;
          FxPowerPolicyStateCallback::Invoke(v22, _a4, StateNotificationPostProcessState, v61, &NotificationData);
        }
      }
      while ( _a3 != WdfDevStatePwrPolNull );
      p_m_Lock = &this->m_PowerPolicyMachine.m_QueueLock.m_Lock;
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
  m_QueueFlags = this->m_PowerPolicyMachine.m_QueueFlags;
  if ( (m_QueueFlags & 1) == 0 && !this->m_PowerPolicyMachine.m_WorkItemRunningCount )
  {
    if ( (m_QueueFlags & 4) != 0 )
    {
      this->m_PowerPolicyMachine.m_QueueFlags = m_QueueFlags & 0xFB;
      Info->m_DeleteObject = 1;
      m_QueueFlags = this->m_PowerPolicyMachine.m_QueueFlags;
    }
    if ( (m_QueueFlags & 2) != 0 )
    {
      Info->m_Event = this->m_PowerPolicyMachine.m_WorkItemFinished;
      this->m_PowerPolicyMachine.m_WorkItemFinished = 0LL;
    }
  }
LABEL_29:
  KeReleaseSpinLock(p_m_Lock, v6);
}
