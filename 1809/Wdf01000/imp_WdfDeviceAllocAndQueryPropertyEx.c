/*
 * XREFs of imp_WdfDeviceAllocAndQueryPropertyEx @ 0x1C0048F70
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00079C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000B6F4 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C0030484 (WPP_IFR_SF_DDd.c)
 *     ?_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAK@Z @ 0x1C00549F4 (-_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4F.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B41C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfDeviceAllocAndQueryPropertyEx(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DEVICE_PROPERTY_DATA *DeviceProperty,
        _POOL_TYPE PoolType,
        _WDF_OBJECT_ATTRIBUTES *PropertyMemoryAttributes,
        WDFMEMORY__ **PropertyMemory,
        unsigned int *Type)
{
  unsigned __int8 v9; // dl
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  int v11; // edi
  int result; // eax
  void *v13; // r9
  WDFMEMORY__ **v14; // rdi
  unsigned int *v15; // rsi
  _WDF_OBJECT_ATTRIBUTES *v16; // rbp
  FxPropertyType _a1; // [rsp+20h] [rbp-48h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  FxDevice *pDevice; // [rsp+70h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !DeviceProperty )
    FxVerifierNullBugCheck(pDevice->m_Globals, retaddr);
  if ( DeviceProperty->Size != 24 )
  {
    v11 = -1073741820;
    WPP_IFR_SF_DDd(m_Globals, v9, 0xCu, 0x38u, WPP_FxDeviceApi_cpp_Traceguids, DeviceProperty->Size, 24, -1073741820);
    return v11;
  }
  v11 = FxVerifierCheckIrqlLevel(pDevice->m_Globals, 1u);
  if ( v11 < 0 )
  {
    FxVerifierDbgBreakPoint(m_Globals);
    return v11;
  }
  if ( m_Globals->FxVerifierOn && WPP_GLOBAL_WDF_Control.Dpc.DeferredRoutine )
    WPP_GLOBAL_WDF_Control.Dpc.DeferredRoutine((_KDPC *)(unsigned int)PoolType, retaddr, (void *)m_Globals->Tag, v13);
  v14 = PropertyMemory;
  if ( !PropertyMemory )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v15 = Type;
  if ( !Type )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v16 = PropertyMemoryAttributes;
  *PropertyMemory = 0LL;
  result = FxValidateObjectAttributes(m_Globals, v16, 0);
  if ( result >= 0 )
    return FxDevice::_AllocAndQueryPropertyEx(m_Globals, 0LL, pDevice, DeviceProperty, _a1, PoolType, v16, v14, v15);
  return result;
}
