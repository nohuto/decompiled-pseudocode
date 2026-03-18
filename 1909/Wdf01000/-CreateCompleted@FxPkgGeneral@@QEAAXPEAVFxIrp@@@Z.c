/*
 * XREFs of ?CreateCompleted@FxPkgGeneral@@QEAAXPEAVFxIrp@@@Z @ 0x1C0091FE8
 * Callers:
 *     ?_CreateCompletionRoutine@FxPkgGeneral@@CAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0092640 (-_CreateCompletionRoutine@FxPkgGeneral@@CAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 * Callees:
 *     ?_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z @ 0x1C0054D18 (-_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z.c)
 *     ?DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ @ 0x1C009202C (-DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ.c)
 */

void __fastcall FxPkgGeneral::CreateCompleted(FxPkgGeneral *this, FxIrp *Irp)
{
  if ( Irp->m_Irp->IoStatus.Status < 0 )
  {
    FxFileObject::_DestroyFileObject(
      this->m_Device,
      (_WDF_FILEOBJECT_CLASS)this->m_DeviceBase[1].m_DisposeSingleEntry.Next,
      Irp->m_Irp->Tail.Overlay.CurrentStackLocation->FileObject);
    FxPkgGeneral::DecrementOpenHandleCount(this);
  }
}
