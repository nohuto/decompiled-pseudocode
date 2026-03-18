/*
 * XREFs of ?SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x1C0014488
 * Callers:
 *     ?CheckTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x1C0014464 (-CheckTransitionFromEmpty@FxIoQueue@@AEAAXXZ.c)
 * Callees:
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1C0012130 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 */

void __fastcall FxIoQueue::SetTransitionFromEmpty(FxIoQueue *this)
{
  bool v1; // zf

  v1 = this->m_IsDevicePowerPolicyOwner == 0;
  this->m_TransitionFromEmpty = 1;
  this->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
  if ( !v1
    && this->m_PowerManaged
    && !this->m_PowerReferenced
    && (int)FxPowerIdleMachine::PowerReferenceWorker(
              *(FxPowerIdleMachine **)(*(_QWORD *)&this->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 888LL),
              0,
              FxPowerReferenceDefault,
              0LL,
              0,
              0LL) >= 0 )
  {
    this->m_PowerReferenced = 1;
  }
}
