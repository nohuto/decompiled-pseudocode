/*
 * XREFs of ?GetUInt64KeyFromUInt64Value@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@_KPEA_K@Z @ 0x1800A96E0
 * Callers:
 *     ?GetAccessibilitySettings@@YA_N_KPEAUIPropertySet@Collections@Foundation@Windows@@PEA_K2PEAEPEA_N@Z @ 0x1800A94CC (-GetAccessibilitySettings@@YA_N_KPEAUIPropertySet@Collections@Foundation@Windows@@PEA_K2PEAEPEA_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIPropertyValue@Foundation@Windows@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800A8228 (--$As@UIPropertyValue@Foundation@Windows@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPt.c)
 *     ??4?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIRawInputProvider@@@Z @ 0x1800A8AB8 (--4-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIRawInputProvider@@@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall GetUInt64KeyFromUInt64Value(
        struct Windows::Foundation::Collections::IPropertySet *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 (__fastcall ***v5)(_QWORD, _QWORD, _QWORD); // rdi
  __int64 v6; // rdx
  __int64 (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  unsigned __int64 v10; // r9
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, __int64 *); // rsi
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, HSTRING *); // rsi
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rsi
  const wchar_t *StringRawBuffer; // rbx
  size_t v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  HSTRING string; // [rsp+20h] [rbp-50h] BYREF
  __int64 v27; // [rsp+28h] [rbp-48h] BYREF
  __int64 v28; // [rsp+30h] [rbp-40h] BYREF
  __int64 (__fastcall ***v29)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-38h] BYREF
  __int64 v30; // [rsp+40h] [rbp-30h] BYREF
  __int64 v31; // [rsp+48h] [rbp-28h] BYREF
  __int64 (__fastcall ***v32)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-20h] BYREF
  _QWORD v33[3]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  char v35; // [rsp+A0h] [rbp+30h] BYREF
  UINT32 length; // [rsp+B8h] [rbp+48h] BYREF

  v33[1] = -2LL;
  v5 = 0LL;
  v32 = 0LL;
  v31 = 0LL;
  v28 = 0LL;
  v35 = 0;
  if ( !a1 )
  {
    v6 = 137LL;
    goto LABEL_11;
  }
  Microsoft::WRL::ComPtr<IRawInputProvider>::operator=((__int64 *)&v32, (__int64)a1);
  v5 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v32;
  v7 = **v32;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v31);
  v8 = v7(v5, &GUID_fe2f3d47_5d47_5499_8374_430c7cda0204, &v31);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = (unsigned int)v8;
    v6 = 141LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)v10);
    goto LABEL_36;
  }
  v11 = v31;
  v12 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v31 + 48LL);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v28);
  v13 = v12(v11, &v28);
  v9 = v13;
  if ( v13 < 0 )
  {
    v10 = (unsigned int)v13;
    v6 = 142LL;
    goto LABEL_13;
  }
  v14 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v28 + 56LL))(v28, &v35);
  v9 = v14;
  if ( v14 < 0 )
  {
    v10 = (unsigned int)v14;
    v6 = 143LL;
    goto LABEL_13;
  }
  if ( !v35 )
  {
    v6 = 146LL;
LABEL_11:
    v9 = -2147483637;
LABEL_12:
    v10 = v9;
    goto LABEL_13;
  }
  while ( 1 )
  {
    v29 = 0LL;
    v30 = 0LL;
    v27 = 0LL;
    string = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v28 + 48LL))(v28, &v27);
    v9 = v15;
    if ( v15 < 0 )
      break;
    v16 = v27;
    v17 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v27 + 48LL);
    WindowsDeleteString(string);
    string = 0LL;
    v15 = v17(v16, &string);
    v9 = v15;
    if ( v15 < 0 )
    {
      v23 = 157LL;
      goto LABEL_32;
    }
    v18 = v27;
    v19 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v27 + 56LL);
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v29);
    v15 = v19(v18, &v29);
    v9 = v15;
    if ( v15 < 0 )
    {
      v23 = 158LL;
      goto LABEL_32;
    }
    v15 = Microsoft::WRL::ComPtr<IInspectable>::As<Windows::Foundation::IPropertyValue>(&v29, &v30);
    v9 = v15;
    if ( v15 < 0 )
    {
      v23 = 160LL;
      goto LABEL_32;
    }
    if ( (*(int (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v30 + 112LL))(v30, v33) >= 0 && v33[0] == a2 )
    {
      length = 0;
      StringRawBuffer = WindowsGetStringRawBuffer(string, &length);
      v21 = wcsspn(StringRawBuffer, L"0123456789abcdefABCDEF");
      if ( v21 == length )
      {
        *a3 = _o__wcstoui64(StringRawBuffer, 0LL, 16LL);
        v9 = 0;
        goto LABEL_33;
      }
    }
    v15 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v28 + 64LL))(v28, &v35);
    v9 = v15;
    if ( v15 < 0 )
    {
      v23 = 175LL;
      goto LABEL_32;
    }
    WindowsDeleteString(string);
    string = 0LL;
    v22 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v30);
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v29);
    if ( !v35 )
    {
      v9 = -2147023728;
      v6 = 178LL;
      goto LABEL_12;
    }
  }
  v23 = 156LL;
LABEL_32:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v23,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
    (const char *)(unsigned int)v15);
LABEL_33:
  WindowsDeleteString(string);
  string = 0LL;
  v24 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v30);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v29);
LABEL_36:
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v28);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v31);
  if ( v5 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v5)[2])(v5);
  return v9;
}
