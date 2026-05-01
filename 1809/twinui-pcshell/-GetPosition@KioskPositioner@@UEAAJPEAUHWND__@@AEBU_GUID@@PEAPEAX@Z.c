/*
 * XREFs of ?GetPosition@KioskPositioner@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x180097F50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewArrangePositionSnapshot@@UIApplicationViewArrangePosition@@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewArrangePosition@@AEAPEAUHWND__@@@Z @ 0x1800559C4 (--$MakeAndInitialize@VCCommonApplicationViewArrangePositionSnapshot@@UIApplicationViewArrangePos.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall KioskPositioner::GetPosition(KioskPositioner *this, HWND a2, const struct _GUID *a3, void **a4)
{
  int v7; // eax
  unsigned int v8; // edi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v14; // [rsp+40h] [rbp+8h] BYREF
  HWND v15; // [rsp+48h] [rbp+10h] BYREF

  v15 = a2;
  *a4 = 0LL;
  if ( !*((_BYTE *)this + 504) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25C,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  v14 = 0LL;
  v7 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewArrangePositionSnapshot,IApplicationViewArrangePosition,HWND__ * &>(
         &v14,
         &v15);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25E,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)v7);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v14);
    return v8;
  }
  if ( !v14 )
  {
    *a4 = 0LL;
LABEL_9:
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v14);
    return 0LL;
  }
  v9 = (**(__int64 (__fastcall ***)(void *, const struct _GUID *, void **))v14)(v14, a3, a4);
  if ( v9 >= 0 )
    goto LABEL_9;
  wil::details::in1diag3::Throw_Hr(
    retaddr,
    5800LL,
    (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
    (const char *)(unsigned int)v9);
  __debugbreak();
  return KioskPositioner::GetPosition_::_1_::dtor_0(v11, v10, v12);
}
