/*
 * XREFs of ?GetParentObjectReferenced@FxObject@@QEAAPEAV1@PEAX@Z @ 0x1C005C154
 * Callers:
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C000D9E0 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     ?IsObjectDisposedOnRemove@FxUsbDevice@@QEAAEPEAVFxObject@@@Z @ 0x1C0072BC4 (-IsObjectDisposedOnRemove@FxUsbDevice@@QEAAEPEAVFxObject@@@Z.c)
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0013F08 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 */

FxObject *__fastcall FxObject::GetParentObjectReferenced(FxObject *this, void *Tag)
{
  unsigned __int64 *p_m_Lock; // rdi
  KIRQL v5; // si
  FxObject *m_ParentObject; // rbx

  p_m_Lock = &this->m_SpinLock.m_Lock;
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  if ( this->m_ObjectState == 1 )
    m_ParentObject = this->m_ParentObject;
  else
    m_ParentObject = 0LL;
  if ( m_ParentObject )
    FxObject::AddRef(m_ParentObject, Tag, 896, "minkernel\\wdf\\framework\\shared\\object\\fxobject.cpp");
  KeReleaseSpinLock(p_m_Lock, v5);
  return m_ParentObject;
}
