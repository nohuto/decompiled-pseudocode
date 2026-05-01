/*
 * XREFs of ?get_RequestedDisplayRegionIds@PresentationRequestedArgs@@UEAAJPEAPEAUIInspectable@@@Z @ 0x180121E30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PresentationRequestedArgs::get_RequestedDisplayRegionIds(
        PresentationRequestedArgs *this,
        struct IInspectable **a2)
{
  __int64 *v3; // rcx
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64 *); // rax
  int v6; // ebx
  const char *v7; // r9
  __int64 result; // rax
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 (__fastcall ***v11)(_QWORD, GUID *, struct IInspectable **); // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  v3 = (__int64 *)*((_QWORD *)this + 7);
  v4 = *v3;
  v11 = 0LL;
  v5 = *(__int64 (__fastcall **)(__int64 *))(v4 + 64);
  try
  {
    v6 = v5(v3);
    if ( v6 < 0 )
    {
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v11);
      return (unsigned int)v6;
    }
    if ( v11 )
    {
      v9 = (**v11)(v11, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, a2);
      if ( v9 >= 0 )
      {
LABEL_8:
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v11);
        return 0LL;
      }
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        5421LL,
        (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v9);
    }
    *a2 = 0LL;
    goto LABEL_8;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x299,
                           (__int64)"pcshell\\twinui\\appmanager\\lib\\amcommon.cpp",
                           v7);
  }
  return result;
}
