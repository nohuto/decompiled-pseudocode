/*
 * XREFs of _lambda_895f2797b68fbab3f512c16542fc9f15_::operator() @ 0x1801D6C68
 * Callers:
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_895f2797b68fbab3f512c16542fc9f15___::Invoke @ 0x1801DE480 (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_895f2797b68fbab3f512c16542fc9f1.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_895f2797b68fbab3f512c16542fc9f15_::operator()(__int64 **a1, struct IUnknown *a2)
{
  __int64 v4; // rcx
  const char *v5; // r9
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IUnknown *v12; // [rsp+58h] [rbp+10h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  try
  {
    ((void (*)(void))a2->lpVtbl->QueryInterface)();
    v4 = v13;
    if ( v13 )
    {
      v7 = **a1;
      if ( v7 )
      {
        v12 = 0LL;
        v8 = a1[1][46];
        v12 = 0LL;
        if ( (*(int (__fastcall **)(__int64, __int64, GUID *, struct IUnknown **))(*(_QWORD *)v8 + 56LL))(
               v8,
               v7,
               &GUID_de7f1933_0d90_43a7_a407_4a7ea255714f,
               &v12) >= 0
          && !(unsigned int)SHIsSameObject(v12, a2) )
        {
          v9 = ((__int64 (__fastcall *)(struct IUnknown *, __int64 *, __int64, _QWORD))v12->lpVtbl[1].QueryInterface)(
                 v12,
                 a1[2],
                 **a1,
                 *a1[3]);
          if ( v9 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              2946LL,
              (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
              (const char *)(unsigned int)v9);
        }
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v12);
        v7 = **a1;
        v4 = v13;
      }
      v10 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)v4 + 24LL))(
              v4,
              a1[2],
              v7,
              *a1[3]);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          2951LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v10);
      *(_BYTE *)a1[4] = 1;
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v13);
      result = 0LL;
    }
    else
    {
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v13);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xB8C,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                           v5);
  }
  return result;
}
