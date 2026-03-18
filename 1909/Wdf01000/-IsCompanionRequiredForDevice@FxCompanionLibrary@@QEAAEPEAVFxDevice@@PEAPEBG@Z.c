/*
 * XREFs of ?IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z @ 0x1C0043988
 * Callers:
 *     ?PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ @ 0x1C00857B4 (-PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000459C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00055A0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C000D650 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     __security_check_cookie @ 0x1C001A3B0 (__security_check_cookie.c)
 *     memset @ 0x1C001B300 (memset.c)
 *     WPP_IFR_SF_ @ 0x1C0033794 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_Zd @ 0x1C004461C (WPP_IFR_SF_Zd.c)
 *     ?_QueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@K3PEAK5@Z @ 0x1C0052834 (-_QueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropert.c)
 *     ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x1C0061EE0 (-_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z.c)
 *     GetNameFromPath @ 0x1C0063474 (GetNameFromPath.c)
 *     ?_VerifyMultiSzString@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAGK@Z @ 0x1C006381C (-_VerifyMultiSzString@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAGK@Z.c)
 *     ?GetSecureSoftwareDeviceTag@CUmdfSvcConfig@@QEAAJPEAXPEAK@Z @ 0x1C0092674 (-GetSecureSoftwareDeviceTag@CUmdfSvcConfig@@QEAAJPEAXPEAK@Z.c)
 *     ?IsCompanionSecure@CUmdfSvcConfig@@SAJPEAXPEAE@Z @ 0x1C0092760 (-IsCompanionSecure@CUmdfSvcConfig@@SAJPEAXPEAE@Z.c)
 *     ?OpenServiceKey@CUmdfSvcConfig@@QEAAJPEBGKPEAPEAX@Z @ 0x1C009287C (-OpenServiceKey@CUmdfSvcConfig@@QEAAJPEBGKPEAPEAX@Z.c)
 */

