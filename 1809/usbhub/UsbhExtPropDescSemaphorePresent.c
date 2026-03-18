/*
 * XREFs of UsbhExtPropDescSemaphorePresent @ 0x1C004356C
 * Callers:
 *     UsbhInstallMsOs20RegistryProperties @ 0x1C0043D54 (UsbhInstallMsOs20RegistryProperties.c)
 *     UsbhInstallMsOsExtendedProperties @ 0x1C0043E2C (UsbhInstallMsOsExtendedProperties.c)
 * Callees:
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     UsbhGetPdoRegistryParameter @ 0x1C0024898 (UsbhGetPdoRegistryParameter.c)
 *     UsbhSetPdoRegistryParameter @ 0x1C0028CE0 (UsbhSetPdoRegistryParameter.c)
 *     __security_check_cookie @ 0x1C002B380 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 */

bool __fastcall UsbhExtPropDescSemaphorePresent(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v2; // rbx
  int PdoRegistryParameter; // eax
  int v4; // eax
  int v5; // ecx
  bool result; // al
  __int64 v7; // [rsp+30h] [rbp-51h]
  __int64 v8; // [rsp+30h] [rbp-51h]
  ULONG v9; // [rsp+38h] [rbp-49h]
  ULONG v10; // [rsp+38h] [rbp-49h]
  ULONG v11; // [rsp+38h] [rbp-49h]
  int v12; // [rsp+48h] [rbp-39h] BYREF
  int v13; // [rsp+4Ch] [rbp-35h] BYREF
  int Data; // [rsp+50h] [rbp-31h] BYREF
  WCHAR v15[12]; // [rsp+58h] [rbp-29h] BYREF
  WCHAR v16[16]; // [rsp+70h] [rbp-11h] BYREF
  WCHAR SourceString[24]; // [rsp+90h] [rbp+Fh] BYREF

  wcscpy(SourceString, L"ExtPropDescSemaphore");
  wcscpy(v15, L"RevisionId");
  wcscpy(v16, L"VendorRevision");
  Data = 0;
  v12 = 0;
  v13 = 0;
  LOBYTE(v9) = 1;
  v2 = PdoExt((__int64)DeviceObject);
  PdoRegistryParameter = UsbhGetPdoRegistryParameter(DeviceObject, v15, &v12, 4u, 0LL, 0LL, v9);
  if ( (int)(PdoRegistryParameter + 0x80000000) >= 0
    && PdoRegistryParameter != -1073741772
    && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v7) = PdoRegistryParameter;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xAu,
      (__int64)&WPP_c6777b7ca9cb390c8f4ecb2d286168f6_Traceguids,
      v7);
  }
  LOBYTE(v10) = 1;
  v4 = UsbhGetPdoRegistryParameter(DeviceObject, v16, &v13, 4u, 0LL, 0LL, v10);
  if ( ((v4 + 0x80000000) & 0x80000000) == 0 && v4 != -1073741772 && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v8) = v4;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xBu,
      (__int64)&WPP_c6777b7ca9cb390c8f4ecb2d286168f6_Traceguids,
      v8);
  }
  LOBYTE(v11) = 1;
  result = 1;
  if ( (int)UsbhGetPdoRegistryParameter(DeviceObject, SourceString, &Data, 4u, 0LL, 0LL, v11) < 0
    || v12 != *((unsigned __int16 *)v2 + 706)
    || ((v2[706] & 0x400) != 0 || v13)
    && ((v2[706] & 0x400) == 0 || v13 != *(unsigned __int16 *)(*((_QWORD *)v2 + 360) + 4LL)) )
  {
    Data = 1;
    if ( (int)UsbhSetPdoRegistryParameter(DeviceObject, SourceString, 4u, &Data, 4u) >= 0 )
    {
      v12 = *((unsigned __int16 *)v2 + 706);
      if ( (int)UsbhSetPdoRegistryParameter(DeviceObject, v15, 4u, &v12, 4u) >= 0 )
      {
        v5 = (v2[706] & 0x400) != 0 ? *(unsigned __int16 *)(*((_QWORD *)v2 + 360) + 4LL) : 0;
        v13 = v5;
        if ( (int)UsbhSetPdoRegistryParameter(DeviceObject, v16, 4u, &v13, 4u) >= 0 )
          return 0;
      }
    }
  }
  return result;
}
