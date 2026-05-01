/*
 * XREFs of _lambda_aa2cf94f0290717a2ddf105a3ddda7cf_::operator() @ 0x1801D6ECC
 * Callers:
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_aa2cf94f0290717a2ddf105a3ddda7cf___::Invoke @ 0x1801DE520 (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_aa2cf94f0290717a2ddf105a3ddda7c.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_aa2cf94f0290717a2ddf105a3ddda7cf_::operator()(_QWORD *a1, void (__fastcall ***a2)(_QWORD))
{
  int v3; // eax
  const char *v4; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  try
  {
    (**a2)(a2);
    if ( v7 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *))(*(_QWORD *)v7 + 32LL))(v7, *a1, &GUID_NULL);
      if ( v3 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          4090LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v3);
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xFFE,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                           v4);
  }
  return result;
}
