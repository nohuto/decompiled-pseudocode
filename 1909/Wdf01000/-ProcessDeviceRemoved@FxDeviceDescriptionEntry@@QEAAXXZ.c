/*
 * XREFs of ?ProcessDeviceRemoved@FxDeviceDescriptionEntry@@QEAAXXZ @ 0x1C003D150
 * Callers:
 *     ?PnpEventPdoRemovedOverload@FxPkgPdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1C007C720 (-PnpEventPdoRemovedOverload@FxPkgPdo@@EEAA-AW4_WDF_DEVICE_PNP_STATE@@XZ.c)
 * Callees:
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0003714 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000BB38 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

void __fastcall FxDeviceDescriptionEntry::ProcessDeviceRemoved(FxDeviceDescriptionEntry *this)
{
  FxChildList *m_DeviceList; // rcx
  FxChildList *v3; // rbx
  KIRQL v4; // dl
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v7; // rax
  unsigned __int8 v8; // r8
  _LIST_ENTRY freeHead; // [rsp+20h] [rbp-18h] BYREF

  m_DeviceList = this->m_DeviceList;
  freeHead.Flink = 0LL;
  freeHead.Blink = 0LL;
  FxVerifierCheckIrqlLevel(m_DeviceList->m_Globals, 0);
  v3 = this->m_DeviceList;
  freeHead.Blink = &freeHead;
  freeHead.Flink = &freeHead;
  v4 = KeAcquireSpinLockRaiseToDpc(&v3->m_ListLock);
  if ( !v3->m_ScanCount || (FxDeviceDescriptionEntry *)this->m_DescriptionLink.Flink == this )
  {
    Flink = this->m_DescriptionLink.Flink;
    if ( (FxDeviceDescriptionEntry *)this->m_DescriptionLink.Flink->Blink != this
      || (Blink = this->m_DescriptionLink.Blink, (FxDeviceDescriptionEntry *)Blink->Flink != this)
      || (Blink->Flink = Flink, Flink->Blink = Blink, v7 = freeHead.Blink, freeHead.Blink->Flink != &freeHead) )
    {
      __fastfail(3u);
    }
    this->m_DescriptionLink.Blink = freeHead.Blink;
    this->m_DescriptionLink.Flink = &freeHead;
    v7->Flink = (_LIST_ENTRY *)this;
    freeHead.Blink = (_LIST_ENTRY *)this;
  }
  else
  {
    this->m_PendingDeleteOnScanEnd = 1;
  }
  KeReleaseSpinLock(&this->m_DeviceList->m_ListLock, v4);
  FxChildList::DrainFreeListHead(this->m_DeviceList, &freeHead, v8);
}