char __fastcall FxCompanionLibrary::IsCompanionRequiredForDevice(
        FxCompanionLibrary *this,
        FxDevice *Device,
        const wchar_t **CompanionName)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FX_POOL_TRACKER *v4; // r14
  _DEVICE_OBJECT *SafePhysicalDevice; // rax
  char v6; // r12
  char v7; // r13
  NTSTATUS SecureSoftwareDeviceTag; // eax
  unsigned __int16 v9; // r9
  unsigned int v10; // r8d
  unsigned __int16 v11; // r9
  unsigned __int8 v12; // dl
  unsigned int v13; // r8d
  NTSTATUS globals; // eax
  unsigned __int8 v15; // dl
  int v16; // ecx
  size_t v17; // r15
  FX_POOL_TRACKER *v18; // rax
  unsigned int v19; // r8d
  _QWORD *v20; // rax
  FxPropertyType traceGuid; // [rsp+20h] [rbp-E0h]
  unsigned __int8 secureCompanionFromInf[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int requiredSize; // [rsp+54h] [rbp-ACh] BYREF
  void *dataType; // [rsp+58h] [rbp-A8h] BYREF
  FxAutoRegKey kmdfSvcKey; // [rsp+60h] [rbp-A0h] BYREF
  FxAutoRegKey deviceRegKey; // [rsp+68h] [rbp-98h] BYREF
  unsigned int devCapSecureDevice; // [rsp+70h] [rbp-90h] BYREF
  FxAutoRegKey companionRegKey; // [rsp+78h] [rbp-88h] BYREF
  _UNICODE_STRING companionServiceListKeyName; // [rsp+80h] [rbp-80h] BYREF
  _WDF_DEVICE_PROPERTY_DATA deviceData; // [rsp+90h] [rbp-70h] BYREF
  __int64 v32; // [rsp+A8h] [rbp-58h]
  __int128 v33; // [rsp+B0h] [rbp-50h]
  _UNICODE_STRING serviceNameUnicodeString; // [rsp+C0h] [rbp-40h] BYREF
  CUmdfSvcConfig umdfSvcConfig; // [rsp+D0h] [rbp-30h] BYREF
  _UNICODE_STRING companionKeyName; // [rsp+E0h] [rbp-20h] BYREF
  FxDevice *v37; // [rsp+F0h] [rbp-10h]
  const wchar_t **v38; // [rsp+F8h] [rbp-8h]
  wchar_t companionServiceListKeyName_buffer[24]; // [rsp+100h] [rbp+0h] BYREF
  wchar_t companionKeyName_buffer[32]; // [rsp+130h] [rbp+30h] BYREF
  void *retaddr; // [rsp+1B8h] [rbp+B8h]

  m_Globals = Device->m_Globals;
  *(_QWORD *)&serviceNameUnicodeString.Length = 0LL;
  serviceNameUnicodeString.Buffer = 0LL;
  v4 = 0LL;
  wcscpy(companionKeyName_buffer, L"WUDF\\CompanionConfigurations");
  companionKeyName.Buffer = companionKeyName_buffer;
  v38 = CompanionName;
  v37 = Device;
  wcscpy(companionServiceListKeyName_buffer, L"CompanionServiceList");
  deviceRegKey.m_Key = 0LL;
  companionRegKey.m_Key = 0LL;
  kmdfSvcKey.m_Key = 0LL;
  *(_QWORD *)&companionKeyName.Length = 3801144LL;
  *(_QWORD *)&companionServiceListKeyName.Length = 2752552LL;
  companionServiceListKeyName.Buffer = companionServiceListKeyName_buffer;
  umdfSvcConfig.m_Key = 0LL;
  umdfSvcConfig.m_AutoClose = 1;
  SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(Device);
  secureCompanionFromInf[0] = 0;
  v6 = 0;
  v7 = 0;
  SecureSoftwareDeviceTag = IoOpenDeviceRegistryKey(SafePhysicalDevice, 1u, 0x20000u, &deviceRegKey.m_Key);
  if ( SecureSoftwareDeviceTag < 0 )
  {
    v9 = 22;
LABEL_3:
    v10 = 12;
LABEL_40:
    WPP_IFR_SF_d(m_Globals, 2u, v10, v9, WPP_FxCompanionLibrary_cpp_Traceguids, SecureSoftwareDeviceTag);
    goto $exit_2;
  }
  deviceData.PropertyKey = (const _DEVPROPKEY *)deviceRegKey.m_Key;
  *(_QWORD *)&deviceData.Size = 48LL;
  *(_QWORD *)&deviceData.Lcid = &companionKeyName;
  v32 = 576LL;
  v33 = 0LL;
  SecureSoftwareDeviceTag = ZwOpenKey(&companionRegKey.m_Key, 0x80000000, (POBJECT_ATTRIBUTES)&deviceData);
  if ( SecureSoftwareDeviceTag < 0 )
  {
    if ( SecureSoftwareDeviceTag == -1073741772 )
      goto $exit_2;
    v9 = 23;
    goto LABEL_3;
  }
  GetNameFromPath(&m_Globals->Driver->m_RegistryPath, &serviceNameUnicodeString);
  if ( !serviceNameUnicodeString.Length )
  {
    v11 = 24;
    v12 = 2;
    v13 = 12;
LABEL_9:
    WPP_IFR_SF_(m_Globals, v12, v13, v11, WPP_FxCompanionLibrary_cpp_Traceguids);
    goto $exit_2;
  }
  deviceData.PropertyKey = (const _DEVPROPKEY *)companionRegKey.m_Key;
  *(_QWORD *)&deviceData.Size = 48LL;
  *(_QWORD *)&deviceData.Lcid = &serviceNameUnicodeString;
  v32 = 576LL;
  v33 = 0LL;
  globals = ZwOpenKey(&kmdfSvcKey.m_Key, 0x80000000, (POBJECT_ATTRIBUTES)&deviceData);
  if ( globals >= 0 )
  {
    SecureSoftwareDeviceTag = CUmdfSvcConfig::GetSecureSoftwareDeviceTag(
                                &umdfSvcConfig,
                                deviceRegKey.m_Key,
                                (unsigned int *)&dataType);
    if ( SecureSoftwareDeviceTag < 0 )
    {
      if ( SecureSoftwareDeviceTag != -1073741772 )
      {
        v9 = 27;
        goto LABEL_39;
      }
    }
    else
    {
      WPP_IFR_SF_(m_Globals, 4u, 0x11u, 0x1Au, WPP_FxCompanionLibrary_cpp_Traceguids);
      v7 = 1;
    }
    v16 = FxRegKey::_QueryValue(m_Globals, kmdfSvcKey.m_Key, &companionServiceListKeyName, 0, 0LL, &requiredSize, 0LL);
    if ( (int)(v16 + 0x80000000) >= 0 && v16 != -2147483643 )
    {
      WPP_IFR_SF_d(m_Globals, 2u, 0x11u, 0x1Cu, WPP_FxCompanionLibrary_cpp_Traceguids, v16);
      goto $exit_2;
    }
    v17 = requiredSize;
    v18 = (FX_POOL_TRACKER *)FxPoolAllocator(
                               m_Globals,
                               &m_Globals->FxPoolFrameworks,
                               1u,
                               requiredSize,
                               m_Globals->Tag,
                               retaddr);
    v4 = v18;
    if ( !v18 )
    {
      WPP_IFR_SF_d(m_Globals, 2u, 0x11u, 0x1Du, WPP_FxCompanionLibrary_cpp_Traceguids, -1073741670);
      goto $exit_2;
    }
    memset(v18, 0, v17);
    SecureSoftwareDeviceTag = FxRegKey::_QueryValue(
                                m_Globals,
                                kmdfSvcKey.m_Key,
                                &companionServiceListKeyName,
                                requiredSize,
                                v4,
                                &requiredSize,
                                (unsigned int *)&dataType);
    if ( SecureSoftwareDeviceTag < 0 || (_DWORD)dataType != 7 )
    {
      v9 = 30;
      goto LABEL_39;
    }
    if ( FxRegKey::_VerifyMultiSzString(m_Globals, &companionServiceListKeyName, (wchar_t *)v4, requiredSize) < 0 )
      goto $exit_2;
    SecureSoftwareDeviceTag = CUmdfSvcConfig::OpenServiceKey(&umdfSvcConfig, (const wchar_t *)v4, v19, &dataType);
    if ( SecureSoftwareDeviceTag >= 0 )
    {
      SecureSoftwareDeviceTag = CUmdfSvcConfig::IsCompanionSecure(dataType, secureCompanionFromInf);
      if ( SecureSoftwareDeviceTag >= 0 )
      {
        if ( !v7 && secureCompanionFromInf[0] )
        {
          deviceData.PropertyKey = &DEVPKEY_Device_Capabilities;
          *(_QWORD *)&deviceData.Size = 24LL;
          *(_QWORD *)&deviceData.Lcid = 0LL;
          SecureSoftwareDeviceTag = FxDevice::_QueryPropertyEx(
                                      m_Globals,
                                      0LL,
                                      v37,
                                      &deviceData,
                                      traceGuid,
                                      4u,
                                      &devCapSecureDevice,
                                      &requiredSize,
                                      (unsigned int *)&dataType);
          if ( SecureSoftwareDeviceTag < 0 )
          {
            v9 = 33;
            goto LABEL_39;
          }
          SecureSoftwareDeviceTag = (int)dataType;
          if ( (_DWORD)dataType != 7 )
          {
            v9 = 34;
            goto LABEL_39;
          }
          if ( (devCapSecureDevice & 0x400) == 0 )
          {
            v11 = 35;
            v13 = 17;
            v12 = 4;
            goto LABEL_9;
          }
        }
        v6 = 1;
        goto $exit_2;
      }
      v9 = 32;
    }
    else
    {
      v9 = 31;
    }
LABEL_39:
    v10 = 17;
    goto LABEL_40;
  }
  if ( globals != -1073741772 )
    WPP_IFR_SF_Zd(
      m_Globals,
      v15,
      0xCu,
      0x19u,
      WPP_FxCompanionLibrary_cpp_Traceguids,
      &serviceNameUnicodeString,
      globals);
$exit_2:
  v20 = v38;
  *v38 = 0LL;
  if ( v4 )
  {
    if ( v6 )
      *v20 = v4;
    else
      FxPoolFree(v4);
  }
  if ( umdfSvcConfig.m_AutoClose && umdfSvcConfig.m_Key )
    ZwClose(umdfSvcConfig.m_Key);
  if ( kmdfSvcKey.m_Key )
    ZwClose(kmdfSvcKey.m_Key);
  if ( companionRegKey.m_Key )
    ZwClose(companionRegKey.m_Key);
  if ( deviceRegKey.m_Key )
    ZwClose(deviceRegKey.m_Key);
  return v6;
}
