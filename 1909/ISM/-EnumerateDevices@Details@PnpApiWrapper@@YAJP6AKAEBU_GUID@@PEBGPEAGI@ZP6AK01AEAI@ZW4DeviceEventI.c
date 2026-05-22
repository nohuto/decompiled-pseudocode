/*
 * XREFs of ?EnumerateDevices@Details@PnpApiWrapper@@YAJP6AKAEBU_GUID@@PEBGPEAGI@ZP6AK01AEAI@ZW4DeviceEventId@2@0PEAUHSTRING__@@P6AX67PEAX@Z8@Z @ 0x180012560
 * Callers:
 *     ?Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z @ 0x18001653C (-Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z @ 0x180012774 (-ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z.c)
 *     ?OnPnpNotification@PnpDeviceWatcher@@CAXW4DeviceEventId@PnpApiWrapper@@PEAUHSTRING__@@PEAX@Z @ 0x180025FA0 (-OnPnpNotification@PnpDeviceWatcher@@CAXW4DeviceEventId@PnpApiWrapper@@PEAUHSTRING__@@PEAX@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002CB58 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PnpApiWrapper::Details::EnumerateDevices(
        __int64 (__fastcall *a1)(__int64, PCWSTR, _WORD *, _QWORD),
        __int64 (__fastcall *a2)(__int64, PCWSTR, size_t *),
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v8; // r12d
  __int64 v9; // r13
  PCWSTR StringRawBuffer; // rdi
  __int64 (__fastcall *v11)(__int64, PCWSTR, size_t *); // rbx
  unsigned int v12; // eax
  unsigned int v13; // edx
  int v14; // eax
  unsigned int v15; // esi
  unsigned __int64 v16; // rax
  __int64 (__fastcall *v17)(__int64, PCWSTR, size_t *); // rsi
  __int64 (__fastcall *v18)(__int64, PCWSTR, size_t *); // rcx
  unsigned int v19; // eax
  unsigned int v20; // edx
  int v21; // eax
  unsigned int v22; // edi
  unsigned int v23; // ecx
  size_t v24; // rdi
  unsigned int v25; // r14d
  HRESULT v26; // eax
  __int64 (__fastcall *v28)(__int64, PCWSTR, size_t *); // rcx
  size_t MaxCount; // [rsp+30h] [rbp-A8h] BYREF
  __int64 (__fastcall *v30)(__int64, PCWSTR, size_t *); // [rsp+38h] [rbp-A0h]
  unsigned int v31; // [rsp+40h] [rbp-98h]
  int v32; // [rsp+48h] [rbp-90h]
  __int64 (__fastcall *v33)(__int64, PCWSTR, __int64 (__fastcall *)(__int64, PCWSTR, size_t *), _QWORD); // [rsp+50h] [rbp-88h]
  __int64 (__fastcall *v34)(__int64, PCWSTR, size_t *); // [rsp+58h] [rbp-80h]
  __int64 v35; // [rsp+60h] [rbp-78h]
  __int64 v36; // [rsp+68h] [rbp-70h]
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-68h] BYREF
  HSTRING string; // [rsp+88h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  v36 = -2LL;
  v8 = a3;
  v30 = a2;
  v33 = a1;
  v31 = a3;
  v9 = a7;
  v35 = a7;
  StringRawBuffer = WindowsGetStringRawBuffer(0LL, 0LL);
  if ( !*StringRawBuffer )
    StringRawBuffer = 0LL;
  v11 = 0LL;
  v34 = 0LL;
  while ( 1 )
  {
    v12 = v30(a4, StringRawBuffer, &MaxCount);
    v14 = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)v12, v13);
    v15 = v14;
    if ( v14 == -2147023728 )
    {
      if ( v11 )
      {
        v28 = v11;
        goto LABEL_39;
      }
      return 2147943568LL;
    }
    if ( v14 < 0 )
      break;
    v16 = 2LL * (unsigned int)MaxCount;
    if ( !is_mul_ok((unsigned int)MaxCount, 2uLL) )
      v16 = -1LL;
    v17 = (__int64 (__fastcall *)(__int64, PCWSTR, size_t *))operator new[](
                                                               v16,
                                                               (const struct std::nothrow_t *)&std::nothrow);
    v18 = v11;
    v11 = v17;
    v34 = v17;
    if ( v18 )
      operator delete(v18, (const struct std::nothrow_t *)2);
    if ( !v17 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x128,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
        (const char *)0x8007000ELL);
      return 2147942414LL;
    }
    v19 = v33(a4, StringRawBuffer, v17, (unsigned int)MaxCount);
    if ( v19 != 26 )
    {
      v21 = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)v19, v20);
      v22 = v21;
      if ( v21 != -2147023728 )
      {
        if ( v21 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x135,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
            (const char *)(unsigned int)v21);
          operator delete(v17, (const struct std::nothrow_t *)2);
          return v22;
        }
        v23 = MaxCount;
        while ( 2 )
        {
          v30 = v17;
          if ( !v23 || !*(_WORD *)v17 )
          {
            if ( v11 )
              operator delete(v11, (const struct std::nothrow_t *)2);
            return 0LL;
          }
          v24 = wcsnlen((const wchar_t *)v17, v23);
          if ( v24 >= (unsigned int)MaxCount )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x142,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
              (const char *)0x8000FFFFLL);
            if ( v11 )
              operator delete(v11, (const struct std::nothrow_t *)2);
            return 2147549183LL;
          }
          string = 0LL;
          v32 = v24;
          v25 = v24 + 1;
          LODWORD(v33) = v24 + 1;
          if ( (int)v24 + 1 < (unsigned int)v24 )
          {
            RaiseException(0x80070216, 1u, 0, 0LL);
          }
          else
          {
            v26 = WindowsCreateStringReference((PCWSTR)v17, v24, &hstringHeader, &string);
            if ( v26 >= 0 )
            {
              try
              {
                PnpDeviceWatcher::OnPnpNotification(v8, string, v9);
              }
              catch ( ... )
              {
                goto LABEL_32;
              }
              goto LABEL_21;
            }
          }
          RaiseException(v26, 1u, 0, 0LL);
LABEL_32:
          v11 = v34;
          v17 = v30;
          v8 = v31;
          v9 = v35;
          LODWORD(v24) = v32;
          v25 = (unsigned int)v33;
LABEL_21:
          v17 = (__int64 (__fastcall *)(__int64, PCWSTR, size_t *))((char *)v17 + 2 * v25);
          v23 = -1 - v24 + MaxCount;
          LODWORD(MaxCount) = v23;
          continue;
        }
      }
      v28 = v17;
LABEL_39:
      operator delete(v28, (const struct std::nothrow_t *)2);
      return 2147943568LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x124,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
    (const char *)(unsigned int)v14);
  if ( v11 )
    operator delete(v11, (const struct std::nothrow_t *)2);
  return v15;
}
