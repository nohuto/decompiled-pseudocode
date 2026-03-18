/*
 * XREFs of imp_WdfFileObjectGetDevice @ 0x1C0004560
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0017FBC (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B3B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

WDFDEVICE__ *__fastcall imp_WdfFileObjectGetDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 FileObject)
{
  __int64 v2; // rbx
  FxFileObject *v3; // rcx
  __int64 Offset; // r8
  FxDeviceBase *m_DeviceBase; // rcx
  FxFileObject *pFO; // [rsp+48h] [rbp+10h] BYREF

  if ( !FileObject )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1018uLL);
  v2 = 0LL;
  v3 = (FxFileObject *)(~FileObject & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (FileObject & 1) != 0 )
  {
    Offset = LOWORD(v3->FxNonPagedObject::FxObject::__vftable);
    v3 = (FxFileObject *)((char *)v3 - Offset);
  }
  if ( v3->m_Type == 4120 )
  {
    pFO = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pFO, (void *)FileObject, 0x1018u, Offset);
    v3 = pFO;
  }
  m_DeviceBase = v3->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    return (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  return (WDFDEVICE__ *)v2;
}
