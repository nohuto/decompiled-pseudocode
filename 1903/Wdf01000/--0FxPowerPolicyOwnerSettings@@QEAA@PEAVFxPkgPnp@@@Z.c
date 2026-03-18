/*
 * XREFs of ??0FxPowerPolicyOwnerSettings@@QEAA@PEAVFxPkgPnp@@@Z @ 0x1C0089ED4
 * Callers:
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0084710 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     memset @ 0x1C001B300 (memset.c)
 *     ??0FxCREvent@@QEAA@E@Z @ 0x1C0040A6C (--0FxCREvent@@QEAA@E@Z.c)
 */

void __fastcall FxPowerPolicyOwnerSettings::FxPowerPolicyOwnerSettings(
        FxPowerPolicyOwnerSettings *this,
        FxPkgPnp *PkgPnp)
{
  int v4; // r8d
  unsigned int v5; // ecx
  int v6; // eax
  unsigned int v7; // edx
  int v8; // eax

  this->m_PowerIdleMachine.m_Lock.m_DbgFlagIsInitialized = 1;
  this->m_PowerIdleMachine.m_Lock.m_Lock = 0LL;
  this->m_PowerIdleMachine.m_PowerTimeoutTimer.m_Timer.m_TimerContext = 0LL;
  this->m_PowerIdleMachine.m_PowerTimeoutTimer.m_Timer.m_TimerCallback = 0LL;
  this->m_PowerIdleMachine.m_PowerTimeoutTimer.m_Timer.m_Period = 0;
  this->m_PowerIdleMachine.m_PowerTimeoutTimer.m_Timer.m_KernelExTimer = 0LL;
  FxCREvent::FxCREvent(&this->m_PowerIdleMachine.m_D0NotificationEvent, (unsigned __int8)PkgPnp);
  this->m_PowerIdleMachine.m_PowerTimeout.QuadPart = 0LL;
  this->m_PowerIdleMachine.m_CurrentIdleState = FxIdleStopped;
  *(_WORD *)&this->m_PowerIdleMachine.m_EventHistoryIndex = 0;
  memset(this->m_PowerIdleMachine.m_EventHistory, 0, 0x40uLL);
  this->m_PowerIdleMachine.m_TagTracker = 0LL;
  this->m_PoxInterface.m_DevicePowerRequiredLock.m_Lock = 0LL;
  v4 = 0;
  this->m_PoxInterface.m_DevicePowerRequiredLock.m_DbgFlagIsInitialized = 1;
  v5 = 0;
  this->m_PoxInterface.m_PkgPnp = PkgPnp;
  this->m_PoxInterface.m_PoHandle = 0LL;
  this->m_PoxInterface.m_DevicePowerRequired = 1;
  this->m_PoxInterface.m_DevicePowerRequirementMachine = 0LL;
  this->m_PoxInterface.m_CurrentIdleTimeoutHint = 0;
  this->m_PoxInterface.m_NextIdleTimeoutHint = 0;
  this->m_PoxInterface.m_DirectedTransitionActive = 0;
  this->m_DeviceArmWakeFromS0.m_Method = 0LL;
  this->m_DeviceArmWakeFromSx.m_Method = 0LL;
  this->m_DeviceArmWakeFromSx.m_MethodWithReason = 0LL;
  this->m_DeviceDisarmWakeFromS0.m_Method = 0LL;
  this->m_DeviceDisarmWakeFromSx.m_Method = 0LL;
  this->m_DeviceWakeFromS0Triggered.m_Method = 0LL;
  this->m_DeviceWakeFromSxTriggered.m_Method = 0LL;
  this->m_WakeSettings.WmiInstance = 0LL;
  this->m_WakeSettings.DxState = PowerDeviceD3;
  *(_DWORD *)&this->m_WakeSettings.Enabled = 0;
  *(_WORD *)&this->m_WakeSettings.ArmForWakeIfChildrenAreArmedForWake = 0;
  this->m_IdleSettings.WmiInstance = 0LL;
  this->m_IdleSettings.DxState = PowerDeviceD3;
  *(_DWORD *)&this->m_IdleSettings.Enabled = 0;
  this->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus = 0;
  this->m_IdleSettings.m_TimeoutMgmt.m_PoxSettings = 0LL;
  *(_WORD *)&this->m_IdleSettings.m_TimeoutMgmt.m_DirectedTransitionsSupported = 0;
  *(_DWORD *)&this->m_IdleSettings.WakeFromS0Capable = 0;
  *(_WORD *)&this->m_IdleSettings.D3ColdCapabilityKnown = 0;
  this->m_UsbIdle = 0LL;
  this->m_PkgPnp = PkgPnp;
  this->m_SystemToDeviceStateMap = 0;
  do
  {
    v6 = 1;
    v7 = this->m_SystemToDeviceStateMap & ~(15 << v5);
    if ( v4 != 1 )
      v6 = 4;
    ++v4;
    v8 = v6 << v5;
    v5 += 4;
    this->m_SystemToDeviceStateMap = v8 | v7;
  }
  while ( v5 < 0x1C );
  *(_QWORD *)&this->m_ChildrenPoweredOnCount = 0LL;
  this->m_SystemWakeSource = 0;
  this->m_WaitWakeCancelCompletionOwnership = 0;
  this->m_PowerCallbackObject = 0LL;
  this->m_PowerCallbackRegistration = 0LL;
  *(_DWORD *)&this->m_IdealDxStateForSx = 4;
  *(_DWORD *)&this->m_WakeCompletionEventDropped = 0x10000;
  this->m_WaitWakeStatus = -1073741637;
}
