/*
 * XREFs of ?GetDeviceGuidProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAU_GUID@@@Z @ 0x180016EB0
 * Callers:
 *     ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z @ 0x180017000 (-MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z.c)
 *     ?AddInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z @ 0x1800AD784 (-AddInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z @ 0x180012774 (-ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z.c)
 *     ?GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAUHSTRING__@@@Z @ 0x180017420 (-GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAU.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PnpApiWrapper::Details::GetDeviceGuidProperty(
        PnpApiWrapper::Details *this,
        unsigned int (*a2)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *),
        void *a3,
        const struct _DEVPROPKEY *a4)
{
  unsigned int v6; // esi
  __int64 result; // rax
  int DeviceStringProperty; // eax
  unsigned int v9; // ebx
  HSTRING v10; // rcx
  PCWSTR StringRawBuffer; // r9
  __int64 v12; // rcx
  int v13; // r8d
  unsigned int v14; // ebx
  int v15; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v16[8]; // [rsp+38h] [rbp-20h] BYREF
  struct _DEVPROPKEY string; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HSTRING v19; // [rsp+60h] [rbp+8h] BYREF

  *(_QWORD *)string.fmtid.Data4 = -2LL;
  LODWORD(v19) = 16;
  v6 = ((__int64 (__fastcall *)(unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *), void *, _BYTE *))this)(
         a2,
         a3,
         v16);
  if ( !v6 )
    return 0LL;
  a4->fmtid = GUID_NULL;
  if ( v6 == 37 )
  {
    *(_QWORD *)&string.fmtid.Data1 = 0LL;
    WindowsDeleteString(0LL);
    *(_QWORD *)&string.fmtid.Data1 = 0LL;
    v15 = *(_DWORD *)a2;
    DeviceStringProperty = PnpApiWrapper::Details::GetDeviceStringProperty(
                             (PnpApiWrapper::Details *)PnpApiWrapper::Adapters::GetDeviceNodeProperty,
                             (unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *))&v15,
                             (void *)&DEVPKEY_Device_InstanceId,
                             &string,
                             &v19);
    v9 = DeviceStringProperty;
    v10 = *(HSTRING *)&string.fmtid.Data1;
    if ( *(_QWORD *)&string.fmtid.Data1 )
    {
      if ( DeviceStringProperty >= 0 )
      {
        StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)&string.fmtid.Data1, 0LL);
        v12 = -1LL;
        do
        {
          v13 = StringRawBuffer[v12 + 1] - aHtreeRoot0[v12 + 1];
          if ( v13 )
            break;
          v12 += 2LL;
          if ( v12 == 13 )
            break;
          v13 = StringRawBuffer[v12] - aHtreeRoot0[v12];
        }
        while ( !v13 );
        if ( !v13 )
        {
          WindowsDeleteString(*(HSTRING *)&string.fmtid.Data1);
          return 1LL;
        }
        WindowsDeleteString(*(HSTRING *)&string.fmtid.Data1);
        goto LABEL_17;
      }
    }
    else if ( DeviceStringProperty >= 0 )
    {
      v9 = -2147467259;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2D7,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
        (const char *)0x80004005LL);
      v10 = *(HSTRING *)&string.fmtid.Data1;
    }
    WindowsDeleteString(v10);
    return v9;
  }
LABEL_17:
  result = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)v6);
  v14 = result;
  if ( (_DWORD)result != -2147023728 )
  {
    if ( (int)result < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x183,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
        (const char *)(unsigned int)result);
      return v14;
    }
    return 0LL;
  }
  return result;
}
