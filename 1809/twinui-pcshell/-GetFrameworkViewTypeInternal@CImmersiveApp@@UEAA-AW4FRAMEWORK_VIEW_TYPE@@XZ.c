/*
 * XREFs of ?GetFrameworkViewTypeInternal@CImmersiveApp@@UEAA?AW4FRAMEWORK_VIEW_TYPE@@XZ @ 0x18002E7D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveApp::GetFrameworkViewTypeInternal(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  HRESULT v3; // eax
  __int64 v4; // rcx
  _QWORD *v5; // rcx
  __int64 v7; // [rsp+30h] [rbp-50h] BYREF
  _QWORD *v8; // [rsp+38h] [rbp-48h] BYREF
  unsigned int v9; // [rsp+40h] [rbp-40h] BYREF
  __int64 v10; // [rsp+48h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h] BYREF

  v10 = -2LL;
  v1 = 6;
  v8 = 0LL;
  if ( (*(int (__fastcall **)(__int64, __int64, GUID *, _QWORD **))(*(_QWORD *)a1 + 352LL))(
         a1,
         2LL,
         &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee,
         &v8) >= 0 )
  {
    v7 = 0LL;
    if ( (*(int (__fastcall **)(_QWORD *, GUID *, __int64 *))(*v8 + 40LL))(
           v8,
           &GUID_d6ecd9bf_13b0_4264_955c_6e96d28a37ae,
           &v7) >= 0 )
    {
      v2 = v7;
      string = 0LL;
      v3 = WindowsCreateStringReference(L"FrameworkViewType", 0x11u, &hstringHeader, &string);
      if ( v3 < 0 )
      {
        RaiseException(v3, 1u, 0, 0LL);
        JUMPOUT(0x1800BD3ECLL);
      }
      if ( (*(int (__fastcall **)(__int64, HSTRING, unsigned int *))(*(_QWORD *)v2 + 416LL))(v2, string, &v9) >= 0 )
        v1 = v9;
    }
    v4 = v7;
    if ( v7 )
    {
      v7 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
  v5 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v5 + 16LL))(v5, *v5);
  }
  return v1;
}
