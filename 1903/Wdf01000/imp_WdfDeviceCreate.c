/*
 * XREFs of imp_WdfDeviceCreate @ 0x1C0048DD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0004F20 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000BB38 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0054614 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B850 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfDeviceCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT **DeviceInit,
        _WDF_OBJECT_ATTRIBUTES *DeviceAttributes,
        WDFDEVICE__ **Device)
{
  _FX_DRIVER_GLOBALS *DriverName; // rcx
  _FX_DRIVER_GLOBALS *v8; // rbx
  int result; // eax
  WDFDEVICE_INIT *v10; // rdx
  int v11; // edi
  unsigned __int16 v12; // r9
  WDFDEVICE__ *v13; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxDevice *pDevice; // [rsp+50h] [rbp+8h] BYREF

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  if ( !DeviceInit )
    FxVerifierNullBugCheck(DriverName, retaddr);
  if ( !*DeviceInit )
    FxVerifierNullBugCheck(DriverName, retaddr);
  if ( !Device )
    FxVerifierNullBugCheck(DriverName, retaddr);
  v8 = (*DeviceInit)->DriverGlobals;
  *Device = 0LL;
  result = FxVerifierCheckIrqlLevel(v8, 0);
  if ( result >= 0 )
  {
    result = FxValidateObjectAttributes(v8, DeviceAttributes, 7);
    if ( result >= 0 )
    {
      v10 = *DeviceInit;
      if ( (*DeviceInit)->CreatedDevice )
      {
        WPP_IFR_SF_q(v8, 2u, 0x12u, 0x19u, WPP_FxDeviceApi_cpp_Traceguids, Device);
        return -1073741436;
      }
      if ( (v10->Security.Sddl || v10->Security.DeviceClassSet)
        && !v10->DeviceName
        && (v10->Characteristics & 0x80u) == 0 )
      {
        v11 = -1073741703;
        v12 = 26;
LABEL_20:
        WPP_IFR_SF_d(v8, 2u, 0x12u, v12, WPP_FxDeviceApi_cpp_Traceguids, v11);
        return v11;
      }
      if ( v10->RequiresSelfIoTarget && v10->InitType )
      {
        v12 = 27;
LABEL_19:
        v11 = -1073741808;
        goto LABEL_20;
      }
      if ( v10->Pdo.NoPowerDependencyOnParent
        && v10->Pdo.EventCallbacks.Size
        && (v10->Pdo.EventCallbacks.EvtDeviceEnableWakeAtBus || v10->Pdo.EventCallbacks.EvtDeviceDisableWakeAtBus) )
      {
        v12 = 28;
        goto LABEL_19;
      }
      result = FxDevice::_Create(v8, DeviceInit, DeviceAttributes, &pDevice);
      if ( result >= 0 )
      {
        if ( pDevice->m_ObjectSize )
          v13 = (WDFDEVICE__ *)((unsigned __int64)pDevice ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v13 = 0LL;
        *Device = v13;
      }
    }
  }
  return result;
}
