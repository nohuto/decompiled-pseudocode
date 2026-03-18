/*
 * XREFs of ??_GFxUsbIdleInfo@@QEAAPEAXI@Z @ 0x1C0088FC8
 * Callers:
 *     ??1FxPowerPolicyOwnerSettings@@QEAA@XZ @ 0x1C0088F20 (--1FxPowerPolicyOwnerSettings@@QEAA@XZ.c)
 *     ?InitUsbSS@FxPowerPolicyMachine@@QEAAJXZ @ 0x1C0089338 (-InitUsbSS@FxPowerPolicyMachine@@QEAAJXZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00054C8 (-FxPoolFree@@YAXPEAX@Z.c)
 */

FxUsbIdleInfo *__fastcall FxUsbIdleInfo::`scalar deleting destructor'(FxUsbIdleInfo *this)
{
  _IRP *m_Irp; // rcx

  m_Irp = this->m_IdleIrp.m_Irp;
  if ( m_Irp )
    IoFreeIrp(m_Irp);
  FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
