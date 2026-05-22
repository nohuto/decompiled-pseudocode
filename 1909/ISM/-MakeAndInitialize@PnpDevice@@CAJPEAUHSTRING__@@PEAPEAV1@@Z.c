/*
 * XREFs of ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z @ 0x180017000
 * Callers:
 *     ?FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x180016964 (-FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@.c)
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x180016B10 (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z @ 0x180012774 (-ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z.c)
 *     ?GetDeviceGuidProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAU_GUID@@@Z @ 0x180016EB0 (-GetDeviceGuidProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAU_GUID.c)
 *     ?GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAUHSTRING__@@@Z @ 0x180017420 (-GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAU.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180029430 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     swscanf_s @ 0x18002C84C (swscanf_s.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800B13B0 (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?LogPnPDeviceInfo@LampArrayTelemetry@@QEAAXPEBGGGGG@Z @ 0x1800B1558 (-LogPnPDeviceInfo@LampArrayTelemetry@@QEAAXPEBGGGGG@Z.c)
 */

__int64 __fastcall PnpDevice::MakeAndInitialize(HSTRING string, struct PnpDevice **a2)
{
  char *v4; // rax
  char *v5; // rbx
  HRESULT v6; // eax
  unsigned int v7; // esi
  WCHAR *StringRawBuffer; // rax
  CONFIGRET DevNodeW; // eax
  unsigned int v10; // esi
  int DeviceGuidProperty; // edi
  DEVNODE v12; // r9d
  int i; // esi
  CONFIGRET Parent; // eax
  DEVNODE v15; // edx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  int DeviceStringProperty; // edi
  PCWSTR v20; // rdi
  UINT32 v21; // ecx
  size_t v22; // rsi
  bool v23; // zf
  __int16 v25; // ax
  __int16 v26; // cx
  int v27; // eax
  int v28; // eax
  unsigned int v29; // edi
  LampArrayTelemetry *v30; // rcx
  HSTRING *v31; // [rsp+20h] [rbp-49h]
  DEVNODE pdnDevInst; // [rsp+30h] [rbp-39h] BYREF
  __int16 v33; // [rsp+34h] [rbp-35h] BYREF
  __int16 v34; // [rsp+38h] [rbp-31h] BYREF
  UINT32 length; // [rsp+3Ch] [rbp-2Dh] BYREF
  struct _DEVPROPKEY stringa; // [rsp+40h] [rbp-29h] BYREF
  int v37; // [rsp+58h] [rbp-11h] BYREF
  int v38; // [rsp+60h] [rbp-9h] BYREF
  int v39; // [rsp+64h] [rbp-5h] BYREF
  __int64 v40; // [rsp+68h] [rbp-1h]
  struct _DEVPROPKEY v41; // [rsp+70h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v40 = -2LL;
  *a2 = 0LL;
  v4 = (char *)malloc(0x80uLL);
  v5 = v4;
  if ( !v4 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x242,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevice.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  memset_0(v4 + 8, 0, 0x78uLL);
  *(_QWORD *)v5 = &RefCountedObject::`vftable';
  *((_DWORD *)v5 + 2) = 1;
  *(_QWORD *)v5 = &PnpDevice::`vftable';
  *((_QWORD *)v5 + 2) = 0LL;
  *((_QWORD *)v5 + 3) = 0LL;
  *((_QWORD *)v5 + 4) = 0LL;
  *((_QWORD *)v5 + 5) = -1LL;
  *((GUID *)v5 + 3) = GUID_NULL;
  *((GUID *)v5 + 4) = GUID_NULL;
  *((GUID *)v5 + 5) = GUID_NULL;
  *((_QWORD *)v5 + 12) = 0LL;
  *((_QWORD *)v5 + 13) = 0LL;
  *((_QWORD *)v5 + 14) = 0LL;
  v5[120] = 0;
  WindowsDeleteString(0LL);
  *((_QWORD *)v5 + 3) = 0LL;
  v6 = WindowsDuplicateString(string, (HSTRING *)v5 + 3);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x245,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevice.cpp",
      (const char *)(unsigned int)v6);
    RefCountedObject::Release((RefCountedObject *)v5);
    return v7;
  }
  StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(string, 0LL);
  DevNodeW = CM_Locate_DevNodeW((PDEVINST)v5 + 24, StringRawBuffer, 0);
  v10 = -2147023728;
  if ( DevNodeW )
  {
    *((_DWORD *)v5 + 24) = 0;
    v28 = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)DevNodeW);
    v29 = v28;
    if ( v28 != -2147023728 )
    {
      if ( v28 >= 0 )
        goto LABEL_4;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30F,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
        (const char *)(unsigned int)v28);
      v10 = v29;
    }
    RefCountedObject::Release((RefCountedObject *)v5);
    return v10;
  }
