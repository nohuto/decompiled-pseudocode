/*
 * XREFs of ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C005C364
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0006010 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0006B40 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C00124F0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C0040B84 (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 *     ?InstallPackage@FxDevice@@QEAAXPEAVFxPackage@@@Z @ 0x1C0053D20 (-InstallPackage@FxDevice@@QEAAXPEAVFxPackage@@@Z.c)
 *     FxCmResourceListInsertDescriptor @ 0x1C005E830 (FxCmResourceListInsertDescriptor.c)
 *     FxIoResourceListInsertDescriptor @ 0x1C005E918 (FxIoResourceListInsertDescriptor.c)
 *     ?BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z @ 0x1C0063A5C (-BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z.c)
 *     ?BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z @ 0x1C0063B64 (-BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z.c)
 *     ?_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENTS_LIST@@E@Z @ 0x1C0063FC4 (-_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENT.c)
 * Callees:
 *     ?AddChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x1C005C144 (-AddChildObjectInternal@FxObject@@AEAAJPEAV1@@Z.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C005C720 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 */

__int64 __fastcall FxObject::AssignParentObject(FxObject *this, FxObject *ParentObject)
{
  KIRQL v4; // r14
  int v5; // edi

  v4 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  if ( this->m_ObjectState == 1 )
  {
    if ( this->m_ParentObject )
    {
      v5 = -1071644147;
    }
    else
    {
      v5 = FxObject::AddChildObjectInternal(ParentObject, this);
      if ( v5 >= 0 )
        this->m_ParentObject = ParentObject;
    }
  }
  else
  {
    FxObject::TraceDroppedEvent(this, FxObjectDroppedEventAssignParentObject);
    v5 = -1073741738;
  }
  KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v4);
  return (unsigned int)v5;
}
