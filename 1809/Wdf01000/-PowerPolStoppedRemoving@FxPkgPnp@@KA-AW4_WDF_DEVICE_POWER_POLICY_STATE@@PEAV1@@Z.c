/*
 * XREFs of ?PowerPolStoppedRemoving@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0089EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?UninitializeComponents@FxPoxInterface@@QEAAXXZ @ 0x1C008F770 (-UninitializeComponents@FxPoxInterface@@QEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolStoppedRemoving(FxPkgPnp *This)
{
  unsigned __int8 v2; // r8
  _SLEEP_STUDY_INTERFACE *m_SleepStudy; // rax
  unsigned __int8 v4; // dl
  _MX_WNF_SUBSCRIPTION_CONTEXT *WnfContext; // rbx
  unsigned __int8 v6; // r8
  unsigned __int8 PreviousIrql; // [rsp+30h] [rbp+8h] BYREF

  FxPoxInterface::UninitializeComponents(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  if ( This->m_SleepStudy )
  {
    FxNonPagedObject::Lock(This, &PreviousIrql, v2);
    m_SleepStudy = This->m_SleepStudy;
    v4 = PreviousIrql;
    WnfContext = m_SleepStudy->WnfContext;
    m_SleepStudy->WnfContext = 0LL;
    FxNonPagedObject::Unlock(This, v4, v6);
    ExUnsubscribeWnfStateChange(WnfContext->Handle);
    ExFreePoolWithTag(WnfContext, 0);
  }
  return 1422LL;
}
