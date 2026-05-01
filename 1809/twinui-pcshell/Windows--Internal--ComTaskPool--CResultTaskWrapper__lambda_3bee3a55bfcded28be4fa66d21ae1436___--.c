/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_3bee3a55bfcded28be4fa66d21ae1436___::Run @ 0x18005BDC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
int *__fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_3bee3a55bfcded28be4fa66d21ae1436___::Run(
        __int64 a1)
{
  int v2; // eax
  int v3; // ebx
  int *result; // rax
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(***(_QWORD ***)(a1 + 16) + 48LL))(**(_QWORD **)(a1 + 16), &v7);
  v3 = v2;
  if ( v2 < 0 )
  {
    v5 = 633LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_4;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 24) + 288LL) + 128LL))(
         *(_QWORD *)(*(_QWORD *)(a1 + 24) + 288LL),
         v7);
  v3 = v2;
  if ( v2 < 0 )
  {
    v5 = 634LL;
    goto LABEL_7;
  }
  v3 = 0;
LABEL_4:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v7);
  result = *(int **)(a1 + 32);
  *result = v3;
  return result;
}
