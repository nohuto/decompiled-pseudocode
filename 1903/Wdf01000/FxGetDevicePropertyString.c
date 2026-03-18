/*
 * XREFs of FxGetDevicePropertyString @ 0x1C00620A4
 * Callers:
 *     LogDriverInfoStream @ 0x1C00627EC (LogDriverInfoStream.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000459C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00055A0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C000D650 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     WPP_IFR_SF_DDd @ 0x1C002F8AC (WPP_IFR_SF_DDd.c)
 */

void __fastcall FxGetDevicePropertyString(FxDevice *Fdo, __int32 DeviceProperty, _UNICODE_STRING *PropertyString)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  DEVICE_REGISTRY_PROPERTY v6; // edx
  __int64 v7; // rcx
  _DEVICE_OBJECT *SafePhysicalDevice; // rbp
  __int16 v9; // ax
  const void *_a1; // rcx
  NTSTATUS v11; // eax
  unsigned __int8 v12; // dl
  unsigned __int8 v13; // dl
  FX_POOL_TRACKER *v14; // r14
  NTSTATUS v15; // eax
  unsigned __int8 v16; // dl
  unsigned __int16 v17; // dx
  void *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int length; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = Fdo->m_Globals;
  length = 0;
  *(_QWORD *)&PropertyString->Length = 0LL;
  PropertyString->Buffer = 0LL;
  SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(Fdo);
  if ( SafePhysicalDevice )
  {
    v11 = IoGetDeviceProperty(SafePhysicalDevice, v6, 0, 0LL, &length);
    if ( v11 == -1073741789 )
    {
      v14 = (FX_POOL_TRACKER *)FxPoolAllocator(
                                 m_Globals,
                                 &m_Globals->FxPoolFrameworks,
                                 1u,
                                 length,
                                 m_Globals->Tag,
                                 retaddr);
      if ( v14 )
      {
        v15 = IoGetDeviceProperty(SafePhysicalDevice, (DEVICE_REGISTRY_PROPERTY)DeviceProperty, length, v14, &length);
        if ( v15 >= 0 )
        {
          v17 = length;
          PropertyString->Buffer = (wchar_t *)v14;
          PropertyString->MaximumLength = v17;
          PropertyString->Length = v17 - 2;
          *((_WORD *)&v14->Link.Flink + ((unsigned __int64)(unsigned __int16)(v17 - 2) >> 1)) = 0;
        }
        else
        {
          WPP_IFR_SF_DDd(m_Globals, v16, 0x12u, 0x14u, WPP_FxTelemetryKm_cpp_Traceguids, length, DeviceProperty, v15);
          FxPoolFree(v14);
        }
      }
      else
      {
        WPP_IFR_SF_DDd(
          m_Globals,
          v13,
          0x12u,
          0x13u,
          WPP_FxTelemetryKm_cpp_Traceguids,
          DeviceProperty,
          length,
          -1073741670);
      }
    }
    else
    {
      WPP_IFR_SF_DDd(m_Globals, v12, 0x12u, 0x12u, WPP_FxTelemetryKm_cpp_Traceguids, DeviceProperty, length, v11);
    }
  }
  else
  {
    v9 = *(_WORD *)(v7 + 10);
    _a1 = (const void *)(v7 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v9 )
      _a1 = 0LL;
    WPP_IFR_SF_qL(m_Globals, 2u, 0x12u, 0x11u, WPP_FxTelemetryKm_cpp_Traceguids, _a1, 0xC0000010);
  }
}
