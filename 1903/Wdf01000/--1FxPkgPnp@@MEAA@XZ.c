/*
 * XREFs of ??1FxPkgPnp@@MEAA@XZ @ 0x1C0082818
 * Callers:
 *     ??1FxPkgPdo@@UEAA@XZ @ 0x1C007BD70 (--1FxPkgPdo@@UEAA@XZ.c)
 *     ??_EFxPkgPnp@@MEAAPEAXI@Z @ 0x1C0082AB0 (--_EFxPkgPnp@@MEAAPEAXI@Z.c)
 *     ??1FxPkgFdo@@MEAA@XZ @ 0x1C0087C68 (--1FxPkgFdo@@MEAA@XZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000459C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0009610 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     ?Free@MxWorkItem@@QEAAXXZ @ 0x1C000E908 (-Free@MxWorkItem@@QEAAXXZ.c)
 *     ??_GFxDeviceInterface@@QEAAPEAXI@Z @ 0x1C005F6BC (--_GFxDeviceInterface@@QEAAPEAXI@Z.c)
 *     ??1FxTransactionedList@@QEAA@XZ @ 0x1C0064604 (--1FxTransactionedList@@QEAA@XZ.c)
 *     ??_GFxRelatedDeviceList@@QEAAPEAXI@Z @ 0x1C007BE40 (--_GFxRelatedDeviceList@@QEAAPEAXI@Z.c)
 *     ??_GFxEnumerationInfo@@QEAAPEAXI@Z @ 0x1C0082A78 (--_GFxEnumerationInfo@@QEAAPEAXI@Z.c)
 *     ?SleepStudyStop@FxPkgPnp@@QEAAXXZ @ 0x1C0089778 (-SleepStudyStop@FxPkgPnp@@QEAAXXZ.c)
 *     ??1FxPowerPolicyOwnerSettings@@QEAA@XZ @ 0x1C008A09C (--1FxPowerPolicyOwnerSettings@@QEAA@XZ.c)
 */

