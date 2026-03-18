/*
 * XREFs of ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C000FFD0
 * Callers:
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C000F3C0 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PowerWakingDmaEnable@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0010900 (-PowerWakingDmaEnable@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDxIoStopped@FxPkgPnp@@IEAAEXZ @ 0x1C0012AE0 (-PowerGotoDxIoStopped@FxPkgPnp@@IEAAEXZ.c)
 *     imp_WdfDeviceClearRemovalRelationsDevices @ 0x1C004AC60 (imp_WdfDeviceClearRemovalRelationsDevices.c)
 *     ?SetFilterIoType@FxDevice@@AEAAXXZ @ 0x1C00545E8 (-SetFilterIoType@FxDevice@@AEAAXXZ.c)
 *     ?ClearEjectionDevicesList@FxPkgPdo@@QEAAXXZ @ 0x1C007B68C (-ClearEjectionDevicesList@FxPkgPdo@@QEAAXXZ.c)
 *     ?PnpEventRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007D6A0 (-PnpEventRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ @ 0x1C007DB80 (-PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ.c)
 *     ?PowerDmaEnableAndScan@FxPkgPnp@@IEAAEE@Z @ 0x1C008000C (-PowerDmaEnableAndScan@FxPkgPnp@@IEAAEE@Z.c)
 *     ?HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z @ 0x1C0082F5C (-HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z.c)
 *     ?NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ @ 0x1C0083BB4 (-NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0083C64 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ @ 0x1C008B084 (-PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ.c)
 *     ?PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ @ 0x1C008B178 (-PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ.c)
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x1C008DFA8 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerDmaPowerUp@FxPkgPnp@@IEAAEXZ @ 0x1C008E028 (-PowerDmaPowerUp@FxPkgPnp@@IEAAEXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FxTransactionedList::UnlockFromEnum(FxTransactionedList *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  MxEvent *m_DeletingDoneEvent; // rsi
  bool v5; // zf
  unsigned int m_ListLockedRecursionCount; // eax
  _LIST_ENTRY *p_m_TransactionHead; // rdi
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v9; // rax
  _LIST_ENTRY *v10; // rcx
  _LIST_ENTRY *v11; // r14
  int v12; // ecx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v14; // rcx
  _LIST_ENTRY *v15; // rdx
  _LIST_ENTRY *v16; // rcx
  _LIST_ENTRY *v17; // rcx
  _LIST_ENTRY *v18; // rdi
  _LIST_ENTRY releaseHead; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  releaseHead.Blink = &releaseHead;
  releaseHead.Flink = &releaseHead;
  m_DeletingDoneEvent = 0LL;
  this->AcquireLock(this, FxDriverGlobals, &irql);
  v5 = this->m_ListLockedRecursionCount-- == 1;
  m_ListLockedRecursionCount = this->m_ListLockedRecursionCount;
  if ( v5 )
  {
    p_m_TransactionHead = &this->m_TransactionHead;
    while ( 1 )
    {
      Flink = p_m_TransactionHead->Flink;
      if ( p_m_TransactionHead->Flink == p_m_TransactionHead )
        break;
      if ( Flink->Blink != p_m_TransactionHead || (v10 = Flink->Flink, Flink->Flink->Blink != Flink) )
LABEL_27:
        __fastfail(3u);
      p_m_TransactionHead->Flink = v10;
      v11 = Flink - 1;
      v10->Blink = p_m_TransactionHead;
      Flink->Blink = Flink;
      Flink->Flink = Flink;
      v12 = (int)Flink[1].Flink;
      if ( v12 == 2 )
      {
        Blink = this->m_ListHead.Blink;
        if ( Blink->Flink != &this->m_ListHead )
          goto LABEL_27;
        v11->Flink = &this->m_ListHead;
        v11->Blink = Blink;
        Blink->Flink = v11;
        this->m_ListHead.Blink = v11;
        this->EntryAdded(this, (FxTransactionedEntry *)v11);
      }
      else if ( v12 == 3 )
      {
        v14 = v11->Flink;
        if ( v11->Flink->Blink != v11 )
          goto LABEL_27;
        v15 = v11->Blink;
        if ( v15->Flink != v11 )
          goto LABEL_27;
        v15->Flink = v14;
        v14->Blink = v15;
        v16 = releaseHead.Blink;
        if ( releaseHead.Blink->Flink != &releaseHead )
          goto LABEL_27;
        Flink->Blink = releaseHead.Blink;
        Flink->Flink = &releaseHead;
        v16->Flink = Flink;
        releaseHead.Blink = Flink;
        this->EntryRemoved(this, (FxTransactionedEntry *)v11);
      }
      LODWORD(v11[2].Flink) = 1;
    }
    m_ListLockedRecursionCount = this->m_ListLockedRecursionCount;
  }
  if ( !m_ListLockedRecursionCount && this->m_Deleting )
  {
    m_DeletingDoneEvent = this->m_DeletingDoneEvent;
    this->m_DeletingDoneEvent = 0LL;
  }
  this->ReleaseLock(this, FxDriverGlobals, irql);
  while ( 1 )
  {
    v9 = releaseHead.Flink;
    if ( releaseHead.Flink == &releaseHead )
      break;
    if ( releaseHead.Flink->Blink != &releaseHead )
      goto LABEL_27;
    v17 = releaseHead.Flink->Flink;
    if ( releaseHead.Flink->Flink->Blink != releaseHead.Flink )
      goto LABEL_27;
    releaseHead.Flink = releaseHead.Flink->Flink;
    v18 = v9 - 1;
    v17->Blink = &releaseHead;
    v9->Blink = v9;
    v9->Flink = v9;
    ((void (__fastcall *)(_LIST_ENTRY *, _LIST_ENTRY *, __int64, const char *))v9[1].Blink->Flink[1].Flink)(
      v9[1].Blink,
      &v9[-1],
      226LL,
      "minkernel\\wdf\\framework\\shared\\support\\fxtransactionedlist.cpp");
    if ( this->m_DeleteOnRemove )
      ((void (__fastcall *)(_LIST_ENTRY *))v18[2].Blink->Flink[3].Flink)(v18[2].Blink);
  }
  if ( m_DeletingDoneEvent )
    KeSetEvent(&m_DeletingDoneEvent->m_Event, 0, 0);
}
