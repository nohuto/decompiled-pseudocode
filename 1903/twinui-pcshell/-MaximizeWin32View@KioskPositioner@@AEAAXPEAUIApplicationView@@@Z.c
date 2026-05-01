/*
 * XREFs of ?MaximizeWin32View@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x18039DA38
 * Callers:
 *     ?OnApplicationViewChanged@KioskPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18039DBE0 (-OnApplicationViewChanged@KioskPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?CreateApplicationViewOperation@KioskPositioner@@AEAA?AV?$com_ptr_t@UIApplicationViewOperation@@Uerr_exception_policy@wil@@@wil@@W4APPLICATION_FRAME_CHROME_OPTIONS@@V?$function@$$A6A?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@XZ@std@@@Z @ 0x18039C140 (-CreateApplicationViewOperation@KioskPositioner@@AEAA-AV-$com_ptr_t@UIApplicationViewOperation@@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall KioskPositioner::MaximizeWin32View(KioskPositioner *this, struct IApplicationView *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  _QWORD v7[9]; // [rsp+28h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  volatile signed __int64 *v9; // [rsp+80h] [rbp+10h] BYREF

  v7[0] = off_18045FD98;
  v7[1] = this;
  v7[7] = v7;
  KioskPositioner::CreateApplicationViewOperation((volatile signed __int64 *)this, &v9, 23, (__int64)v7);
  v3 = (*(__int64 (__fastcall **)(volatile signed __int64 *, __int64))(*v9 + 96))(v9, 1LL);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1056LL,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  v4 = (*(__int64 (__fastcall **)(volatile signed __int64 *, __int64))(*v9 + 48))(v9, 3LL);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1057LL,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v5 = (*(__int64 (__fastcall **)(volatile signed __int64 *, __int64))(*v9 + 72))(v9, 1LL);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1058LL,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = (*(__int64 (__fastcall **)(struct IApplicationView *, volatile signed __int64 *))(*(_QWORD *)a2 + 320LL))(a2, v9);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1059LL,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)v6);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v9);
}
