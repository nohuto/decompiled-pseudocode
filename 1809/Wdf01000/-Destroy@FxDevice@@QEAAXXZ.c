/*
 * XREFs of ?Destroy@FxDevice@@QEAAXXZ @ 0x1C00523D8
 * Callers:
 *     ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x1C003CE84 (-CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z.c)
 *     ?DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z @ 0x1C00538FC (-DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z.c)
 *     ?Dispose@FxDevice@@UEAAEXZ @ 0x1C0053CF0 (-Dispose@FxDevice@@UEAAEXZ.c)
 *     ?DeleteDevice@FxPkgPnp@@IEAAXXZ @ 0x1C0082C08 (-DeleteDevice@FxPkgPnp@@IEAAXXZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00054C8 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C0034A5C (WPP_IFR_SF_qqq.c)
 *     ?DeleteSymbolicLink@FxDevice@@QEAAXXZ @ 0x1C005237C (-DeleteSymbolicLink@FxDevice@@QEAAXXZ.c)
 */

void __fastcall FxDevice::Destroy(FxDevice *this)
{
  _DEVICE_OBJECT *_a1; // rdx
  const void *_a2; // rcx
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  _DEVICE_OBJECT *v5; // rcx
  wchar_t *Buffer; // rcx
  wchar_t *v7; // rcx

  _a1 = this->m_DeviceObject.m_DeviceObject;
  if ( _a1 )
  {
    _a1->DeviceExtension = 0LL;
    _a1 = this->m_DeviceObject.m_DeviceObject;
  }
  _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !this->m_ObjectSize )
    _a2 = 0LL;
  WPP_IFR_SF_qqq(
    this->m_Globals,
    4u,
    0x12u,
    0xBu,
    WPP_FxDeviceKm_cpp_Traceguids,
    _a1,
    _a2,
    this->m_AttachedDevice.FxDeviceBase::m_DeviceObject);
  m_DeviceObject = this->m_AttachedDevice.FxDeviceBase::m_DeviceObject;
  if ( m_DeviceObject )
  {
    IoDetachDevice(m_DeviceObject);
    this->m_AttachedDevice.FxDeviceBase::m_DeviceObject = 0LL;
  }
  if ( this->m_DeviceObject.m_DeviceObject )
  {
    FxDevice::DeleteSymbolicLink(this);
    v5 = this->m_DeviceObject.m_DeviceObject;
    if ( this->m_DeviceObjectDeleted )
      ObfDereferenceObject(v5);
    else
      IoDeleteDevice(v5);
    this->m_DeviceObject.m_DeviceObject = 0LL;
  }
  Buffer = this->m_DeviceName.Buffer;
  if ( Buffer )
  {
    FxPoolFree((FX_POOL_TRACKER *)Buffer);
    *(_QWORD *)&this->m_DeviceName.Length = 0LL;
    this->m_DeviceName.Buffer = 0LL;
  }
  v7 = this->m_MofResourceName.Buffer;
  if ( v7 )
  {
    FxPoolFree((FX_POOL_TRACKER *)v7);
    *(_QWORD *)&this->m_MofResourceName.Length = 0LL;
    this->m_MofResourceName.Buffer = 0LL;
  }
}
