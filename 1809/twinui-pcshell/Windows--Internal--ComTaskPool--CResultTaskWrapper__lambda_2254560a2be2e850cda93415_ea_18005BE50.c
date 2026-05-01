/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_2254560a2be2e850cda9341575eb773c___::Run @ 0x18005BE50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
int *__fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_2254560a2be2e850cda9341575eb773c___::Run(
        __int64 a1)
{
  int v2; // eax
  int v3; // ebx
  RTL_SRWLOCK *v4; // rbx
  __int64 v5; // rcx
  BOOL v6; // esi
  int *result; // rax
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(***(_QWORD ***)(a1 + 16) + 48LL))(**(_QWORD **)(a1 + 16), &v10);
  v3 = v2;
  if ( v2 < 0 )
  {
    v8 = 616LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_6;
  }
  v4 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 24) + 256LL);
  AcquireSRWLockShared(v4);
  v5 = *(_QWORD *)(a1 + 24);
  v6 = *(_BYTE *)(v5 + 208) == 0;
  if ( v4 )
  {
    ReleaseSRWLockShared(v4);
    v5 = *(_QWORD *)(a1 + 24);
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, BOOL))(**(_QWORD **)(v5 + 288) + 120LL))(
         *(_QWORD *)(v5 + 288),
         v10,
         v6);
  v3 = v2;
  if ( v2 < 0 )
  {
    v8 = 623LL;
    goto LABEL_9;
  }
  v3 = 0;
LABEL_6:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v10);
  result = *(int **)(a1 + 32);
  *result = v3;
  return result;
}
