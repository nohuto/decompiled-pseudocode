/*
 * XREFs of ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_32076d8d527a4c2a596cc095f37c3471___::Invoke @ 0x1801DE360
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_32076d8d527a4c2a596cc095f37c3471___::Invoke(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  (**a2)(a2, &GUID_de7f1933_0d90_43a7_a407_4a7ea255714f, &v7);
  if ( v7
    && (v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v7 + 32LL))(
               v7,
               **(_QWORD **)(a1 + 48),
               *(_QWORD *)(a1 + 56)),
        v4 = v3,
        v3 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC73,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v3);
  }
  else
  {
    v4 = 0;
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v7);
  return v4;
}
