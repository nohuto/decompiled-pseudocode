/*
 * XREFs of ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0011120
 * Callers:
 *     ?_PowerPolicyProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C0010A60 (-_PowerPolicyProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0010E80 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0011A10 (WPP_IFR_SF_qqLL.c)
 *     ?Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z @ 0x1C0014290 (-Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z.c)
 *     ?Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z @ 0x1C0019F20 (-Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z.c)
 *     ?Stop@MxTimer@@QEAAEXZ @ 0x1C001A360 (-Stop@MxTimer@@QEAAEXZ.c)
 *     __security_check_cookie @ 0x1C001A980 (__security_check_cookie.c)
 *     WPP_IFR_SF_qqLLL @ 0x1C007EEF0 (WPP_IFR_SF_qqLLL.c)
 *     ?Invoke@FxPowerPolicyStateCallback@@QEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@W4_WDF_STATE_NOTIFICATION_TYPE@@PEAUWDFDEVICE__@@PEBU_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA@@@Z @ 0x1C007F0AC (-Invoke@FxPowerPolicyStateCallback@@QEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@W4_WDF_STATE_NOTIFICA.c)
 *     ?PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ @ 0x1C008B004 (-PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ.c)
 */

void __fastcall FxPkgPnp::PowerPolicyProcessEventInner(FxPkgPnp *this, FxPostProcessInfo *Info)
{
  unsigned __int64 *p_m_Lock; // r15
  FxPostProcessInfo *v3; // r13
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
  __int64 v20; // rdi
  _WDF_DEVICE_POWER_POLICY_STATE (__fastcall *v21)(FxPkgPnp *); // rax
  _WDF_DEVICE_POWER_POLICY_STATE v22; // eax
  FxPowerPolicyStateCallback *v23; // rcx
  unsigned __int8 m_QueueFlags; // al
  int v25; // ecx
  const NOT_POWER_POLICY_OWNER_STATE_TABLE *v26; // rdi
  int CurrentTargetState; // eax
  unsigned __int8 m_QueueHead; // al
  FxPowerPolicyEvent v29; // esi
  unsigned int m_SingularEventsPresent; // ecx
  unsigned __int8 TargetStatesCount; // al
  const POWER_POLICY_EVENT_TARGET_STATE *TargetStates; // rdx
  int v33; // r8d
  _WDF_DEVICE_POWER_POLICY_STATE TargetState; // edi
  _WDF_DEVICE_POWER_POLICY_STATE v35; // esi
  FxDeviceBase *m_DeviceBase; // rax
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  const void *v38; // rax
  FxPowerPolicyStateCallback *m_PowerPolicyStateCallbacks; // rcx
  __int64 m_HistoryIndex; // r8
  FxPowerPolicyStateCallback *v41; // rcx
  int v42; // ecx
  const NOT_POWER_POLICY_OWNER_STATE_TABLE *v43; // rdx
  int v44; // eax
  _WDF_DEVICE_POWER_POLICY_STATE (__fastcall *StateFunc)(FxPkgPnp *); // rax
  FxPowerPolicyStateCallback *v46; // rcx
  const POWER_POLICY_EVENT_TARGET_STATE *OtherTargetStates; // rcx
  FxPowerPolicyEvent PowerPolicyEvent; // eax
  __int64 v49; // rdx
  __int64 v50; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned int globals; // r8d
  FxDeviceBase *v53; // r9
  unsigned __int16 v54; // ax
  WDFDEVICE__ *v55; // r9
  FxDeviceBase *v56; // r9
  unsigned __int16 v57; // ax
  WDFDEVICE__ *v58; // r9
  _LARGE_INTEGER v59; // rdx
  FxDeviceBase *v60; // r9
  unsigned __int16 v61; // ax
  WDFDEVICE__ *v62; // r9
  FxDeviceBase *v63; // r8
  const void *v64; // rdx
  FxDeviceBase *v65; // rdx
  const void *v66; // rcx
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
  v3 = Info;
  if ( !this->m_PowerPolicyMachine.m_Owner )
  {
    while ( 1 )
    {
LABEL_32:
      v25 = 0;
      v26 = FxPkgPnp::m_WdfNotPowerPolicyOwnerStates;
      CurrentTargetState = 1280;
      do
      {
        if ( CurrentTargetState == *(_DWORD *)&this->m_DeviceBase[1].m_Type )
          goto LABEL_36;
        v26 = &FxPkgPnp::m_WdfNotPowerPolicyOwnerStates[++v25];
        CurrentTargetState = v26->CurrentTargetState;
      }
      while ( v26->CurrentTargetState != WdfDevStatePwrPolNull );
      v26 = 0LL;
LABEL_36:
      v6 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
      m_QueueHead = this->m_PowerPolicyMachine.m_QueueHead;
      if ( m_QueueHead == this->m_PowerPolicyMachine.m_QueueTail )
        goto LABEL_29;
      v29 = this->m_PowerPolicyMachine.m_Queue[m_QueueHead];
      if ( (v29 & 0x60030) == 0 && !v26->QueueOpen )
        goto LABEL_29;
      m_SingularEventsPresent = this->m_PowerPolicyMachine.m_SingularEventsPresent;
      if ( (m_SingularEventsPresent & v29) != 0 )
        this->m_PowerPolicyMachine.m_SingularEventsPresent = m_SingularEventsPresent & ~v29;
      this->m_PowerPolicyMachine.m_QueueHead = ((unsigned int)this->m_PowerPolicyMachine.m_QueueHead + 1)
                                             % this->m_PowerPolicyMachine.m_QueueDepth;
      KeReleaseSpinLock(p_m_Lock, v6);
      if ( v26 )
      {
        TargetStatesCount = v26->TargetStatesCount;
        if ( TargetStatesCount )
        {
          TargetStates = v26->TargetStates;
          v33 = 0;
          while ( v29 != TargetStates[v33].PowerPolicyEvent )
          {
            if ( ++v33 >= (unsigned int)TargetStatesCount )
              goto LABEL_32;
          }
          TargetState = TargetStates[v33].TargetState;
          v35 = *(_DWORD *)&this->m_DeviceBase[1].m_Type;
          while ( TargetState != WdfDevStatePwrPolNull )
          {
            m_DeviceBase = this->m_DeviceBase;
            m_DeviceObject = m_DeviceBase->m_DeviceObject.m_DeviceObject;
            if ( m_DeviceBase->m_ObjectSize )
              v38 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
            else
              v38 = 0LL;
            WPP_IFR_SF_qqLL(
              this->m_Globals,
              4u,
              0x15u,
              0xAu,
              WPP_NotPowerPolicyOwnerStateMachine_cpp_Traceguids,
              v38,
              m_DeviceObject,
              TargetState,
              v35);
            m_PowerPolicyStateCallbacks = this->m_PowerPolicyStateCallbacks;
            if ( m_PowerPolicyStateCallbacks )
            {
              v67 = this->m_DeviceBase;
              v81.Type = StateNotificationLeaveState;
              v81.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(TargetState, v35);
              m_ObjectSize = v67->m_ObjectSize;
              v69 = (WDFDEVICE__ *)((unsigned __int64)v67 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !m_ObjectSize )
                v69 = 0LL;
              FxPowerPolicyStateCallback::Invoke(
                m_PowerPolicyStateCallbacks,
                v35,
                StateNotificationLeaveState,
                v69,
                &v81);
            }
            m_HistoryIndex = this->m_PowerPolicyMachine.m_HistoryIndex;
            this->m_PowerPolicyMachine.m_HistoryIndex = ((int)m_HistoryIndex + 1)
                                                      % (unsigned int)this->m_PowerPolicyMachine.m_QueueDepth;
            this->m_PowerPolicyMachine.m_States.History[m_HistoryIndex] = TargetState;
            v41 = this->m_PowerPolicyStateCallbacks;
            if ( v41 )
            {
              v70 = this->m_DeviceBase;
              v81.Type = StateNotificationEnterState;
              v81.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(TargetState, v35);
              v71 = v70->m_ObjectSize;
              v72 = (WDFDEVICE__ *)((unsigned __int64)v70 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !v71 )
                v72 = 0LL;
              FxPowerPolicyStateCallback::Invoke(v41, TargetState, StateNotificationEnterState, v72, &v81);
            }
            v35 = TargetState;
            v42 = 0;
            v43 = FxPkgPnp::m_WdfNotPowerPolicyOwnerStates;
            *(_DWORD *)&this->m_DeviceBase[1].m_Type = TargetState;
            v44 = 1280;
            do
            {
              if ( v44 == TargetState )
                goto LABEL_53;
              v43 = &FxPkgPnp::m_WdfNotPowerPolicyOwnerStates[++v42];
              v44 = v43->CurrentTargetState;
            }
            while ( v43->CurrentTargetState != WdfDevStatePwrPolNull );
            v43 = 0LL;
LABEL_53:
            StateFunc = v43->StateFunc;
            if ( StateFunc )
              TargetState = StateFunc(this);
            else
              TargetState = WdfDevStatePwrPolNull;
            v46 = this->m_PowerPolicyStateCallbacks;
            if ( v46 )
            {
              v73 = this->m_DeviceBase;
              v81.Type = StateNotificationPostProcessState;
              v81.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)(unsigned int)v35;
              v74 = v73->m_ObjectSize;
              v75 = (WDFDEVICE__ *)((unsigned __int64)v73 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !v74 )
                v75 = 0LL;
              FxPowerPolicyStateCallback::Invoke(v46, v35, StateNotificationPostProcessState, v75, &v81);
            }
          }
        }
      }
    }
  }
  while ( 1 )
  {
    v5 = (*(_DWORD *)&this->m_DeviceBase[1].m_Type & 0xFFFF7FFF) - 1280;
    v6 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
    v7 = this->m_PowerPolicyMachine.m_QueueHead;
    if ( v7 == this->m_PowerPolicyMachine.m_QueueTail )
      break;
    v8 = this->m_PowerPolicyMachine.m_Queue[v7];
    if ( (v8 & 0x23F07F0) == 0 && (*(_DWORD *)&FxPkgPnp::m_WdfPowerPolicyStates[v5].StateInfo.Bits & 1) == 0 )
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
          LODWORD(v49) = 0,
          OtherTargetStates->PowerPolicyEvent == PwrPolNull) )
    {
LABEL_66:
      m_Globals = this->m_Globals;
      if ( m_Globals->FxVerboseOn )
      {
        v63 = this->m_DeviceBase;
        v64 = (const void *)((unsigned __int64)v63 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v63->m_ObjectSize )
          v64 = 0LL;
        WPP_IFR_SF_qqLL(
          m_Globals,
          5u,
          0xCu,
          0x13u,
          WPP_PowerPolicyStateMachine_cpp_Traceguids,
          v64,
          v63->m_DeviceObject.m_DeviceObject,
          *(_DWORD *)&v63[1].m_Type,
          v8);
      }
      globals = *(_DWORD *)&FxPkgPnp::m_WdfPowerPolicyStates[v5].StateInfo.Bits >> 1;
      if ( (globals & v8) == 0 )
      {
        v65 = this->m_DeviceBase;
        v66 = (const void *)((unsigned __int64)v65 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v65->m_ObjectSize )
          v66 = 0LL;
        WPP_IFR_SF_qqLLL(
          this->m_Globals,
          2u,
          globals,
          0x14u,
          WPP_PowerPolicyStateMachine_cpp_Traceguids,
          v66,
          v65->m_DeviceObject.m_DeviceObject,
          *(_DWORD *)&v65[1].m_Type,
          v8,
          globals);
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
      v50 = 0LL;
      while ( PowerPolicyEvent != v8 )
      {
        v49 = (unsigned int)(v49 + 1);
        v50 = (unsigned int)v49;
        PowerPolicyEvent = OtherTargetStates[v49].PowerPolicyEvent;
        if ( PowerPolicyEvent == PwrPolNull )
          goto LABEL_66;
      }
      _a3 = OtherTargetStates[v50].TargetState;
LABEL_8:
      if ( _a3 == WdfDevStatePwrPolNull )
        goto LABEL_66;
      v11 = this->m_DeviceBase;
      TimerContext.m_Timer.m_TimerContext = 0LL;
      TimerContext.m_Timer.m_TimerCallback = 0LL;
      TimerContext.m_Timer.m_Period = 0;
      TimerContext.m_Timer.m_KernelExTimer = 0LL;
      v78 = this;
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
          v53 = this->m_DeviceBase;
          NotificationData.Type = StateNotificationLeaveState;
          NotificationData.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
          v54 = v53->m_ObjectSize;
          v55 = (WDFDEVICE__ *)((unsigned __int64)v53 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v54 )
            v55 = 0LL;
          FxPowerPolicyStateCallback::Invoke(v16, _a4, StateNotificationLeaveState, v55, &NotificationData);
        }
        v17 = this->m_PowerPolicyMachine.m_HistoryIndex;
        v18 = ((int)v17 + 1) % (unsigned int)this->m_PowerPolicyMachine.m_QueueDepth;
        this->m_PowerPolicyMachine.m_HistoryIndex = v18;
        this->m_PowerPolicyMachine.m_States.History[v17] = _a3;
        v19 = this->m_PowerPolicyStateCallbacks;
        if ( v19 )
        {
          v56 = this->m_DeviceBase;
          NotificationData.Type = StateNotificationEnterState;
          NotificationData.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
          v57 = v56->m_ObjectSize;
          v58 = (WDFDEVICE__ *)((unsigned __int64)v56 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v57 )
            v58 = 0LL;
          FxPowerPolicyStateCallback::Invoke(v19, _a3, StateNotificationEnterState, v58, &NotificationData);
        }
        _a4 = _a3;
        *(_DWORD *)&this->m_DeviceBase[1].m_Type = _a3;
        v20 = (_a3 & 0xFFFF7FFF) - 1280;
        v21 = FxPkgPnp::m_WdfPowerPolicyStates[v20].StateFunc;
        if ( v21 )
        {
          if ( (_a4 & 0x8000) != 0 )
          {
            MxTimer::Initialize(&TimerContext, &TimerContext, FxWatchdog::_WatchdogDpc, 0);
            CurrentThread = KeGetCurrentThread();
            v59.QuadPart = -864000000000LL;
            if ( !v78->m_SharedPower.m_ExtendWatchDogTimer )
              v59.QuadPart = -6000000000LL;
            MxTimer::Start(&TimerContext, v59, 0);
            v22 = FxPkgPnp::m_WdfPowerPolicyStates[v20].StateFunc(this);
          }
          else
          {
            v22 = v21(this);
          }
          _a3 = v22;
          if ( (_a4 & 0x8000) != 0 )
            MxTimer::Stop(&TimerContext);
        }
        else
        {
          _a3 = WdfDevStatePwrPolNull;
        }
        v23 = this->m_PowerPolicyStateCallbacks;
        if ( v23 )
        {
          v60 = this->m_DeviceBase;
          NotificationData.Type = StateNotificationPostProcessState;
          NotificationData.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)(unsigned int)_a4;
          v61 = v60->m_ObjectSize;
          v62 = (WDFDEVICE__ *)((unsigned __int64)v60 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v61 )
            v62 = 0LL;
          FxPowerPolicyStateCallback::Invoke(v23, _a4, StateNotificationPostProcessState, v62, &NotificationData);
        }
      }
      while ( _a3 != WdfDevStatePwrPolNull );
      p_m_Lock = &this->m_PowerPolicyMachine.m_QueueLock.m_Lock;
      v3 = Info;
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
      v3->m_DeleteObject = 1;
      m_QueueFlags = this->m_PowerPolicyMachine.m_QueueFlags;
    }
    if ( (m_QueueFlags & 2) != 0 )
    {
      v3->m_Event = this->m_PowerPolicyMachine.m_WorkItemFinished;
      this->m_PowerPolicyMachine.m_WorkItemFinished = 0LL;
    }
  }
LABEL_29:
  KeReleaseSpinLock(p_m_Lock, v6);
}