LABEL_4:
  *(_DWORD *)stringa.fmtid.Data4 = *((_DWORD *)v5 + 24);
  DeviceGuidProperty = PnpApiWrapper::Details::GetDeviceGuidProperty(
                         (PnpApiWrapper::Details *)PnpApiWrapper::Adapters::GetDeviceNodeProperty,
                         (unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *))stringa.fmtid.Data4,
                         (void *)&DEVPKEY_Device_ClassGuid,
                         (const struct _DEVPROPKEY *)(v5 + 48));
  if ( DeviceGuidProperty < 0 )
  {
LABEL_40:
    RefCountedObject::Release((RefCountedObject *)v5);
    return (unsigned int)DeviceGuidProperty;
  }
  else
  {
    v12 = *((_DWORD *)v5 + 24);
    *((_DWORD *)v5 + 26) = v12;
    *((_OWORD *)v5 + 5) = *((_OWORD *)v5 + 3);
    pdnDevInst = v12;
    for ( i = 1; ; ++i )
    {
      Parent = CM_Get_Parent(&pdnDevInst, v12, 0);
      if ( Parent )
      {
        pdnDevInst = 0;
        v27 = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)Parent);
        DeviceGuidProperty = v27;
        if ( v27 == -2147023728 )
        {
          DeviceGuidProperty = -2147023728;
          goto LABEL_40;
        }
        if ( v27 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x354,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
            (const char *)(unsigned int)v27);
          goto LABEL_40;
        }
      }
      else
      {
        v15 = pdnDevInst;
      }
      stringa.pid = v15;
      DeviceGuidProperty = PnpApiWrapper::Details::GetDeviceGuidProperty(
                             (PnpApiWrapper::Details *)PnpApiWrapper::Adapters::GetDeviceNodeProperty,
                             (unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *))&stringa.pid,
                             (void *)&DEVPKEY_Device_ClassGuid,
                             &v41);
      if ( DeviceGuidProperty < 0 )
        goto LABEL_40;
      v16 = *(_QWORD *)&v41.fmtid.Data1 - *(_QWORD *)&GUID_NULL.Data1;
      if ( *(_QWORD *)&v41.fmtid.Data1 == *(_QWORD *)&GUID_NULL.Data1 )
        v16 = *(_QWORD *)v41.fmtid.Data4 - *(_QWORD *)GUID_NULL.Data4;
      if ( !v16 )
        break;
      v17 = *(_QWORD *)&v41.fmtid.Data1 - 0x4647CD8BE0CBF06CLL;
      if ( *(_QWORD *)&v41.fmtid.Data1 == 0x4647CD8BE0CBF06CLL )
        v17 = *(_QWORD *)v41.fmtid.Data4 - 0x74F9F0433B268ABBLL;
      v12 = pdnDevInst;
      if ( !v17 )
        goto LABEL_33;
      v18 = *(_QWORD *)&v41.fmtid.Data1 - 0x11D074D3745A17A0LL;
      if ( *(_QWORD *)&v41.fmtid.Data1 == 0x11D074D3745A17A0LL )
        v18 = *(_QWORD *)v41.fmtid.Data4 + 0x25A8F0365FFF014ALL;
      if ( !v18 )
      {
LABEL_33:
        *((_OWORD *)v5 + 5) = v41.fmtid;
        *((_DWORD *)v5 + 26) = v12;
        *((_DWORD *)v5 + 25) = i;
      }
    }
    *(_QWORD *)&stringa.fmtid.Data1 = 0LL;
    WindowsDeleteString(0LL);
    *(_QWORD *)&stringa.fmtid.Data1 = 0LL;
    v37 = *((_DWORD *)v5 + 24);
    DeviceStringProperty = PnpApiWrapper::Details::GetDeviceStringProperty(
                             (PnpApiWrapper::Details *)PnpApiWrapper::Adapters::GetDeviceNodeProperty,
                             (unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *))&v37,
                             (void *)&DEVPKEY_Device_HardwareIds,
                             &stringa,
                             v31);
    if ( DeviceStringProperty < 0 )
    {
      WindowsDeleteString(*(HSTRING *)&stringa.fmtid.Data1);
      *(_QWORD *)&stringa.fmtid.Data1 = 0LL;
      RefCountedObject::Release((RefCountedObject *)v5);
      return (unsigned int)DeviceStringProperty;
    }
    else
    {
      v20 = WindowsGetStringRawBuffer(*(HSTRING *)&stringa.fmtid.Data1, &length);
      v21 = length;
      if ( length )
      {
        do
        {
          if ( !*v20 )
            break;
          v22 = wcsnlen(v20, v21);
          if ( (!*((_WORD *)v5 + 54) || !*((_WORD *)v5 + 55))
            && (swscanf_s(v20, L"USB\\VID_%4x&PID_%4x", &v33, &v34) == 2
             || swscanf_s(v20, L"HID\\VID_%4x&PID_%4x", &v33, &v34) == 2
             || swscanf_s(v20, L"HID\\{%*8c-%*4c-%*4c-%*4c-%*12c}_VID&%4x_PID&%4x", &v33, &v34) == 2) )
          {
            *((_WORD *)v5 + 54) = v33;
            *((_WORD *)v5 + 55) = v34;
          }
          if ( (!*((_WORD *)v5 + 56) || !*((_WORD *)v5 + 57))
            && swscanf_s(v20, L"HID_DEVICE_UP:%4x_U:%4x", &v38, &v39) == 2 )
          {
            v25 = v38;
            *((_WORD *)v5 + 56) = v38;
            v26 = v39;
            *((_WORD *)v5 + 57) = v39;
            if ( v25 == 89 && v26 == 1 )
            {
              LampArrayTelemetry::GetInstance();
              LampArrayTelemetry::LogPnPDeviceInfo(
                v30,
                v20,
                *((_WORD *)v5 + 54),
                *((_WORD *)v5 + 55),
                *((_WORD *)v5 + 56),
                *((_WORD *)v5 + 57));
            }
          }
          v20 += v22 + 1;
          v23 = -1 - (_DWORD)v22 + length == 0;
          v21 = -1 - v22 + length;
          length = v21;
        }
        while ( !v23 );
      }
      _InterlockedExchange((volatile __int32 *)v5 + 29, 1);
      *a2 = (struct PnpDevice *)v5;
      WindowsDeleteString(*(HSTRING *)&stringa.fmtid.Data1);
      return 0LL;
    }
  }
}
