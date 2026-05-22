/*
 * XREFs of ?Initialize@DevicePropertyHelper@DevicePropertyHelpers@@QEAAJXZ @ 0x18005F088
 * Callers:
 *     ?TelemetryDdiDevice_Added_@RawInputProvidersTracing@@QEAAXKW4InputType@@QEBG@Z @ 0x180060220 (-TelemetryDdiDevice_Added_@RawInputProvidersTracing@@QEAAXKW4InputType@@QEBG@Z.c)
 *     ?OpenBestMatchingControllerKey@SpatialInteractionDevices@@YAJPEB_WGGGW4Handedness@1@PEAPEAUHKEY__@@PEA_N@Z @ 0x1800A2530 (-OpenBestMatchingControllerKey@SpatialInteractionDevices@@YAJPEB_WGGGW4Handedness@1@PEAPEAUHKEY_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

__int64 __fastcall DevicePropertyHelpers::DevicePropertyHelper::Initialize(DEVNODE *this)
{
  char *v2; // rcx
  CONFIGRET Device_Interface_PropertyW; // eax
  signed int v4; // eax
  signed int v5; // ecx
  CONFIGRET DevNodeW; // eax
  signed int v8; // eax
  ULONG PropertyBufferSize; // [rsp+30h] [rbp-1B8h] BYREF
  DEVPROPTYPE PropertyType[3]; // [rsp+34h] [rbp-1B4h] BYREF
  WCHAR PropertyBuffer[200]; // [rsp+40h] [rbp-1A8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+0h]

  PropertyBufferSize = 400;
  v2 = (char *)(this + 2);
  if ( *((_QWORD *)v2 + 3) >= 8uLL )
    v2 = *(char **)v2;
  Device_Interface_PropertyW = CM_Get_Device_Interface_PropertyW(
                                 (LPCWSTR)v2,
                                 &DEVPKEY_Device_InstanceId,
                                 PropertyType,
                                 (PBYTE)PropertyBuffer,
                                 &PropertyBufferSize,
                                 0);
  if ( Device_Interface_PropertyW )
  {
    v4 = CM_MapCrToWin32Err(Device_Interface_PropertyW, 0x507u);
    v5 = (unsigned __int16)v4 | 0x80070000;
    if ( v4 <= 0 )
      v5 = v4;
    if ( v5 < 0 )
      return (unsigned int)v5;
  }
  if ( PropertyType[0] == 18 )
  {
    DevNodeW = CM_Locate_DevNodeW(this + 10, PropertyBuffer, 0);
    if ( DevNodeW )
    {
      v8 = CM_MapCrToWin32Err(DevNodeW, 0x507u);
      v5 = (unsigned __int16)v8 | 0x80070000;
      if ( v8 <= 0 )
        v5 = v8;
      if ( v5 < 0 )
        return (unsigned int)v5;
    }
    *this = 1;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4B,
      (__int64)"internal\\onecoreuapanalog\\inc\\input\\common\\devicepropertyhelpers.h",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
}
