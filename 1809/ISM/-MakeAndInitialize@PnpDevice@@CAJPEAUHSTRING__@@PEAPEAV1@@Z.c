/*
 * XREFs of ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z @ 0x1800736A8
 * Callers:
 *     ?FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x180071C64 (-FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ParseHardwareIdStrings@PnpDevice@@AEAAJPEAUHSTRING__@@@Z @ 0x180073B90 (-ParseHardwareIdStrings@PnpDevice@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z @ 0x1800766E8 (-ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z.c)
 *     ?GetDeviceGuidProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAU_GUID@@@Z @ 0x180076A38 (-GetDeviceGuidProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAU_GUID.c)
 *     ?GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAUHSTRING__@@@Z @ 0x180076B94 (-GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAU.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PnpDevice::MakeAndInitialize(HSTRING string, struct PnpDevice **a2)
{
  volatile __int32 *v4; // rax
  volatile __int32 *v5; // rbx
  HSTRING *v7; // rsi
  HRESULT v8; // eax
  int DeviceGuidProperty; // esi
  bool v10; // zf
  void (__fastcall *v11)(volatile __int32 *); // rax
  DEVINST *v12; // r15
  WCHAR *StringRawBuffer; // rax
  CONFIGRET DevNodeW; // eax
  int v15; // eax
  int v16; // edx
  void (__fastcall *v17)(volatile __int32 *); // rax
  DEVINST v18; // eax
  int i; // r14d
  CONFIGRET Parent; // eax
  unsigned int v21; // edx
  struct _GUID *v22; // [rsp+20h] [rbp-50h] BYREF
  struct _DEVPROPKEY stringa; // [rsp+28h] [rbp-48h] BYREF
  DEVINST v24; // [rsp+40h] [rbp-30h] BYREF
  __int64 v25; // [rsp+48h] [rbp-28h]
  struct _DEVPROPKEY v26; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v25 = -2LL;
  *a2 = 0LL;
  v4 = (volatile __int32 *)malloc(0x80uLL);
  v5 = v4;
  if ( v4 )
  {
    memset_0((void *)v4, 0, 0x80uLL);
    *(_QWORD *)v5 = &RefCountedObject::`vftable';
    *((_DWORD *)v5 + 2) = 1;
    *(_QWORD *)v5 = &PnpDevice::`vftable';
    *((_QWORD *)v5 + 2) = 0LL;
    *((_QWORD *)v5 + 3) = 0LL;
    *((_QWORD *)v5 + 4) = 0LL;
    *((_QWORD *)v5 + 5) = -1LL;
    *((GUID *)v5 + 3) = DirectX::g_XMZero;
    *((GUID *)v5 + 4) = DirectX::g_XMZero;
    *((GUID *)v5 + 5) = DirectX::g_XMZero;
    *((_QWORD *)v5 + 12) = 0LL;
    *((_QWORD *)v5 + 13) = 0LL;
    *((_QWORD *)v5 + 14) = 0LL;
    *((_BYTE *)v5 + 120) = 0;
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v5 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x242,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevice.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  v7 = (HSTRING *)(v5 + 6);
  if ( !string || string != *v7 )
  {
    WindowsDeleteString(*v7);
    *v7 = 0LL;
    v8 = WindowsDuplicateString(string, (HSTRING *)v5 + 3);
    DeviceGuidProperty = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x245,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevice.cpp",
        (const char *)(unsigned int)v8);
      v10 = _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1;
LABEL_10:
      if ( !v10 )
        return (unsigned int)DeviceGuidProperty;
      v11 = *(void (__fastcall **)(volatile __int32 *))(*(_QWORD *)v5 + 32LL);
      goto LABEL_12;
    }
  }
  v12 = (DEVINST *)(v5 + 24);
  StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(string, 0LL);
  DevNodeW = CM_Locate_DevNodeW((PDEVINST)v5 + 24, StringRawBuffer, 0);
  if ( !DevNodeW )
    goto LABEL_22;
  *v12 = 0;
  v15 = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)DevNodeW, 0x80070490);
  DeviceGuidProperty = v15;
  if ( v15 == v16 )
  {
    DeviceGuidProperty = v16;
    goto LABEL_16;
  }
  if ( v15 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x30F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
      (const char *)(unsigned int)v15);
  else
LABEL_22:
    DeviceGuidProperty = 0;
  if ( DeviceGuidProperty < 0 )
  {
LABEL_16:
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      v17 = *(void (__fastcall **)(volatile __int32 *))(*(_QWORD *)v5 + 32LL);
      *((_DWORD *)v5 + 2) = 1;
      v17(v5);
      *((_DWORD *)v5 + 2) = 0;
      (*(void (__fastcall **)(volatile __int32 *, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
    }
    return (unsigned int)DeviceGuidProperty;
  }
  *(_DWORD *)stringa.fmtid.Data4 = *v12;
  DeviceGuidProperty = PnpApiWrapper::Details::GetDeviceGuidProperty(
                         (PnpApiWrapper::Details *)PnpApiWrapper::Adapters::GetDeviceNodeProperty,
                         (unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *))stringa.fmtid.Data4,
                         (void *)&DEVPKEY_Device_ClassGuid,
                         (const struct _DEVPROPKEY *)(v5 + 12),
                         v22);
  if ( DeviceGuidProperty < 0 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) != 1 )
      return (unsigned int)DeviceGuidProperty;
    v11 = *(void (__fastcall **)(volatile __int32 *))(*(_QWORD *)v5 + 32LL);
LABEL_12:
    *((_DWORD *)v5 + 2) = 1;
    v11(v5);
    *((_DWORD *)v5 + 2) = 0;
    (*(void (__fastcall **)(volatile __int32 *, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
    return (unsigned int)DeviceGuidProperty;
  }
  v18 = *v12;
  *((_DWORD *)v5 + 26) = *v12;
  *((_OWORD *)v5 + 5) = *((_OWORD *)v5 + 3);
  HIDWORD(v22) = v18;
  for ( i = 1; ; ++i )
  {
    Parent = CM_Get_Parent((PDEVINST)&v22 + 1, v18, 0);
    if ( !Parent )
      goto LABEL_32;
    HIDWORD(v22) = 0;
    DeviceGuidProperty = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)Parent, v21);
    if ( DeviceGuidProperty == -2147023728 )
    {
      DeviceGuidProperty = -2147023728;
      goto LABEL_16;
    }
    if ( DeviceGuidProperty < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x354,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
        (const char *)(unsigned int)DeviceGuidProperty);
    else
LABEL_32:
      DeviceGuidProperty = 0;
    if ( DeviceGuidProperty < 0 )
      goto LABEL_16;
    stringa.pid = HIDWORD(v22);
    DeviceGuidProperty = PnpApiWrapper::Details::GetDeviceGuidProperty(
                           (PnpApiWrapper::Details *)PnpApiWrapper::Adapters::GetDeviceNodeProperty,
                           (unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *))&stringa.pid,
                           (void *)&DEVPKEY_Device_ClassGuid,
                           &v26,
                           v22);
    if ( DeviceGuidProperty < 0 )
    {
      v10 = _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1;
      goto LABEL_10;
    }
    if ( *(_QWORD *)&v26.fmtid.Data1 == *(_QWORD *)&DirectX::g_XMZero.Data1
      && *(_QWORD *)v26.fmtid.Data4 == *(_QWORD *)DirectX::g_XMZero.Data4 )
    {
      break;
    }
    v18 = HIDWORD(v22);
    if ( *(_QWORD *)&v26.fmtid.Data1 == 0x4647CD8BE0CBF06CLL && *(_QWORD *)v26.fmtid.Data4 == 0x74F9F0433B268ABBLL
      || *(_QWORD *)&v26.fmtid.Data1 == 0x11D074D3745A17A0LL && *(_QWORD *)v26.fmtid.Data4 == 0xDA570FC9A000FEB6uLL )
    {
      *((_OWORD *)v5 + 5) = v26.fmtid;
      *((_DWORD *)v5 + 26) = v18;
      *((_DWORD *)v5 + 25) = i;
    }
  }
  *(_QWORD *)&stringa.fmtid.Data1 = 0LL;
  WindowsDeleteString(0LL);
  *(_QWORD *)&stringa.fmtid.Data1 = 0LL;
  v24 = *v12;
  DeviceGuidProperty = PnpApiWrapper::Details::GetDeviceStringProperty(
                         (PnpApiWrapper::Details *)PnpApiWrapper::Adapters::GetDeviceNodeProperty,
                         (unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *))&v24,
                         (void *)&DEVPKEY_Device_HardwareIds,
                         &stringa,
                         (HSTRING *)v22);
  if ( DeviceGuidProperty < 0
    || (DeviceGuidProperty = PnpDevice::ParseHardwareIdStrings((PnpDevice *)v5, *(HSTRING *)&stringa.fmtid.Data1),
        DeviceGuidProperty < 0) )
  {
    WindowsDeleteString(*(HSTRING *)&stringa.fmtid.Data1);
    *(_QWORD *)&stringa.fmtid.Data1 = 0LL;
    v10 = _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1;
    goto LABEL_10;
  }
  _InterlockedExchange(v5 + 29, 1);
  *a2 = (struct PnpDevice *)v5;
  WindowsDeleteString(*(HSTRING *)&stringa.fmtid.Data1);
  return 0LL;
}