void __fastcall FxPkgPnp::~FxPkgPnp(FxPkgPnp *this)
{
  unsigned int v2; // edx
  FxCompanionTarget *m_CompanionTarget; // rcx
  _SINGLE_LIST_ENTRY *Next; // rdi
  FxDeviceInterface *v5; // rcx
  _SINGLE_LIST_ENTRY *v6; // rax
  FxSpinLockTransactionedList *m_DmaEnablerList; // rdi
  FxRelatedDeviceList *m_RemovalDeviceList; // rcx
  FxRelatedDeviceList *m_UsageDependentDeviceList; // rcx
  FxPnpStateCallback *m_PnpStateCallbacks; // rcx
  FxPowerStateCallback *m_PowerStateCallbacks; // rcx
  FxPowerPolicyStateCallback *m_PowerPolicyStateCallbacks; // rcx
  FxSelfManagedIoMachine *m_SelfManagedIoMachine; // rcx
  FxEnumerationInfo *m_EnumInfo; // rcx
  FxCmResList *m_Resources; // rcx
  FxCmResList *m_ResourcesRaw; // rcx
  FxPowerPolicyOwnerSettings *m_Owner; // rdi
  unsigned int v18; // edx
  unsigned int v19; // r8d

  this->__vftable = (FxPkgPnp_vtbl *)FxPkgPnp::`vftable';
  KeGetCurrentIrql();
  FxPkgPnp::SleepStudyStop(this);
  m_CompanionTarget = this->m_CompanionTarget;
  if ( m_CompanionTarget )
    m_CompanionTarget->Release(
      m_CompanionTarget,
      this,
      307,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp");
  Next = this->m_DeviceInterfaceHead.Next;
  while ( Next )
  {
    v5 = (FxDeviceInterface *)&Next[-6];
    v6 = Next;
    Next = Next->Next;
    v6->Next = 0LL;
    if ( v5 )
      FxDeviceInterface::`scalar deleting destructor'(v5);
  }
  m_DmaEnablerList = this->m_DmaEnablerList;
  this->m_DeviceInterfaceHead.Next = 0LL;
  if ( m_DmaEnablerList )
  {
    m_DmaEnablerList->m_ListLock.m_DbgFlagIsInitialized = 0;
    FxTransactionedList::~FxTransactionedList(m_DmaEnablerList);
    FxPoolFree((FX_POOL_TRACKER *)m_DmaEnablerList);
    this->m_DmaEnablerList = 0LL;
  }
  m_RemovalDeviceList = this->m_RemovalDeviceList;
  if ( m_RemovalDeviceList )
  {
    FxRelatedDeviceList::`scalar deleting destructor'(m_RemovalDeviceList);
    this->m_RemovalDeviceList = 0LL;
  }
  m_UsageDependentDeviceList = this->m_UsageDependentDeviceList;
  if ( m_UsageDependentDeviceList )
  {
    FxRelatedDeviceList::`scalar deleting destructor'(m_UsageDependentDeviceList);
    this->m_UsageDependentDeviceList = 0LL;
  }
  m_PnpStateCallbacks = this->m_PnpStateCallbacks;
  if ( m_PnpStateCallbacks )
    FxPoolFree((FX_POOL_TRACKER *)m_PnpStateCallbacks);
  m_PowerStateCallbacks = this->m_PowerStateCallbacks;
  if ( m_PowerStateCallbacks )
    FxPoolFree((FX_POOL_TRACKER *)m_PowerStateCallbacks);
  m_PowerPolicyStateCallbacks = this->m_PowerPolicyStateCallbacks;
  if ( m_PowerPolicyStateCallbacks )
    FxPoolFree((FX_POOL_TRACKER *)m_PowerPolicyStateCallbacks);
  m_SelfManagedIoMachine = this->m_SelfManagedIoMachine;
  if ( m_SelfManagedIoMachine )
  {
    FxPoolFree((FX_POOL_TRACKER *)m_SelfManagedIoMachine);
    this->m_SelfManagedIoMachine = 0LL;
  }
  m_EnumInfo = this->m_EnumInfo;
  if ( m_EnumInfo )
  {
    FxEnumerationInfo::`scalar deleting destructor'(m_EnumInfo, v2);
    this->m_EnumInfo = 0LL;
  }
  m_Resources = this->m_Resources;
  if ( m_Resources )
  {
    m_Resources->Release(m_Resources, this, 377, "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp");
    this->m_Resources = 0LL;
  }
  m_ResourcesRaw = this->m_ResourcesRaw;
  if ( m_ResourcesRaw )
  {
    m_ResourcesRaw->Release(
      m_ResourcesRaw,
      this,
      382,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp");
    this->m_ResourcesRaw = 0LL;
  }
  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner )
  {
    FxPowerPolicyOwnerSettings::~FxPowerPolicyOwnerSettings(this->m_PowerPolicyMachine.m_Owner);
    FxPoolFree((FX_POOL_TRACKER *)m_Owner);
    this->m_PowerPolicyMachine.m_Owner = 0LL;
  }
  MxWorkItem::Free(&this->m_PowerPolicyMachine.m_WorkItem);
  this->m_PowerPolicyMachine.m_QueueLock.m_DbgFlagIsInitialized = 0;
  this->m_PowerMachine.m_WaitWakeLock.m_DbgFlagIsInitialized = 0;
  MxWorkItem::Free(&this->m_PowerMachine.m_WorkItem);
  this->m_PowerMachine.m_QueueLock.m_DbgFlagIsInitialized = 0;
  MxWorkItem::Free(&this->m_PnpMachine.m_WorkItem);
  this->m_PnpMachine.m_QueueLock.m_DbgFlagIsInitialized = 0;
  FxNonPagedObject::~FxNonPagedObject(this, v18, v19);
}
