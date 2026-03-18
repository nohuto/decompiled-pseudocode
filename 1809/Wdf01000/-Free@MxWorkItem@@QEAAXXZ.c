/*
 * XREFs of ?Free@MxWorkItem@@QEAAXXZ @ 0x1C00562B8
 * Callers:
 *     ??1FxSystemWorkItem@@UEAA@XZ @ 0x1C005817C (--1FxSystemWorkItem@@UEAA@XZ.c)
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x1C0081A04 (--1FxPkgPnp@@MEAA@XZ.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0083C64 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ??_GFxWakeInterruptMachine@@QEAAPEAXI@Z @ 0x1C008B8D0 (--_GFxWakeInterruptMachine@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MxWorkItem::Free(MxWorkItem *this)
{
  struct _IO_WORKITEM *m_WorkItem; // rcx

  m_WorkItem = this->m_WorkItem;
  if ( m_WorkItem )
  {
    IoFreeWorkItem(m_WorkItem);
    this->m_WorkItem = 0LL;
  }
}
