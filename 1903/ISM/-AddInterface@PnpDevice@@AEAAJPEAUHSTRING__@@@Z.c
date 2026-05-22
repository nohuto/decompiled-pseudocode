/*
 * XREFs of ?AddInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z @ 0x1800AD8D4
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x180016BA0 (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDeviceGuidProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAU_GUID@@@Z @ 0x180017390 (-GetDeviceGuidProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAU_GUID.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x1800AC930 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall PnpDevice::AddInterface(HSTRING *this, HSTRING a2)
{
  __int64 result; // rax
  int v4; // eax
  unsigned int v5; // ebx
  HSTRING v6; // [rsp+20h] [rbp-38h] BYREF
  HSTRING v7; // [rsp+28h] [rbp-30h] BYREF
  struct _DEVPROPKEY v8; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v6 = a2;
  if ( *((_DWORD *)this + 29) == 1 )
  {
    v7 = v6;
    result = PnpApiWrapper::Details::GetDeviceGuidProperty(
               (PnpApiWrapper::Details *)PnpApiWrapper::Adapters::GetDeviceInterfaceProperty,
               (unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *))&v7,
               (void *)&DEVPKEY_DeviceInterface_ClassGuid,
               &v8);
    if ( (int)result < 0 )
      return result;
    if ( !this[4] )
    {
      v4 = Microsoft::WRL::Wrappers::HString::Set(this + 4, &v6);
      v5 = v4;
      if ( v4 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x28A,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevice.cpp",
          (const char *)(unsigned int)v4);
        return v5;
      }
      *((_OWORD *)this + 4) = v8.fmtid;
    }
    return 0LL;
  }
  else if ( (unsigned int)(*((_DWORD *)this + 29) - 2) < 2 )
  {
    return 1LL;
  }
  else
  {
    return 2147549183LL;
  }
}
