/*
 * XREFs of ?Start@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJXZ @ 0x18021A180
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener::Start(
        Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener *this)
{
  HRESULT v2; // eax
  int v3; // eax
  wil::details::in1diag3 *v4; // rcx
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LPVOID v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = 0LL;
  v2 = CoCreateInstance(&CLSID_ImmersiveShell, 0LL, 4u, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &v12);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      72LL,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\userpresencelistener.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_6;
  }
  v3 = (*(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, char *))(*(_QWORD *)v12 + 24LL))(
         v12,
         &IID_IImmersiveSessionIdleDetector,
         &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
         (char *)this + 80);
  v4 = retaddr;
  if ( v3 < 0 )
  {
LABEL_6:
    wil::details::in1diag3::Throw_Hr(
      v4,
      73LL,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\userpresencelistener.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_7;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 10) + 32LL))(
         *((_QWORD *)this + 10),
         (char *)this + 16,
         (char *)this + 88);
  v6 = retaddr;
  if ( v5 >= 0 )
  {
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v12);
    return 0LL;
  }
LABEL_7:
  wil::details::in1diag3::Throw_Hr(
    v6,
    75LL,
    (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\userpresencelistener.cpp",
    (const char *)(unsigned int)v5);
  __debugbreak();
  return Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener::Start_::_1_::dtor_0(v9, v8, v10);
}
