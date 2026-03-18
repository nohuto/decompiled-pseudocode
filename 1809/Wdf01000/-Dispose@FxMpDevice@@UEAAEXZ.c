/*
 * XREFs of ?Dispose@FxMpDevice@@UEAAEXZ @ 0x1C004E970
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C0008C30 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?WaitForEmpty@FxDisposeList@@QEAAXXZ @ 0x1C005757C (-WaitForEmpty@FxDisposeList@@QEAAXXZ.c)
 *     ?CallCleanupCallbacks@FxObject@@AEAAXXZ @ 0x1C005BFA8 (-CallCleanupCallbacks@FxObject@@AEAAXXZ.c)
 */

unsigned __int8 __fastcall FxMpDevice::Dispose(FxMpDevice *this)
{
  FxDisposeList *m_DisposeList; // rcx

  if ( (this->m_ObjectFlags & 0x400) != 0 )
    FxObject::CallCleanupCallbacks(this);
  FxObject::DestroyChildren(this);
  m_DisposeList = this->m_DisposeList;
  if ( m_DisposeList )
    FxDisposeList::WaitForEmpty(m_DisposeList);
  ObfDereferenceObject(this->m_DeviceObject.m_DeviceObject);
  this->m_DeviceObject.m_DeviceObject = 0LL;
  this->m_AttachedDevice.FxDeviceBase::m_DeviceObject = 0LL;
  return 0;
}
