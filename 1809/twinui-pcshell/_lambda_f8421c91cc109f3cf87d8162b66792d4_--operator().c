/*
 * XREFs of _lambda_f8421c91cc109f3cf87d8162b66792d4_::operator() @ 0x18024FA80
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f8421c91cc109f3cf87d8162b66792d4___::Run @ 0x180250D20 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_f8421c91cc109f3cf87d8162b66792d4___--.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180065968 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??4AgileGitPtr@@QEAAAEAV0@$$QEAV0@@Z @ 0x1800E5AB0 (--4AgileGitPtr@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18024F248 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$IAsyncOperationCompletedHandler@_N@.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_f8421c91cc109f3cf87d8162b66792d4_::operator()(__int64 **a1)
{
  __int64 v2; // rdi
  int AgileReference; // ebx
  __int64 v4; // rdx
  __int64 *v5; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // r14
  __int64 v10; // rax
  int v11; // eax
  const char *v12; // r9
  __int64 result; // rax
  __int64 *v14; // [rsp+30h] [rbp-38h]
  __int64 v15[6]; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v17; // [rsp+70h] [rbp+8h] BYREF
  __int64 v18; // [rsp+78h] [rbp+10h] BYREF
  __int64 v19; // [rsp+80h] [rbp+18h] BYREF
  PSRWLOCK SRWLock; // [rsp+88h] [rbp+20h] BYREF

  try
  {
    v18 = 0LL;
    v2 = **a1;
    if ( v2 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
      v17 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
      AgileReference = RoGetAgileReference(0LL, &GUID_74a6aa4a_97db_52bb_9d5b_d1dc398860b1, v2, &v17);
      if ( AgileReference >= 0 )
      {
        v4 = v18;
        v18 = v17;
        v17 = v4;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
      if ( AgileReference < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          829LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)AgileReference);
    }
    (*(void (__fastcall **)(__int64, PSRWLOCK *))(*(_QWORD *)a1[1][35] + 184LL))(a1[1][35], &SRWLock);
    v5 = a1[1];
    if ( !v5[13] )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        834LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)0x8007139FLL);
    if ( *((_BYTE *)v5 + 184) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        837LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)0x8000000ALL);
    if ( *((_DWORD *)v5 + 118) != 4 || *((_DWORD *)v5 + 119) != 4 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        846LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)0x8007139FLL);
    v17 = 0LL;
    (*(void (__fastcall **)(__int64 *, __int64 *))(*v5 + 200))(v5, &v17);
    wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
      &v19,
      (__int64)a1[1]);
    v14 = a1[1];
    wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
      v15,
      v19);
    v7 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v8 = v7;
    v9 = 0LL;
    if ( v7 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>>((__int64)v7);
      v8[2] = v14;
      v10 = v15[0];
      v15[0] = 0LL;
      v8[3] = v10;
      *v8 = off_1803E7CD0;
      v9 = v8;
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v15);
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v17 + 48LL))(v17, v9);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        860LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v11);
    *((_BYTE *)a1[1] + 184) = 1;
    AgileGitPtr::operator=(a1[1] + 24, &v18);
    if ( v9 )
      (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v19);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v17);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x365,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v12);
  }
  return result;
}
