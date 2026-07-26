/*
 * XREFs of ??0_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x1C002CEFC
 * Callers:
 *     ndisMInitializeMiniportBlock @ 0x1C002F2E8 (ndisMInitializeMiniportBlock.c)
 * Callees:
 *     ??0BindEngine@Ndis@@QEAA@XZ @ 0x1C0108050 (--0BindEngine@Ndis@@QEAA@XZ.c)
 *     ??0BindStack@Ndis@@QEAA@XZ @ 0x1C01084D0 (--0BindStack@Ndis@@QEAA@XZ.c)
 *     ??0KPushLock@@QEAA@XZ @ 0x1C0123FCC (--0KPushLock@@QEAA@XZ.c)
 */

_NDIS_MINIPORT_BLOCK *__fastcall _NDIS_MINIPORT_BLOCK::_NDIS_MINIPORT_BLOCK(_NDIS_MINIPORT_BLOCK *this)
{
  this->ExportName.__ptr_.__value_ = 0LL;
  this->FilterClass.__ptr_.__value_ = 0LL;
  Ndis::BindStack::BindStack(&this->Bindings);
  Ndis::BindEngine::BindEngine(&this->BindEngine);
  this->MiniportOwner.m_owner = MiniportNotOwned;
  KPushLock::KPushLock(&this->MiniportOwner.m_lock);
  KeInitializeEvent(&this->MiniportOwner.m_isUnowned.m_event, NotificationEvent, 0);
  KeSetEvent(&this->MiniportOwner.m_isUnowned.m_event, 0, 0);
  *(_WORD *)&this->InterfaceUpdateInProgress = 0;
  this->PendingMtuSize = 0;
  this->PoFxDStateReportingEnabled = 0;
  this->MtuUpdateQueued = 0;
  this->DevicePowerOnWorkItem.Irp = 0LL;
  this->DevicePowerDownWorkItem.Irp = 0LL;
  this->PendingOidWatchdog.m_ptr = (NDISWATCHDOG__ *)-1LL;
  this->HookedOidWatchdog.m_ptr = (NDISWATCHDOG__ *)-1LL;
  this->ReenumerateWatchdog.m_ptr = (NDISWATCHDOG__ *)-1LL;
  return this;
}
