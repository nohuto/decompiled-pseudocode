/*
 * XREFs of ?IsInRestrictedRegion@Pinning@Mobility@@YA_NXZ @ 0x18000B4E0
 * Callers:
 *     _lambda_67d3978e1092d2b882811411f68ad6cb_::operator() @ 0x18000B7EC (_lambda_67d3978e1092d2b882811411f68ad6cb_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000482C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
bool __fastcall Mobility::Pinning::IsInRestrictedRegion(Mobility::Pinning *this)
{
  __int64 (__fastcall *v1)(_QWORD *, HSTRING *); // rdi
  HRESULT v2; // eax
  _QWORD *v3; // rbx
  wil::details::in1diag3 *v4; // rcx
  int v5; // eax
  const WCHAR *StringRawBuffer; // rax
  bool v7; // bl
  _QWORD *v9; // [rsp+30h] [rbp-50h] BYREF
  HSTRING v10; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v11[2]; // [rsp+40h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v11[1] = -2LL;
  v9 = 0LL;
  string = 0LL;
  v2 = WindowsCreateStringReference(L"Windows.Globalization.GeographicRegion", 0x26u, &hstringHeader, &string);
  if ( v2 < 0 )
    goto LABEL_14;
  v9 = 0LL;
  LODWORD(v1) = RoActivateInstance(string, v11);
  if ( (int)v1 >= 0 )
  {
    if ( *(_QWORD *)&GUID_01e9a621_4a64_4ed9_954f_9edeb07bd903.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
      && *(_QWORD *)GUID_01e9a621_4a64_4ed9_954f_9edeb07bd903.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      v3 = (_QWORD *)v11[0];
      v9 = (_QWORD *)v11[0];
      goto LABEL_8;
    }
    LODWORD(v1) = (**(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD **))v11[0])(
                    v11[0],
                    &GUID_01e9a621_4a64_4ed9_954f_9edeb07bd903,
                    &v9);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11[0] + 16LL))(v11[0]);
  }
  v3 = v9;
LABEL_8:
  v4 = retaddr;
  if ( (int)v1 < 0 )
  {
LABEL_15:
    wil::details::in1diag3::Throw_Hr(
      v4,
      (void *)0x41,
      (__int64)"internal\\onecoreuapshell\\inc\\mobilitypinning.h",
      (const char *)(unsigned int)v1);
    JUMPOUT(0x18000B6AELL);
  }
  v10 = 0LL;
  v1 = *(__int64 (__fastcall **)(_QWORD *, HSTRING *))(*v3 + 56LL);
  WindowsDeleteString(0LL);
  v10 = 0LL;
  v5 = v1(v3, &v10);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x43,
      (__int64)"internal\\onecoreuapshell\\inc\\mobilitypinning.h",
      (const char *)(unsigned int)v5);
LABEL_14:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
    goto LABEL_15;
  }
  StringRawBuffer = WindowsGetStringRawBuffer(v10, 0LL);
  v7 = CompareStringOrdinal(StringRawBuffer, -1, L"CN", -1, 1) == 2;
  WindowsDeleteString(v10);
  v10 = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v9 + 16LL))(v9, *v9);
  return v7;
}
