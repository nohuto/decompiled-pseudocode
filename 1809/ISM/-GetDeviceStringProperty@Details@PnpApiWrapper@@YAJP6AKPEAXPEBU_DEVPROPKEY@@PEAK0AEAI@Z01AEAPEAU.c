/*
 * XREFs of ?GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAUHSTRING__@@@Z @ 0x180076B94
 * Callers:
 *     ?FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x180071F94 (-FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEnt.c)
 *     ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z @ 0x1800736A8 (-MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z.c)
 *     ?GetDeviceGuidProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAU_GUID@@@Z @ 0x180076A38 (-GetDeviceGuidProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAU_GUID.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z @ 0x1800766E8 (-ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PnpApiWrapper::Details::GetDeviceStringProperty(
        PnpApiWrapper::Details *this,
        unsigned int (*a2)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *),
        void *a3,
        HSTRING *a4)
{
  unsigned int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  unsigned int v10; // edi
  unsigned int v12; // edi
  UINT32 v13; // r14d
  HRESULT v14; // eax
  unsigned int v15; // esi
  unsigned int v16; // eax
  int v17; // eax
  unsigned int v18; // esi
  size_t v19; // rbx
  WCHAR *v20; // rcx
  size_t i; // rdi
  __int16 v22; // ax
  __int64 v23; // r9
  __int64 v24; // rdx
  HRESULT v25; // eax
  HSTRING_BUFFER v26; // rcx
  int v27; // [rsp+30h] [rbp-30h] BYREF
  HSTRING_BUFFER bufferHandle; // [rsp+38h] [rbp-28h] BYREF
  WCHAR *charBuffer; // [rsp+40h] [rbp-20h] BYREF
  HSTRING_BUFFER v30; // [rsp+48h] [rbp-18h] BYREF
  WCHAR *v31[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  int v33; // [rsp+A0h] [rbp+40h] BYREF
  HSTRING *string; // [rsp+B8h] [rbp+58h]

  string = a4;
  v31[1] = (WCHAR *)-2LL;
  *a4 = 0LL;
  v33 = 0;
  v7 = ((__int64 (__fastcall *)(unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *), void *, int *, _QWORD, int *))this)(
         a2,
         a3,
         &v27,
         0LL,
         &v33);
  v8 = -2147023728;
  if ( v7 && v7 != 26 )
  {
    if ( v7 == 37 )
      return 1LL;
    v9 = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)v7);
    v10 = v9;
    if ( v9 == -2147023728 )
      return v8;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1AC,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
        (const char *)(unsigned int)v9);
      return v10;
    }
  }
  if ( (unsigned int)v33 <= 2 )
    return 0LL;
  v12 = (unsigned int)v33 >> 1;
  v13 = ((unsigned int)v33 >> 1) - 1;
  v14 = WindowsPreallocateStringBuffer(v13, &charBuffer, &bufferHandle);
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C2,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
      (const char *)(unsigned int)v14);
    return v15;
  }
  v16 = ((__int64 (__fastcall *)(unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *), void *, int *, WCHAR *, int *))this)(
          a2,
          a3,
          &v27,
          charBuffer,
          &v33);
  v17 = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)v16);
  v18 = v17;
  if ( v17 == -2147023728 )
  {
LABEL_39:
    WindowsDeleteStringBuffer(bufferHandle);
    return v8;
  }
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1CE,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
      (const char *)(unsigned int)v17);
    v8 = v18;
    goto LABEL_39;
  }
  v19 = v12;
  v20 = charBuffer;
  if ( !v12 )
    goto LABEL_26;
  if ( v27 == 18 )
  {
    i = wcsnlen(charBuffer, v12);
    goto LABEL_27;
  }
  if ( v27 == 8210 && *charBuffer )
  {
    for ( i = 1LL; i < v19; ++i )
    {
      v22 = *v20++;
      if ( !v22 && !*v20 )
        goto LABEL_27;
    }
    i = v19;
  }
  else
  {
LABEL_26:
    i = 0LL;
  }
LABEL_27:
  if ( i >= v19 )
  {
    v8 = -2147418113;
    v23 = 2147549183LL;
    v24 = 466LL;
LABEL_38:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
      (const char *)v23);
    goto LABEL_39;
  }
  if ( i )
  {
    if ( i != v13 )
    {
      v25 = WindowsPreallocateStringBuffer(i, v31, &v30);
      v8 = v25;
      if ( v25 < 0 )
      {
        v24 = 482LL;
LABEL_37:
        v23 = (unsigned int)v25;
        goto LABEL_38;
      }
      _o_wcscpy_s(v31[0], i + 1, charBuffer);
      v26 = bufferHandle;
      bufferHandle = v30;
      v30 = v26;
      v25 = WindowsDeleteStringBuffer(v26);
      v8 = v25;
      if ( v25 < 0 )
      {
        v24 = 487LL;
        goto LABEL_37;
      }
    }
    v25 = WindowsPromoteStringBuffer(bufferHandle, string);
    v8 = v25;
    if ( v25 < 0 )
    {
      v24 = 491LL;
      goto LABEL_37;
    }
  }
  else
  {
    WindowsDeleteStringBuffer(bufferHandle);
  }
  return 0LL;
}
