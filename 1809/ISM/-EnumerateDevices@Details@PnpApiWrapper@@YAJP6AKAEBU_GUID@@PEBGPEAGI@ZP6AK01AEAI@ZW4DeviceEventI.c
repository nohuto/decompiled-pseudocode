/*
 * XREFs of ?EnumerateDevices@Details@PnpApiWrapper@@YAJP6AKAEBU_GUID@@PEBGPEAGI@ZP6AK01AEAI@ZW4DeviceEventId@2@0PEAUHSTRING__@@P6AX67PEAX@Z8@Z @ 0x180076734
 * Callers:
 *     ?Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z @ 0x180071480 (-Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180051ED8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?OnPnpNotification@PnpDeviceWatcher@@CAXW4DeviceEventId@PnpApiWrapper@@PEAUHSTRING__@@PEAX@Z @ 0x180071B30 (-OnPnpNotification@PnpDeviceWatcher@@CAXW4DeviceEventId@PnpApiWrapper@@PEAUHSTRING__@@PEAX@Z.c)
 *     ?ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z @ 0x1800766E8 (-ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C968 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PnpApiWrapper::Details::EnumerateDevices(
        __int64 (__fastcall *a1)(__int64, __int64, const wchar_t *, _QWORD),
        const wchar_t *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  PCWSTR StringRawBuffer; // rax
  __int64 v9; // r15
  wchar_t *v10; // rbx
  unsigned int v11; // r12d
  unsigned int v12; // eax
  int v13; // eax
  unsigned int v14; // esi
  unsigned __int64 v15; // rax
  const wchar_t *v16; // rsi
  wchar_t *v17; // rcx
  unsigned int v18; // eax
  int v19; // eax
  unsigned int v20; // r15d
  wchar_t *v21; // rcx
  unsigned int i; // ecx
  size_t v23; // rax
  int v24; // r15d
  __int64 v25; // rdx
  unsigned int v26; // r12d
  UINT32 v27; // edx
  HRESULT v28; // eax
  size_t MaxCount; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+38h] [rbp-A0h]
  const wchar_t *v32; // [rsp+40h] [rbp-98h]
  int v33; // [rsp+48h] [rbp-90h]
  __int64 (__fastcall *v34)(__int64, __int64, const wchar_t *, _QWORD); // [rsp+50h] [rbp-88h]
  const wchar_t *v35; // [rsp+58h] [rbp-80h]
  __int64 v36; // [rsp+60h] [rbp-78h]
  __int64 v37; // [rsp+68h] [rbp-70h]
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-68h] BYREF
  HSTRING string; // [rsp+88h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  v37 = -2LL;
  v31 = a4;
  v32 = a2;
  v34 = a1;
  v33 = a3;
  v36 = a7;
  StringRawBuffer = WindowsGetStringRawBuffer(0LL, 0LL);
  v9 = (unsigned __int64)StringRawBuffer & -(__int64)(*StringRawBuffer != 0);
  v10 = 0LL;
  v35 = 0LL;
  v11 = -2147023728;
  do
  {
    v12 = ((__int64 (__fastcall *)(__int64, __int64, size_t *))v32)(v31, v9, &MaxCount);
    v13 = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)v12);
    v14 = v13;
    if ( v13 == -2147023728 )
    {
      if ( v10 )
      {
        v21 = v10;
        goto LABEL_34;
      }
      return v11;
    }
    if ( v13 < 0 )
    {
      v25 = 292LL;
LABEL_29:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v25,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
        (const char *)v14);
      if ( v10 )
        operator delete(v10, (const struct std::nothrow_t *)2);
      return v14;
    }
    v15 = 2LL * (unsigned int)MaxCount;
    if ( !is_mul_ok((unsigned int)MaxCount, 2uLL) )
      v15 = -1LL;
    v16 = (const wchar_t *)operator new[](v15, (const struct std::nothrow_t *)&std::nothrow);
    v17 = v10;
    v10 = (wchar_t *)v16;
    v35 = v16;
    if ( v17 )
      operator delete(v17, (const struct std::nothrow_t *)2);
    if ( !v16 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x128,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
        (const char *)0x8007000ELL);
      return 2147942414LL;
    }
    v18 = v34(v31, v9, v16, (unsigned int)MaxCount);
  }
  while ( v18 == 26 );
  v19 = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)v18);
  v20 = v19;
  if ( v19 == -2147023728 )
    goto LABEL_13;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x135,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
      (const char *)(unsigned int)v19);
    v11 = v20;
LABEL_13:
    v21 = (wchar_t *)v16;
LABEL_34:
    operator delete(v21, (const struct std::nothrow_t *)2);
    return v11;
  }
  for ( i = MaxCount; ; LODWORD(MaxCount) = i )
  {
    v32 = v16;
    if ( !i || !*v16 )
      break;
    v23 = wcsnlen(v16, i);
    v24 = v23;
    if ( v23 >= (unsigned int)MaxCount )
    {
      v14 = -2147418113;
      v25 = 322LL;
      goto LABEL_29;
    }
    string = 0LL;
    LODWORD(v34) = v23;
    v26 = v23 + 1;
    LODWORD(v31) = v23 + 1;
    if ( (int)v23 + 1 < (unsigned int)v23 )
    {
      Microsoft::WRL::Details::RaiseException(v26 < (unsigned int)v23 ? (Microsoft::WRL::Details *)0x80070216LL : 0);
LABEL_37:
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v28);
      JUMPOUT(0x180076A30LL);
    }
    v27 = v23;
    if ( (unsigned int)v23 < v26 )
      v27 = v23;
    v28 = WindowsCreateStringReference(v16, v27, &hstringHeader, &string);
    if ( v28 < 0 )
      goto LABEL_37;
    PnpDeviceWatcher::OnPnpNotification(a3, string, v36);
    v16 += v26;
    i = -1 - v24 + MaxCount;
  }
  if ( v10 )
    operator delete(v10, (const struct std::nothrow_t *)2);
  return 0LL;
}
