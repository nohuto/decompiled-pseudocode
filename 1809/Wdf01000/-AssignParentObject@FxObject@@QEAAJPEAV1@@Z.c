/*
 * XREFs of ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C005BF04
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0005970 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0007060 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C0011ED0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C0041934 (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 *     ?InstallPackage@FxDevice@@QEAAXPEAVFxPackage@@@Z @ 0x1C0054308 (-InstallPackage@FxDevice@@QEAAXPEAVFxPackage@@@Z.c)
 *     FxCmResourceListInsertDescriptor @ 0x1C005E690 (FxCmResourceListInsertDescriptor.c)
 *     FxIoResourceListInsertDescriptor @ 0x1C005E778 (FxIoResourceListInsertDescriptor.c)
 *     ?BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z @ 0x1C00633FC (-BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z.c)
 *     ?BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z @ 0x1C0063504 (-BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z.c)
 *     ?_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENTS_LIST@@E@Z @ 0x1C006397C (-_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENT.c)
 * Callees:
 *     ?AddChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x1C005BCE4 (-AddChildObjectInternal@FxObject@@AEAAJPEAV1@@Z.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C005C384 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
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
