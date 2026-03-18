/*
 * XREFs of RegistryWriteCurrentTime @ 0x1C0062D18
 * Callers:
 *     LogDriverInfoStream @ 0x1C006255C (LogDriverInfoStream.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     __security_check_cookie @ 0x1C001A980 (__security_check_cookie.c)
 */

void __fastcall RegistryWriteCurrentTime(_FX_DRIVER_GLOBALS *DriverGlobals)
{
  FxDriver *Driver; // rax
  NTSTATUS v3; // eax
  __int16 v4; // cx
  unsigned __int16 v5; // r9
  FxAutoRegKey hWdf; // [rsp+40h] [rbp-C0h] BYREF
  FxAutoRegKey hParameters; // [rsp+48h] [rbp-B8h] BYREF
  FxAutoRegKey hDriver; // [rsp+50h] [rbp-B0h] BYREF
  _LARGE_INTEGER currentTime; // [rsp+58h] [rbp-A8h] BYREF
  _UNICODE_STRING parametersPart; // [rsp+60h] [rbp-A0h] BYREF
  _UNICODE_STRING wdfPart; // [rsp+70h] [rbp-90h] BYREF
  _UNICODE_STRING wdfTimeOfLastTelemetryLog; // [rsp+80h] [rbp-80h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  _OBJECT_ATTRIBUTES v14; // [rsp+C0h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES v15; // [rsp+F0h] [rbp-10h] BYREF
  wchar_t wdfPart_buffer[4]; // [rsp+120h] [rbp+20h] BYREF
  wchar_t parametersPart_buffer[12]; // [rsp+128h] [rbp+28h] BYREF

  hDriver.m_Key = 0LL;
  hParameters.m_Key = 0LL;
  hWdf.m_Key = 0LL;
  parametersPart.Buffer = parametersPart_buffer;
  wcscpy(wdfPart_buffer, L"Wdf");
  wdfPart.Buffer = wdfPart_buffer;
  wcscpy(parametersPart_buffer, L"Parameters");
  *(_DWORD *)&parametersPart.Length = 1441812;
  *(_DWORD *)&wdfPart.Length = 524294;
  RtlInitUnicodeString(&wdfTimeOfLastTelemetryLog, L"TimeOfLastTelemetryLog");
  Driver = DriverGlobals->Driver;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &Driver->m_RegistryPath;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenKey(&hDriver.m_Key, 0x2001Fu, &ObjectAttributes);
  if ( v3 < 0 )
  {
    v4 = 13;
LABEL_7:
    v5 = v4;
    goto LABEL_10;
  }
  v14.RootDirectory = hDriver.m_Key;
  v14.Length = 48;
  v14.ObjectName = &parametersPart;
  v14.Attributes = 576;
  *(_OWORD *)&v14.SecurityDescriptor = 0LL;
  v3 = ZwCreateKey(&hParameters.m_Key, 0x2001Fu, &v14, 0, 0LL, 0, 0LL);
  if ( v3 < 0 )
  {
    v4 = 14;
    goto LABEL_7;
  }
  v15.RootDirectory = hParameters.m_Key;
  v15.Length = 48;
  v15.ObjectName = &wdfPart;
  v15.Attributes = 576;
  *(_OWORD *)&v15.SecurityDescriptor = 0LL;
  v3 = ZwCreateKey(&hWdf.m_Key, 0x2001Fu, &v15, 0, 0LL, 0, 0LL);
  if ( v3 < 0 )
  {
    v4 = 15;
    goto LABEL_7;
  }
  currentTime.QuadPart = MEMORY[0xFFFFF78000000014];
  v3 = ZwSetValueKey(hWdf.m_Key, &wdfTimeOfLastTelemetryLog, 0, 0xBu, &currentTime, 8u);
  if ( v3 >= 0 )
    goto LABEL_11;
  v5 = 16;
LABEL_10:
  WPP_IFR_SF_d(DriverGlobals, 2u, 0x11u, v5, WPP_FxTelemetryKm_cpp_Traceguids, v3);
LABEL_11:
  if ( hWdf.m_Key )
    ZwClose(hWdf.m_Key);
  if ( hParameters.m_Key )
    ZwClose(hParameters.m_Key);
  if ( hDriver.m_Key )
    ZwClose(hDriver.m_Key);
}
