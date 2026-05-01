/*
 * XREFs of ?get_RequestedDisplayRegionIds@PresentationRequestedArgs@@UEAAJPEAPEAUIInspectable@@@Z @ 0x1800FBDC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PresentationRequestedArgs::get_RequestedDisplayRegionIds(
        PresentationRequestedArgs *this,
        struct IInspectable **a2)
{
  __int64 v3; // rcx
  int v4; // ebx
  const char *v5; // r9
  __int64 result; // rax
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 (__fastcall ***v9)(_QWORD, GUID *, struct IInspectable **); // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 7);
  v9 = 0LL;
  try
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 64LL))(v3);
    if ( v4 < 0 )
    {
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v9);
      return (unsigned int)v4;
    }
    if ( v9 )
    {
      v7 = (**v9)(v9, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, a2);
      if ( v7 >= 0 )
      {
LABEL_8:
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v9);
        return 0LL;
      }
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        5800LL,
        (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
        (const char *)(unsigned int)v7);
    }
    *a2 = 0LL;
    goto LABEL_8;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x289,
                           (__int64)"pcshell\\twinui\\appmanager\\lib\\amcommon.cpp",
                           v5);
  }
  return result;
}
