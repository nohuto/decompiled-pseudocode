/*
 * XREFs of ?GetDeviceGuidProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAU_GUID@@@Z @ 0x180076A38
 * Callers:
 *     ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z @ 0x1800736A8 (-MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z.c)
 *     ?AddInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z @ 0x180073AB0 (-AddInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z @ 0x1800766E8 (-ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z.c)
 *     ?GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAUHSTRING__@@@Z @ 0x180076B94 (-GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAU.c)
 *     wcscmp_0 @ 0x18012DB47 (wcscmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PnpApiWrapper::Details::GetDeviceGuidProperty(
        PnpApiWrapper::Details *this,
        unsigned int (*a2)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *),
        void *a3,
        const struct _DEVPROPKEY *a4)
{
  unsigned int v6; // eax
  unsigned int v7; // edi
  int DeviceStringProperty; // eax
  unsigned int v9; // ebx
  HSTRING v10; // rcx
  const wchar_t *StringRawBuffer; // rax
  __int64 result; // rax
  int v13; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v14[8]; // [rsp+38h] [rbp-18h] BYREF
  HSTRING string[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  HSTRING v17; // [rsp+60h] [rbp+10h] BYREF

  string[1] = (HSTRING)-2LL;
  LODWORD(v17) = 16;
  v6 = ((__int64 (__fastcall *)(unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *), void *, _BYTE *))this)(
         a2,
         a3,
         v14);
  v7 = v6;
  if ( !v6 )
    return 0LL;
  a4->fmtid = DirectX::g_XMZero;
  if ( v6 == 37 )
  {
    string[0] = 0LL;
    WindowsDeleteString(0LL);
    string[0] = 0LL;
    v13 = *(_DWORD *)a2;
    DeviceStringProperty = PnpApiWrapper::Details::GetDeviceStringProperty(
                             (PnpApiWrapper::Details *)PnpApiWrapper::Adapters::GetDeviceNodeProperty,
                             (unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *))&v13,
                             (void *)&DEVPKEY_Device_InstanceId,
                             (const struct _DEVPROPKEY *)string,
                             &v17);
    v9 = DeviceStringProperty;
    v10 = string[0];
    if ( !string[0] )
    {
      if ( DeviceStringProperty >= 0 )
      {
        v9 = -2147467259;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2D7,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
          (const char *)0x80004005LL);
LABEL_9:
        v10 = string[0];
      }
LABEL_10:
      WindowsDeleteString(v10);
      return v9;
    }
    if ( DeviceStringProperty < 0 )
      goto LABEL_10;
    StringRawBuffer = WindowsGetStringRawBuffer(string[0], 0LL);
    if ( !wcscmp_0(StringRawBuffer, L"HTREE\\ROOT\\0") )
    {
      v9 = 1;
      goto LABEL_9;
    }
    WindowsDeleteString(string[0]);
  }
  v9 = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)v7);
  result = 2147943568LL;
  if ( v9 != -2147023728 )
  {
    if ( (v9 & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x183,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
        (const char *)v9);
      return v9;
    }
    return 0LL;
  }
  return result;
}
