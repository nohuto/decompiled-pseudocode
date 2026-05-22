/*
 * XREFs of ?TelemetryDdiDevice_Added_@RawInputProvidersTracing@@QEAAXKW4InputType@@QEBG@Z @ 0x180060220
 * Callers:
 *     ?OnDdiDeviceAdded@SpatialRimDeviceCollection@@UEAAJW4InputType@@KAEBUMPCControllerDeviceInfo@@@Z @ 0x180062EF0 (-OnDdiDeviceAdded@SpatialRimDeviceCollection@@UEAAJW4InputType@@KAEBUMPCControllerDeviceInfo@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800278A4 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18004B650 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?Initialize@DevicePropertyHelper@DevicePropertyHelpers@@QEAAJXZ @ 0x18005F088 (-Initialize@DevicePropertyHelper@DevicePropertyHelpers@@QEAAJXZ.c)
 *     ??$GetDriverProperty@PEAUHSTRING__@@@DevicePropertyHelper@DevicePropertyHelpers@@QEBAJAEBU_DEVPROPKEY@@PEAPEAUHSTRING__@@@Z @ 0x18005F194 (--$GetDriverProperty@PEAUHSTRING__@@@DevicePropertyHelper@DevicePropertyHelpers@@QEBAJAEBU_DEVPR.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18005F358 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=6
HRESULT __fastcall RawInputProvidersTracing::TelemetryDdiDevice_Added_(__int64 a1, int a2, __int64 a3, WCHAR *a4)
{
  ULONG v5; // edi
  ULONG *p_Size; // rcx
  CONFIGRET Device_Interface_PropertyW; // eax
  const struct _TlgProvider_t *v8; // rcx
  const WCHAR *v9; // rdx
  __int64 v10; // rax
  ULONG PropertyBufferSize; // [rsp+38h] [rbp-69h] BYREF
  DEVPROPTYPE PropertyType; // [rsp+3Ch] [rbp-65h] BYREF
  __int64 v14; // [rsp+40h] [rbp-61h]
  WCHAR *v15; // [rsp+48h] [rbp-59h]
  HSTRING string; // [rsp+50h] [rbp-51h] BYREF
  BYTE PropertyBuffer[16]; // [rsp+58h] [rbp-49h] BYREF
  HSTRING v18; // [rsp+68h] [rbp-39h] BYREF
  HSTRING v19; // [rsp+70h] [rbp-31h] BYREF
  HSTRING v20; // [rsp+78h] [rbp-29h] BYREF
  HSTRING v21; // [rsp+80h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-19h] BYREF
  int *v23; // [rsp+A8h] [rbp+7h]
  __int64 v24; // [rsp+B0h] [rbp+Fh]
  ULONG *p_PropertyBufferSize; // [rsp+B8h] [rbp+17h]
  __int64 v26; // [rsp+C0h] [rbp+1Fh]
  const WCHAR *v27; // [rsp+C8h] [rbp+27h]
  int v28; // [rsp+D0h] [rbp+2Fh]
  int v29; // [rsp+D4h] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]
  int v31; // [rsp+110h] [rbp+6Fh] BYREF

  v31 = a2;
  v14 = -2LL;
  v5 = a3;
  string = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v15 = a4;
  LODWORD(pData.Ptr) = 0;
  std::wstring::wstring((char *)&pData.Size, a4, a3);
  LODWORD(v24) = 0;
  if ( (int)DevicePropertyHelpers::DevicePropertyHelper::Initialize((DEVNODE *)&pData) >= 0 )
  {
    PropertyBufferSize = 16;
    if ( LODWORD(pData.Ptr) )
    {
      p_Size = &pData.Size;
      if ( (unsigned __int64)v23 >= 8 )
        p_Size = *(ULONG **)&pData.Size;
      Device_Interface_PropertyW = CM_Get_Device_Interface_PropertyW(
                                     (LPCWSTR)p_Size,
                                     &DEVPKEY_DeviceInterface_ClassGuid,
                                     &PropertyType,
                                     PropertyBuffer,
                                     &PropertyBufferSize,
                                     0);
      if ( Device_Interface_PropertyW )
        CM_MapCrToWin32Err(Device_Interface_PropertyW, 0x507u);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5C,
        (__int64)"internal\\onecoreuapanalog\\inc\\input\\common\\devicepropertyhelpers.h",
        (const char *)0x8007139FLL);
    }
    WindowsDeleteString(string);
    string = 0LL;
    DevicePropertyHelpers::DevicePropertyHelper::GetDriverProperty<HSTRING__ *>(&pData, &DEVPKEY_NAME, &string);
    WindowsDeleteString(v18);
    v18 = 0LL;
    DevicePropertyHelpers::DevicePropertyHelper::GetDriverProperty<HSTRING__ *>(
      &pData,
      &DEVPKEY_Device_Manufacturer,
      &v18);
    WindowsDeleteString(v19);
    v19 = 0LL;
    DevicePropertyHelpers::DevicePropertyHelper::GetDriverProperty<HSTRING__ *>(&pData, &DEVPKEY_Device_Model, &v19);
    WindowsDeleteString(v20);
    v20 = 0LL;
    DevicePropertyHelpers::DevicePropertyHelper::GetDriverProperty<HSTRING__ *>(
      &pData,
      &DEVPKEY_Device_FirmwareVersion,
      &v20);
    WindowsDeleteString(v21);
    v21 = 0LL;
    DevicePropertyHelpers::DevicePropertyHelper::GetDriverProperty<HSTRING__ *>(
      &pData,
      &DEVPKEY_Device_DriverVersion,
      &v21);
  }
  std::wstring::~wstring((__int64)&pData.Size);
  v8 = (const struct _TlgProvider_t *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
  if ( *(_DWORD *)v8 > 4u
    && (*((_QWORD *)v8 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v8 + 3) & 0x400000000000LL) == *((_QWORD *)v8 + 3) )
  {
    v23 = &v31;
    v24 = 4LL;
    PropertyBufferSize = v5;
    p_PropertyBufferSize = &PropertyBufferSize;
    v26 = 4LL;
    v9 = &sourceString;
    LODWORD(v10) = 0;
    if ( a4 )
    {
      v9 = a4;
      v10 = -1LL;
      do
        ++v10;
      while ( a4[v10] );
    }
    v27 = v9;
    v28 = 2 * v10 + 2;
    v29 = 0;
    TlgWrite(v8, &unk_180167FEA, 0LL, 0LL, 5u, &pData);
  }
  WindowsDeleteString(v21);
  v21 = 0LL;
  WindowsDeleteString(v20);
  v20 = 0LL;
  WindowsDeleteString(v19);
  v19 = 0LL;
  WindowsDeleteString(v18);
  v18 = 0LL;
  return WindowsDeleteString(string);
}
