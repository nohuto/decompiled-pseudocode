/*
 * XREFs of _lambda_198e981d41c540de9a59f7ec2d93aeb4_::operator() @ 0x180068940
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_198e981d41c540de9a59f7ec2d93aeb4___::Run @ 0x180068930 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_198e981d41c540de9a59f7ec2d93aeb4___--Run.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_198e981d41c540de9a59f7ec2d93aeb4_::operator()(HWND *a1)
{
  DWORD WindowThreadProcessId; // ebx
  HRESULT v2; // eax
  int ActivationFactory; // eax
  int v4; // eax
  wil::details::in1diag3 *v5; // rcx
  int v6; // eax
  const char *v7; // r9
  wil::details::in1diag3 *v8; // rcx
  int v10; // [rsp+20h] [rbp-68h]
  DWORD dwProcessId; // [rsp+30h] [rbp-58h] BYREF
  __int64 v12; // [rsp+38h] [rbp-50h] BYREF
  __int64 v13; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v14[8]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v15; // [rsp+50h] [rbp-38h]
  HSTRING string; // [rsp+58h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v15 = -2LL;
  WindowThreadProcessId = GetWindowThreadProcessId(*a1, &dwProcessId);
  v13 = 0LL;
  v2 = WindowsCreateStringReference(
         L"Windows.Internal.CapabilityAccess.AppLaunchCapabilityAccess",
         0x3Bu,
         &hstringHeader,
         &string);
  try
  {
    if ( v2 < 0 )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    ActivationFactory = RoGetActivationFactory(string, &GUID_365b4229_bffa_4446_8dc8_a293bebbe536, &v13);
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x967,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)ActivationFactory,
        v10);
    }
    else
    {
      v12 = 0LL;
      v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v13 + 48LL))(
             v13,
             dwProcessId,
             WindowThreadProcessId,
             &v12);
      v5 = retaddr;
      if ( v4 >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v12 + 48LL))(v12, v14);
        v8 = retaddr;
        if ( v6 >= 0 )
        {
          if ( v12 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
          if ( v13 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
          return 0LL;
        }
LABEL_14:
        wil::details::in1diag3::Throw_Hr(
          v8,
          (void *)0x970,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v6,
          v10);
        JUMPOUT(0x1800D3B8CLL);
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v5,
      (void *)0x96D,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v4,
      v10);
    goto LABEL_14;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x972,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v7);
  }
  return 0LL;
}
