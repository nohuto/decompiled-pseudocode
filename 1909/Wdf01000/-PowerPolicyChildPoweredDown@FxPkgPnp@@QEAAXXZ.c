/*
 * XREFs of ?PowerPolicyChildPoweredDown@FxPkgPnp@@QEAAXXZ @ 0x1C0017F70
 * Callers:
 *     ?PowerParentPowerDereference@FxPkgPdo@@EEAAXXZ @ 0x1C0017F40 (-PowerParentPowerDereference@FxPkgPdo@@EEAAXXZ.c)
 * Callees:
 *     ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z @ 0x1C0012C80 (-IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z.c)
 */

void __fastcall FxPkgPnp::PowerPolicyChildPoweredDown(FxPkgPnp *this)
{
  FxEnumerationInfo *m_EnumInfo; // rdi
  FxEnumerationInfo *v3; // rcx

  if ( this->m_PowerPolicyMachine.m_Owner )
  {
    m_EnumInfo = this->m_EnumInfo;
    KeEnterCriticalRegion();
    if ( KeWaitForSingleObject(m_EnumInfo, Executive, 0, 0, 0LL) == 258 )
      KeLeaveCriticalRegion();
    else
      m_EnumInfo->m_PowerStateLock.m_OwningThread = KeGetCurrentThread();
    --this->m_PowerPolicyMachine.m_Owner->m_ChildrenPoweredOnCount;
    v3 = this->m_EnumInfo;
    v3->m_PowerStateLock.m_OwningThread = 0LL;
    KeSetEvent(&v3->m_PowerStateLock.m_Event.m_Event, 0, 0);
    KeLeaveCriticalRegion();
    FxPowerIdleMachine::IoDecrement(&this->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine, 0LL, 0, 0LL);
  }
}
