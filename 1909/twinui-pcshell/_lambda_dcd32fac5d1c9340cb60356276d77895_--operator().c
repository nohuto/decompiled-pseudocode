/*
 * XREFs of _lambda_dcd32fac5d1c9340cb60356276d77895_::operator() @ 0x1802C5930
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_dcd32fac5d1c9340cb60356276d77895___::Run @ 0x1802C6EF0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_dcd32fac5d1c9340cb60356276d77895___--.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180069DE8 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1802C5004 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$IAsyncOperationCompletedHandler@_N@.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_dcd32fac5d1c9340cb60356276d77895_::operator()(__int64 **a1)
{
  __int64 v2; // r15
  __int64 v3; // rbx
  int AgileReference; // ebx
  __int64 *v5; // rcx
  __int64 v7; // rax
  __int64 v8; // rdi
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // r14
  __int64 v12; // rax
  int v13; // eax
  __int64 *v14; // rdx
  const char *v15; // r9
  __int64 result; // rax
  PSRWLOCK SRWLock[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 *v18; // [rsp+30h] [rbp-38h]
  __int64 v19[6]; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v21; // [rsp+70h] [rbp+8h] BYREF
  __int64 v22; // [rsp+78h] [rbp+10h] BYREF
  __int64 v23; // [rsp+80h] [rbp+18h] BYREF
  __int64 v24; // [rsp+88h] [rbp+20h] BYREF

  SRWLock[1] = (PSRWLOCK)-2LL;
  try
  {
    v2 = 0LL;
    v22 = 0LL;
    v3 = **a1;
    if ( v3 )
    {
      v21 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
      AgileReference = RoGetAgileReference(0LL, &GUID_4874a3f0_c856_52e6_ab24_d29fbf386438, v3, &v21);
      v2 = v21;
      v21 = 0LL;
      v23 = 0LL;
      v22 = v2;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
      if ( AgileReference < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          891LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)AgileReference);
    }
    (*(void (__fastcall **)(__int64, PSRWLOCK *))(*(_QWORD *)a1[1][36] + 192LL))(a1[1][36], SRWLock);
    v5 = a1[1];
    if ( !v5[13] )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        896LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)0x8007139FLL);
    if ( *((_BYTE *)v5 + 192) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        899LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)0x8000000ALL);
    if ( *((_DWORD *)v5 + 122) != 4 || *((_DWORD *)v5 + 123) != 4 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        908LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)0x8007139FLL);
    v21 = 0LL;
    v7 = *v5;
    v21 = 0LL;
    (*(void (__fastcall **)(__int64 *, __int64 *))(v7 + 200))(v5, &v21);
    wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
      &v23,
      (__int64)a1[1]);
    v18 = a1[1];
    wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
      v19,
      v23);
    v8 = 0LL;
    v9 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v9;
    v11 = 0LL;
    if ( v9 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>>((__int64)v9);
      v10[2] = v18;
      v12 = v19[0];
      v19[0] = 0LL;
      v10[3] = v12;
      *v10 = off_18046F610;
      v8 = (__int64)v10;
      v11 = v10;
    }
    v24 = v8;
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v19);
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v21 + 48LL))(v21, v11);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        930LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v13);
    *((_BYTE *)a1[1] + 192) = 1;
    v14 = a1[1];
    v22 = 0LL;
    v24 = v14[25];
    v14[25] = v2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    if ( v11 )
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v23);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v21);
    if ( SRWLock[0] )
      ReleaseSRWLockExclusive(SRWLock[0]);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v21) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x3AB,
                     (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                     v15);
    return (unsigned int)v21;
  }
  return result;
}
