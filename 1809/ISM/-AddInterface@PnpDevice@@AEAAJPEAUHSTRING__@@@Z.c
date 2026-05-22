/*
 * XREFs of ?AddInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z @ 0x180073AB0
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18007165C (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDeviceGuidProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAU_GUID@@@Z @ 0x180076A38 (-GetDeviceGuidProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAU_GUID.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

__int64 __fastcall PnpDevice::AddInterface(PnpDevice *this, struct _GUID *a2)
{
  __int64 result; // rax
  HRESULT v5; // eax
  unsigned int v6; // ebx
  struct _GUID *v7; // [rsp+20h] [rbp-28h] BYREF
  struct _DEVPROPKEY v8; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *((_DWORD *)this + 29) == 1 )
  {
    result = PnpApiWrapper::Details::GetDeviceGuidProperty(
               (PnpApiWrapper::Details *)PnpApiWrapper::Adapters::GetDeviceInterfaceProperty,
               (unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *))&v7,
               (void *)&DEVPKEY_DeviceInterface_ClassGuid,
               &v8,
               a2);
    if ( (int)result < 0 )
      return result;
    if ( !*((_QWORD *)this + 4) )
    {
      WindowsDeleteString(0LL);
      *((_QWORD *)this + 4) = 0LL;
      v5 = WindowsDuplicateString((HSTRING)a2, (HSTRING *)this + 4);
      v6 = v5;
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x28A,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevice.cpp",
          (const char *)(unsigned int)v5);
        return v6;
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
