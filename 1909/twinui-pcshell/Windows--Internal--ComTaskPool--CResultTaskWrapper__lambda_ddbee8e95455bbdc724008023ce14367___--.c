/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ddbee8e95455bbdc724008023ce14367___::Run @ 0x18001A3C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
int *__fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ddbee8e95455bbdc724008023ce14367___::Run(
        __int64 a1)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // eax
  int v5; // ebx
  RTL_SRWLOCK *v6; // rbx
  __int64 v7; // rcx
  BOOL v8; // esi
  int *result; // rax
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  v2 = **(__int64 ***)(a1 + 16);
  v3 = *v2;
  v12 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v3 + 48))(v2, &v12);
  v5 = v4;
  if ( v4 < 0 )
  {
    v10 = 653LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      (const char *)(unsigned int)v4,
      -2);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v12);
    goto LABEL_6;
  }
  v6 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 24) + 248LL);
  AcquireSRWLockShared(v6);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_BYTE *)(v7 + 200) == 0;
  if ( v6 )
  {
    ReleaseSRWLockShared(v6);
    v7 = *(_QWORD *)(a1 + 24);
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, BOOL))(**(_QWORD **)(v7 + 280) + 128LL))(
         *(_QWORD *)(v7 + 280),
         v12,
         v8);
  v5 = v4;
  if ( v4 < 0 )
  {
    v10 = 660LL;
    goto LABEL_9;
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v12);
  v5 = 0;
LABEL_6:
  result = *(int **)(a1 + 32);
  *result = v5;
  return result;
}
