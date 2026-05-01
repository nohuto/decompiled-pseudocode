/*
 * XREFs of ?_SetTopmost@RetailDemoExperienceManager@@AEAAXXZ @ 0x18018696C
 * Callers:
 *     ?SetTopmost@RetailDemoExperienceManager@@UEAAJH@Z @ 0x180185870 (-SetTopmost@RetailDemoExperienceManager@@UEAAJH@Z.c)
 *     ?_Show@RetailDemoExperienceManager@@AEAAXXZ @ 0x180186AC8 (-_Show@RetailDemoExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall RetailDemoExperienceManager::_SetTopmost(RetailDemoExperienceManager *this)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v6; // [rsp+60h] [rbp+8h] BYREF
  HWND hWnd; // [rsp+68h] [rbp+10h] BYREF

  v2 = *((_QWORD *)this + 25);
  if ( !v2 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      347LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)0x8000FFFFLL);
  v6 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 32LL))(v2, &v6);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      350LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  hWnd = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v6 + 24LL))(v6, &hWnd);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      352LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  if ( hWnd )
    SetWindowPos(hWnd, (HWND)((*((_BYTE *)this + 348) != 0) - 2LL), 0, 0, 0, 0, 0x13u);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v6);
}
