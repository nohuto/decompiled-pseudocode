/*
 * XREFs of ?DeleteObject@FxDevice@@UEAAXXZ @ 0x1C0053490
 * Callers:
 *     <none>
 * Callees:
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0007FB0 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000BB38 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C003A1F0 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     ?Deregister@FxWmiIrpHandler@@QEAAXXZ @ 0x1C00411C0 (-Deregister@FxWmiIrpHandler@@QEAAXXZ.c)
 *     ?DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z @ 0x1C005334C (-DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z.c)
 */

void __fastcall FxDevice::DeleteObject(FxDevice *this)
{
  FxPkgPnp *m_PkgPnp; // rdi
  unsigned __int8 v3; // r8
  bool v4; // si
  unsigned __int8 v5; // r8
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  unsigned __int8 v7; // dl
  FxWmiIrpHandler *m_PkgWmi; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  m_PkgPnp = this->m_PkgPnp;
  if ( m_PkgPnp && FxDevice::IsPdo(this) )
  {
    v4 = 0;
    FxNonPagedObject::Lock(m_PkgPnp, &irql, v3);
    if ( BYTE1(m_PkgPnp[1].m_DisposeSingleEntry.Next) && !BYTE2(m_PkgPnp[1].m_DisposeSingleEntry.Next) )
      v4 = this->m_CurrentPnpState == WdfDevStatePnpInit;
    FxNonPagedObject::Unlock(m_PkgPnp, irql, v5);
    if ( v4 )
      FxDevice::DeleteDeviceFromFailedCreateNoDelete(this, 0xC0000001, 1u);
LABEL_14:
    FxObject::DeleteObject(this);
    return;
  }
  if ( !this->m_Legacy || !this->m_PkgGeneral || !this->m_DeviceObject.m_DeviceObject )
    goto LABEL_14;
  FxVerifierCheckIrqlLevel(this->m_Globals, 0);
  m_DeviceObject = this->m_DeviceObject.m_DeviceObject;
  this->m_DeviceObjectDeleted = 1;
  ObfReferenceObject(m_DeviceObject);
  m_PkgWmi = this->m_PkgWmi;
  if ( m_PkgWmi )
    FxWmiIrpHandler::Deregister(m_PkgWmi, v7);
  IoDeleteDevice(this->m_DeviceObject.m_DeviceObject);
  if ( _InterlockedExchangeAdd(&this->m_PkgGeneral->m_OpenHandleCount, 0xFFFFFFFF) == 1 )
    goto LABEL_14;
}
