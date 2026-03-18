/*
 * XREFs of ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x1C007D74C
 * Callers:
 *     ?PnpEventPdoRemovedOverload@FxPkgPdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1C007BD40 (-PnpEventPdoRemovedOverload@FxPkgPdo@@EEAA-AW4_WDF_DEVICE_PNP_STATE@@XZ.c)
 *     ?PnpEventFdoRemovedOverload@FxPkgFdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1C0086ED0 (-PnpEventFdoRemovedOverload@FxPkgFdo@@EEAA-AW4_WDF_DEVICE_PNP_STATE@@XZ.c)
 * Callees:
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C0008C30 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x1C00178E0 (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@.c)
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C0018FF4 (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?WaitForEmpty@FxDisposeList@@QEAAXXZ @ 0x1C005757C (-WaitForEmpty@FxDisposeList@@QEAAXXZ.c)
 *     ?EarlyDispose@FxObject@@QEAAEXZ @ 0x1C005D600 (-EarlyDispose@FxObject@@QEAAEXZ.c)
 */

void __fastcall FxPkgPnp::PnpEventRemovedCommonCode(FxPkgPnp *this, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  unsigned __int8 v5; // r8
  FxSelfManagedIoMachine *m_SelfManagedIoMachine; // rcx
  FxObject *m_ParentObject; // rbx
  unsigned __int8 v8; // dl
  unsigned __int8 v9; // r8
  FxDeviceBase *m_DeviceBase; // rcx
  __int64 v11; // rdx
  unsigned __int8 v12; // r8
  unsigned __int8 PreviousIrql; // [rsp+30h] [rbp+8h] BYREF

  FxPkgIo::StopProcessingForPower((FxPkgIo *)this->m_DeviceBase[3].m_ChildListHead.Blink, 3, a3, a4);
  m_SelfManagedIoMachine = this->m_SelfManagedIoMachine;
  if ( m_SelfManagedIoMachine )
    FxSelfManagedIoMachine::ProcessEvent(m_SelfManagedIoMachine, SelfManagedIoEventCleanup, 0LL);
  m_ParentObject = this->m_DeviceBase[3].m_ParentObject;
  FxNonPagedObject::Lock((FxNonPagedObject *)m_ParentObject, &PreviousIrql, v5);
  v8 = PreviousIrql;
  HIDWORD(m_ParentObject[1].m_ChildListHead.Flink) = 3;
  FxNonPagedObject::Unlock((FxNonPagedObject *)m_ParentObject, v8, v9);
  m_DeviceBase = this->m_DeviceBase;
  this->m_PnpStateAndCaps.Value = this->m_PnpStateAndCaps.Value & 0xFFFFFCFF | 0x100;
  FxObject::EarlyDispose(m_DeviceBase);
  FxObject::DestroyChildren(this->m_DeviceBase);
  FxDisposeList::WaitForEmpty(this->m_DeviceBase->m_DisposeList, v11, v12);
}
