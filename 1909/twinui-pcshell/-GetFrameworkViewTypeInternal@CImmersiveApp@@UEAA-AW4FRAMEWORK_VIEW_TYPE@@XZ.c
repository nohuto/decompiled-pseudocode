/*
 * XREFs of ?GetFrameworkViewTypeInternal@CImmersiveApp@@UEAA?AW4FRAMEWORK_VIEW_TYPE@@XZ @ 0x1800424E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveApp::GetFrameworkViewTypeInternal(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // rbx
  int (__fastcall *v3)(__int64, HSTRING, unsigned int *); // rsi
  HRESULT v4; // eax
  __int64 v5; // rcx
  _QWORD *v6; // rcx
  __int64 v8; // [rsp+30h] [rbp-50h] BYREF
  _QWORD *v9; // [rsp+38h] [rbp-48h] BYREF
  unsigned int v10; // [rsp+40h] [rbp-40h] BYREF
  __int64 v11; // [rsp+48h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h] BYREF

  v11 = -2LL;
  v1 = 6;
  v9 = 0LL;
  if ( (*(int (__fastcall **)(__int64, __int64, GUID *, _QWORD **))(*(_QWORD *)a1 + 352LL))(
         a1,
         2LL,
         &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee,
         &v9) >= 0 )
  {
    v8 = 0LL;
    if ( (*(int (__fastcall **)(_QWORD *, GUID *, __int64 *))(*v9 + 40LL))(
           v9,
           &GUID_f4a53d68_890b_4931_bdbf_71158377eece,
           &v8) >= 0 )
    {
      v2 = v8;
      v3 = *(int (__fastcall **)(__int64, HSTRING, unsigned int *))(*(_QWORD *)v8 + 416LL);
      string = 0LL;
      v4 = WindowsCreateStringReference(L"FrameworkViewType", 0x11u, &hstringHeader, &string);
      if ( v4 < 0 )
      {
        RaiseException(v4, 1u, 0, 0LL);
        JUMPOUT(0x1800FFDD4LL);
      }
      if ( v3(v2, string, &v10) >= 0 )
        v1 = v10;
    }
    v5 = v8;
    if ( v8 )
    {
      v8 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  v6 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v6 + 16LL))(v6, *v6);
  }
  return v1;
}
