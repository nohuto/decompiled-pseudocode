/*
 * XREFs of ?_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJECT@@W4DEVICE_REGISTRY_PROPERTY@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@@Z @ 0x1C0054238
 * Callers:
 *     imp_WdfFdoInitAllocAndQueryProperty @ 0x1C0046720 (imp_WdfFdoInitAllocAndQueryProperty.c)
 *     imp_WdfDeviceAllocAndQueryProperty @ 0x1C0048560 (imp_WdfDeviceAllocAndQueryProperty.c)
 *     imp_WdfIoTargetAllocAndQueryTargetProperty @ 0x1C0066970 (imp_WdfIoTargetAllocAndQueryTargetProperty.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B6A0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C002F8AC (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_dd @ 0x1C002F9E8 (WPP_IFR_SF_dd.c)
 *     ?_QueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJECT@@W4DEVICE_REGISTRY_PROPERTY@@KPEAXPEAK@Z @ 0x1C0052760 (-_QueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJEC.c)
 *     ?_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAV1@@Z @ 0x1C0054BDC (-_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_.c)
 */

__int64 __fastcall FxDevice::_AllocAndQueryProperty(
        _FX_DRIVER_GLOBALS *Globals,
        WDFDEVICE_INIT *DeviceInit,
        FxDevice *Device,
        _DEVICE_OBJECT *RemotePdo,
        DEVICE_REGISTRY_PROPERTY DeviceProperty,
        _POOL_TYPE PoolType,
        _WDF_OBJECT_ATTRIBUTES *PropertyMemoryAttributes,
        WDFMEMORY__ **PropertyMemory)
{
  int _a2; // eax
  unsigned int v13; // edi
  int _a1; // eax
  FxMemoryObject *v15; // rsi
  void *v16; // rax
  int v17; // eax
  int v18; // eax
  unsigned int length; // [rsp+40h] [rbp-28h] BYREF
  FxMemoryObject *pMemory; // [rsp+48h] [rbp-20h] BYREF

  length = 0;
  _a2 = FxDevice::_QueryProperty(Globals, DeviceInit, Device, RemotePdo, DeviceProperty, 0, 0LL, &length);
  v13 = _a2;
  if ( _a2 == -1073741789 )
  {
    _a1 = FxMemoryObject::_Create(Globals, PropertyMemoryAttributes, PoolType, Globals->Tag, length, &pMemory);
    v13 = _a1;
    if ( _a1 >= 0 )
    {
      v15 = pMemory;
      v16 = (void *)pMemory->GetBuffer(&pMemory->IFxMemory);
      v17 = FxDevice::_QueryProperty(Globals, DeviceInit, Device, RemotePdo, DeviceProperty, length, v16, &length);
      v13 = v17;
      if ( v17 >= 0 )
      {
        v18 = FxObject::Commit(v15, (_FX_DRIVER_GLOBALS *)PropertyMemoryAttributes, (void **)PropertyMemory, 0LL, 1u);
        v13 = v18;
        if ( v18 >= 0 )
          return v13;
        WPP_IFR_SF_d(Globals, 2u, 0x12u, 0x12u, WPP_FxDevice_cpp_Traceguids, v18);
      }
      else
      {
        WPP_IFR_SF_DDd(Globals, length, 0x12u, 0x11u, WPP_FxDevice_cpp_Traceguids, length, DeviceProperty, v17);
      }
      v15->DeleteObject(v15);
      return v13;
    }
    WPP_IFR_SF_d(Globals, 2u, 0x12u, 0x10u, WPP_FxDevice_cpp_Traceguids, _a1);
  }
  else
  {
    WPP_IFR_SF_dd(Globals, 2u, 0x12u, 0xFu, WPP_FxDevice_cpp_Traceguids, DeviceProperty, _a2);
  }
  return v13;
}
