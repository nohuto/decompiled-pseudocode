/*
 * XREFs of ?AddViewToKioskPositioner@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1803BB2C8
 * Callers:
 *     ?OnApplicationViewChanged@KioskPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1803BD120 (-OnApplicationViewChanged@KioskPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall KioskPositioner::AddViewToKioskPositioner(KioskPositioner *this, struct IApplicationView *a2)
{
  __int64 v3; // rax
  int v4; // eax
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  KioskPositioner *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = this;
  v3 = *(_QWORD *)a2;
  v7 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct IApplicationView *, KioskPositioner **))(v3 + 264))(a2, &v7);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1176LL,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  (*(void (__fastcall **)(KioskPositioner *, __int64))(*(_QWORD *)v7 + 40LL))(v7, 6LL);
  v5 = (*(__int64 (__fastcall **)(struct IApplicationView *, KioskPositioner *))(*(_QWORD *)a2 + 272LL))(a2, v7);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1178LL,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)v5);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v7);
}
