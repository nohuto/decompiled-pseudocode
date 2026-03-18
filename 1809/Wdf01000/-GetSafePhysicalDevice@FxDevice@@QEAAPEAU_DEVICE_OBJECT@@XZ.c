/*
 * XREFs of ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C000C99C
 * Callers:
 *     ?EndScan@FxChildList@@QEAAXPEAK@Z @ 0x1C000488C (-EndScan@FxChildList@@QEAAXPEAK@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00049F8 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z @ 0x1C000C898 (-OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z.c)
 *     ?IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z @ 0x1C001B6E4 (-IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z.c)
 *     ?AllocateCompanionTarget@FxDevice@@QEAAJPEAPEAVFxCompanionTarget@@@Z @ 0x1C001BC14 (-AllocateCompanionTarget@FxDevice@@QEAAJPEAPEAVFxCompanionTarget@@@Z.c)
 *     imp_WdfChildListRequestChildEject @ 0x1C003A510 (imp_WdfChildListRequestChildEject.c)
 *     imp_WdfPdoRequestEject @ 0x1C003B220 (imp_WdfPdoRequestEject.c)
 *     imp_WdfDeviceSetDeviceState @ 0x1C004A290 (imp_WdfDeviceSetDeviceState.c)
 *     ?AssignProperty@FxDevice@@QEAAJPEAXW4FxPropertyType@@KK0@Z @ 0x1C0052014 (-AssignProperty@FxDevice@@QEAAJPEAXW4FxPropertyType@@KK0@Z.c)
 *     ?CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0052120 (-CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFKEY__@@@Z @ 0x1C0052B50 (-_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRI.c)
 *     ?_QueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJECT@@W4DEVICE_REGISTRY_PROPERTY@@KPEAXPEAK@Z @ 0x1C0052D10 (-_QueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJEC.c)
 *     ?_QueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@K3PEAK5@Z @ 0x1C0052DE4 (-_QueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropert.c)
 *     imp_WdfDeviceCreateDeviceInterface @ 0x1C005F570 (imp_WdfDeviceCreateDeviceInterface.c)
 *     FxGetDevicePropertyString @ 0x1C0061E00 (FxGetDevicePropertyString.c)
 *     ?InvalidateDeviceState@FxPkgPnp@@AEAAXXZ @ 0x1C008394C (-InvalidateDeviceState@FxPkgPnp@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

_DEVICE_OBJECT *__fastcall FxDevice::GetSafePhysicalDevice(FxDevice *this)
{
  _DEVICE_OBJECT *result; // rax

  if ( !this->m_PdoKnown )
    return 0LL;
  result = this->m_PhysicalDevice.FxDeviceBase::m_DeviceObject;
  if ( !result )
    return 0LL;
  return result;
}
