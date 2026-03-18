/*
 * XREFs of ?_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFKEY__@@@Z @ 0x1C00525A0
 * Callers:
 *     imp_WdfFdoInitOpenRegistryKey @ 0x1C00469D0 (imp_WdfFdoInitOpenRegistryKey.c)
 *     imp_WdfDeviceOpenRegistryKey @ 0x1C0049530 (imp_WdfDeviceOpenRegistryKey.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0004F20 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B6A0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000BB38 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C000D650 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0017908 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?_ValidateOpenKeyParams@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@@Z @ 0x1C0054894 (-_ValidateOpenKeyParams@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C490 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ??0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0061CF0 (--0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

int __fastcall FxDevice::_OpenKey(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        FxDevice *Device,
        ULONG DeviceInstanceKeyType,
        ACCESS_MASK DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  int result; // eax
  _DEVICE_OBJECT *PhysicalDevice; // rsi
  FxRegKey *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  unsigned __int16 m_ObjectSize; // ax
  const void *v17; // rdi
  int v18; // edi
  void *hKey; // [rsp+40h] [rbp-28h] BYREF
  WDFKEY__ *keyHandle; // [rsp+48h] [rbp-20h] BYREF

  hKey = 0LL;
  result = FxValidateObjectAttributes(FxDriverGlobals, KeyAttributes, 0);
  if ( result < 0 )
    return result;
  result = FxVerifierCheckIrqlLevel(FxDriverGlobals, 0);
  if ( result < 0 )
    return result;
  result = FxDevice::_ValidateOpenKeyParams(FxDriverGlobals, DeviceInit, Device);
  if ( result < 0 )
    return result;
  if ( DeviceInit )
  {
    PhysicalDevice = DeviceInit->Fdo.PhysicalDevice;
    goto LABEL_6;
  }
  PhysicalDevice = FxDevice::GetSafePhysicalDevice(Device);
  if ( PhysicalDevice )
  {
LABEL_6:
    v13 = (FxRegKey *)FxObjectHandleAlloc(
                        FxDriverGlobals,
                        ExDefaultNonPagedPoolType,
                        0x80uLL,
                        0,
                        KeyAttributes,
                        0,
                        FxObjectTypeExternal);
    if ( v13 )
    {
      FxRegKey::FxRegKey(v13, FxDriverGlobals);
      v15 = v14;
    }
    else
    {
      v15 = 0LL;
    }
    if ( !v15 )
      return -1073741670;
    if ( Device )
      *(_QWORD *)(v15 + 96) = Device;
    v18 = FxObject::Commit((FxObject *)v15, (_FX_DRIVER_GLOBALS *)KeyAttributes, (void **)&keyHandle, 0LL, 1u);
    if ( v18 < 0
      || (v18 = IoOpenDeviceRegistryKey(PhysicalDevice, DeviceInstanceKeyType, DesiredAccess, &hKey), v18 < 0) )
    {
      FxObject::ClearEvtCallbacks((FxObject *)v15);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 48LL))(v15);
    }
    else
    {
      *(_QWORD *)(v15 + 112) = hKey;
      *Key = keyHandle;
    }
    return v18;
  }
  m_ObjectSize = Device->m_ObjectSize;
  v17 = (const void *)((unsigned __int64)Device ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v17 = 0LL;
  WPP_IFR_SF_qL(FxDriverGlobals, 2u, 0x12u, 0x17u, WPP_FxDeviceKm_cpp_Traceguids, v17, 0xC0000184);
  return -1073741436;
}
