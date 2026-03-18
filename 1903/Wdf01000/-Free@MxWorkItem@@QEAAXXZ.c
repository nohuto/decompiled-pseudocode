/*
 * XREFs of ?Free@MxWorkItem@@QEAAXXZ @ 0x1C000E908
 * Callers:
 *     ??1FxWorkItem@@UEAA@XZ @ 0x1C000E170 (--1FxWorkItem@@UEAA@XZ.c)
 *     ??1FxSystemWorkItem@@UEAA@XZ @ 0x1C0057BCC (--1FxSystemWorkItem@@UEAA@XZ.c)
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x1C0082818 (--1FxPkgPnp@@MEAA@XZ.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0084CF4 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ??_GFxWakeInterruptMachine@@QEAAPEAXI@Z @ 0x1C008CEC0 (--_GFxWakeInterruptMachine@@QEAAPEAXI@Z.c)
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
