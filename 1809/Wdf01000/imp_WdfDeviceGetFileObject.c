/*
 * XREFs of imp_WdfDeviceGetFileObject @ 0x1C004ACE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C0001910 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 */

WDFFILEOBJECT__ *__fastcall imp_WdfDeviceGetFileObject(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _FILE_OBJECT *FileObject)
{
  _FX_DRIVER_GLOBALS *DriverName; // rdi
  int _a1; // eax
  FxFileObject *pFxFO; // [rsp+40h] [rbp+8h] BYREF
  FxDevice *pDevice; // [rsp+58h] [rbp+20h] BYREF

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  pFxFO = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  _a1 = FxFileObject::_GetFileObjectFromWdm(pDevice, pDevice->m_FileObjectClass, FileObject, &pFxFO);
  if ( _a1 >= 0 )
  {
    if ( pFxFO && pFxFO->m_ObjectSize )
      return (WDFFILEOBJECT__ *)((unsigned __int64)pFxFO ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      return 0LL;
  }
  else
  {
    WPP_IFR_SF_d(DriverName, 2u, 0x12u, 0xAu, WPP_FxDeviceApiKm_cpp_Traceguids, _a1);
    return 0LL;
  }
}
