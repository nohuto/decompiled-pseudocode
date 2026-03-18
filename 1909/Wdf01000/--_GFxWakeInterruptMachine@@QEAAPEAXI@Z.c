/*
 * XREFs of ??_GFxWakeInterruptMachine@@QEAAPEAXI@Z @ 0x1C008CEC0
 * Callers:
 *     ??1FxPowerPolicyOwnerSettings@@QEAA@XZ @ 0x1C008A09C (--1FxPowerPolicyOwnerSettings@@QEAA@XZ.c)
 *     ?CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ @ 0x1C008D158 (-CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ.c)
 *     ?DeleteObject@FxInterrupt@@UEAAXXZ @ 0x1C008D310 (-DeleteObject@FxInterrupt@@UEAAXXZ.c)
 *     ?CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ @ 0x1C0090B80 (-CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000459C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?Free@MxWorkItem@@QEAAXXZ @ 0x1C000E908 (-Free@MxWorkItem@@QEAAXXZ.c)
 */

FxDevicePwrRequirementMachine *__fastcall FxWakeInterruptMachine::`scalar deleting destructor'(
        FxDevicePwrRequirementMachine *this)
{
  MxWorkItem::Free(&this->m_WorkItem);
  this->m_QueueLock.m_DbgFlagIsInitialized = 0;
  FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
