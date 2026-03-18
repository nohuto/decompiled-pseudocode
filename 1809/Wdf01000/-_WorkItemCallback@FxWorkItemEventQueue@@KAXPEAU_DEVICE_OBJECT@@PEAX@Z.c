/*
 * XREFs of ?_WorkItemCallback@FxWorkItemEventQueue@@KAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C008D9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@_FX_DRIVER_GLOBALS@@QEAAKPEAXJPEBD@Z @ 0x1C00562E8 (-Release@_FX_DRIVER_GLOBALS@@QEAAKPEAXJPEBD@Z.c)
 *     ?EventQueueWorker@FxEventQueue@@IEAAXXZ @ 0x1C008D6D4 (-EventQueueWorker@FxEventQueue@@IEAAXXZ.c)
 */

void __fastcall FxWorkItemEventQueue::_WorkItemCallback(_DEVICE_OBJECT *DeviceObject, FxEventQueue *Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  _DRIVER_OBJECT *m_DriverObject; // rdi
  void *v4; // rdx
  int v5; // r8d
  const char *v6; // r9

  m_Globals = Context->m_PkgPnp->m_Globals;
  m_DriverObject = m_Globals->Driver->m_DriverObject.m_DriverObject;
  FxEventQueue::EventQueueWorker(Context);
  _FX_DRIVER_GLOBALS::Release(m_Globals, v4, v5, v6);
  ObfDereferenceObject(m_DriverObject);
}
