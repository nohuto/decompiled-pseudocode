/*
 * XREFs of _lambda_c29283d5559327bed8639d30bddc2291_::operator() @ 0x180070000
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c29283d5559327bed8639d30bddc2291___::Run @ 0x18006FFF0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c29283d5559327bed8639d30bddc2291___--Run.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_c29283d5559327bed8639d30bddc2291_::operator()(HWND *a1)
{
  DWORD WindowThreadProcessId; // ebx
  HRESULT v2; // eax
  __int64 *v3; // rcx
  int ActivationFactory; // eax
  __int64 v5; // rax
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  int v8; // eax
  const char *v9; // r9
  wil::details::in1diag3 *v10; // rcx
  int v12; // [rsp+20h] [rbp-68h]
  DWORD dwProcessId; // [rsp+30h] [rbp-58h] BYREF
  __int64 *v14; // [rsp+38h] [rbp-50h] BYREF
  __int64 v15; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v16[8]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v17; // [rsp+50h] [rbp-38h]
  HSTRING string; // [rsp+58h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v17 = -2LL;
  WindowThreadProcessId = GetWindowThreadProcessId(*a1, &dwProcessId);
  v14 = 0LL;
  v2 = WindowsCreateStringReference(
         L"Windows.Internal.CapabilityAccess.AppLaunchCapabilityAccess",
         0x3Bu,
         &hstringHeader,
         &string);
  try
  {
    if ( v2 < 0 )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    v3 = v14;
    v14 = 0LL;
    if ( v3 )
      (*(void (__fastcall **)(__int64 *))(*v3 + 16))(v3);
    ActivationFactory = RoGetActivationFactory(string, &GUID_365b4229_bffa_4446_8dc8_a293bebbe536, &v14);
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA27,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)ActivationFactory,
        v12);
    }
    else
    {
      v15 = 0LL;
      v5 = *v14;
      v15 = 0LL;
      v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64 *))(v5 + 48))(
             v14,
             dwProcessId,
             WindowThreadProcessId,
             &v15);
      v7 = retaddr;
      if ( v6 >= 0 )
      {
        v8 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v15 + 48LL))(v15, v16);
        v10 = retaddr;
        if ( v8 >= 0 )
        {
          if ( v15 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
          if ( v14 )
            (*(void (__fastcall **)(__int64 *))(*v14 + 16))(v14);
          return 0LL;
        }
LABEL_16:
        wil::details::in1diag3::Throw_Hr(
          v10,
          (void *)0xA30,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v8,
          v12);
        JUMPOUT(0x180112B37LL);
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0xA2D,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v6,
      v12);
    goto LABEL_16;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xA32,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v9);
  }
  return 0LL;
}
